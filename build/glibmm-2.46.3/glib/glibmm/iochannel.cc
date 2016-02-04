// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <glibmm/iochannel.h>
#include <glibmm/private/iochannel_p.h>


/* Copyright (C) 2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/exceptionhandler.h>
#include <glibmm/iochannel.h>
#include <glibmm/utility.h>
#include <glibmm/main.h>


namespace
{

// Glib::IOChannel reference counting issues:
//
// Normally, you'd expect that the C++ object stays around as long as the
// C instance does.  Also Glib::wrap() usually returns always the same C++
// wrapper object for a single C instance.
//
// Unfortunately it isn't possible to implement these features if we didn't
// create the underlying GIOChannel.  That is, when wrapping existing
// GIOChannel instances such as returned by e.g. g_io_channel_unix_new() or
// g_io_channel_new_file().  Neither is there a way to hook up a wrapper
// object in an existing GIOChannel, nor exists any destroy notification.
//
// So that means:  If the IOChannel is implemented in C++ -- that is, our
// GlibmmIOChannel backend is used -- we use the GIOChannel reference
// counting mechanism.  If the IOChannel backend is unknown, then the
// wrapper instance holds always exactly one reference to the GIOChannel.
// The wrapper object itself is then managed via our own refcounting
// mechanism.  To do that a utility class ForeignIOChannel is introduced to
// override reference() and unreference().

class ForeignIOChannel : public Glib::IOChannel
{
public:
  ForeignIOChannel(GIOChannel* gobject, bool take_copy)
    : Glib::IOChannel(gobject, take_copy), ref_count_(0) {}

  void reference() const override;
  void unreference() const override;

private:
  mutable int ref_count_;
};

void ForeignIOChannel::reference() const
{
  ++ref_count_;
}

void ForeignIOChannel::unreference() const
{
  if (!(--ref_count_)) delete this;
}

} // anonymous namespace


namespace Glib
{

class GlibmmIOChannel
{
public:
  GIOChannel        base;
  Glib::IOChannel*  wrapper;

  static const GIOFuncs vfunc_table;

  static GIOStatus io_read(GIOChannel* channel, char* buf, gsize count,
                           gsize* bytes_read, GError** err);

  static GIOStatus io_write(GIOChannel* channel, const char* buf, gsize count,
                            gsize* bytes_written, GError** err);

  static GIOStatus io_seek (GIOChannel* channel, gint64 offset, GSeekType type, GError** err);
  static GIOStatus io_close(GIOChannel* channel, GError** err);

  static GSource*  io_create_watch(GIOChannel* channel, GIOCondition condition);
  static void      io_free(GIOChannel* channel);

  static GIOStatus io_set_flags(GIOChannel* channel, GIOFlags flags, GError** err);
  static GIOFlags  io_get_flags(GIOChannel* channel);
};

// static
const GIOFuncs GlibmmIOChannel::vfunc_table =
{
  &GlibmmIOChannel::io_read,
  &GlibmmIOChannel::io_write,
  &GlibmmIOChannel::io_seek,
  &GlibmmIOChannel::io_close,
  &GlibmmIOChannel::io_create_watch,
  &GlibmmIOChannel::io_free,
  &GlibmmIOChannel::io_set_flags,
  &GlibmmIOChannel::io_get_flags,
};


/**** GLib::IOChannel ******************************************************/

/* Construct a custom C++-implemented IOChannel.  GlibmmIOChannel is an
 * extended GIOChannel struct which allows us to hook up a pointer to this
 * persistent wrapper instance.
 */
IOChannel::IOChannel()
:
  gobject_ (static_cast<GIOChannel*>(g_malloc(sizeof(GlibmmIOChannel))))
{
  g_io_channel_init(gobject_);
  gobject_->funcs = const_cast<GIOFuncs*>(&GlibmmIOChannel::vfunc_table);

  reinterpret_cast<GlibmmIOChannel*>(gobject_)->wrapper = this;
}

IOChannel::IOChannel(IOChannel&& other) noexcept
: sigc::trackable(std::move(other)),
  gobject_(std::move(other.gobject_))
{
  other.gobject_ = nullptr;
}

IOChannel& IOChannel::operator=(IOChannel&& other) noexcept
{
  sigc::trackable::operator=(std::move(other));

  release_gobject();

  gobject_ = std::move(other.gobject_);
  other.gobject_ = nullptr;

  return *this;
}

/* Construct an IOChannel wrapper for an already created GIOChannel.
 * See the comment at the top of this file for an explanation of the
 * problems with this approach.
 */
