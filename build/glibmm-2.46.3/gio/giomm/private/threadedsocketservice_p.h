// -*- c++ -*-
// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!
#ifndef _GIOMM_THREADEDSOCKETSERVICE_P_H
#define _GIOMM_THREADEDSOCKETSERVICE_P_H


#include <giomm/private/socketservice_p.h>

#include <glibmm/class.h>

namespace Gio
{

class ThreadedSocketService_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ThreadedSocketService CppObjectType;
  typedef GThreadedSocketService BaseObjectType;
  typedef GThreadedSocketServiceClass BaseClassType;
  typedef Gio::SocketService_Class CppClassParent;
  typedef GSocketServiceClass BaseClassParent;

  friend class ThreadedSocketService;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static gboolean run_callback(GThreadedSocketService* self, GSocketConnection* p0, GObject* p1);

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_THREADEDSOCKETSERVICE_P_H */

