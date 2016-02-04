// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_SCALE_P_H
#define _GTKMM_SCALE_P_H


#include <gtkmm/private/range_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class Scale_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Scale CppObjectType;
  typedef GtkScale BaseObjectType;
  typedef GtkScaleClass BaseClassType;
  typedef Gtk::Range_Class CppClassParent;
  typedef GtkRangeClass BaseClassParent;

  friend class Scale;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static gchar* format_value_callback(GtkScale* self, gdouble p0);

  //Callbacks (virtual functions):
  static void draw_value_vfunc_callback(GtkScale* self);
};


} // namespace Gtk


#endif /* _GTKMM_SCALE_P_H */

