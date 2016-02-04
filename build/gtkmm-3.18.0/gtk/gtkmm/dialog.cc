// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/dialog.h>
#include <gtkmm/private/dialog_p.h>

#include <gtk/gtk.h>

/* Copyright 1998-2002 The gtkmm Development Team
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

#include <gtk/gtk.h>

namespace Gtk
{

Dialog::Dialog(const Glib::ustring& title, Gtk::Window& parent, bool modal)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Window(Glib::ConstructParams(dialog_class_.init(), "title",title.c_str(), static_cast<char*>(0)))
{
  set_modal(modal);
  set_transient_for(parent);
}

Dialog::Dialog(const Glib::ustring& title, bool modal)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Window(Glib::ConstructParams(dialog_class_.init(), "title",title.c_str(), static_cast<char*>(0)))
{
  set_modal(modal);
}

Dialog::Dialog(const Glib::ustring& title, DialogFlags flags)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Window(Glib::ConstructParams(dialog_class_.init(), "title",title.c_str(),"use-header-bar",(flags & DIALOG_USE_HEADER_BAR) != 0, static_cast<char*>(0)))
{
  set_modal((flags & DIALOG_MODAL) != 0);
  property_destroy_with_parent() = (flags & DIALOG_DESTROY_WITH_PARENT) != 0;
}

Dialog::Dialog(const Glib::ustring& title, Gtk::Window& parent, DialogFlags flags)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Window(Glib::ConstructParams(dialog_class_.init(), "title",title.c_str(),"use-header-bar",(flags & DIALOG_USE_HEADER_BAR) != 0, static_cast<char*>(0)))
{
  set_transient_for(parent);
  set_modal((flags & DIALOG_MODAL) != 0);
  property_destroy_with_parent() = (flags & DIALOG_DESTROY_WITH_PARENT) != 0;
}

#ifndef GTKMM_DISABLE_DEPRECATED

G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Dialog::set_alternative_button_order_from_array(const std::vector<int>& new_order)
{
  gtk_dialog_set_alternative_button_order_from_array(gobj(), new_order.size(), const_cast<int*>(Glib::ArrayHandler<int>::vector_to_array(new_order).data()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED


} // namespace Gtk

namespace
{


static void Dialog_signal_response_callback(GtkDialog* self, gint p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,int > SlotType;

  auto obj = dynamic_cast<Dialog*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Dialog_signal_response_info =
{
  "response",
  (GCallback) &Dialog_signal_response_callback,
  (GCallback) &Dialog_signal_response_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::DialogFlags>::value_type()
{
  return gtk_dialog_flags_get_type();
}

// static
GType Glib::Value<Gtk::ResponseType>::value_type()
{
  return gtk_response_type_get_type();
}


namespace Glib
{

Gtk::Dialog* wrap(GtkDialog* object, bool take_copy)
{
  return dynamic_cast<Gtk::Dialog *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Dialog_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Dialog_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_dialog_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Dialog_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->response = &response_callback;
}


void Dialog_Class::response_callback(GtkDialog* self, gint p0)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_response(p0
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->response)
    (*base->response)(self, p0);
}


Glib::ObjectBase* Dialog_Class::wrap_new(GObject* o)
{
  return new Dialog((GtkDialog*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

Dialog::Dialog(const Glib::ConstructParams& construct_params)
:
  Gtk::Window(construct_params)
{
  }

Dialog::Dialog(GtkDialog* castitem)
:
  Gtk::Window((GtkWindow*)(castitem))
{
  }


Dialog::Dialog(Dialog&& src) noexcept
: Gtk::Window(std::move(src))
{}

Dialog& Dialog::operator=(Dialog&& src) noexcept
{
  Gtk::Window::operator=(std::move(src));
  return *this;
}

Dialog::~Dialog() noexcept
{
  destroy_();
}

Dialog::CppClassType Dialog::dialog_class_; // initialize static member

GType Dialog::get_type()
{
  return dialog_class_.init().get_type();
}


GType Dialog::get_base_type()
{
  return gtk_dialog_get_type();
}


Dialog::Dialog()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Window(Glib::ConstructParams(dialog_class_.init()))
{
  

}

void Dialog::add_action_widget(Widget& child, int response_id)
{
  gtk_dialog_add_action_widget(gobj(), (child).gobj(), response_id);
}

Button* Dialog::add_button(const Glib::ustring& button_text, int response_id)
{
  return Glib::wrap((GtkButton*)(gtk_dialog_add_button(gobj(), button_text.c_str(), response_id)));
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Button* Dialog::add_button(const Gtk::StockID& stock_id, int response_id)
{
  return Glib::wrap((GtkButton*)(gtk_dialog_add_button(gobj(), (stock_id).get_c_str(), response_id)));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

void Dialog::set_response_sensitive(int response_id, bool setting)
{
  gtk_dialog_set_response_sensitive(gobj(), response_id, static_cast<int>(setting));
}

void Dialog::set_default_response(int response_id)
{
  gtk_dialog_set_default_response(gobj(), response_id);
}

Widget* Dialog::get_widget_for_response(int response_id)
{
  return Glib::wrap(gtk_dialog_get_widget_for_response(gobj(), response_id));
}

const Widget* Dialog::get_widget_for_response(int response_id) const
{
  return const_cast<Dialog*>(this)->get_widget_for_response(response_id);
}

int Dialog::get_response_for_widget(const Gtk::Widget& widget) const
{
  return gtk_dialog_get_response_for_widget(const_cast<GtkDialog*>(gobj()), const_cast<GtkWidget*>(widget.gobj()));
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool Dialog::alternative_button_order(const Glib::RefPtr<const Gdk::Screen>& screen)
{
  return gtk_alternative_dialog_button_order(const_cast<GdkScreen*>(Glib::unwrap<Gdk::Screen>(screen)));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

void Dialog::response(int response_id)
{
  gtk_dialog_response(gobj(), response_id);
}

int Dialog::run()
{
  return gtk_dialog_run(gobj());
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
ButtonBox* Dialog::get_action_area()
{
  return Glib::wrap((GtkButtonBox*)(gtk_dialog_get_action_area(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
const ButtonBox* Dialog::get_action_area() const
{
  return const_cast<Dialog*>(this)->get_action_area();
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Box* Dialog::get_vbox()
{
  return Glib::wrap((GtkBox*)(gtk_dialog_get_content_area(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
const Box* Dialog::get_vbox() const
{
  return const_cast<Dialog*>(this)->get_vbox();
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

Box* Dialog::get_content_area()
{
  return Glib::wrap((GtkBox*)(gtk_dialog_get_content_area(gobj())));
}

const Box* Dialog::get_content_area() const
{
  return const_cast<Dialog*>(this)->get_content_area();
}

HeaderBar* Dialog::get_header_bar()
{
  return Glib::wrap((GtkHeaderBar*)(gtk_dialog_get_header_bar(gobj())));
}

const HeaderBar* Dialog::get_header_bar() const
{
  return const_cast<Dialog*>(this)->get_header_bar();
}


Glib::SignalProxy1< void,int > Dialog::signal_response()
{
  return Glib::SignalProxy1< void,int >(this, &Dialog_signal_response_info);
}


Glib::PropertyProxy_ReadOnly< bool > Dialog::property_use_header_bar() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-header-bar");
}


void Gtk::Dialog::on_response(int response_id)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->response)
    (*base->response)(gobj(),response_id);
}


} // namespace Gtk