IOChannel::IOChannel(GIOChannel* gobject, bool take_copy)
:
  gobject_ (gobject)
{
  // This ctor should never be called for GlibmmIOChannel instances.
  g_assert(gobject != nullptr);
  g_assert(gobject->funcs != &GlibmmIOChannel::vfunc_table);

  if(take_copy)
    g_io_channel_ref(gobject_);
}

void IOChannel::release_gobject()
{
  if(gobject_)
  {
    // Check whether this IOChannel is implemented in C++, i.e. whether it
    // uses our GlibmmIOChannel forwarding backend.  Normally, this will never
    // be true because the wrapper should only be deleted in the io_free()
    // callback, which clears gobject_ before deleting.  But in case the ctor
    // of a derived class threw an exception the GIOChannel must be destroyed
    // prematurely.
    //
    if(gobject_->funcs == &GlibmmIOChannel::vfunc_table)
    {
      // Disconnect the wrapper object so that it won't be deleted twice.
      reinterpret_cast<GlibmmIOChannel*>(gobject_)->wrapper = nullptr;
    }

    const auto tmp_gobject = gobject_;
    gobject_ = nullptr;

    g_io_channel_unref(tmp_gobject);
  }
}

IOChannel::~IOChannel()
{
  release_gobject();
}

Glib::RefPtr<IOChannel> IOChannel::create_from_file(const std::string& filename, const std::string& mode)
{
  GError* gerror = nullptr;
  const auto channel = g_io_channel_new_file(filename.c_str(), mode.c_str(), &gerror);

  if(gerror)
  {
    Glib::Error::throw_exception(gerror);
  }

  return Glib::wrap(channel, false);
}

Glib::RefPtr<IOChannel> IOChannel::create_from_fd(int fd)
{
  return Glib::wrap(g_io_channel_unix_new(fd), false);
}

#ifdef G_OS_WIN32

Glib::RefPtr<IOChannel> IOChannel::create_from_win32_fd(int fd)
{
  return Glib::wrap(g_io_channel_win32_new_fd(fd), false);
}

Glib::RefPtr<IOChannel> IOChannel::create_from_win32_socket(int socket)
{
  return Glib::wrap(g_io_channel_win32_new_socket(socket), false);
}

#endif /* G_OS_WIN32 */

IOStatus IOChannel::write(const Glib::ustring& str)
{
  gsize bytes_written = 0;
  return write(str.data(), str.bytes(), bytes_written);
}

IOStatus IOChannel::read_line(Glib::ustring& line)
{
  Glib::ScopedPtr<char> buf;
  GError* gerror = nullptr;
  gsize   bytes = 0;

  const auto status = g_io_channel_read_line(gobj(), buf.addr(), &bytes, 0, &gerror);

  if(gerror)
  {
    Glib::Error::throw_exception(gerror);
  }

  if(buf.get())
    line.assign(buf.get(), buf.get() + bytes);
  else
    line.erase();

  return (IOStatus) status;
}

IOStatus IOChannel::read_to_end(Glib::ustring& str)
{
  Glib::ScopedPtr<char> buf;
  GError* gerror = nullptr;
  gsize   bytes = 0;

  const auto status = g_io_channel_read_to_end(gobj(), buf.addr(), &bytes, &gerror);

  if(gerror)
  {
    Glib::Error::throw_exception(gerror);
  }

  if(buf.get())
    str.assign(buf.get(), buf.get() + bytes);
  else
    str.erase();

  return (IOStatus) status;
}

IOStatus IOChannel::read(Glib::ustring& str, gsize count)
{
  Glib::ScopedPtr<char> buf (g_new(char, count));
  GError* gerror = nullptr;
  gsize   bytes = 0;

  const auto status = g_io_channel_read_chars(gobj(), buf.get(), count, &bytes, &gerror);

 if(gerror)
  {
    Glib::Error::throw_exception(gerror);
  }

  if(buf.get())
    str.assign(buf.get(), buf.get() + bytes);
  else
    str.erase();

  return (IOStatus) status;
}

IOStatus IOChannel::set_encoding(const std::string& encoding)
{
  GError* gerror = nullptr;

  const auto status = g_io_channel_set_encoding(
      gobj(), (encoding.empty()) ? 0 : encoding.c_str(), &gerror);

  if(gerror)
  {
    Glib::Error::throw_exception(gerror);
  }

  return (IOStatus) status;
}

std::string IOChannel::get_encoding() const
{
  const char *const encoding = g_io_channel_get_encoding(gobject_);
  return convert_const_gchar_ptr_to_stdstring(encoding);
}

void IOChannel::set_line_term(const std::string& term)
{
  if(term.empty())
    g_io_channel_set_line_term(gobj(), 0, 0);
  else
    g_io_channel_set_line_term(gobj(), term.data(), term.size());
}

