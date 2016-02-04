// -*- c++ -*-
// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSMENUMODEL_H
#define _GIOMM_DBUSMENUMODEL_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <giomm/menumodel.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GDBusMenuModel GDBusMenuModel;
typedef struct _GDBusMenuModelClass GDBusMenuModelClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{

namespace DBus
{ class MenuModel_Class; } // namespace DBus

} // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

namespace DBus
{

class Connection;


/** MenuModel - A D-Bus Gio::MenuModel implementation.
 * MenuModel is an implementation of Gio::MenuModel that can be used as a proxy
 * for a menu model that is exported over D-Bus with
 * Gio::DBus::Connection::export_menu_model().
 * @newin{2,32}
 */

class MenuModel : public ::Gio::MenuModel
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef MenuModel CppObjectType;
  typedef MenuModel_Class CppClassType;
  typedef GDBusMenuModel BaseObjectType;
  typedef GDBusMenuModelClass BaseClassType;

  // noncopyable
  MenuModel(const MenuModel&) = delete;
  MenuModel& operator=(const MenuModel&) = delete;

private:  friend class MenuModel_Class;
  static CppClassType menumodel_class_;

protected:
  explicit MenuModel(const Glib::ConstructParams& construct_params);
  explicit MenuModel(GDBusMenuModel* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  MenuModel(MenuModel&& src) noexcept;
  MenuModel& operator=(MenuModel&& src) noexcept;

  virtual ~MenuModel() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GDBusMenuModel*       gobj()       { return reinterpret_cast<GDBusMenuModel*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GDBusMenuModel* gobj() const { return reinterpret_cast<GDBusMenuModel*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDBusMenuModel* gobj_copy();

private:


protected:
  MenuModel();

public:
 

  /** Obtains a DBusMenuModel for the menu model which is exported
   * at the given @a bus_name and @a object_path.
   * 
   * The thread default main context is taken at the time of this call.
   * All signals on the menu model (and any linked models) are reported
   * with respect to this context.  All calls on the returned menu model
   * (and linked models) must also originate from this same context, with
   * the thread default main context unchanged.
   * 
   * @newin{2,32}
   * 
   * @param connection A DBusConnection.
   * @param bus_name The bus name which exports the menu model.
   * @param object_path The object path at which the menu model is exported.
   * @return A DBusMenuModel object. Free with
   * Glib::object_unref().
   */
  static Glib::RefPtr<MenuModel> get(const Glib::RefPtr<Connection>& connection, const Glib::ustring& bus_name, const Glib::ustring& object_path);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace DBus

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::DBus::MenuModel
   */
  Glib::RefPtr<Gio::DBus::MenuModel> wrap(GDBusMenuModel* object, bool take_copy = false);
}


#endif /* _GIOMM_DBUSMENUMODEL_H */

