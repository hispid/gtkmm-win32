// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _PANGOMM_FONTMAP_H
#define _PANGOMM_FONTMAP_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: fontmap.hg,v 1.2 2004/03/03 01:07:40 murrayc Exp $ */

/* fontmap.h
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


#include <glibmm/object.h>
#include <glibmm/arrayhandle.h>
#include <pangomm/font.h>
#include <pangomm/fontset.h>
#include <pangomm/fontfamily.h>
#include <pango/pango-fontmap.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _PangoFontMap PangoFontMap;
typedef struct _PangoFontMapClass PangoFontMapClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Pango
{ class FontMap_Class; } // namespace Pango
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Pango
{

class Context;

/** A Pango::FontMap represents the set of fonts available for a particular rendering system.
 */

class FontMap : public Glib::Object
{
   
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef FontMap CppObjectType;
  typedef FontMap_Class CppClassType;
  typedef PangoFontMap BaseObjectType;
  typedef PangoFontMapClass BaseClassType;

  // noncopyable
  FontMap(const FontMap&) = delete;
  FontMap& operator=(const FontMap&) = delete;

private:  friend class FontMap_Class;
  static CppClassType fontmap_class_;

protected:
  explicit FontMap(const Glib::ConstructParams& construct_params);
  explicit FontMap(PangoFontMap* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  FontMap(FontMap&& src) noexcept;
  FontMap& operator=(FontMap&& src) noexcept;

  virtual ~FontMap() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  PangoFontMap*       gobj()       { return reinterpret_cast<PangoFontMap*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const PangoFontMap* gobj() const { return reinterpret_cast<PangoFontMap*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  PangoFontMap* gobj_copy();

private:

   
public:
  
  /** Load the font in the fontmap that is the closest match for @a desc.
   * 
   * @param context The Pango::Context the font will be used with.
   * @param desc A Pango::FontDescription describing the font to load.
   * @return The newly allocated Pango::Font
   * loaded, or <tt>0</tt> if no font matched.
   */
  Glib::RefPtr<Font> load_font(const Glib::RefPtr<Context>& context, const FontDescription& desc) const;
  
  /** Load a set of fonts in the fontmap that can be used to render
   * a font matching @a desc.
   * 
   * @param context The Pango::Context the font will be used with.
   * @param desc A Pango::FontDescription describing the font to load.
   * @param language A Pango::Language the fonts will be used for.
   * @return The newly allocated
   * Pango::Fontset loaded, or <tt>0</tt> if no font matched.
   */
  Glib::RefPtr<Fontset> load_fontset(const Glib::RefPtr<Context>& context, const FontDescription& desc, const Language& language) const;

  
  /** Creates a Pango::Context connected to @a fontmap.  This is equivalent
   * to Pango::Context::new() followed by Pango::Context::set_font_map().
   * 
   * If you are using Pango as part of a higher-level system,
   * that system may have it's own way of create a Pango::Context.
   * For instance, the GTK+ toolkit has, among others,
   * gdk_pango_context_get_for_screen(), and
   * gtk_widget_get_pango_context().  Use those instead.
   * 
   * @newin{1,22}
   * 
   * @return The newly allocated Pango::Context,
   * which should be freed with Glib::object_unref().
   */
  Glib::RefPtr<Context> create_context();

  /** List all families for the fontmap.
   * @return an array of pointers to Pango::FontFamily objects.
   */
  Glib::ArrayHandle< Glib::RefPtr<FontFamily> > list_families() const;

  
  /** Returns the current serial number of @a fontmap.  The serial number is
   * initialized to an small number larger than zero when a new fontmap
   * is created and is increased whenever the fontmap is changed. It may
   * wrap, but will never have the value 0. Since it can wrap, never compare
   * it with "less than", always use "not equals".
   * 
   * The fontmap can only be changed using backend-specific API, like changing
   * fontmap resolution.
   * 
   * This can be used to automatically detect changes to a Pango::FontMap, like
   * in Pango::Context.
   * 
   * @newin{1,32,4}
   * 
   * @return The current serial number of @a fontmap.
   */
  guint get_serial() const;

  
  //This is not used unless ENABLE_BACKEND is defined: _WRAP_METHOD(Glib::ustring get_shape_engine_type() const, pango_font_map_get_shape_engine_type)
  

public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} /* namespace Pango */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Pango::FontMap
   */
  Glib::RefPtr<Pango::FontMap> wrap(PangoFontMap* object, bool take_copy = false);
}


#endif /* _PANGOMM_FONTMAP_H */

