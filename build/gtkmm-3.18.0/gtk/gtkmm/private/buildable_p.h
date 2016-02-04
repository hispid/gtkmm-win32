// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_BUILDABLE_P_H
#define _GTKMM_BUILDABLE_P_H


#include <glibmm/private/interface_p.h>

#include <glibmm/private/interface_p.h>

namespace Gtk
{

class Buildable_Class : public Glib::Interface_Class
{
public:
  typedef Buildable CppObjectType;
  typedef GtkBuildable BaseObjectType;
  typedef GtkBuildableIface BaseClassType;
  typedef Glib::Interface_Class CppClassParent;

  friend class Buildable;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
    static gboolean custom_tag_start_vfunc_callback(
      GtkBuildable* buildable,
      GtkBuilder* builder,
      GObject* child,
      const gchar* tagname,
      GMarkupParser* parser,
      gpointer* data);
    static void custom_tag_end_vfunc_callback(
      GtkBuildable* buildable,
      GtkBuilder* builder,
      GObject* child,
      const gchar* tagname,
      gpointer* data);
  };


} // namespace Gtk


#endif /* _GTKMM_BUILDABLE_P_H */

