// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_APPCHOOSERWIDGET_H
#define _GTKMM_APPCHOOSERWIDGET_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2011 The gtkmm Development Team
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

#include <gtkmm/appchooser.h>
#include <gtkmm/box.h>
#include <gtkmm/menu.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkAppChooserWidget GtkAppChooserWidget;
typedef struct _GtkAppChooserWidgetClass GtkAppChooserWidgetClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class AppChooserWidget_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** An application chooser widget that can be embedded in other widgets.
 *
 * This widget is for selecting applications. It is the main building block for AppChooserDialog.
 * Most applications only need to use the latter, but you can use this widget as part of
 * a larger widget if you have special needs.
 *
 * AppChooserWidget offers detailed control over what applications are shown, using
 * property_show_default() and its other properties.
 * See the AppChooser documentation for more information about the groups of applications.
 *
 * To keep track of the selected application, use signal_application_selected() and
 * signal_application_activated().
 *
 * @ingroup Widgets
 *
 * @newin{3,0}
 */

class AppChooserWidget
  : public Box,
    public AppChooser
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef AppChooserWidget CppObjectType;
  typedef AppChooserWidget_Class CppClassType;
  typedef GtkAppChooserWidget BaseObjectType;
  typedef GtkAppChooserWidgetClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  AppChooserWidget(AppChooserWidget&& src) noexcept;
  AppChooserWidget& operator=(AppChooserWidget&& src) noexcept;

  // noncopyable
  AppChooserWidget(const AppChooserWidget&) = delete;
  AppChooserWidget& operator=(const AppChooserWidget&) = delete;

  virtual ~AppChooserWidget() noexcept;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class AppChooserWidget_Class;
  static CppClassType appchooserwidget_class_;