std::string IOChannel::get_line_term() const
{
  int len = 0;
  const char *const term = g_io_channel_get_line_term(gobject_, &len);

  return (term) ? std::string(term, len) : std::string();
}

Glib::RefPtr<IOSource> IOChannel::create_watch(IOCondition condition)
{
  // The corresponding unreference() takes place in the dtor
  // of the Glib::RefPtr<IOChannel> object below.
  reference();
  return IOSource::create(Glib::RefPtr<IOChannel>(this), condition);
}

IOStatus IOChannel::read_vfunc(char*, gsize, gsize&)
{
  g_assert_not_reached();
  return IO_STATUS_ERROR;
}

IOStatus IOChannel::write_vfunc(const char*, gsize, gsize&)
{
  g_assert_not_reached();
  return IO_STATUS_ERROR;
}

IOStatus IOChannel::seek_vfunc(gint64, SeekType)
{
  g_assert_not_reached();
  return IO_STATUS_ERROR;
}

IOStatus IOChannel::close_vfunc()
{
  g_assert_not_reached();
  return IO_STATUS_ERROR;
}

Glib::RefPtr<Glib::Source> IOChannel::create_watch_vfunc(IOCondition)
{
  g_assert_not_reached();
  return Glib::RefPtr<Glib::Source>();
}

IOStatus IOChannel::set_flags_vfunc(IOFlags)
{
  g_assert_not_reached();
  return IO_STATUS_ERROR;
}

IOFlags IOChannel::get_flags_vfunc()
{
  g_assert_not_reached();
  return IOFlags(0);
}

void IOChannel::reference() const
{
  g_io_channel_ref(gobject_);
}

void IOChannel::unreference() const
{
  g_io_channel_unref(gobject_);
}

Glib::RefPtr<IOChannel> wrap(GIOChannel* gobject, bool take_copy)
{
  IOChannel* cpp_object = nullptr;

  if(gobject)
  {
    if(gobject->funcs == &GlibmmIOChannel::vfunc_table)
    {
      cpp_object = reinterpret_cast<GlibmmIOChannel*>(gobject)->wrapper;

      if(take_copy && cpp_object)
        cpp_object->reference();
    }
    else
    {
      cpp_object = new ForeignIOChannel(gobject, take_copy);
      cpp_object->reference(); // the refcount is initially 0
    }
  }

  return Glib::RefPtr<IOChannel>(cpp_object);
}


/**** Glib::GlibmmIOChannel ************************************************/

