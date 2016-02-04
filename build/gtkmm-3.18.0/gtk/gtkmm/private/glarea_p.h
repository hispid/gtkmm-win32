// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_GLAREA_P_H
#define _GTKMM_GLAREA_P_H


#include <gtkmm/private/widget_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class GLArea_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef GLArea CppObjectType;
  typedef GtkGLArea BaseObjectType;
  typedef GtkGLAreaClass BaseClassType;
  typedef Gtk::Widget_Class CppClassParent;
  typedef GtkWidgetClass BaseClassParent;

  friend class GLArea;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static GdkGLContext* create_context_callback(GtkGLArea* self);
  static gboolean render_callback(GtkGLArea* self, GdkGLContext* p0);
  static void resize_callback(GtkGLArea* self, gint p0, gint p1);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_GLAREA_P_H */
