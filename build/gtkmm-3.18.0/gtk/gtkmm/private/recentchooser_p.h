// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_RECENTCHOOSER_P_H
#define _GTKMM_RECENTCHOOSER_P_H


#include <glibmm/private/interface_p.h>

#include <glibmm/private/interface_p.h>

namespace Gtk
{

class RecentChooser_Class : public Glib::Interface_Class
{
public:
  typedef RecentChooser CppObjectType;
  typedef GtkRecentChooser BaseObjectType;
  typedef GtkRecentChooserIface BaseClassType;
  typedef Glib::Interface_Class CppClassParent;

  friend class RecentChooser;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void selection_changed_callback(GtkRecentChooser* self);
  static void item_activated_callback(GtkRecentChooser* self);

  //Callbacks (virtual functions):
  static gchar* get_current_uri_vfunc_callback(GtkRecentChooser* self);
  static void unselect_uri_vfunc_callback(GtkRecentChooser* self, const gchar* uri);
  static void select_all_vfunc_callback(GtkRecentChooser* self);
  static void unselect_all_vfunc_callback(GtkRecentChooser* self);
  static GtkRecentManager* get_recent_manager_vfunc_callback(GtkRecentChooser* self);
  static void add_filter_vfunc_callback(GtkRecentChooser* self, GtkRecentFilter* filter);
  static void remove_filter_vfunc_callback(GtkRecentChooser* self, GtkRecentFilter* filter);
};


} // namespace Gtk


#endif /* _GTKMM_RECENTCHOOSER_P_H */

