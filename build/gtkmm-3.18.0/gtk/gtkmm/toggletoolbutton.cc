// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/toggletoolbutton.h>
#include <gtkmm/private/toggletoolbutton_p.h>


/*
 * Copyright 2003 The gtkmm Development Team
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

#ifndef GTKMM_DISABLE_DEPRECATED
ToggleToolButton::ToggleToolButton(const Gtk::StockID& stock_id)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::ToolButton(Glib::ConstructParams(toggletoolbutton_class_.init(), "stock_id", (stock_id).get_c_str(), static_cast<char*>(0)))
{
}
#endif // GTKMM_DISABLE_DEPRECATED

ToggleToolButton::ToggleToolButton(const Glib::ustring& label)
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::ToolButton(Glib::ConstructParams(toggletoolbutton_class_.init(), "label", label.c_str(), (char*) 0))
{
}

ToggleToolButton::ToggleToolButton(Widget& icon_widget, const Glib::ustring& label)
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::ToolButton(Glib::ConstructParams(toggletoolbutton_class_.init(), "icon_widget", (icon_widget).gobj(), "label", label.c_str(), (char*) 0))
{
}

} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo ToggleToolButton_signal_toggled_info =
{
  "toggled",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::ToggleToolButton* wrap(GtkToggleToolButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::ToggleToolButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ToggleToolButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ToggleToolButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_toggle_tool_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ToggleToolButton_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->toggled = &toggled_callback;
}


void ToggleToolButton_Class::toggled_callback(GtkToggleToolButton* self)
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
        obj->on_toggled();
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
  if(base && base->toggled)
    (*base->toggled)(self);
}


Glib::ObjectBase* ToggleToolButton_Class::wrap_new(GObject* o)
{
  return manage(new ToggleToolButton((GtkToggleToolButton*)(o)));

}


/* The implementation: */

ToggleToolButton::ToggleToolButton(const Glib::ConstructParams& construct_params)
:
  Gtk::ToolButton(construct_params)
{
  }

ToggleToolButton::ToggleToolButton(GtkToggleToolButton* castitem)
:
  Gtk::ToolButton((GtkToolButton*)(castitem))
{
  }


ToggleToolButton::ToggleToolButton(ToggleToolButton&& src) noexcept
: Gtk::ToolButton(std::move(src))
{}

ToggleToolButton& ToggleToolButton::operator=(ToggleToolButton&& src) noexcept
{
  Gtk::ToolButton::operator=(std::move(src));
  return *this;
}

ToggleToolButton::~ToggleToolButton() noexcept
{
  destroy_();
}

ToggleToolButton::CppClassType ToggleToolButton::toggletoolbutton_class_; // initialize static member

GType ToggleToolButton::get_type()
{
  return toggletoolbutton_class_.init().get_type();
}


GType ToggleToolButton::get_base_type()
{
  return gtk_toggle_tool_button_get_type();
}


ToggleToolButton::ToggleToolButton()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::ToolButton(Glib::ConstructParams(toggletoolbutton_class_.init()))
{
  

}

void ToggleToolButton::set_active(bool is_active)
{
  gtk_toggle_tool_button_set_active(gobj(), static_cast<int>(is_active));
}

bool ToggleToolButton::get_active() const
{
  return gtk_toggle_tool_button_get_active(const_cast<GtkToggleToolButton*>(gobj()));
}


Glib::SignalProxy0< void > ToggleToolButton::signal_toggled()
{
  return Glib::SignalProxy0< void >(this, &ToggleToolButton_signal_toggled_info);
}


Glib::PropertyProxy< bool > ToggleToolButton::property_active() 
{
  return Glib::PropertyProxy< bool >(this, "active");
}

Glib::PropertyProxy_ReadOnly< bool > ToggleToolButton::property_active() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "active");
}


void Gtk::ToggleToolButton::on_toggled()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->toggled)
    (*base->toggled)(gobj());
}


} // namespace Gtk

