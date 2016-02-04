// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <pangomm/fontfamily.h>
#include <pangomm/private/fontfamily_p.h>


// -*- c++ -*-
/* $Id: fontfamily.ccg,v 1.1 2003/01/21 13:41:03 murrayc Exp $ */

/* 
 *
 * Copyright 2001      The gtkmm Development Team
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

namespace Pango
{

Glib::ArrayHandle< Glib::RefPtr<FontFace> > FontFamily::list_faces() const
{
  //Get the array:
  PangoFontFace** pFontFaces = 0;
  int n_fonts = 0;
  pango_font_family_list_faces(const_cast<PangoFontFamily*>(gobj()), &pFontFaces, &n_fonts);

  return Glib::ArrayHandle<Glib::RefPtr <FontFace> > (pFontFaces, n_fonts, Glib::OWNERSHIP_SHALLOW);
}

} /* namespace Pango */


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Pango::FontFamily> wrap(PangoFontFamily* object, bool take_copy)
{
  return Glib::RefPtr<Pango::FontFamily>( dynamic_cast<Pango::FontFamily*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Pango
{


/* The *_Class implementation: */

const Glib::Class& FontFamily_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FontFamily_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(pango_font_family_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void FontFamily_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FontFamily_Class::wrap_new(GObject* object)
{
  return new FontFamily((PangoFontFamily*)object);
}


/* The implementation: */

PangoFontFamily* FontFamily::gobj_copy()
{
  reference();
  return gobj();
}

FontFamily::FontFamily(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

FontFamily::FontFamily(PangoFontFamily* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


FontFamily::FontFamily(FontFamily&& src) noexcept
: Glib::Object(std::move(src))
{}

FontFamily& FontFamily::operator=(FontFamily&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}

FontFamily::~FontFamily() noexcept
{}


FontFamily::CppClassType FontFamily::fontfamily_class_; // initialize static member

GType FontFamily::get_type()
{
  return fontfamily_class_.init().get_type();
}


GType FontFamily::get_base_type()
{
  return pango_font_family_get_type();
}


Glib::ustring FontFamily::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(pango_font_family_get_name(const_cast<PangoFontFamily*>(gobj())));
}

bool FontFamily::is_monospace() const
{
  return pango_font_family_is_monospace(const_cast<PangoFontFamily*>(gobj()));
}


} // namespace Pango


