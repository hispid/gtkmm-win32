// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <pangomm/font.h>
#include <pangomm/private/font_p.h>


// -*- c++ -*-
/* $Id: font.ccg,v 1.2 2006/06/08 20:39:39 murrayc Exp $ */

/* 
 *
 * Copyright 1998-1999 The Gtk-- Development Team
 * Copyright 2001      Free Software Foundation
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

#include <pangomm/fontmap.h>

namespace Pango
{

FontMetrics Font::get_metrics() const
{
  return FontMetrics(pango_font_get_metrics(const_cast<PangoFont*>(gobj()), 0));
}

Rectangle Font::get_glyph_ink_extents(Glyph glyph) const
{
  Rectangle ink_rect;
  pango_font_get_glyph_extents(const_cast<PangoFont*>(gobj()), glyph, ink_rect.gobj(), 0);
  return ink_rect;
}

Rectangle Font::get_glyph_logical_extents(Glyph glyph) const
{
  Rectangle logical_rect;
  pango_font_get_glyph_extents(const_cast<PangoFont*>(gobj()), glyph, 0, logical_rect.gobj());
  return logical_rect;
}

} /* namespace Pango */


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Pango::Font> wrap(PangoFont* object, bool take_copy)
{
  return Glib::RefPtr<Pango::Font>( dynamic_cast<Pango::Font*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Pango
{


/* The *_Class implementation: */

const Glib::Class& Font_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Font_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(pango_font_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Font_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Font_Class::wrap_new(GObject* object)
{
  return new Font((PangoFont*)object);
}


/* The implementation: */

PangoFont* Font::gobj_copy()
{
  reference();
  return gobj();
}

Font::Font(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Font::Font(PangoFont* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Font::Font(Font&& src) noexcept
: Glib::Object(std::move(src))
{}

Font& Font::operator=(Font&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}

Font::~Font() noexcept
{}


Font::CppClassType Font::font_class_; // initialize static member

GType Font::get_type()
{
  return font_class_.init().get_type();
}


GType Font::get_base_type()
{
  return pango_font_get_type();
}


FontDescription Font::describe() const
{
  return FontDescription((pango_font_describe(const_cast<PangoFont*>(gobj()))));
}

FontDescription Font::describe_with_absolute_size() const
{
  return FontDescription((pango_font_describe_with_absolute_size(const_cast<PangoFont*>(gobj()))));
}

Glib::RefPtr<Coverage> Font::get_coverage(const Language& language) const
{
  return Glib::wrap(pango_font_get_coverage(const_cast<PangoFont*>(gobj()), const_cast<PangoLanguage*>((language).gobj())));
}

FontMetrics Font::get_metrics(const Language& language) const
{
  return FontMetrics((pango_font_get_metrics(const_cast<PangoFont*>(gobj()), const_cast<PangoLanguage*>((language).gobj()))));
}

void Font::get_glyph_extents(Glyph glyph, Rectangle& ink_rect, Rectangle& logical_rect) const
{
  pango_font_get_glyph_extents(const_cast<PangoFont*>(gobj()), glyph, (ink_rect).gobj(), (logical_rect).gobj());
}

Glib::RefPtr<FontMap> Font::get_font_map()
{
  return Glib::wrap(pango_font_get_font_map(gobj()));
}

Glib::RefPtr<const FontMap> Font::get_font_map() const
{
  return const_cast<Font*>(this)->get_font_map();
}


} // namespace Pango


