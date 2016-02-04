// -*- c++ -*-
// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!
#ifndef _GIOMM_NETWORKMONITOR_P_H
#define _GIOMM_NETWORKMONITOR_P_H


#include <glibmm/private/interface_p.h>
#include <gio/gio.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

class NetworkMonitor_Class : public Glib::Interface_Class
{
public:
  typedef NetworkMonitor CppObjectType;
  typedef GNetworkMonitor BaseObjectType;
  typedef GNetworkMonitorInterface BaseClassType;
  typedef Glib::Interface_Class CppClassParent;

  friend class NetworkMonitor;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void network_changed_callback(GNetworkMonitor* self, gboolean p0);

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_NETWORKMONITOR_P_H */
