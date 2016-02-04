// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_WIDGET_P_H
#define _GTKMM_WIDGET_P_H


#include <gtkmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class Widget_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Widget CppObjectType;
  typedef GtkWidget BaseObjectType;
  typedef GtkWidgetClass BaseClassType;
  typedef Object_Class CppClassParent;
  typedef GObjectClass BaseClassParent;

  friend class Widget;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void show_callback(GtkWidget* self);
  static void hide_callback(GtkWidget* self);
  static void map_callback(GtkWidget* self);
  static void unmap_callback(GtkWidget* self);
  static void realize_callback(GtkWidget* self);
  static void unrealize_callback(GtkWidget* self);
  static void size_allocate_callback(GtkWidget* self, GdkRectangle* p0);
#ifndef GTKMM_DISABLE_DEPRECATED

  static void state_changed_callback(GtkWidget* self, GtkStateType p0);
#endif // GTKMM_DISABLE_DEPRECATED

  static void parent_set_callback(GtkWidget* self, GtkWidget* p0);
  static void hierarchy_changed_callback(GtkWidget* self, GtkWidget* p0);
  static void style_updated_callback(GtkWidget* self);
  static void direction_changed_callback(GtkWidget* self, GtkTextDirection p0);
  static void grab_notify_callback(GtkWidget* self, gboolean p0);
  static void child_notify_callback(GtkWidget* self, GParamSpec* p0);
  static gboolean mnemonic_activate_callback(GtkWidget* self, gboolean p0);
  static void grab_focus_callback(GtkWidget* self);
  static gboolean focus_callback(GtkWidget* self, GtkDirectionType p0);
  static gboolean event_callback(GtkWidget* self, GdkEvent* p0);
  static gboolean button_press_event_callback(GtkWidget* self, GdkEventButton* p0);
  static gboolean button_release_event_callback(GtkWidget* self, GdkEventButton* p0);
  static gboolean scroll_event_callback(GtkWidget* self, GdkEventScroll* p0);
  static gboolean motion_notify_event_callback(GtkWidget* self, GdkEventMotion* p0);
  static gboolean delete_event_callback(GtkWidget* self, GdkEventAny* p0);
  static gboolean draw_callback(GtkWidget* self, cairo_t* p0);
  static gboolean key_press_event_callback(GtkWidget* self, GdkEventKey* p0);
  static gboolean key_release_event_callback(GtkWidget* self, GdkEventKey* p0);
  static gboolean enter_notify_event_callback(GtkWidget* self, GdkEventCrossing* p0);
  static gboolean leave_notify_event_callback(GtkWidget* self, GdkEventCrossing* p0);
  static gboolean configure_event_callback(GtkWidget* self, GdkEventConfigure* p0);
  static gboolean focus_in_event_callback(GtkWidget* self, GdkEventFocus* p0);
  static gboolean focus_out_event_callback(GtkWidget* self, GdkEventFocus* p0);
  static gboolean map_event_callback(GtkWidget* self, GdkEventAny* p0);
  static gboolean unmap_event_callback(GtkWidget* self, GdkEventAny* p0);
  static gboolean property_notify_event_callback(GtkWidget* self, GdkEventProperty* p0);
  static gboolean selection_clear_event_callback(GtkWidget* self, GdkEventSelection* p0);
  static gboolean selection_request_event_callback(GtkWidget* self, GdkEventSelection* p0);
  static gboolean selection_notify_event_callback(GtkWidget* self, GdkEventSelection* p0);
  static gboolean proximity_in_event_callback(GtkWidget* self, GdkEventProximity* p0);
  static gboolean proximity_out_event_callback(GtkWidget* self, GdkEventProximity* p0);
#ifndef GTKMM_DISABLE_DEPRECATED

  static gboolean visibility_notify_event_callback(GtkWidget* self, GdkEventVisibility* p0);
#endif // GTKMM_DISABLE_DEPRECATED

  static gboolean window_state_event_callback(GtkWidget* self, GdkEventWindowState* p0);
  static void selection_get_callback(GtkWidget* self, GtkSelectionData* p0, guint p1, guint p2);
  static void selection_received_callback(GtkWidget* self, GtkSelectionData* p0, guint p1);
  static void drag_begin_callback(GtkWidget* self, GdkDragContext* p0);
  static void drag_end_callback(GtkWidget* self, GdkDragContext* p0);
  static void drag_data_get_callback(GtkWidget* self, GdkDragContext* p0, GtkSelectionData* p1, guint p2, guint p3);
  static void drag_data_delete_callback(GtkWidget* self, GdkDragContext* p0);
  static void drag_leave_callback(GtkWidget* self, GdkDragContext* p0, guint p1);
  static gboolean drag_motion_callback(GtkWidget* self, GdkDragContext* p0, gint p1, gint p2, guint p3);
  static gboolean drag_drop_callback(GtkWidget* self, GdkDragContext* p0, gint p1, gint p2, guint p3);
  static void drag_data_received_callback(GtkWidget* self, GdkDragContext* p0, gint p1, gint p2, GtkSelectionData* p3, guint p4, guint p5);
  static void screen_changed_callback(GtkWidget* self, GdkScreen* p0);
    static void hierarchy_changed_callback_custom(GtkWidget* self, GtkWidget* p0);
      static void parent_set_callback_custom(GtkWidget* self, GtkWidget* p0);
  
  //Callbacks (virtual functions):
    static void dispose_vfunc_callback(GObject* self);
    static void dispatch_child_properties_changed_vfunc_callback(GtkWidget* self, guint n_pspecs, GParamSpec** pspecs);
  static void show_all_vfunc_callback(GtkWidget* self);
#ifdef GTKMM_ATKMM_ENABLED
  static AtkObject* get_accessible_vfunc_callback(GtkWidget* self);
#endif // GTKMM_ATKMM_ENABLED
  static GtkSizeRequestMode get_request_mode_vfunc_callback(GtkWidget* self);
  static void get_preferred_width_vfunc_callback(GtkWidget* self, gint* minimum_width, gint* natural_width);
  static void get_preferred_height_for_width_vfunc_callback(GtkWidget* self, gint width, gint* minimum_height, gint* natural_height);
  static void get_preferred_height_vfunc_callback(GtkWidget* self, gint* minimum_height, gint* natural_height);
  static void get_preferred_width_for_height_vfunc_callback(GtkWidget* self, gint height, gint* minimum_width, gint* natural_width);
};


} // namespace Gtk


#endif /* _GTKMM_WIDGET_P_H */