protected:
  explicit AppChooserWidget(const Glib::ConstructParams& construct_params);
  explicit AppChooserWidget(GtkAppChooserWidget* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkAppChooserWidget*       gobj()       { return reinterpret_cast<GtkAppChooserWidget*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkAppChooserWidget* gobj() const { return reinterpret_cast<GtkAppChooserWidget*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_application_selected().
  virtual void on_application_selected(const Glib::RefPtr<Gio::AppInfo>& app_info);
  /// This is a default handler for the signal signal_application_activated().
  virtual void on_application_activated(const Glib::RefPtr<Gio::AppInfo>& app_info);
  /// This is a default handler for the signal signal_populate_popup().
  virtual void on_populate_popup(Menu* menu, const Glib::RefPtr<Gio::AppInfo>& app_info);


private:

  
public:

  /** Creates a new app-chooser widget for applications that can handle content of the given type.
   *
   * See @ref giommContentType in glibmm for more information about content types.
   *
   * @param content_type The content type to show applications for
   */
    explicit AppChooserWidget(const Glib::ustring& content_type);


  /** Sets whether the app chooser should show the default handler
   * for the content type in a separate section.
   * 
   * @newin{3,0}
   * 
   * @param setting The new value for Gtk::AppChooserWidget::property_show_default().
   */
  void set_show_default(bool setting =  true);
  
  /** Returns the current value of the Gtk::AppChooserWidget::property_show_default()
   * property.
   * 
   * @newin{3,0}
   * 
   * @return The value of Gtk::AppChooserWidget::property_show_default().
   */
  bool get_show_default();

  
  /** Sets whether the app chooser should show recommended applications
   * for the content type in a separate section.
   * 
   * @newin{3,0}
   * 
   * @param setting The new value for Gtk::AppChooserWidget::property_show_recommended().
   */
  void set_show_recommended(bool setting =  true);
  
  /** Returns the current value of the Gtk::AppChooserWidget::property_show_recommended()
   * property.
   * 
   * @newin{3,0}
   * 
   * @return The value of Gtk::AppChooserWidget::property_show_recommended().
   */
  bool get_show_recommended() const;

  
  /** Sets whether the app chooser should show related applications
   * for the content type in a separate section.
   * 
   * @newin{3,0}
   * 
   * @param setting The new value for Gtk::AppChooserWidget::property_show_fallback().
   */
  void set_show_fallback(bool setting =  true);
  
  /** Returns the current value of the Gtk::AppChooserWidget::property_show_fallback()
   * property.
   * 
   * @newin{3,0}
   * 
   * @return The value of Gtk::AppChooserWidget::property_show_fallback().
   */
  bool get_show_fallback() const;

  
  /** Sets whether the app chooser should show applications
   * which are unrelated to the content type.
   * 
   * @newin{3,0}
   * 
   * @param setting The new value for Gtk::AppChooserWidget::property_show_other().
   */
  void set_show_other(bool setting =  true);
  
  /** Returns the current value of the Gtk::AppChooserWidget::property_show_other()
   * property.
   * 
   * @newin{3,0}
   * 
   * @return The value of Gtk::AppChooserWidget::property_show_other().
   */
  bool get_show_other() const;

  
  /** Sets whether the app chooser should show all applications
   * in a flat list.
   * 
   * @newin{3,0}
   * 
   * @param setting The new value for Gtk::AppChooserWidget::property_show_all().
   */
  void set_show_all(bool setting =  true);
  
  /** Returns the current value of the Gtk::AppChooserWidget::property_show_all()
   * property.
   * 
   * @newin{3,0}
   * 
   * @return The value of Gtk::AppChooserWidget::property_show_all().
   */
  bool get_show_all() const;

  
  /** Sets the text that is shown if there are not applications
   * that can handle the content type.
   * 
   * @param text The new value for Gtk::AppChooserWidget::property_default_text().
   */
  void set_default_text(const Glib::ustring& text);
  
  /** Returns the text that is shown if there are not applications
   * that can handle the content type.
   * 
   * @newin{3,0}
   * 
   * @return The value of Gtk::AppChooserWidget::property_default_text().
   */
  Glib::ustring get_default_text();


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%application_selected(const Glib::RefPtr<Gio::AppInfo>& app_info)</tt>
   *
   * Emitted when an application item is selected from the widget's list.
   * 
   * @param app_info The selected AppInfo.
   */

  Glib::SignalProxy1< void,const Glib::RefPtr<Gio::AppInfo>& > signal_application_selected();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%application_activated(const Glib::RefPtr<Gio::AppInfo>& app_info)</tt>
   *
   * Emitted when an application item is activated from the widget's list.
   * 
   * This usually happens when the user double clicks an item, or an item
   * is selected and the user presses one of the keys Space, Shift+Space,
   * Return or Enter.
   * 
   * @param app_info The activated AppInfo.
   */

  Glib::SignalProxy1< void,const Glib::RefPtr<Gio::AppInfo>& > signal_application_activated();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%populate_popup(Menu* menu, const Glib::RefPtr<Gio::AppInfo>& app_info)</tt>
   *
   * Emitted when a context menu is about to popup over an application item.
   * Clients can insert menu items into the provided Gtk::Menu object in the
   * callback of this signal; the context menu will be shown over the item
   * if at least one item has been added to the menu.
   * 
   * @param menu The Gtk::Menu to populate.
   * @param app_info The current AppInfo.
   */

  Glib::SignalProxy2< void,Menu*,const Glib::RefPtr<Gio::AppInfo>& > signal_populate_popup();


  /** The property_show_default() property determines whether the app chooser
   * should show the default handler for the content type in a
   * separate section. If <tt>false</tt>, the default handler is listed
   * among the recommended applications.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_default() ;

/** The property_show_default() property determines whether the app chooser
   * should show the default handler for the content type in a
   * separate section. If <tt>false</tt>, the default handler is listed
   * among the recommended applications.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_default() const;

  /** The Gtk::AppChooserWidget::property_show_recommended() property determines
   * whether the app chooser should show a section for recommended
   * applications. If <tt>false</tt>, the recommended applications are listed
   * among the other applications.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_recommended() ;

/** The Gtk::AppChooserWidget::property_show_recommended() property determines
   * whether the app chooser should show a section for recommended
   * applications. If <tt>false</tt>, the recommended applications are listed
   * among the other applications.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_recommended() const;

  /** The Gtk::AppChooserWidget::property_show_fallback() property determines whether
   * the app chooser should show a section for fallback applications.
   * If <tt>false</tt>, the fallback applications are listed among the other
   * applications.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_fallback() ;

/** The Gtk::AppChooserWidget::property_show_fallback() property determines whether
   * the app chooser should show a section for fallback applications.
   * If <tt>false</tt>, the fallback applications are listed among the other
   * applications.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_fallback() const;

  /** The Gtk::AppChooserWidget::property_show_other() property determines whether
   * the app chooser should show a section for other applications.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_other() ;

/** The Gtk::AppChooserWidget::property_show_other() property determines whether
   * the app chooser should show a section for other applications.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_other() const;

  /** If the Gtk::AppChooserWidget::property_show_all() property is <tt>true</tt>, the app
   * chooser presents all applications in a single list, without
   * subsections for default, recommended or related applications.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_all() ;

/** If the Gtk::AppChooserWidget::property_show_all() property is <tt>true</tt>, the app
   * chooser presents all applications in a single list, without
   * subsections for default, recommended or related applications.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_all() const;

  /** The Gtk::AppChooserWidget::property_default_text() property determines the text
   * that appears in the widget when there are no applications for the
   * given content type.
   * See also Gtk::AppChooserWidget::set_default_text().
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_default_text() ;

/** The Gtk::AppChooserWidget::property_default_text() property determines the text
   * that appears in the widget when there are no applications for the
   * given content type.
   * See also Gtk::AppChooserWidget::set_default_text().
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_default_text() const;


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
   * @relates Gtk::AppChooserWidget
   */
  Gtk::AppChooserWidget* wrap(GtkAppChooserWidget* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_APPCHOOSERWIDGET_H */

