// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_BUILDABLE_H
#define _GTKMM_BUILDABLE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2009 The gtkmm Development Team
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

#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkBuildableIface GtkBuildableIface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkBuildable GtkBuildable;
typedef struct _GtkBuildableClass GtkBuildableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Buildable_Class; } // namespace Gtk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A base class for objects that can be built by Gtk::Builder.
 *
 * Buildable allows objects to extend and customize thier deserialization from Gtk::Builder UI descriptions.
 * The interface includes methods for setting names and properties of objects, parsing custom tags and constructing child objects.
 *
 * All gtkmm widgets, and many non-widget objects, derive from this base class.
 * The main user of this interface is Gtk::Builder. There should be very little need for applications to call any of Buildable's methods.
 *
 * @newin{3,0}
 */

class Buildable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Buildable CppObjectType;
  typedef Buildable_Class CppClassType;
  typedef GtkBuildable BaseObjectType;
  typedef GtkBuildableIface BaseClassType;

  // noncopyable
  Buildable(const Buildable&) = delete;
  Buildable& operator=(const Buildable&) = delete;

private:
  friend class Buildable_Class;
  static CppClassType buildable_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Buildable();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Buildable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Buildable(GtkBuildable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Buildable(Buildable&& src) noexcept;
  Buildable& operator=(Buildable&& src) noexcept;

  virtual ~Buildable() noexcept;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkBuildable*       gobj()       { return reinterpret_cast<GtkBuildable*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkBuildable* gobj() const { return reinterpret_cast<GtkBuildable*>(gobject_); }

private:


public:
  
  /** Sets the name of the @a buildable object.
   * 
   * @newin{2,12}
   * 
   * @param name Name to set.
   */
  void set_name(const Glib::ustring& name);
  
  /** Gets the name of the @a buildable object. 
   * 
   * Gtk::Builder sets the name based on the
   * [GtkBuilder UI definition][BUILDER-UI] 
   * used to construct the @a buildable.
   * 
   * @newin{2,12}
   * 
   * @return The name set with set_name().
   */
  Glib::ustring get_name() const;

//TODO: #m4 __CONVERSION(`(const Glib::RefPtr<Builder>&',`GtkBuilder*',`($3).gobj()')
//TODO:  _WRAP_METHOD(void add_child(const Glib::RefPtr<Builder>& builder, const Glib::RefPtr<Glib::Object>& child, const Glib::ustring& type), gtk_buildable_add_child)

/* TODO:
  _WRAP_METHOD(void      gtk_buildable_set_buildable_property (
						GtkBuilder          *builder,
						const Glib::ustring& name,
						const GValue        *value);
  _WRAP_METHOD(GObject * gtk_buildable_construct_child        (
						GtkBuilder          *builder,
						const Glib::ustring& name);
  _WRAP_METHOD(gboolean  gtk_buildable_custom_tag_start       (
						GtkBuilder          *builder,
						GObject             *child,
						const Glib::ustring& tagname,
						GMarkupParser       *parser,
						gpointer            *data);
  _WRAP_METHOD(void      gtk_buildable_custom_tag_end         (
						GtkBuilder          *builder,
						GObject             *child,
						const Glib::ustring& tagname,
						gpointer            *data);
  _WRAP_METHOD(void      gtk_buildable_custom_finished        (
						GtkBuilder          *builder,
						GObject             *child,
						const Glib::ustring& tagname,
						gpointer             data);
  _WRAP_METHOD(void      gtk_buildable_parser_finished        (
						GtkBuilder          *builder);
  _WRAP_METHOD(GObject * gtk_buildable_get_internal_child     (
						GtkBuilder          *builder,
						const Glib::ustring& childname);
*/

  //TODO: Properties, signals, vfuncs.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Buildable
   */
  Glib::RefPtr<Gtk::Buildable> wrap(GtkBuildable* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_BUILDABLE_H */

