// -*- c++ -*-
// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!
#ifndef _GIOMM_PROXYRESOLVER_P_H
#define _GIOMM_PROXYRESOLVER_P_H


#include <glibmm/private/interface_p.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

class ProxyResolver_Class : public Glib::Interface_Class
{
public:
  typedef ProxyResolver CppObjectType;
  typedef GProxyResolver BaseObjectType;
  typedef GProxyResolverInterface BaseClassType;
  typedef Glib::Interface_Class CppClassParent;

  friend class ProxyResolver;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_PROXYRESOLVER_P_H */

