// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_MENUBUTTON_H
#define _GTKMM_MENUBUTTON_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <gtkmm/togglebutton.h>
#include <gtkmm/menu.h>
#include <gtkmm/popover.h>
#include <giomm/menumodel.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkMenuButton GtkMenuButton;
typedef struct _GtkMenuButtonClass GtkMenuButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class MenuButton_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A widget that shows a menu when clicked on.
 *
 * This menu can be provided either as a Gtk::Menu, or an abstract Gio::MenuModel.
 *
 * This widget can hold any valid child widget. That is, it can hold
 * almost any other standard Gtk::Widget. The most commonly used child is the
 * provided Gtk::Arrow.
 *
 * @ingroup Widgets
 * @newin{3,6}
 */

class MenuButton : public ToggleButton
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MenuButton CppObjectType;
  typedef MenuButton_Class CppClassType;
  typedef GtkMenuButton BaseObjectType;
  typedef GtkMenuButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  MenuButton(MenuButton&& src) noexcept;
  MenuButton& operator=(MenuButton&& src) noexcept;

  // noncopyable
  MenuButton(const MenuButton&) = delete;
  MenuButton& operator=(const MenuButton&) = delete;

  virtual ~MenuButton() noexcept;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class MenuButton_Class;
  static CppClassType menubutton_class_;

