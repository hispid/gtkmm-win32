// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_SPINBUTTON_H
#define _GTKMM_SPINBUTTON_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <gtkmm/entry.h>
#include <gtkmm/editable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSpinButton GtkSpinButton;
typedef struct _GtkSpinButtonClass GtkSpinButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class SpinButton_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{


/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *  @var SpinButtonUpdatePolicy UPDATE_ALWAYS
 * When refreshing your Gtk::SpinButton, the value is
 * always displayed.
 * 
 *  @var SpinButtonUpdatePolicy UPDATE_IF_VALID
 * When refreshing your Gtk::SpinButton, the value is
 * only displayed if it is valid within the bounds of the spin button's
 * adjustment.
 * 
 *  @enum SpinButtonUpdatePolicy
 * 
 * The spin button update policy determines whether the spin button displays
 * values even if they are outside the bounds of its adjustment.
 * See Gtk::SpinButton::set_update_policy().
 *
 * @ingroup gtkmmEnums
 */
enum SpinButtonUpdatePolicy
{
  UPDATE_ALWAYS,
  UPDATE_IF_VALID
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::SpinButtonUpdatePolicy> : public Glib::Value_Enum<Gtk::SpinButtonUpdatePolicy>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{

/** 
 *  @var SpinType SPIN_STEP_FORWARD
 * Increment by the adjustments step increment.
 * 
 *  @var SpinType SPIN_STEP_BACKWARD
 * Decrement by the adjustments step increment.
 * 
 *  @var SpinType SPIN_PAGE_FORWARD
 * Increment by the adjustments page increment.
 * 
 *  @var SpinType SPIN_PAGE_BACKWARD
 * Decrement by the adjustments page increment.
 * 
 *  @var SpinType SPIN_HOME
 * Go to the adjustments lower bound.
 * 
 *  @var SpinType SPIN_END
 * Go to the adjustments upper bound.
 * 
 *  @var SpinType SPIN_USER_DEFINED
 * Change by a specified amount.
 * 
 *  @enum SpinType
 * 
 * The values of the GtkSpinType enumeration are used to specify the
 * change to make in Gtk::SpinButton::spin().
 *
 * @ingroup gtkmmEnums
 */
enum SpinType
{
  SPIN_STEP_FORWARD,
  SPIN_STEP_BACKWARD,
  SPIN_PAGE_FORWARD,
  SPIN_PAGE_BACKWARD,
  SPIN_HOME,
  SPIN_END,
  SPIN_USER_DEFINED
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::SpinType> : public Glib::Value_Enum<Gtk::SpinType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** @ingroup gtkmmEnums */
enum { INPUT_ERROR = -1 };

class Adjustment;

/** numeric Entry with up/down buttons
 * Slightly misnamed, this should be called a SpinEntry.
 *
 * The SpinButton widget looks like this:
 * @image html spinbutton1.png
 *
 * @ingroup Widgets
 */

class SpinButton : public Entry
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef SpinButton CppObjectType;
  typedef SpinButton_Class CppClassType;
  typedef GtkSpinButton BaseObjectType;
  typedef GtkSpinButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  SpinButton(SpinButton&& src) noexcept;
  SpinButton& operator=(SpinButton&& src) noexcept;

  // noncopyable
  SpinButton(const SpinButton&) = delete;
  SpinButton& operator=(const SpinButton&) = delete;

  virtual ~SpinButton() noexcept;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class SpinButton_Class;
  static CppClassType spinbutton_class_;

protected:
  explicit SpinButton(const Glib::ConstructParams& construct_params);
  explicit SpinButton(GtkSpinButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkSpinButton*       gobj()       { return reinterpret_cast<GtkSpinButton*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkSpinButton* gobj() const { return reinterpret_cast<GtkSpinButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_input().
  virtual int on_input(double* new_value);
  /// This is a default handler for the signal signal_output().
  virtual bool on_output();
  /// This is a default handler for the signal signal_wrapped().
  virtual void on_wrapped();
  /// This is a default handler for the signal signal_value_changed().
  virtual void on_value_changed();


private:

public:

  //TODO: This constructor should be implicit
  //: create instance
  // adjustment: see Gtk::Adjustment
  // climb_rate:
  // digits: number of decimal digits (has to be < 6)
  SpinButton(double climb_rate = 0.0, guint digits = 0);
    explicit SpinButton(const Glib::RefPtr<Adjustment>& adjustment, double climb_rate =  0.0, guint digits =  0);


  /** Changes the properties of an existing spin button. The adjustment,
   * climb rate, and number of decimal places are all changed accordingly,
   * after this function call.
   * 
   * @param adjustment A Gtk::Adjustment.
   * @param climb_rate The new climb rate.
   * @param digits The number of decimal places to display in the spin button.
   */
  void configure(const Glib::RefPtr<Adjustment>& adjustment, double climb_rate, guint digits);

  
  /** Replaces the Gtk::Adjustment associated with @a spin_button.
   * 
   * @param adjustment A Gtk::Adjustment to replace the existing adjustment.
   */
  void set_adjustment(const Glib::RefPtr<Adjustment>& adjustment);
  void unset_adjustment();
  
  /** Get the adjustment associated with a Gtk::SpinButton
   * 
   * @return The Gtk::Adjustment of @a spin_button.
   */
  Glib::RefPtr<Adjustment> get_adjustment();
  
  /** Get the adjustment associated with a Gtk::SpinButton
   * 
   * @return The Gtk::Adjustment of @a spin_button.
   */
  Glib::RefPtr<const Adjustment> get_adjustment() const;

  
  /** Set the precision to be displayed by @a spin_button. Up to 20 digit precision
   * is allowed.
   * 
   * @param digits The number of digits after the decimal point to be displayed for the spin button’s value.
   */
  void set_digits(guint digits);
  
  /** Fetches the precision of @a spin_button. See set_digits().
   * 
   * @return The current precision.
   */
  guint get_digits() const;

  
  /** Sets the step and page increments for spin_button.  This affects how
   * quickly the value changes when the spin button’s arrows are activated.
   * 
   * @param step Increment applied for a button 1 press.
   * @param page Increment applied for a button 2 press.
   */
  void set_increments(double step, double page);
  
  /** Gets the current step and page the increments used by @a spin_button. See
   * set_increments().
   * 
   * @param step Location to store step increment, or <tt>0</tt>.
   * @param page Location to store page increment, or <tt>0</tt>.
   */
  void get_increments(double& step, double& page) const;

  
  /** Sets the minimum and maximum allowable values for @a spin_button.
   * 
   * If the current value is outside this range, it will be adjusted
   * to fit within the range, otherwise it will remain unchanged.
   * 
   * @param min Minimum allowable value.
   * @param max Maximum allowable value.
   */
  void set_range(double min, double max);
  
  /** Gets the range allowed for @a spin_button.
   * See set_range().
   * 
   * @param min Location to store minimum allowed value, or <tt>0</tt>.
   * @param max Location to store maximum allowed value, or <tt>0</tt>.
   */
  void get_range(double& min, double& max) const;

  
  /** Get the value in the @a spin_button.
   * 
   * @return The value of @a spin_button.
   */
  double get_value() const;
  
  /** Get the value @a spin_button represented as an integer.
   * 
   * @return The value of @a spin_button.
   */
  int get_value_as_int() const;
  
  /** Sets the value of @a spin_button.
   * 
   * @param value The new value.
   */
  void set_value(double value);

  
  /** Sets the update behavior of a spin button.
   * This determines whether the spin button is always updated
   * or only when a valid value is set.
   * 
   * @param policy A Gtk::SpinButtonUpdatePolicy value.
   */
  void set_update_policy(SpinButtonUpdatePolicy policy);
  
  /** Gets the update behavior of a spin button.
   * See set_update_policy().
   * 
   * @return The current update policy.
   */
  SpinButtonUpdatePolicy get_update_policy() const;

  
  /** Sets the flag that determines if non-numeric text can be typed
   * into the spin button.
   * 
   * @param numeric Flag indicating if only numeric entry is allowed.
   */
  void set_numeric(bool numeric =  true);
  
  /** Returns whether non-numeric text can be typed into the spin button.
   * See set_numeric().
   * 
   * @return <tt>true</tt> if only numeric text can be entered.
   */
  bool get_numeric() const;

  
  /** Increment or decrement a spin button’s value in a specified
   * direction by a specified amount.
   * 
   * @param direction A Gtk::SpinType indicating the direction to spin.
   * @param increment Step increment to apply in the specified direction.
   */
  void spin(SpinType direction, double increment);

  
  /** Sets the flag that determines if a spin button value wraps
   * around to the opposite limit when the upper or lower limit
   * of the range is exceeded.
   * 
   * @param wrap A flag indicating if wrapping behavior is performed.
   */
  void set_wrap(bool wrap =  true);
  
  /** Returns whether the spin button’s value wraps around to the
   * opposite limit when the upper or lower limit of the range is
   * exceeded. See set_wrap().
   * 
   * @return <tt>true</tt> if the spin button wraps around.
   */
  bool get_wrap() const;

  
  /** Sets the policy as to whether values are corrected to the
   * nearest step increment when a spin button is activated after
   * providing an invalid value.
   * 
   * @param snap_to_ticks A flag indicating if invalid values should be corrected.
   */
  void set_snap_to_ticks(bool snap_to_ticks =  true);
  
  /** Returns whether the values are corrected to the nearest step.
   * See set_snap_to_ticks().
   * 
   * @return <tt>true</tt> if values are snapped to the nearest step.
   */
  bool get_snap_to_ticks() const;

  
  /** Manually force an update of the spin button.
   */
  void update();

  
  /**
   * @par Slot Prototype:
   * <tt>int on_my_%input(double* new_value)</tt>
   *
   * The signal_input() signal can be used to influence the conversion of
   * the users input into a double value. The signal handler is
   * expected to use Gtk::Entry::get_text() to retrieve the text of
   * the entry and set @a new_value to the new value.
   * 
   * The default conversion uses Glib::strtod().
   * 
   * @param new_value Return location for the new value.
   * @return <tt>true</tt> for a successful conversion, <tt>false</tt> if the input
   * was not handled, and Gtk::INPUT_ERROR if the conversion failed.
   */

  Glib::SignalProxy1< int,double* > signal_input();

  
  /**
   * @par Slot Prototype:
   * <tt>bool on_my_%output()</tt>
   *
   * The signal_output() signal can be used to change to formatting
   * of the value that is displayed in the spin buttons entry.
   * 
   * [C example ellipted]
   * 
   * @return <tt>true</tt> if the value has been displayed.
   */

  Glib::SignalProxy0< bool > signal_output();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%wrapped()</tt>
   *
   * The signal_wrapped() signal is emitted right after the spinbutton wraps
   * from its maximum to minimum value or vice-versa.
   * 
   * @newin{2,10}
   */

  Glib::SignalProxy0< void > signal_wrapped();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%value_changed()</tt>
   *
   * The signal_value_changed() signal is emitted when the value represented by
   *  @a spinbutton changes. Also see the Gtk::SpinButton::signal_output() signal.
   */

  Glib::SignalProxy0< void > signal_value_changed();


  //Keybinding signals:
  

  /** The adjustment that holds the value of the spin button.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Adjustment> > property_adjustment() ;

/** The adjustment that holds the value of the spin button.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> > property_adjustment() const;

  /** The acceleration rate when you hold down a button.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_climb_rate() ;

/** The acceleration rate when you hold down a button.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_climb_rate() const;

  /** The number of decimal places to display.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_digits() ;

/** The number of decimal places to display.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_digits() const;

  /** Whether erroneous values are automatically changed to a spin button's nearest step increment.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_snap_to_ticks() ;

/** Whether erroneous values are automatically changed to a spin button's nearest step increment.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_snap_to_ticks() const;

  /** Whether non-numeric characters should be ignored.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_numeric() ;

/** Whether non-numeric characters should be ignored.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_numeric() const;

  /** Whether a spin button should wrap upon reaching its limits.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_wrap() ;

/** Whether a spin button should wrap upon reaching its limits.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_wrap() const;

  /** Whether the spin button should update always, or only when the value is legal.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< SpinButtonUpdatePolicy > property_update_policy() ;

/** Whether the spin button should update always, or only when the value is legal.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SpinButtonUpdatePolicy > property_update_policy() const;

  /** Reads the current value, or sets a new value.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_value() ;

/** Reads the current value, or sets a new value.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_value() const;


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
   * @relates Gtk::SpinButton
   */
  Gtk::SpinButton* wrap(GtkSpinButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SPINBUTTON_H */

