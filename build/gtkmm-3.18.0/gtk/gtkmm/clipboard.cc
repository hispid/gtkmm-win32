// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/clipboard.h>
#include <gtkmm/private/clipboard_p.h>


/*
 * Copyright 2002 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <glibmm/vectorutils.h>

#include <gdkmm/types.h>

#include <gtkmm/textbuffer.h>
#include <gtkmm/selectiondata_private.h>
#include <glibmm/utility.h> //For ScopedPtr<>.
#include <gtk/gtk.h>

namespace
{

// SignalProxy_GetClear:
// This Signal Proxy allows the C++ coder to specify a sigc::slot instead of a static function.
class SignalProxy_GetClear
{
public:
  SignalProxy_GetClear(const Gtk::Clipboard::SlotGet& slot_get,
                       const Gtk::Clipboard::SlotClear& slot_clear);

  static void gtk_callback_get(GtkClipboard* clipboard, GtkSelectionData* selection_data,
                               unsigned int info, void* data);
  static void gtk_callback_clear(GtkClipboard* clipboard, void* data);

  Gtk::Clipboard::SlotGet   slot_get_;
  Gtk::Clipboard::SlotClear slot_clear_;
};

SignalProxy_GetClear::SignalProxy_GetClear(const Gtk::Clipboard::SlotGet& slot_get,
                                           const Gtk::Clipboard::SlotClear& slot_clear)
:
  slot_get_   (slot_get),
  slot_clear_ (slot_clear)
{}

static void SignalProxy_GetClear_gtk_callback_get(GtkClipboard*, GtkSelectionData* selection_data,
                                            unsigned int info, void* data)
{
  const auto self = static_cast<SignalProxy_GetClear*>(data);

  try
  {
    Gtk::SelectionData_WithoutOwnership cppSelectionData(selection_data);
    (self->slot_get_)(cppSelectionData, info);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

static void SignalProxy_GetClear_gtk_callback_clear(GtkClipboard*, void* data)
{
  const auto self = static_cast<SignalProxy_GetClear*>(data);

  try
  {
    (self->slot_clear_)();
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  delete self; // After this callback has been called, none of the 2 callbacks will be called again.

  //This might leak the last SignalProxy_GetClear(), but only the last one,
  //because clear() is called when set() is called again.
}

} //anonymous namespace


static void SignalProxy_Received_gtk_callback(GtkClipboard*, GtkSelectionData* selection_data, void* data)
{
  auto the_slot = static_cast<Gtk::Clipboard::SlotReceived*>(data);

  try
  {
    Gtk::SelectionData cppSelectionData(selection_data, true /*take_copy=true*/);
    (*the_slot)(cppSelectionData);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  delete the_slot;
}

static void SignalProxy_TargetsReceived_gtk_callback(GtkClipboard*, GdkAtom* atoms,
                                                     gint n_atoms, gpointer data)
{
  Gtk::Clipboard::SlotTargetsReceived *const
    slot = static_cast<Gtk::Clipboard::SlotTargetsReceived*>(data);

  try
  {
    // TODO: check if the ownership is good.
    (*slot) (Glib::ArrayHandler<Glib::ustring, Gdk::AtomStringTraits>::array_to_vector(atoms, n_atoms > 0 ? n_atoms : 0, Glib::OWNERSHIP_NONE));
  }
  catch (...)
  {
    Glib::exception_handlers_invoke();
  }
  delete slot; // the callback is only used once
}


