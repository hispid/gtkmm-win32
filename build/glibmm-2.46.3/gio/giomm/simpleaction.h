// -*- c++ -*-
// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!
#ifndef _GIOMM_SIMPLEACTION_H
#define _GIOMM_SIMPLEACTION_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2011 The giomm Development Team
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
#include <giomm/action.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GSimpleAction GSimpleAction;
typedef GObjectClass GSimpleActionClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class SimpleAction_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** SimpleAction - A simple Action implementation.
 * A SimpleAction is the obvious simple implementation of the Action
 * interface. This is the easiest way to create an action for purposes of
 * adding it to a SimpleActionGroup.
 *
 * See also Gtk::Action.
 *
 * @newin{2,32}
 */

class SimpleAction : public Glib::Object, public Action
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef SimpleAction CppObjectType;
  typedef SimpleAction_Class CppClassType;
  typedef GSimpleAction BaseObjectType;
  typedef GSimpleActionClass BaseClassType;

  // noncopyable
  SimpleAction(const SimpleAction&) = delete;
  SimpleAction& operator=(const SimpleAction&) = delete;

private:  friend class SimpleAction_Class;
  static CppClassType simpleaction_class_;

protected:
  explicit SimpleAction(const Glib::ConstructParams& construct_params);
  explicit SimpleAction(GSimpleAction* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  SimpleAction(SimpleAction&& src) noexcept;
  SimpleAction& operator=(SimpleAction&& src) noexcept;

  virtual ~SimpleAction() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GSimpleAction*       gobj()       { return reinterpret_cast<GSimpleAction*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GSimpleAction* gobj() const { return reinterpret_cast<GSimpleAction*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GSimpleAction* gobj_copy();

private:

  
protected:
  /** Creates a new action.
   *
   * The created action is stateless.
   *
   * @param name The name of the action.
   */
  explicit SimpleAction(const Glib::ustring& name);

  /** Creates a new new stateful action.
   *
   * The created action is stateless.
   *
   * @a state is the initial state of the action.  All future state values
   * must have the same VariantType as the initial state.
   *
   * @param name The name of the action.
   * @param state The initial state of the action.
   */
  SimpleAction(const Glib::ustring& name, const Glib::VariantBase& state);

 
    explicit SimpleAction(const Glib::ustring& name, const Glib::VariantType& parameter_type);


    explicit SimpleAction(const Glib::ustring& name, const Glib::VariantType& parameter_type, const Glib::VariantBase& state);


public:

  
  static Glib::RefPtr<SimpleAction> create(const Glib::ustring& name);


  /** Creates a new action.
   * 
   * The created action is stateless.  See g_simple_action_new_stateful().
   * 
   * @newin{2,28}
   * 
   * @param name The name of the action.
   * @param parameter_type The type of parameter to the activate function.
   * @return A new SimpleAction.
   */

  
  static Glib::RefPtr<SimpleAction> create(const Glib::ustring& name, const Glib::VariantType& parameter_type);


  //TODO: Add a templated version of this to avoid the need fo Gio::Variant by the caller.
  
  /** Creates a new stateful action.
   * 
   *  @a state is the initial state of the action.  All future state values
   * must have the same VariantType as the initial state.
   * 
   * If the @a state GVariant is floating, it is consumed.
   * 
   * @newin{2,28}
   * 
   * @param name The name of the action.
   * @param parameter_type The type of the parameter to the activate function.
   * @param state The initial state of the action.
   * @return A new SimpleAction.
   */

  
  static Glib::RefPtr<SimpleAction> create(const Glib::ustring& name, const Glib::VariantType& parameter_type, const Glib::VariantBase& state);


  //TODO: Add a templated version of this to avoid the need fo Gio::Variant by the caller.
  /** Creates a new stateful action.
   * 
   * @a state is the initial state of the action.  All future state values
   * must have the same VariantType as the initial state.
   * 
   * @newin{2,38}
   *
   * @param name The name of the action.
   * @param state The initial state of the action.
   * @return A new SimpleAction.
   */
  
  static Glib::RefPtr<SimpleAction> create(const Glib::ustring& name, const Glib::VariantBase& state);


  //TODO: Use similar C API if they ever add it. Doing this manually is tedious. See https://bugzilla.gnome.org/show_bug.cgi?id=705655
  //TODO: Create a derived SimpleToggleAction class for this?
  //TODO: Document how the app must handle signal_activate() to call change_state().
  /** Creates a new boolean stateful action.
   * 
   * @a state is the initial state of the action.  All future state values
   * must also be bool.
   * 
   * @newin{2,38}
   *
   * @param name The name of the action.
   * @param state The initial state of the action.
   * @return A new SimpleAction.
   */
  static Glib::RefPtr<SimpleAction> create_bool(const Glib::ustring&name, bool state = false);

  //TODO: Use similar C API if they ever add it. Doing this manually is tedious. See https://bugzilla.gnome.org/show_bug.cgi?id=705655
  //TODO: Create a derived SimpleToggleAction class for this?
  //TODO: Create convenience API that auto-changes the state, like Gtk::TreeView's append_column_editable()?
  //  See https://bugzilla.gnome.org/show_bug.cgi?id=705133 (it's not documented clearly at all).
  //TODO: Check whether glib now has API to use enums for this: See https://bugzilla.gnome.org/show_bug.cgi?id=705483
  //TODO: Suggest other API that could be used to activate or discover the currently-select radio value.
  /** Creates a new radio action with a string-based target value.
   * 
   * @newin{2,38}
   *
   * @param name The name of the action.
   * @param initial_state The initial state of the action.
   * @return A new SimpleAction.
   */
  static Glib::RefPtr<SimpleAction> create_radio_string(const Glib::ustring& name, const Glib::ustring& initial_state);

  //TODO: Use similar C API if they ever add it. Doing this manually is tedious. See https://bugzilla.gnome.org/show_bug.cgi?id=705655
  //TODO: Create a derived SimpleToggleAction class for this?
  //TODO: Create convenience API that auto-changes the state, like Gtk::TreeView's append_column_editable()?
  //  See https://bugzilla.gnome.org/show_bug.cgi?id=705133 (it's not documented clearly at all).
  //TODO: Check whether glib now has API to use enums for this: See https://bugzilla.gnome.org/show_bug.cgi?id=705483
  //TODO: Suggest other API that could be used to activate or discover the currently-select radio value.
  //TODO: Check that the need for type="i" in the XML is documented: See https://bugzilla.gnome.org/show_bug.cgi?id=704392#c14
  /** Creates a new radio action with an integer-based target value.
   * 
   * @newin{2,38}
   *
   * @param name The name of the action.
   * @param initial_state The initial state of the action.
   * @return A new SimpleAction.
   */
  static Glib::RefPtr<SimpleAction> create_radio_integer(const Glib::ustring& name, gint32 initial_state);

  
  /** Sets the action as enabled or not.
   * 
   * An action must be enabled in order to be activated or in order to
   * have its state changed from outside callers.
   * 
   * This should only be called by the implementor of the action.  Users
   * of the action should not attempt to modify its enabled flag.
   * 
   * @newin{2,28}
   * 
   * @param enabled Whether the action is enabled.
   */
  void set_enabled(bool enabled =  true);

  
  /** Sets the state hint for the action.
   * 
   * See g_action_get_state_hint() for more information about
   * action state hints.
   * 
   * @newin{2,44}
   * 
   * @param state_hint A Variant representing the state hint.
   */
  void set_state_hint(const Glib::VariantBase& state_hint);

  /** If @a action is currently enabled.
   * 
   * If the action is disabled then calls to g_action_activate() and
   * g_action_change_state() have no effect.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_enabled() ;

/** If @a action is currently enabled.
   * 
   * If the action is disabled then calls to g_action_activate() and
   * g_action_change_state() have no effect.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_enabled() const;

  /** The name of the action. This is mostly meaningful for identifying
   * the action once it has been added to a SimpleActionGroup.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_name() const;


  /** The type of the parameter that must be given when activating the
   * action.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::VariantType > property_parameter_type() const;


  /** The state of the action, or <tt>0</tt> if the action is stateless.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::VariantBase > property_state() ;

/** The state of the action, or <tt>0</tt> if the action is stateless.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::VariantBase > property_state() const;

  /** The VariantType of the state that the action has, or <tt>0</tt> if the
   * action is stateless.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::VariantType > property_state_type() const;


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%activate(const Glib::VariantBase& parameter)</tt>
   *
   * Indicates that the action was just activated.
   * 
   *  @a parameter will always be of the expected type.  In the event that
   * an incorrect type was given, no signal will be emitted.
   * 
   * Since GLib 2.40, if no handler is connected to this signal then the
   * default behaviour for boolean-stated actions with a <tt>0</tt> parameter
   * type is to toggle them via the SimpleAction::signal_change_state() signal.
   * For stateful actions where the state type is equal to the parameter
   * type, the default is to forward them directly to
   * SimpleAction::signal_change_state().  This should allow almost all users
   * of SimpleAction to connect only one handler or the other.
   * 
   * @newin{2,28}
   * 
   * @param parameter The parameter to the activation.
   */

  Glib::SignalProxy1< void,const Glib::VariantBase& > signal_activate();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%change_state(const Glib::VariantBase& value)</tt>
   *
   * Indicates that the action just received a request to change its
   * state.
   * 
   *  @a value will always be of the correct state type.  In the event that
   * an incorrect type was given, no signal will be emitted.
   * 
   * If no handler is connected to this signal then the default
   * behaviour is to call g_simple_action_set_state() to set the state
   * to the requested value. If you connect a signal handler then no
   * default action is taken. If the state should change then you must
   * call g_simple_action_set_state() from the handler.
   * 
   * An example of a 'change-state' handler:
   * 
   * [C example ellipted]
   * 
   * The handler need not set the state to the requested value.
   * It could set it to any value at all, or take some other action.
   * 
   * @newin{2,30}
   * 
   * @param value The requested value for the state.
   */

  Glib::SignalProxy1< void,const Glib::VariantBase& > signal_change_state();


protected:

  //TODO: Add templated version of this, renaming this to set_state_variant(), like Action::change_state()?
  //This is protected because the C docs say "This should only be called by the implementor of the action."
  // though that is not entirely clear. We can make this public if somebody needs it.
  
  /** Sets the state of the action.
   * 
   * This directly updates the 'state' property to the given value.
   * 
   * This should only be called by the implementor of the action.  Users
   * of the action should not attempt to directly modify the 'state'
   * property.  Instead, they should call g_action_change_state() to
   * request the change.
   * 
   * If the @a value GVariant is floating, it is consumed.
   * 
   * @newin{2,30}
   * 
   * @param value The new Variant for the state.
   */
  void set_state(const Glib::VariantBase& value);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::SimpleAction
   */
  Glib::RefPtr<Gio::SimpleAction> wrap(GSimpleAction* object, bool take_copy = false);
}


#endif /* _GIOMM_SIMPLEACTION_H */

