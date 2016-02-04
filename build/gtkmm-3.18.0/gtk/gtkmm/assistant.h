// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_ASSISTANT_H
#define _GTKMM_ASSISTANT_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2004 The gtkmm Development Team
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

#include <gtkmm/window.h>
#include <gdkmm/pixbuf.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkAssistant GtkAssistant;
typedef struct _GtkAssistantClass GtkAssistantClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Assistant_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *  @var AssistantPageType ASSISTANT_PAGE_CONTENT
 * The page has regular contents. Both the
 * Back and forward buttons will be shown.
 * 
 *  @var AssistantPageType ASSISTANT_PAGE_INTRO
 * The page contains an introduction to the
 * assistant task. Only the Forward button will be shown if there is a
 * next page.
 * 
 *  @var AssistantPageType ASSISTANT_PAGE_CONFIRM
 * The page lets the user confirm or deny the
 * changes. The Back and Apply buttons will be shown.
 * 
 *  @var AssistantPageType ASSISTANT_PAGE_SUMMARY
 * The page informs the user of the changes
 * done. Only the Close button will be shown.
 * 
 *  @var AssistantPageType ASSISTANT_PAGE_PROGRESS
 * Used for tasks that take a long time to
 * complete, blocks the assistant until the page is marked as complete.
 * Only the back button will be shown.
 * 
 *  @var AssistantPageType ASSISTANT_PAGE_CUSTOM
 * Used for when other page types are not
 * appropriate. No buttons will be shown, and the application must
 * add its own buttons through Gtk::Assistant::add_action_widget().
 * 
 *  @enum AssistantPageType
 * 
 * An enum for determining the page role inside the Gtk::Assistant. It's
 * used to handle buttons sensitivity and visibility.
 * 
 * Note that an assistant needs to end its page flow with a page of type
 * Gtk::ASSISTANT_PAGE_CONFIRM, Gtk::ASSISTANT_PAGE_SUMMARY or
 * Gtk::ASSISTANT_PAGE_PROGRESS to be correct.
 * 
 * The Cancel button will only be shown if the page isn’t “committed”.
 * See Gtk::Assistant::commit() for details.
 *
 * @ingroup gtkmmEnums
 */
enum AssistantPageType
{
  ASSISTANT_PAGE_CONTENT,
  ASSISTANT_PAGE_INTRO,
  ASSISTANT_PAGE_CONFIRM,
  ASSISTANT_PAGE_SUMMARY,
  ASSISTANT_PAGE_PROGRESS,
  ASSISTANT_PAGE_CUSTOM
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::AssistantPageType> : public Glib::Value_Enum<Gtk::AssistantPageType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** A widget used to guide users through multi-step operations.
 *
 * A Gtk::Assistant is a widget used to represent a generally complex
 * operation split into several steps, guiding the user through its
 * pages and controlling the page flow to collect the necessary data.
 *
 * @newin{2,10}
 * @ingroup Dialogs
 */

class Assistant : public Window
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Assistant CppObjectType;
  typedef Assistant_Class CppClassType;
  typedef GtkAssistant BaseObjectType;
  typedef GtkAssistantClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Assistant(Assistant&& src) noexcept;
  Assistant& operator=(Assistant&& src) noexcept;

  // noncopyable
  Assistant(const Assistant&) = delete;
  Assistant& operator=(const Assistant&) = delete;

