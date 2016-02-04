// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_SCALE_H
#define _GTKMM_SCALE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <gtkmm/range.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkScale GtkScale;
typedef struct _GtkScaleClass GtkScaleClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Scale_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A slider widget for selecting a value from a range.
 *
 * A Gtk::Scale is a slider control used to select a numeric value. To use it,
 * you'll probably want to investigate the methods on its base class,
 * Gtk::Range, in addition to the methods for Gtk::Scale itself. To set the
 * value of a scale, you would normally use set_value(). To detect
 * changes to the value, you would normally use signal_value_changed().
 *
 * Note that using the same upper and lower bounds for the Scale (through
 * the Range methods) will hide the slider itself. This is useful for
 * applications that want to show an undeterminate value on the scale, without
 * changing the layout of the application (such as movie or music players).
 *
 * @ingroup Widgets
 */

class Scale : public Range
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Scale CppObjectType;
  typedef Scale_Class CppClassType;
  typedef GtkScale BaseObjectType;
  typedef GtkScaleClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Scale(Scale&& src) noexcept;
  Scale& operator=(Scale&& src) noexcept;

  // noncopyable
  Scale(const Scale&) = delete;
  Scale& operator=(const Scale&) = delete;

  virtual ~Scale() noexcept;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Scale_Class;
  static CppClassType scale_class_;

protected:
  explicit Scale(const Glib::ConstructParams& construct_params);
  explicit Scale(GtkScale* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkScale*       gobj()       { return reinterpret_cast<GtkScale*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkScale* gobj() const { return reinterpret_cast<GtkScale*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_format_value().
  virtual Glib::ustring on_format_value(double value);


private:

public:

  Scale();

  /**
   * @newin{3,2}
   */
  explicit Scale(Orientation orientation);

  //Note that we try to use the same default parameter value as the default property value.
  explicit Scale(const Glib::RefPtr<Adjustment>& adjustment, Orientation orientation = ORIENTATION_HORIZONTAL);
  

  /** Set the number of decimal digits.
   *
   * This also causes the adjustment to be rounded off so the retrieved value
   * matches the value the user sees. Setting digits to 1 gives for example
   * 1.0, 2 gives 1.00, etc.
   */
  void set_digits(int digits);

  
  /** Get the number of decimal digits.
   */
  int get_digits() const;

  
  /** Set whether the current value is displayed as a string next to the slider.
   */
  void set_draw_value(bool draw_value =  true);

  
  /** Get whether the current value is displayed as a string next to the slider.
   */
  bool get_draw_value() const;


  /** Set the position in which the value is displayed.
   */
  void set_value_pos(PositionType pos);

  
  /** Get the position in which the value is displayed.
   */
  PositionType get_value_pos() const;


  /** If @a has_origin is set to <tt>true</tt> (the default),
   * the scale will highlight the part of the scale
   * between the origin (bottom or left side) of the scale
   * and the current value.
   * 
   * @newin{3,4}
   * 
   * @param has_origin <tt>true</tt> if the scale has an origin.
   */
  void set_has_origin(bool has_origin =  true);
  
  /** Returns whether the scale has an origin.
   * 
   * @newin{3,4}
   * 
   * @return <tt>true</tt> if the scale has an origin.
   */
  bool get_has_origin() const;

  
  /** Gets the Pango::Layout used to display the scale. The returned
   * object is owned by the scale so does not need to be freed by
   * the caller.
   * 
   * @newin{2,4}
   * 
   * @return The Pango::Layout for this scale,
   * or <tt>0</tt> if the Gtk::Scale::property_draw_value() property is <tt>false</tt>.
   */
  Glib::RefPtr<Pango::Layout> get_layout();
  
  /** Gets the Pango::Layout used to display the scale. The returned
   * object is owned by the scale so does not need to be freed by
   * the caller.
   * 
   * @newin{2,4}
   * 
   * @return The Pango::Layout for this scale,
   * or <tt>0</tt> if the Gtk::Scale::property_draw_value() property is <tt>false</tt>.
   */
  Glib::RefPtr<const Pango::Layout> get_layout() const;
  
  /** Obtains the coordinates where the scale will draw the 
   * Pango::Layout representing the text in the scale. Remember
   * when using the Pango::Layout function you need to convert to
   * and from pixels using PANGO_PIXELS() or Pango::SCALE. 
   * 
   * If the Gtk::Scale::property_draw_value() property is <tt>false</tt>, the return 
   * values are undefined.
   * 
   * @newin{2,4}
   * 
   * @param x Location to store X offset of layout, or <tt>0</tt>.
   * @param y Location to store Y offset of layout, or <tt>0</tt>.
   */
  void get_layout_offsets(int& x, int& y) const;

  
  /** Adds a mark at @a value.
   * 
   * A mark is indicated visually by drawing a tick mark next to the scale,
   * and GTK+ makes it easy for the user to position the scale exactly at the
   * marks value.
   * 
   * If @a markup is not <tt>0</tt>, text is shown next to the tick mark.
   * 
   * To remove marks from a scale, use clear_marks().
   * 
   * @newin{2,16}
   * 
   * @param value The value at which the mark is placed, must be between
   * the lower and upper limits of the scales’ adjustment.
   * @param position Where to draw the mark. For a horizontal scale, Gtk::POS_TOP
   * and Gtk::POS_LEFT are drawn above the scale, anything else below.
   * For a vertical scale, Gtk::POS_LEFT and Gtk::POS_TOP are drawn to
   * the left of the scale, anything else to the right.
   * @param markup Text to be shown at the mark, using [Pango markup][PangoMarkupFormat], or <tt>0</tt>.
   */
  void add_mark(double value, PositionType position, const Glib::ustring& markup);
  
  /** Removes any marks that have been added with add_mark().
   * 
   * @newin{2,16}
   */
  void clear_marks();

      
  /**
   * @par Slot Prototype:
   * <tt>Glib::ustring on_my_%format_value(double value)</tt>
   *
   * Signal which allows you to change how the scale value is displayed.
   * Connect a signal handler which returns an allocated string representing 
   *  @a value. That string will then be used to display the scale's value.
   * 
   * Here's an example signal handler which displays a value 1.0 as
   * with "-->1.0<--".
   * 
   * [C example ellipted]
   * 
   * @param value The value to format.
   * @return Allocated string representing @a value.
   */

  Glib::SignalProxy1< Glib::ustring,double > signal_format_value();

  // TODO: When we can break ABI, this signal needs to be
  // Glib::ustring format_value(double value, bool& use_default_formatting),
  // where use_default_formatting specifies whether the return value will actually be a null char*.

  /** Number of displayed decimal digits.
   */
  /** The number of decimal places that are displayed in the value.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_digits() ;

/** The number of decimal places that are displayed in the value.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_digits() const;


  /** Whether to draw the value as a string next to slider.
   */
  /** Whether the current value is displayed as a string next to the slider.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_draw_value() ;

/** Whether the current value is displayed as a string next to the slider.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_draw_value() const;


  /** The position in which the value is displayed.
   */
  /** The position in which the current value is displayed.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PositionType > property_value_pos() ;

/** The position in which the current value is displayed.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PositionType > property_value_pos() const;


  /** Whether the scale has an origin.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_has_origin() ;

/** Whether the scale has an origin.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_has_origin() const;


protected:

    virtual void draw_value_vfunc();


  virtual int calc_digits_(double step) const;


};

} //namespace Gtk


//Include the deprecated header,
//whose classes were previously in this header,
//to preserve the "API" of the includes.
#include <gtkmm/hvscale.h>


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Scale
   */
  Gtk::Scale* wrap(GtkScale* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SCALE_H */

