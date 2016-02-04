// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_COMBOBOX_P_H
#define _GTKMM_COMBOBOX_P_H


#include <gtkmm/private/bin_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class ComboBox_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ComboBox CppObjectType;
  typedef GtkComboBox BaseObjectType;
  typedef GtkComboBoxClass BaseClassType;
  typedef Gtk::Bin_Class CppClassParent;
  typedef GtkBinClass BaseClassParent;

  friend class ComboBox;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void changed_callback(GtkComboBox* self);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_COMBOBOX_P_H */

