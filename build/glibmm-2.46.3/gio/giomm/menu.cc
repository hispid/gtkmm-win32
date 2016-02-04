// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/menu.h>
#include <giomm/private/menu_p.h>


/* Copyright (C) 2012 The giomm Development Team
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

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::Menu> wrap(GMenu* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Menu>( dynamic_cast<Gio::Menu*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& Menu_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Menu_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_menu_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Menu_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Menu_Class::wrap_new(GObject* object)
{
  return new Menu((GMenu*)object);
}


/* The implementation: */

GMenu* Menu::gobj_copy()
{
  reference();
  return gobj();
}

Menu::Menu(const Glib::ConstructParams& construct_params)
:
  ::Gio::MenuModel(construct_params)
{

}

Menu::Menu(GMenu* castitem)
:
  ::Gio::MenuModel((GMenuModel*)(castitem))
{}


Menu::Menu(Menu&& src) noexcept
: ::Gio::MenuModel(std::move(src))
{}

Menu& Menu::operator=(Menu&& src) noexcept
{
  ::Gio::MenuModel::operator=(std::move(src));
  return *this;
}

Menu::~Menu() noexcept
{}


Menu::CppClassType Menu::menu_class_; // initialize static member

GType Menu::get_type()
{
  return menu_class_.init().get_type();
}


GType Menu::get_base_type()
{
  return g_menu_get_type();
}


Menu::Menu()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  ::Gio::MenuModel(Glib::ConstructParams(menu_class_.init()))
{
  

}

Glib::RefPtr<Menu> Menu::create()
{
  return Glib::RefPtr<Menu>( new Menu() );
}

void Menu::freeze()
{
  g_menu_freeze(gobj());
}

void Menu::insert_item(int position, const Glib::RefPtr<MenuItem>& item)
{
  g_menu_insert_item(gobj(), position, const_cast<GMenuItem*>(Glib::unwrap(item)));
}

void Menu::prepend_item(const Glib::RefPtr<MenuItem>& item)
{
  g_menu_prepend_item(gobj(), const_cast<GMenuItem*>(Glib::unwrap(item)));
}

void Menu::append_item(const Glib::RefPtr<MenuItem>& item)
{
  g_menu_append_item(gobj(), const_cast<GMenuItem*>(Glib::unwrap(item)));
}

void Menu::remove(int position)
{
  g_menu_remove(gobj(), position);
}

void Menu::remove_all()
{
  g_menu_remove_all(gobj());
}

void Menu::insert(int position, const Glib::ustring& label, const Glib::ustring& detailed_action)
{
  g_menu_insert(gobj(), position, label.c_str(), detailed_action.empty() ? 0 : detailed_action.c_str());
}

void Menu::insert(int position, const Glib::ustring& label)
{
  g_menu_insert(gobj(), position, label.c_str(), 0);
}

void Menu::prepend(const Glib::ustring& label, const Glib::ustring& detailed_action)
{
  g_menu_prepend(gobj(), label.c_str(), detailed_action.empty() ? 0 : detailed_action.c_str());
}

void Menu::prepend(const Glib::ustring& label)
{
  g_menu_prepend(gobj(), label.c_str(), 0);
}

void Menu::append(const Glib::ustring& label, const Glib::ustring& detailed_action)
{
  g_menu_append(gobj(), label.c_str(), detailed_action.empty() ? 0 : detailed_action.c_str());
}

void Menu::append(const Glib::ustring& label)
{
  g_menu_append(gobj(), label.c_str(), 0);
}

void Menu::insert_section(int position, const Glib::ustring& label, const Glib::RefPtr<MenuModel>& section)
{
  g_menu_insert_section(gobj(), position, label.empty() ? 0 : label.c_str(), const_cast<GMenuModel*>(Glib::unwrap(section)));
}

void Menu::insert_section(int position, const Glib::RefPtr<MenuModel>& section)
{
  g_menu_insert_section(gobj(), position, 0, const_cast<GMenuModel*>(Glib::unwrap(section)));
}

void Menu::prepend_section(const Glib::ustring& label, const Glib::RefPtr<MenuModel>& section)
{
  g_menu_prepend_section(gobj(), label.empty() ? 0 : label.c_str(), const_cast<GMenuModel*>(Glib::unwrap(section)));
}

void Menu::prepend_section(const Glib::RefPtr<MenuModel>& section)
{
  g_menu_prepend_section(gobj(), 0, const_cast<GMenuModel*>(Glib::unwrap(section)));
}

void Menu::append_section(const Glib::ustring& label, const Glib::RefPtr<MenuModel>& section)
{
  g_menu_append_section(gobj(), label.empty() ? 0 : label.c_str(), const_cast<GMenuModel*>(Glib::unwrap(section)));
}

void Menu::append_section(const Glib::RefPtr<MenuModel>& section)
{
  g_menu_append_section(gobj(), 0, const_cast<GMenuModel*>(Glib::unwrap(section)));
}

void Menu::insert_submenu(int position, const Glib::ustring& label, const Glib::RefPtr<MenuModel>& submenu)
{
  g_menu_insert_submenu(gobj(), position, label.c_str(), const_cast<GMenuModel*>(Glib::unwrap(submenu)));
}

void Menu::prepend_submenu(const Glib::ustring& label, const Glib::RefPtr<MenuModel>& submenu)
{
  g_menu_prepend_submenu(gobj(), label.c_str(), const_cast<GMenuModel*>(Glib::unwrap(submenu)));
}

void Menu::append_submenu(const Glib::ustring& label, const Glib::RefPtr<MenuModel>& submenu)
{
  g_menu_append_submenu(gobj(), label.c_str(), const_cast<GMenuModel*>(Glib::unwrap(submenu)));
}


} // namespace Gio


