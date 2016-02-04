// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/menulinkiter.h>
#include <giomm/private/menulinkiter_p.h>


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
#include <giomm/menumodel.h>

namespace Gio
{

bool MenuLinkIter::get_next(Glib::ustring& out_link,
  Glib::RefPtr<MenuModel>& value)
{
  const char* g_out_link = nullptr;
  GMenuModel* g_value = nullptr;

  bool const result = g_menu_link_iter_get_next(gobj(), &g_out_link, &g_value);
  out_link = g_out_link;
  value = Glib::wrap(g_value);

  return result;
}

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::MenuLinkIter> wrap(GMenuLinkIter* object, bool take_copy)
{
  return Glib::RefPtr<Gio::MenuLinkIter>( dynamic_cast<Gio::MenuLinkIter*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& MenuLinkIter_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MenuLinkIter_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_menu_link_iter_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void MenuLinkIter_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* MenuLinkIter_Class::wrap_new(GObject* object)
{
  return new MenuLinkIter((GMenuLinkIter*)object);
}


/* The implementation: */

GMenuLinkIter* MenuLinkIter::gobj_copy()
{
  reference();
  return gobj();
}

MenuLinkIter::MenuLinkIter(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

MenuLinkIter::MenuLinkIter(GMenuLinkIter* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


MenuLinkIter::MenuLinkIter(MenuLinkIter&& src) noexcept
: Glib::Object(std::move(src))
{}

MenuLinkIter& MenuLinkIter::operator=(MenuLinkIter&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}

MenuLinkIter::~MenuLinkIter() noexcept
{}


MenuLinkIter::CppClassType MenuLinkIter::menulinkiter_class_; // initialize static member

GType MenuLinkIter::get_type()
{
  return menulinkiter_class_.init().get_type();
}


GType MenuLinkIter::get_base_type()
{
  return g_menu_link_iter_get_type();
}


MenuLinkIter::MenuLinkIter()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(menulinkiter_class_.init()))
{
  

}

Glib::ustring MenuLinkIter::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_menu_link_iter_get_name(const_cast<GMenuLinkIter*>(gobj())));
}

Glib::RefPtr<MenuModel> MenuLinkIter::get_value()
{
  return Glib::wrap(g_menu_link_iter_get_value(gobj()));
}

Glib::RefPtr<const MenuModel> MenuLinkIter::get_value() const
{
  return const_cast<MenuLinkIter*>(this)->get_value();
}

bool MenuLinkIter::next()
{
  return g_menu_link_iter_next(gobj());
}


} // namespace Gio