GIOStatus GlibmmIOChannel::io_read(GIOChannel* channel, char* buf, gsize count,
                                   gsize* bytes_read, GError** err)
{
  const auto wrapper = reinterpret_cast<GlibmmIOChannel*>(channel)->wrapper;

  try
  {
    return (GIOStatus) wrapper->read_vfunc(buf, count, *bytes_read);
  }
  catch(Glib::Error& error)
  {
    error.propagate(err);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return G_IO_STATUS_ERROR;
}

GIOStatus GlibmmIOChannel::io_write(GIOChannel* channel, const char* buf, gsize count,
                                    gsize* bytes_written, GError** err)
{
  const auto wrapper = reinterpret_cast<GlibmmIOChannel*>(channel)->wrapper;

  try
  {
    return (GIOStatus) wrapper->write_vfunc(buf, count, *bytes_written);
  }
  catch(Glib::Error& error)
  {
    error.propagate(err);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return G_IO_STATUS_ERROR;
}

GIOStatus GlibmmIOChannel::io_seek(GIOChannel* channel, gint64 offset, GSeekType type, GError** err)
{
  const auto wrapper = reinterpret_cast<GlibmmIOChannel*>(channel)->wrapper;

  try
  {
    return (GIOStatus) wrapper->seek_vfunc(offset, (SeekType) type);
  }
  catch(Glib::Error& error)
  {
    error.propagate(err);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return G_IO_STATUS_ERROR;
}

GIOStatus GlibmmIOChannel::io_close(GIOChannel* channel, GError** err)
{
  const auto wrapper = reinterpret_cast<GlibmmIOChannel*>(channel)->wrapper;

  try
  {
    return (GIOStatus) wrapper->close_vfunc();
  }
  catch(Glib::Error& error)
  {
    error.propagate(err);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }


  return G_IO_STATUS_ERROR;
}

// static
GSource* GlibmmIOChannel::io_create_watch(GIOChannel* channel, GIOCondition condition)
{
  const auto wrapper = reinterpret_cast<GlibmmIOChannel*>(channel)->wrapper;

  try
  {
    const auto source = wrapper->create_watch_vfunc((IOCondition) condition);
    return (source) ? source->gobj_copy() : 0;
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return 0;
}

// static
void GlibmmIOChannel::io_free(GIOChannel* channel)
{
  if(IOChannel *const wrapper = reinterpret_cast<GlibmmIOChannel*>(channel)->wrapper)
  {
    wrapper->gobject_ = nullptr;
    delete wrapper;
  }

  g_free(channel);
}

GIOStatus GlibmmIOChannel::io_set_flags(GIOChannel* channel, GIOFlags flags, GError** err)
{
  const auto wrapper = reinterpret_cast<GlibmmIOChannel*>(channel)->wrapper;

  try
  {
    return (GIOStatus) wrapper->set_flags_vfunc((IOFlags) flags);
  }
  catch(Glib::Error& error)
  {
    error.propagate(err);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return G_IO_STATUS_ERROR;
}

// static
GIOFlags GlibmmIOChannel::io_get_flags(GIOChannel* channel)
{
  const auto wrapper = reinterpret_cast<GlibmmIOChannel*>(channel)->wrapper;

  try
  {
    return (GIOFlags) wrapper->get_flags_vfunc();
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return GIOFlags(0);
}

} // namespace Glib

namespace
{
} // anonymous namespace


Glib::IOChannelError::IOChannelError(Glib::IOChannelError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (G_IO_CHANNEL_ERROR, error_code, error_message)
{}

Glib::IOChannelError::IOChannelError(GError* gobject)
:
  Glib::Error (gobject)
{}

Glib::IOChannelError::Code Glib::IOChannelError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Glib::IOChannelError::throw_func(GError* gobject)
{
  throw Glib::IOChannelError(gobject);
}


namespace Glib
{


IOStatus IOChannel::read(gunichar& thechar)
{
  GError* gerror = nullptr;
  IOStatus retvalue = ((IOStatus)(g_io_channel_read_unichar(gobj(), &(thechar), &(gerror))));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

IOStatus IOChannel::read(char* buf, gsize count, gsize& bytes_read)
{
  GError* gerror = nullptr;
  IOStatus retvalue = ((IOStatus)(g_io_channel_read_chars(gobj(), buf, count, &(bytes_read), &(gerror))));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

IOStatus IOChannel::write(const char* buf, gssize count, gsize& bytes_written)
{
  GError* gerror = nullptr;
  IOStatus retvalue = ((IOStatus)(g_io_channel_write_chars(gobj(), buf, count, &(bytes_written), &(gerror))));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

IOStatus IOChannel::write(gunichar unichar)
{
  GError* gerror = nullptr;
  IOStatus retvalue = ((IOStatus)(g_io_channel_write_unichar(gobj(), unichar, &(gerror))));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

IOStatus IOChannel::seek(gint64 offset, SeekType type)
{
  GError* gerror = nullptr;
  IOStatus retvalue = ((IOStatus)(g_io_channel_seek_position(gobj(), offset, ((GSeekType)(type)), &(gerror))));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

IOStatus IOChannel::flush()
{
  GError* gerror = nullptr;
  IOStatus retvalue = ((IOStatus)(g_io_channel_flush(gobj(), &(gerror))));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

IOStatus IOChannel::close(bool flush_pending)
{
  GError* gerror = nullptr;
  IOStatus retvalue = ((IOStatus)(g_io_channel_shutdown(gobj(), static_cast<int>(flush_pending), &(gerror))));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

gsize IOChannel::get_buffer_size() const
{
  return g_io_channel_get_buffer_size(const_cast<GIOChannel*>(gobj()));
}

void IOChannel::set_buffer_size(gsize size)
{
  g_io_channel_set_buffer_size(gobj(), size);
}

IOFlags IOChannel::get_flags() const
{
  return ((IOFlags)(g_io_channel_get_flags(const_cast<GIOChannel*>(gobj()))));
}

IOStatus IOChannel::set_flags(IOFlags flags)
{
  GError* gerror = nullptr;
  IOStatus retvalue = ((IOStatus)(g_io_channel_set_flags(gobj(), ((GIOFlags)(flags)), &(gerror))));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void IOChannel::set_buffered(bool buffered)
{
  g_io_channel_set_buffered(gobj(), static_cast<int>(buffered));
}

bool IOChannel::get_buffered() const
{
  return g_io_channel_get_buffered(const_cast<GIOChannel*>(gobj()));
}

IOCondition IOChannel::get_buffer_condition() const
{
  return ((IOCondition)(g_io_channel_get_buffer_condition(const_cast<GIOChannel*>(gobj()))));
}

bool IOChannel::get_close_on_unref() const
{
  return g_io_channel_get_close_on_unref(const_cast<GIOChannel*>(gobj()));
}

void IOChannel::set_close_on_unref(bool do_close)
{
  g_io_channel_set_close_on_unref(gobj(), static_cast<int>(do_close));
}


} // namespace Glib


