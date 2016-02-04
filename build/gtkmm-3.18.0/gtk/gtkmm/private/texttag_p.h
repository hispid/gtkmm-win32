// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_TEXTTAG_P_H
#define _GTKMM_TEXTTAG_P_H


#include <glibmm/private/object_p.h>
#include <gtk/gtk.h>

#include <glibmm/class.h>

namespace Gtk
{

class TextTag_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef TextTag CppObjectType;
  typedef GtkTextTag BaseObjectType;
  typedef GtkTextTagClass BaseClassType;
  typedef Glib::Object_Class CppClassParent;
  typedef GObjectClass BaseClassParent;

  friend class TextTag;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static gboolean event_callback(GtkTextTag* self, GObject* p0, GdkEvent* p1, const GtkTextIter* p2);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_TEXTTAG_P_H */