  virtual ~Assistant() noexcept;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Assistant_Class;
  static CppClassType assistant_class_;

protected:
  explicit Assistant(const Glib::ConstructParams& construct_params);
  explicit Assistant(GtkAssistant* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkAssistant*       gobj()       { return reinterpret_cast<GtkAssistant*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkAssistant* gobj() const { return reinterpret_cast<GtkAssistant*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_prepare().
  virtual void on_prepare(Gtk::Widget* page);
  /// This is a default handler for the signal signal_apply().
  virtual void on_apply();
  /// This is a default handler for the signal signal_close().
  virtual void on_close();
  /// This is a default handler for the signal signal_cancel().
  virtual void on_cancel();


private:

  
public:
  Assistant();

  
  /** Navigate to the next page.
   * 
   * It is a programming error to call this function when
   * there is no next page.
   * 
   * This function is for use when creating pages of the
   * Gtk::ASSISTANT_PAGE_CUSTOM type.
   * 
   * @newin{3,0}
   */
  void next_page();
  
  /** Navigate to the previous visited page.
   * 
   * It is a programming error to call this function when
   * no previous page is available.
   * 
   * This function is for use when creating pages of the
   * Gtk::ASSISTANT_PAGE_CUSTOM type.
   * 
   * @newin{3,0}
   */
  void previous_page();

  
  /** Returns the page number of the current page.
   * 
   * @newin{2,10}
   * 
   * @return The index (starting from 0) of the current
   * page in the @a assistant, or -1 if the @a assistant has no pages,
   * or no current page.
   */
  int get_current_page() const;
  
  /** Switches the page to @a page_num.
   * 
   * Note that this will only be necessary in custom buttons,
   * as the @a assistant flow can be set with
   * set_forward_page_func().
   * 
   * @newin{2,10}
   * 
   * @param page_num Index of the page to switch to, starting from 0.
   * If negative, the last page will be used. If greater
   * than the number of pages in the @a assistant, nothing
   * will be done.
   */
  void set_current_page(int page_num);
  
  /** Returns the number of pages in the @a assistant
   * 
   * @newin{2,10}
   * 
   * @return The number of pages in the @a assistant.
   */
  int get_n_pages() const;
  
  /** Returns the child widget contained in page number @a page_num.
   * 
   * @newin{2,10}
   * 
   * @param page_num The index of a page in the @a assistant,
   * or -1 to get the last page.
   * @return The child widget, or <tt>0</tt>
   * if @a page_num is out of bounds.
   */
  Widget* get_nth_page(int page_num);
  
  /** Returns the child widget contained in page number @a page_num.
   * 
   * @newin{2,10}
   * 
   * @param page_num The index of a page in the @a assistant,
   * or -1 to get the last page.
   * @return The child widget, or <tt>0</tt>
   * if @a page_num is out of bounds.
   */
  const Widget* get_nth_page(int page_num) const;
  
  /** Prepends a page to the @a assistant.
   * 
   * @newin{2,10}
   * 
   * @param page A Gtk::Widget.
   * @return The index (starting at 0) of the inserted page.
   */
  int prepend_page(Widget& page);
  
  /** Appends a page to the @a assistant.
   * 
   * @newin{2,10}
   * 
   * @param page A Gtk::Widget.
   * @return The index (starting at 0) of the inserted page.
   */
  int append_page(Widget& page);
  
  /** Inserts a page in the @a assistant at a given position.
   * 
   * @newin{2,10}
   * 
   * @param page A Gtk::Widget.
   * @param position The index (starting at 0) at which to insert the page,
   * or -1 to append the page to the @a assistant.
   * @return The index (starting from 0) of the inserted page.
   */
  int insert_page(Widget& page, int position);
  
  /** Removes the @a page_num’s page from @a assistant.
   * 
   * @newin{3,2}
   * 
   * @param page_num The index of a page in the @a assistant,
   * or -1 to remove the last page.
   */
  void remove_page(int page_num);

  typedef sigc::slot<int, int /* current_page */> SlotForwardPage;

  void set_forward_page_func(const SlotForwardPage& slot);
  

  /** Sets the page type for @a page.
   * 
   * The page type determines the page behavior in the @a assistant.
   * 
   * @newin{2,10}
   * 
   * @param page A page of @a assistant.
   * @param type The new type for @a page.
   */
  void set_page_type(const Widget& page, AssistantPageType type);
  
  /** Gets the page type of @a page.
   * 
   * @newin{2,10}
   * 
   * @param page A page of @a assistant.
   * @return The page type of @a page.
   */
  AssistantPageType get_page_type(const Widget& page) const;
  
  /** Sets a title for @a page.
   * 
   * The title is displayed in the header area of the assistant
   * when @a page is the current page.
   * 
   * @newin{2,10}
   * 
   * @param page A page of @a assistant.
   * @param title The new title for @a page.
   */
  void set_page_title(const Widget& page, const Glib::ustring& title);
  
  /** Gets the title for @a page.
   * 
   * @newin{2,10}
   * 
   * @param page A page of @a assistant.
   * @return The title for @a page.
   */
  Glib::ustring get_page_title(const Widget& page) const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets a header image for @a page.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.2: Since GTK+ 3.2, a header is no longer shown;
   * add your header decoration to the page content instead.
   * 
   * @deprecated A header is no longer shown. Add your header decoration to the page content instead.
   * 
   * @param page A page of @a assistant.
   * @param pixbuf The new header image @a page.
   */
  void set_page_header_image(const Widget& page, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets the header image for @a page.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.2: Since GTK+ 3.2, a header is no longer shown;
   * add your header decoration to the page content instead.
   * 
   * @deprecated A header is no longer shown. Add your header decoration to the page content instead.
   * 
   * @param page A page of @a assistant.
   * @return The header image for @a page,
   * or <tt>0</tt> if there’s no header image for the page.
   */
  Glib::RefPtr<Gdk::Pixbuf> get_page_header_image(const Widget& page);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets the header image for @a page.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.2: Since GTK+ 3.2, a header is no longer shown;
   * add your header decoration to the page content instead.
   * 
   * @deprecated A header is no longer shown. Aadd your header decoration to the page content instead.
   * 
   * @param page A page of @a assistant.
   * @return The header image for @a page,
   * or <tt>0</tt> if there’s no header image for the page.
   */
  Glib::RefPtr<const Gdk::Pixbuf> get_page_header_image(const Widget& page) const;
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets a side image for @a page.
   * 
   * This image used to be displayed in the side area of the assistant
   * when @a page is the current page.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.2: Since GTK+ 3.2, sidebar images are not
   * shown anymore.
   * 
   * @deprecated Sidebar images are not shown anymore..
   * 
   * @param page A page of @a assistant.
   * @param pixbuf The new side image @a page.
   */
  void set_page_side_image(const Widget& page, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets the side image for @a page.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.2: Since GTK+ 3.2, sidebar images are not
   * shown anymore.
   * 
   * @deprecated Sidebar images are not shown anymore..
   * 
   * @param page A page of @a assistant.
   * @return The side image for @a page,
   * or <tt>0</tt> if there’s no side image for the page.
   */
  Glib::RefPtr<Gdk::Pixbuf> get_page_side_image(const Widget& page);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets the side image for @a page.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.2: Since GTK+ 3.2, sidebar images are not
   * shown anymore.
   * 
   * @deprecated Sidebar images are not shown anymore.
   * 
   * @param page A page of @a assistant.
   * @return The side image for @a page,
   * or <tt>0</tt> if there’s no side image for the page.
   */
  Glib::RefPtr<const Gdk::Pixbuf> get_page_side_image(const Widget& page) const;
#endif // GTKMM_DISABLE_DEPRECATED


  /** Sets whether @a page contents are complete.
   * 
   * This will make @a assistant update the buttons state
   * to be able to continue the task.
   * 
   * @newin{2,10}
   * 
   * @param page A page of @a assistant.
   * @param complete The completeness status of the page.
   */
  void set_page_complete(const Widget& page, bool complete =  true);
  
  /** Gets whether @a page is complete.
   * 
   * @newin{2,10}
   * 
   * @param page A page of @a assistant.
   * @return <tt>true</tt> if @a page is complete.
   */
  bool get_page_complete(const Widget& page) const;
  
  /** Adds a widget to the action area of a Gtk::Assistant.
   * 
   * @newin{2,10}
   * 
   * @param child A Gtk::Widget.
   */
  void add_action_widget(Widget& child);
  
  /** Removes a widget from the action area of a Gtk::Assistant.
   * 
   * @newin{2,10}
   * 
   * @param child A Gtk::Widget.
   */
  void remove_action_widget(Widget& child);
  
  /** Forces @a assistant to recompute the buttons state.
   * 
   * GTK+ automatically takes care of this in most situations,
   * e.g. when the user goes to a different page, or when the
   * visibility or completeness of a page changes.
   * 
   * One situation where it can be necessary to call this
   * function is when changing a value on the current page
   * affects the future page flow of the assistant.
   * 
   * @newin{2,10}
   */
  void update_buttons_state();
  
  /** Erases the visited page history so the back button is not
   * shown on the current page, and removes the cancel button
   * from subsequent pages.
   * 
   * Use this when the information provided up to the current
   * page is hereafter deemed permanent and cannot be modified
   * or undone. For example, showing a progress page to track
   * a long-running, unreversible operation after the user has
   * clicked apply on a confirmation page.
   * 
   * @newin{2,22}
   */
  void commit();

  
  /** Sets whether the assistant is adding padding around
   * the page.
   * 
   * @newin{3,18}
   * 
   * @param page A page of @a assistant.
   * @param has_padding Whether this page has padding.
   */
  void set_page_has_padding(const Widget& page, bool has_padding =  true);
  
  /** Gets whether page has padding.
   * 
   * @newin{3,18}
   * 
   * @param page A page of @a assistant.
   * @return <tt>true</tt> if @a page has padding.
   */
  bool get_page_has_padding(const Widget& page) const;

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%prepare(Gtk::Widget* page)</tt>
   *
   * The signal_prepare() signal is emitted when a new page is set as the
   * assistant's current page, before making the new page visible.
   * 
   * A handler for this signal can do any preparations which are
   * necessary before showing @a page.
   * 
   * @newin{2,10}
   * 
   * @param page The current page.
   */

  Glib::SignalProxy1< void,Gtk::Widget* > signal_prepare();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%apply()</tt>
   *
   * The signal_apply() signal is emitted when the apply button is clicked.
   * 
   * The default behavior of the Gtk::Assistant is to switch to the page
   * after the current page, unless the current page is the last one.
   * 
   * A handler for the signal_apply() signal should carry out the actions for
   * which the wizard has collected data. If the action takes a long time
   * to complete, you might consider putting a page of type
   * Gtk::ASSISTANT_PAGE_PROGRESS after the confirmation page and handle
   * this operation within the Gtk::Assistant::signal_prepare() signal of the progress
   * page.
   * 
   * @newin{2,10}
   */

  Glib::SignalProxy0< void > signal_apply();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%close()</tt>
   *
   * The signal_close() signal is emitted either when the close button of
   * a summary page is clicked, or when the apply button in the last
   * page in the flow (of type Gtk::ASSISTANT_PAGE_CONFIRM) is clicked.
   * 
   * @newin{2,10}
   */

  Glib::SignalProxy0< void > signal_close();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%cancel()</tt>
   *
   * The signal_cancel() signal is emitted when then the cancel button is clicked.
   * 
   * @newin{2,10}
   */

  Glib::SignalProxy0< void > signal_cancel();


  //Ignore action signals.
  

  /** <tt>true</tt> if the assistant uses a Gtk::HeaderBar for action buttons
   * instead of the action-area.
   * 
   * For technical reasons, this property is declared as an integer
   * property, but you should only set it to <tt>true</tt> or <tt>false</tt>.
   * 
   * @newin{3,12}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_header_bar() const;


  //There are no normal properties.
  //TODO: Child properties?


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
   * @relates Gtk::Assistant
   */
  Gtk::Assistant* wrap(GtkAssistant* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_ASSISTANT_H */

