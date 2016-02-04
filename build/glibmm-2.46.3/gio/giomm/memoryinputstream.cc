// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/memoryinputstream.h>
#include <giomm/private/memoryinputstream_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
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

#include <gio/gio.h>

namespace
{

class SlotWithData
{
public:
  SlotWithData(const Gio::MemoryInputStream::SlotDestroyData& slot, void* data)
  :
  m_slot(new Gio::MemoryInputStream::SlotDestroyData(slot)), m_data(data)
  { }

  ~SlotWithData() { delete m_slot; }

  void operator()() { (*m_slot)(m_data); }

private:
  Gio::MemoryInputStream::SlotDestroyData* m_slot;
  void* m_data;
};

void destroy_data_callback(void* user_data)
{
  auto slot_with_data = static_cast<SlotWithData*>(user_data);
  g_return_if_fail(slot_with_data != 0);

  try
  {
    (*slot_with_data)(); // Invoke callback
  }
  catch (...)
  {
    Glib::exception_handlers_invoke();
  }

  delete slot_with_data;
}

} // anonymous namespace

namespace Gio
{

#ifndef GIOMM_DISABLE_DEPRECATED

void MemoryInputStream::add_data(const std::string& data)
{
  char *data_copy = g_strdup (data.c_str ());
  g_memory_input_stream_add_data(gobj(), data_copy, -1, g_free);
}

void MemoryInputStream::add_data(const void* data, gssize len)
{
  char *data_copy = nullptr;

  // copy the data so that the caller doesn't need to keep the data alive
  if (len < 0)
    data_copy = g_strdup (static_cast<const gchar*>(data));
  else
    data_copy = static_cast<gchar*>(g_memdup (data, len));

  g_memory_input_stream_add_data(gobj(), data_copy, len, g_free);
}
#endif // GIOMM_DISABLE_DEPRECATED


void MemoryInputStream::add_data(const void* data, gssize len, const SlotDestroyData& destroy_slot)
{
  auto slot_with_data = new SlotWithData(destroy_slot, const_cast<void*>(data));
  auto bytes = g_bytes_new_with_free_func(data, len, &destroy_data_callback, slot_with_data);
  g_memory_input_stream_add_bytes(gobj(), bytes);
  g_bytes_unref(bytes); // g_memory_input_stream_add_bytes() takes a reference
}

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::MemoryInputStream> wrap(GMemoryInputStream* object, bool take_copy)
{
  return Glib::RefPtr<Gio::MemoryInputStream>( dynamic_cast<Gio::MemoryInputStream*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& MemoryInputStream_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MemoryInputStream_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_memory_input_stream_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Seekable::add_interface(get_type());

  }

  return *this;
}


void MemoryInputStream_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* MemoryInputStream_Class::wrap_new(GObject* object)
{
  return new MemoryInputStream((GMemoryInputStream*)object);
}


/* The implementation: */

GMemoryInputStream* MemoryInputStream::gobj_copy()
{
  reference();
  return gobj();
}

MemoryInputStream::MemoryInputStream(const Glib::ConstructParams& construct_params)
:
  Gio::InputStream(construct_params)
{

}

MemoryInputStream::MemoryInputStream(GMemoryInputStream* castitem)
:
  Gio::InputStream((GInputStream*)(castitem))
{}


MemoryInputStream::MemoryInputStream(MemoryInputStream&& src) noexcept
: Gio::InputStream(std::move(src))
  , Seekable(std::move(src))
{}

MemoryInputStream& MemoryInputStream::operator=(MemoryInputStream&& src) noexcept
{
  Gio::InputStream::operator=(std::move(src));
  Seekable::operator=(std::move(src));
  return *this;
}

MemoryInputStream::~MemoryInputStream() noexcept
{}


MemoryInputStream::CppClassType MemoryInputStream::memoryinputstream_class_; // initialize static member

GType MemoryInputStream::get_type()
{
  return memoryinputstream_class_.init().get_type();
}


GType MemoryInputStream::get_base_type()
{
  return g_memory_input_stream_get_type();
}


MemoryInputStream::MemoryInputStream()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gio::InputStream(Glib::ConstructParams(memoryinputstream_class_.init()))
{
  

}

Glib::RefPtr<MemoryInputStream> MemoryInputStream::create()
{
  return Glib::RefPtr<MemoryInputStream>( new MemoryInputStream() );
}

void MemoryInputStream::add_data(const void* data, gssize len, GDestroyNotify destroy)
{
  g_memory_input_stream_add_data(gobj(), data, len, destroy);
}

void MemoryInputStream::add_bytes(const Glib::RefPtr<const Glib::Bytes>& bytes)
{
  g_memory_input_stream_add_bytes(gobj(), const_cast<GBytes*>(Glib::unwrap<Glib::Bytes>(bytes)));
}


} // namespace Gio


