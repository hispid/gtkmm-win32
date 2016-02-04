// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_WINDOWGROUP_H
#define _GTKMM_WINDOWGROUP_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2015 The gtkmm Development Team
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

#include <vector>

#include <gtkmm/widget.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkWindowGroup GtkWindowGroup;
typedef struct _GtkWindowGroupClass GtkWindowGroupClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class WindowGroup_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

class Window;

/** Limit the effect of grabs
 */

class WindowGroup : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef WindowGroup CppObjectType;
  typedef WindowGroup_Class CppClassType;
  typedef GtkWindowGroup BaseObjectType;
  typedef GtkWindowGroupClass BaseClassType;

  // noncopyable
  WindowGroup(const WindowGroup&) = delete;
  WindowGroup& operator=(const WindowGroup&) = delete;

private:  friend class WindowGroup_Class;
  static CppClassType windowgroup_class_;

protected:
  explicit WindowGroup(const Glib::ConstructParams& construct_params);
  explicit WindowGroup(GtkWindowGroup* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  WindowGroup(WindowGroup&& src) noexcept;
  WindowGroup& operator=(WindowGroup&& src) noexcept;

  virtual ~WindowGroup() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkWindowGroup*       gobj()       { return reinterpret_cast<GtkWindowGroup*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkWindowGroup* gobj() const { return reinterpret_cast<GtkWindowGroup*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkWindowGroup* gobj_copy();

private:


protected:
  WindowGroup();

public:
  
  static Glib::RefPtr<WindowGroup> create();


  /** Adds a window to a Gtk::WindowGroup.
   * 
   * @param window The Gtk::Window to add.
   */
  void add_window(Window& window);
  
  /** Removes a window from a Gtk::WindowGroup.
   * 
   * @param window The Gtk::Window to remove.
   */
  void remove_window(Window& window);


  /** Returns a list of the Gtk::Windows that belong to @a window_group.
   * 
   * @newin{2,14}
   * 
   * @return A
   * newly-allocated list of windows inside the group.
   */
  std::vector<Window*> list_windows();

 
  /** Returns a list of the Gtk::Windows that belong to @a window_group.
   * 
   * @newin{2,14}
   * 
   * @return A
   * newly-allocated list of windows inside the group.
   */
  std::vector<const Window*> list_windows() const;

  
  /** Gets the current grab widget of the given group,
   * see gtk_grab_add().
   * 
   * @newin{2,22}
   * 
   * @return The current grab widget of the group.
   */
  Widget* get_current_grab();
  
  /** Gets the current grab widget of the given group,
   * see gtk_grab_add().
   * 
   * @newin{2,22}
   * 
   * @return The current grab widget of the group.
   */
  const Widget* get_current_grab() const;

  
  /** Returns the current grab widget for @a device, or <tt>0</tt> if none.
   * 
   * @newin{3,0}
   * 
   * @param device A Gdk::Device.
   * @return The grab widget, or <tt>0</tt>.
   */
  Widget* get_current_grab(const Glib::RefPtr<const Gdk::Device>& device);
  
  /** Returns the current grab widget for @a device, or <tt>0</tt> if none.
   * 
   * @newin{3,0}
   * 
   * @param device A Gdk::Device.
   * @return The grab widget, or <tt>0</tt>.
   */
  const Widget* get_current_grab(const Glib::RefPtr<const Gdk::Device>& device) const;


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
   * @relates Gtk::WindowGroup
   */
  Glib::RefPtr<Gtk::WindowGroup> wrap(GtkWindowGroup* object, bool take_copy = false);
}


#endif /* _GTKMM_WINDOWGROUP_H */