static void SignalProxy_TextReceived_gtk_callback(GtkClipboard*, const char* text, void* data)
{
  auto the_slot = static_cast<Gtk::Clipboard::SlotTextReceived*>(data);

  try
  {
    (*the_slot)((text) ? Glib::ustring(text) : Glib::ustring());
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  delete the_slot; // the callback is only used once
}

static void SignalProxy_RichTextReceived_gtk_callback(GtkClipboard*, GdkAtom format,
                                                      const guint8* text, gsize length, void* data)
{
  Gtk::Clipboard::SlotRichTextReceived *const
    slot = static_cast<Gtk::Clipboard::SlotRichTextReceived*>(data);

  try
  {
    (*slot)(Glib::convert_return_gchar_ptr_to_ustring(gdk_atom_name(format)),
            (text) ? std::string(reinterpret_cast<const char*>(text), length) : std::string());
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
  delete slot; // the callback is only used once
}

static void SignalProxy_UrisReceived_gtk_callback(GtkClipboard*, gchar** uris, void* data)
{
  auto the_slot = static_cast<Gtk::Clipboard::SlotUrisReceived*>(data);

  try
  {
    // TODO: check if the ownetship is good. krnowak.
    //Handle: Does this take ownership? It should probalby copy. murrayc.
    (*the_slot)( Glib::ArrayHandler<Glib::ustring>::array_to_vector(uris, Glib::OWNERSHIP_NONE) );
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  delete the_slot; // the callback is only used once
}

static void SignalProxy_ImageReceived_gtk_callback(GtkClipboard*, GdkPixbuf* image, void* data)
{
  auto the_slot = static_cast<Gtk::Clipboard::SlotImageReceived*>(data);

  try
  {
    (*the_slot)(Glib::wrap(image, true /* take_ref */));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  delete the_slot; // the callback is only used once
}


namespace Gtk
{

bool Clipboard::set(const std::vector<TargetEntry>& targets,
                    const SlotGet& slot_get, const SlotClear& slot_clear)
{
  // Create a signal proxy. A pointer to this will be passed through the callback's data parameter.
  const auto pSignalProxy = new SignalProxy_GetClear(slot_get, slot_clear);

  return gtk_clipboard_set_with_data(
      gobj(),
      Glib::ArrayHandler<TargetEntry, TargetEntryTraits>::vector_to_array(targets).data (),
      targets.size(),
      &SignalProxy_GetClear_gtk_callback_get,
      &SignalProxy_GetClear_gtk_callback_clear,
      pSignalProxy);
}

void Clipboard::set_text(const Glib::ustring& text)
{
  gtk_clipboard_set_text(gobj(), text.c_str(), text.bytes());
}


void Clipboard::request_contents(const Glib::ustring& target, const SlotReceived& slot)
{
  // Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  auto slot_copy = new SlotReceived(slot);

  gtk_clipboard_request_contents(gobj(), gdk_atom_intern(target.c_str(), FALSE),
      &SignalProxy_Received_gtk_callback, slot_copy);
}

void Clipboard::request_text(const SlotTextReceived& slot)
{
  // Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  auto slot_copy = new SlotTextReceived(slot);

  gtk_clipboard_request_text(gobj(),
      &SignalProxy_TextReceived_gtk_callback, slot_copy);
}

void Clipboard::request_rich_text(const Glib::RefPtr<TextBuffer>& buffer, const SlotRichTextReceived& slot)
{
  // Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  auto slot_copy = new SlotRichTextReceived(slot);

  gtk_clipboard_request_rich_text(gobj(), buffer->gobj(),
      &SignalProxy_RichTextReceived_gtk_callback, slot_copy);
}

void Clipboard::request_uris(const SlotUrisReceived& slot)
{
  // Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  auto slot_copy = new SlotUrisReceived(slot);

  gtk_clipboard_request_uris(gobj(), &SignalProxy_UrisReceived_gtk_callback, slot_copy);
}

void Clipboard::request_image(const SlotImageReceived& slot)
{
  // Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  auto slot_copy = new SlotImageReceived(slot);

  gtk_clipboard_request_image(gobj(),
      &SignalProxy_ImageReceived_gtk_callback, slot_copy);
}

void Clipboard::request_targets(const SlotTargetsReceived& slot)
{
  // Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  auto slot_copy = new SlotTargetsReceived(slot);

  gtk_clipboard_request_targets(gobj(), &SignalProxy_TargetsReceived_gtk_callback, slot_copy);
}

SelectionData Clipboard::wait_for_contents(const Glib::ustring& target) const
{
  //gtk_clipboard_wait_for_contents returns a newly-allocated GtkSelectionData, or NULL.
  auto cData = gtk_clipboard_wait_for_contents( const_cast<GtkClipboard*>(gobj()), gdk_atom_intern(target.c_str(), FALSE) );
  return SelectionData(cData, false /* take_copy */);
}

std::vector<Glib::ustring> Clipboard::wait_for_targets() const
{
  GdkAtom* atoms (0);
  int n_targets (0);

  if (!gtk_clipboard_wait_for_targets(const_cast<GtkClipboard*>(gobj()), &atoms, &n_targets))
  {
    n_targets = 0;
  }

  return Glib::ArrayHandler<Glib::ustring, Gdk::AtomStringTraits>::array_to_vector(atoms, n_targets, Glib::OWNERSHIP_SHALLOW);
}

void Clipboard::set_can_store(const std::vector<TargetEntry>& targets)
{
  gtk_clipboard_set_can_store( gobj(), Glib::ArrayHandler<TargetEntry, TargetEntryTraits>::vector_to_array(targets).data (), targets.size() );
}

void Clipboard::set_can_store()
{
  gtk_clipboard_set_can_store( gobj(), 0, 0 /* See C docs */ );
}

std::string Clipboard::wait_for_rich_text(const Glib::RefPtr<TextBuffer>& buffer, std::string& format)
{
  std::string result;

  GdkAtom format_atom = 0;
  gsize length = 0;
  guint8* text = gtk_clipboard_wait_for_rich_text(const_cast<GtkClipboard*>(gobj()), buffer->gobj(), &format_atom, &length);
  if(text && length)
  {
    gchar* format_atom_name = gdk_atom_name(format_atom);
    if(format_atom_name)
      format = Glib::ScopedPtr<char>(format_atom_name).get(); //This frees the buffer.

    result = std::string((char*)text, length);
    g_free(text);
  }

  return result;
}


} //namespace Gtk


namespace
{


static void Clipboard_signal_owner_change_callback(GtkClipboard* self, GdkEventOwnerChange* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,GdkEventOwnerChange* > SlotType;

  auto obj = dynamic_cast<Clipboard*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Clipboard_signal_owner_change_info =
{
  "owner_change",
  (GCallback) &Clipboard_signal_owner_change_callback,
  (GCallback) &Clipboard_signal_owner_change_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::Clipboard> wrap(GtkClipboard* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::Clipboard>( dynamic_cast<Gtk::Clipboard*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Clipboard_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Clipboard_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_clipboard_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Clipboard_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Clipboard_Class::wrap_new(GObject* object)
{
  return new Clipboard((GtkClipboard*)object);
}


/* The implementation: */

GtkClipboard* Clipboard::gobj_copy()
{
  reference();
  return gobj();
}

Clipboard::Clipboard(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Clipboard::Clipboard(GtkClipboard* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Clipboard::Clipboard(Clipboard&& src) noexcept
: Glib::Object(std::move(src))
{}

Clipboard& Clipboard::operator=(Clipboard&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}

Clipboard::~Clipboard() noexcept
{}


Clipboard::CppClassType Clipboard::clipboard_class_; // initialize static member

GType Clipboard::get_type()
{
  return clipboard_class_.init().get_type();
}


GType Clipboard::get_base_type()
{
  return gtk_clipboard_get_type();
}


Glib::RefPtr<Clipboard> Clipboard::get(GdkAtom selection)
{

  Glib::RefPtr<Clipboard> retvalue = Glib::wrap(gtk_clipboard_get(selection));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

Glib::RefPtr<Clipboard> Clipboard::get_for_display(const Glib::RefPtr<Gdk::Display>& display, GdkAtom selection)
{

  Glib::RefPtr<Clipboard> retvalue = Glib::wrap(gtk_clipboard_get_for_display(Glib::unwrap(display), selection));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

Glib::RefPtr<Gdk::Display> Clipboard::get_display()
{
  Glib::RefPtr<Gdk::Display> retvalue = Glib::wrap(gtk_clipboard_get_display(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Display> Clipboard::get_display() const
{
  return const_cast<Clipboard*>(this)->get_display();
}

Glib::RefPtr<Glib::Object> Clipboard::get_owner()
{
  Glib::RefPtr<Glib::Object> retvalue = Glib::wrap(gtk_clipboard_get_owner(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Glib::Object> Clipboard::get_owner() const
{
  return const_cast<Clipboard*>(this)->get_owner();
}

void Clipboard::clear()
{
  gtk_clipboard_clear(gobj());
}

void Clipboard::set_image(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  gtk_clipboard_set_image(gobj(), Glib::unwrap(pixbuf));
}

Glib::ustring Clipboard::wait_for_text() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_clipboard_wait_for_text(const_cast<GtkClipboard*>(gobj())));
}

Glib::RefPtr<Gdk::Pixbuf> Clipboard::wait_for_image() const
{
  return Glib::wrap(gtk_clipboard_wait_for_image(const_cast<GtkClipboard*>(gobj())));
}

bool Clipboard::wait_is_text_available() const
{
  return gtk_clipboard_wait_is_text_available(const_cast<GtkClipboard*>(gobj()));
}

bool Clipboard::wait_is_rich_text_available(const Glib::RefPtr<TextBuffer>& buffer) const
{
  return gtk_clipboard_wait_is_rich_text_available(const_cast<GtkClipboard*>(gobj()), Glib::unwrap(buffer));
}

bool Clipboard::wait_is_image_available() const
{
  return gtk_clipboard_wait_is_image_available(const_cast<GtkClipboard*>(gobj()));
}

bool Clipboard::wait_is_uris_available() const
{
  return gtk_clipboard_wait_is_uris_available(const_cast<GtkClipboard*>(gobj()));
}

bool Clipboard::wait_is_target_available(const Glib::ustring& target)
{
  return gtk_clipboard_wait_is_target_available(gobj(), Gdk::AtomString::to_c_type(target));
}

std::vector<Glib::ustring> Clipboard::wait_for_uris() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(gtk_clipboard_wait_for_uris(const_cast<GtkClipboard*>(gobj())), Glib::OWNERSHIP_DEEP);
}

void Clipboard::store()
{
  gtk_clipboard_store(gobj());
}


Glib::SignalProxy1< void,GdkEventOwnerChange* > Clipboard::signal_owner_change()
{
  return Glib::SignalProxy1< void,GdkEventOwnerChange* >(this, &Clipboard_signal_owner_change_info);
}


} // namespace Gtk


