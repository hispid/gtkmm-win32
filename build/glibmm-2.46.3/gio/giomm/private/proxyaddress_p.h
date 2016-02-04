// -*- c++ -*-
// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!
#ifndef _GIOMM_PROXYADDRESS_P_H
#define _GIOMM_PROXYADDRESS_P_H


#include <giomm/private/inetsocketaddress_p.h>

#include <glibmm/class.h>

namespace Gio
{

class ProxyAddress_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ProxyAddress CppObjectType;
  typedef GProxyAddress BaseObjectType;
  typedef GProxyAddressClass BaseClassType;
  typedef InetSocketAddress_Class CppClassParent;
  typedef GInetSocketAddressClass BaseClassParent;

  friend class ProxyAddress;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_PROXYADDRESS_P_H */