protected:
  explicit MenuButton(const Glib::ConstructParams& construct_params);
  explicit MenuButton(GtkMenuButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkMenuButton*       gobj()       { return reinterpret_cast<GtkMenuButton*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkMenuButton* gobj() const { return reinterpret_cast<GtkMenuButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:

  MenuButton();

 
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets the Gtk::Menu that will be popped up when the button is clicked,
   * or <tt>0</tt> to disable the button. If Gtk::MenuButton::property_menu_model() or
   * Gtk::MenuButton::property_popover() are set, they will be set to <tt>0</tt>.
   * 
   * @newin{3,6}
   * 
   * @deprecated Use set_popup() instead.
   * 
   * @param menu A Gtk::Menu.
   */
  void set_menu(Menu& menu);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Disables the button.
   *
   * @deprecated Use unset_popup() instead.
   */
  void unset_menu();
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns the Gtk::Menu that pops out of the button.
   * If the button does not use a Gtk::Menu, this function
   * returns <tt>0</tt>.
   * 
   * @newin{3,6}
   * 
   * @deprecated Use get_popup() instead.
   * 
   * @return A Gtk::Menu or <tt>0</tt>.
   */
  Menu* get_menu();
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns the Gtk::Menu that pops out of the button.
   * If the button does not use a Gtk::Menu, this function
   * returns <tt>0</tt>.
   * 
   * @newin{3,6}
   * 
   * @deprecated Use get_popup() instead.
   * 
   * @return A Gtk::Menu or <tt>0</tt>.
   */
  const Menu* get_menu() const;
#endif // GTKMM_DISABLE_DEPRECATED


  /** Sets the Gtk::Menu that will be popped up when the button is clicked,
   * or <tt>0</tt> to disable the button. If Gtk::MenuButton::property_menu_model() or
   * Gtk::MenuButton::property_popover() are set, they will be set to <tt>0</tt>.
   * 
   * @newin{3,6}
   * 
   * @param menu A Gtk::Menu.
   */
  void set_popup(Menu& menu);

  /** Disables the button.
   */
  void unset_popup();

  
  /** Returns the Gtk::Menu that pops out of the button.
   * If the button does not use a Gtk::Menu, this function
   * returns <tt>0</tt>.
   * 
   * @newin{3,6}
   * 
   * @return A Gtk::Menu or <tt>0</tt>.
   */
  Menu* get_popup();
  
  /** Returns the Gtk::Menu that pops out of the button.
   * If the button does not use a Gtk::Menu, this function
   * returns <tt>0</tt>.
   * 
   * @newin{3,6}
   * 
   * @return A Gtk::Menu or <tt>0</tt>.
   */
  const Menu* get_popup() const;

  
  /** Sets the Gtk::Popover that will be popped up when the button is
   * clicked, or <tt>0</tt> to disable the button. If Gtk::MenuButton::property_menu_model()
   * or Gtk::MenuButton::property_popup() are set, they will be set to <tt>0</tt>.
   * 
   * @newin{3,12}
   * 
   * @param popover A Gtk::Popover.
   */
  void set_popover(Popover& popover);

  /** Disables the button.
   */
  void unset_popover();

  
  /** Returns the Gtk::Popover that pops out of the button.
   * If the button is not using a Gtk::Popover, this function
   * returns <tt>0</tt>.
   * 
   * @newin{3,12}
   * 
   * @return A Gtk::Popover or <tt>0</tt>.
   */
  Popover* get_popover();
  
  /** Returns the Gtk::Popover that pops out of the button.
   * If the button is not using a Gtk::Popover, this function
   * returns <tt>0</tt>.
   * 
   * @newin{3,12}
   * 
   * @return A Gtk::Popover or <tt>0</tt>.
   */
  const Popover* get_popover() const;

  
  /** Sets whether to construct a Gtk::Popover instead of Gtk::Menu
   * when set_menu_model() is called. Note that
   * this property is only consulted when a new menu model is set.
   * 
   * @newin{3,12}
   * 
   * @param use_popover <tt>true</tt> to construct a popover from the menu model.
   */
  void set_use_popover(bool use_popover =  true);
  
  /** Returns whether a Gtk::Popover or a Gtk::Menu will be constructed
   * from the menu model.
   * 
   * @newin{3,12}
   * 
   * @return <tt>true</tt> if using a Gtk::Popover.
   */
  bool get_use_popover();

  
  /** Sets the direction in which the popup will be popped up, as
   * well as changing the arrow’s direction. The child will not
   * be changed to an arrow if it was customized.
   * 
   * If the does not fit in the available space in the given direction,
   * GTK+ will its best to keep it inside the screen and fully visible.
   * 
   * If you pass Gtk::ARROW_NONE for a @a direction, the popup will behave
   * as if you passed Gtk::ARROW_DOWN (although you won’t see any arrows).
   * 
   * @newin{3,6}
   * 
   * @param direction A Gtk::ArrowType.
   */
  void set_direction(ArrowType direction);
  
  /** Returns the direction the popup will be pointing at when popped up.
   * 
   * @newin{3,6}
   * 
   * @return A Gtk::ArrowType value.
   */
  ArrowType get_direction() const;

  
  /** Sets the MenuModel from which the popup will be constructed,
   * or <tt>0</tt> to disable the button.
   * 
   * Depending on the value of Gtk::MenuButton::property_use_popover(), either a
   * Gtk::Menu will be created with new_from_model(), or a
   * Gtk::Popover with Gtk::Popover::new_from_model(). In either case,
   * actions will be connected as documented for these functions.
   * 
   * If Gtk::MenuButton::property_popup() or Gtk::MenuButton::property_popover() are already set,
   * their content will be lost and replaced by the newly created popup.
   * 
   * @newin{3,6}
   * 
   * @param menu_model A MenuModel.
   */
  void set_menu_model(const Glib::RefPtr<const Gio::MenuModel>& menu_model);

  /** Disables the button.
   */
  void unset_menu_model();

  
  /** Returns the MenuModel used to generate the popup.
   * 
   * @newin{3,6}
   * 
   * @return A MenuModel or <tt>0</tt>.
   */
  Glib::RefPtr<Gio::MenuModel> get_menu_model();
  
  /** Returns the MenuModel used to generate the popup.
   * 
   * @newin{3,6}
   * 
   * @return A MenuModel or <tt>0</tt>.
   */
  Glib::RefPtr<const Gio::MenuModel> get_menu_model() const;


  /** Sets the Gtk::Widget to use to line the menu with when popped up.
   * Note that the @a align_widget must contain the Gtk::MenuButton itself.
   * 
   * Setting it to <tt>0</tt> means that the menu will be aligned with the
   * button itself.
   * 
   * Note that this property is only used with menus currently,
   * and not for popovers.
   * 
   * @newin{3,6}
   * 
   * @param align_widget A Gtk::Widget.
   */
  void set_align_widget(Widget& align_widget);
  
  /** Returns the parent Gtk::Widget to use to line up with menu.
   * 
   * @newin{3,6}
   * 
   * @return A Gtk::Widget value or <tt>0</tt>.
   */
  Widget* get_align_widget();
  
  /** Returns the parent Gtk::Widget to use to line up with menu.
   * 
   * @newin{3,6}
   * 
   * @return A Gtk::Widget value or <tt>0</tt>.
   */
  const Widget* get_align_widget() const;

#ifndef GTKMM_DISABLE_DEPRECATED
#ifdef GLIBMM_PROPERTIES_ENABLED
// _WRAP_PROPERTY("menu", Menu*, deprecated "Use popup instead.")
// The GtkMenuButton::menu property does not exist in gtk+ 3.7.0 and later. Must hand-code to avoid an API/ABI break.
/** The dropdown menu.
   * @deprecated Use popup instead.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Menu* > property_menu() ;

/** The dropdown menu.
   * @deprecated Use popup instead.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Menu* > property_menu() const;
#endif //#GLIBMM_PROPERTIES_ENABLED
#endif // GTKMM_DISABLE_DEPRECATED

  /** The Gtk::Menu that will be popped up when the button is clicked.
   * 
   * @newin{3,6}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Menu* > property_popup() ;

/** The Gtk::Menu that will be popped up when the button is clicked.
   * 
   * @newin{3,6}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Menu* > property_popup() const;

  /** The MenuModel from which the popup will be created.
   * Depending on the Gtk::MenuButton::property_use_popover() property, that may
   * be a menu or a popover.
   * 
   * See Gtk::MenuButton::set_menu_model() for the interaction with the
   * Gtk::MenuButton::property_popup() property.
   * 
   * @newin{3,6}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::MenuModel> > property_menu_model() ;

/** The MenuModel from which the popup will be created.
   * Depending on the Gtk::MenuButton::property_use_popover() property, that may
   * be a menu or a popover.
   * 
   * See Gtk::MenuButton::set_menu_model() for the interaction with the
   * Gtk::MenuButton::property_popup() property.
   * 
   * @newin{3,6}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::MenuModel> > property_menu_model() const;

  /** The Gtk::Widget to use to align the menu with.
   * 
   * @newin{3,6}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_align_widget() ;

/** The Gtk::Widget to use to align the menu with.
   * 
   * @newin{3,6}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_align_widget() const;

  /** The Gtk::ArrowType representing the direction in which the
   * menu or popover will be popped out.
   * 
   * @newin{3,6}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ArrowType > property_direction() ;

/** The Gtk::ArrowType representing the direction in which the
   * menu or popover will be popped out.
   * 
   * @newin{3,6}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ArrowType > property_direction() const;

  /** Whether to construct a Gtk::Popover from the menu model,
   * or a Gtk::Menu.
   * 
   * @newin{3,12}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_popover() ;

/** Whether to construct a Gtk::Popover from the menu model,
   * or a Gtk::Menu.
   * 
   * @newin{3,12}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_popover() const;

  /** The Gtk::Popover that will be popped up when the button is clicked.
   * 
   * @newin{3,12}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Popover* > property_popover() ;

/** The Gtk::Popover that will be popped up when the button is clicked.
   * 
   * @newin{3,12}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Popover* > property_popover() const;


};

} /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::MenuButton
   */
  Gtk::MenuButton* wrap(GtkMenuButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_MENUBUTTON_H */

