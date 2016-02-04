// -*- c++ -*-
// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSINTERFACESKELETON_P_H
#define _GIOMM_DBUSINTERFACESKELETON_P_H


#include <glibmm/private/object_p.h>
#include <gio/gio.h>

#include <glibmm/class.h>

namespace Gio
{

namespace DBus
{

class InterfaceSkeleton_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef InterfaceSkeleton CppObjectType;
  typedef GDBusInterfaceSkeleton BaseObjectType;
  typedef GDBusInterfaceSkeletonClass BaseClassType;
  typedef Glib::Object_Class CppClassParent;
  typedef GObjectClass BaseClassParent;

  friend class InterfaceSkeleton;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static gboolean g_authorize_method_callback(GDBusInterfaceSkeleton* self, GDBusMethodInvocation* p0);

  //Callbacks (virtual functions):
};


} // namespace DBus

} // namespace Gio


#endif /* _GIOMM_DBUSINTERFACESKELETON_P_H */

