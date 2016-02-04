// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/menubutton.h>
#include <gtkmm/private/menubutton_p.h>


/* Copyright (C) 2012 The gtkmm Development Team
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

void MenuButton::unset_menu()
{
  gtk_menu_button_set_popup(gobj(), 0);
}
#endif // GTKMM_DISABLE_DEPRECATED


void MenuButton::unset_popup()
{
  gtk_menu_button_set_popup(gobj(), 0);
}

void MenuButton::unset_popover()
{
  gtk_menu_button_set_popover(gobj(), 0);
}

void MenuButton::unset_menu_model()
{
  gtk_menu_button_set_menu_model(gobj(), 0);
}

#ifndef GTKMM_DISABLE_DEPRECATED
#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Menu* > MenuButton::property_menu() 
{
  return property_popup();
}

Glib::PropertyProxy_ReadOnly< Menu* > MenuButton::property_menu() const
{
  return property_popup();
}
#endif //GLIBMM_PROPERTIES_ENABLED
#endif // GTKMM_DISABLE_DEPRECATED

} //namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::MenuButton* wrap(GtkMenuButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::MenuButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& MenuButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MenuButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_menu_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void MenuButton_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* MenuButton_Class::wrap_new(GObject* o)
{
  return manage(new MenuButton((GtkMenuButton*)(o)));

}


/* The implementation: */

MenuButton::MenuButton(const Glib::ConstructParams& construct_params)
:
  Gtk::ToggleButton(construct_params)
{
  }

MenuButton::MenuButton(GtkMenuButton* castitem)
:
  Gtk::ToggleButton((GtkToggleButton*)(castitem))
{
  }


MenuButton::MenuButton(MenuButton&& src) noexcept
: Gtk::ToggleButton(std::move(src))
{}

MenuButton& MenuButton::operator=(MenuButton&& src) noexcept
{
  Gtk::ToggleButton::operator=(std::move(src));
  return *this;
}

MenuButton::~MenuButton() noexcept
{
  destroy_();
}

MenuButton::CppClassType MenuButton::menubutton_class_; // initialize static member

GType MenuButton::get_type()
{
  return menubutton_class_.init().get_type();
}


GType MenuButton::get_base_type()
{
  return gtk_menu_button_get_type();
}


MenuButton::MenuButton()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::ToggleButton(Glib::ConstructParams(menubutton_class_.init()))
{
  

}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void MenuButton::set_menu(Menu& menu)
{
  gtk_menu_button_set_popup(gobj(), (menu).Gtk::Widget::gobj());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Menu* MenuButton::get_menu()
{
  return Glib::wrap(gtk_menu_button_get_popup(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
const Menu* MenuButton::get_menu() const
{
  return const_cast<MenuButton*>(this)->get_menu();
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

void MenuButton::set_popup(Menu& menu)
{
  gtk_menu_button_set_popup(gobj(), (menu).Gtk::Widget::gobj());
}

Menu* MenuButton::get_popup()
{
  return Glib::wrap(gtk_menu_button_get_popup(gobj()));
}

const Menu* MenuButton::get_popup() const
{
  return const_cast<MenuButton*>(this)->get_popup();
}

void MenuButton::set_popover(Popover& popover)
{
  gtk_menu_button_set_popover(gobj(), (popover).Gtk::Widget::gobj());
}

Popover* MenuButton::get_popover()
{
  return Glib::wrap(gtk_menu_button_get_popover(gobj()));
}

const Popover* MenuButton::get_popover() const
{
  return const_cast<MenuButton*>(this)->get_popover();
}

void MenuButton::set_use_popover(bool use_popover)
{
  gtk_menu_button_set_use_popover(gobj(), static_cast<int>(use_popover));
}

bool MenuButton::get_use_popover()
{
  return gtk_menu_button_get_use_popover(gobj());
}

void MenuButton::set_direction(ArrowType direction)
{
  gtk_menu_button_set_direction(gobj(), ((GtkArrowType)(direction)));
}

ArrowType MenuButton::get_direction() const
{
  return ((ArrowType)(gtk_menu_button_get_direction(const_cast<GtkMenuButton*>(gobj()))));
}

void MenuButton::set_menu_model(const Glib::RefPtr<const Gio::MenuModel>& menu_model)
{
  gtk_menu_button_set_menu_model(gobj(), const_cast<GMenuModel*>(Glib::unwrap(menu_model)));
}

Glib::RefPtr<Gio::MenuModel> MenuButton::get_menu_model()
{
  Glib::RefPtr<Gio::MenuModel> retvalue = Glib::wrap(gtk_menu_button_get_menu_model(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::MenuModel> MenuButton::get_menu_model() const
{
  return const_cast<MenuButton*>(this)->get_menu_model();
}

void MenuButton::set_align_widget(Widget& align_widget)
{
  gtk_menu_button_set_align_widget(gobj(), (align_widget).gobj());
}

Widget* MenuButton::get_align_widget()
{
  return Glib::wrap(gtk_menu_button_get_align_widget(gobj()));
}

const Widget* MenuButton::get_align_widget() const
{
  return Glib::wrap(gtk_menu_button_get_align_widget(const_cast<GtkMenuButton*>(gobj())));
}


Glib::PropertyProxy< Menu* > MenuButton::property_popup() 
{
  return Glib::PropertyProxy< Menu* >(this, "popup");
}

Glib::PropertyProxy_ReadOnly< Menu* > MenuButton::property_popup() const
{
  return Glib::PropertyProxy_ReadOnly< Menu* >(this, "popup");
}

Glib::PropertyProxy< Glib::RefPtr<Gio::MenuModel> > MenuButton::property_menu_model() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::MenuModel> >(this, "menu-model");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::MenuModel> > MenuButton::property_menu_model() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::MenuModel> >(this, "menu-model");
}

Glib::PropertyProxy< Widget* > MenuButton::property_align_widget() 
{
  return Glib::PropertyProxy< Widget* >(this, "align-widget");
}

Glib::PropertyProxy_ReadOnly< Widget* > MenuButton::property_align_widget() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "align-widget");
}

Glib::PropertyProxy< ArrowType > MenuButton::property_direction() 
{
  return Glib::PropertyProxy< ArrowType >(this, "direction");
}

Glib::PropertyProxy_ReadOnly< ArrowType > MenuButton::property_direction() const
{
  return Glib::PropertyProxy_ReadOnly< ArrowType >(this, "direction");
}

Glib::PropertyProxy< bool > MenuButton::property_use_popover() 
{
  return Glib::PropertyProxy< bool >(this, "use-popover");
}

Glib::PropertyProxy_ReadOnly< bool > MenuButton::property_use_popover() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-popover");
}

Glib::PropertyProxy< Popover* > MenuButton::property_popover() 
{
  return Glib::PropertyProxy< Popover* >(this, "popover");
}

Glib::PropertyProxy_ReadOnly< Popover* > MenuButton::property_popover() const
{
  return Glib::PropertyProxy_ReadOnly< Popover* >(this, "popover");
}


} // namespace Gtk


