// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/calendar.h>
#include <gtkmm/private/calendar_p.h>

#include <gtk/gtk.h>

/*
 * Copyright 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtk/gtk.h>

namespace
{
extern "C"
{
static gchar* SignalProxy_Details_gtk_callback(GtkCalendar*, guint year, guint month, guint day,
                                               gpointer user_data)
{
  auto the_slot = static_cast<Gtk::Calendar::SlotDetails*>(user_data);

  try
  {
    const auto temp = (*the_slot)(year, month, day);
    return g_strdup(temp.c_str()); //Freed by GtkCalendar.
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
  return 0; // arbitrary value
}

static void SignalProxy_Details_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::Calendar::SlotDetails*>(data);
}

} // extern "C"
} // anonymous namespace

namespace Gtk
{

void Calendar::get_date(Glib::Date& date) const
{
  guint year = 0;
  guint month = 0;
  guint day = 0;

  get_date(year, month, day);

  date.set_year(year);
  date.set_month(static_cast<Glib::Date::Month>(Glib::Date::JANUARY + month)); // Month from 1 to 12 instead from 0 to 11
  date.set_day(day);
}

void Calendar::set_detail_func(const SlotDetails& slot)
{
  auto slot_copy = new SlotDetails(slot);
  gtk_calendar_set_detail_func(gobj(), &SignalProxy_Details_gtk_callback, slot_copy, &SignalProxy_Details_gtk_callback_destroy);
}


} //namespace Gtk


namespace
{


static const Glib::SignalProxyInfo Calendar_signal_month_changed_info =
{
  "month_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Calendar_signal_day_selected_info =
{
  "day_selected",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Calendar_signal_day_selected_double_click_info =
{
  "day_selected_double_click",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Calendar_signal_prev_month_info =
{
  "prev_month",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Calendar_signal_next_month_info =
{
  "next_month",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Calendar_signal_prev_year_info =
{
  "prev_year",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Calendar_signal_next_year_info =
{
  "next_year",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::CalendarDisplayOptions>::value_type()
{
  return gtk_calendar_display_options_get_type();
}


namespace Glib
{

Gtk::Calendar* wrap(GtkCalendar* object, bool take_copy)
{
  return dynamic_cast<Gtk::Calendar *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Calendar_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Calendar_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_calendar_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Calendar_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->month_changed = &month_changed_callback;
  klass->day_selected = &day_selected_callback;
  klass->day_selected_double_click = &day_selected_double_click_callback;
  klass->prev_month = &prev_month_callback;
  klass->next_month = &next_month_callback;
  klass->prev_year = &prev_year_callback;
  klass->next_year = &next_year_callback;
}


void Calendar_Class::month_changed_callback(GtkCalendar* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_month_changed();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->month_changed)
    (*base->month_changed)(self);
}
void Calendar_Class::day_selected_callback(GtkCalendar* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_day_selected();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->day_selected)
    (*base->day_selected)(self);
}
void Calendar_Class::day_selected_double_click_callback(GtkCalendar* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_day_selected_double_click();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->day_selected_double_click)
    (*base->day_selected_double_click)(self);
}
void Calendar_Class::prev_month_callback(GtkCalendar* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_prev_month();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->prev_month)
    (*base->prev_month)(self);
}
void Calendar_Class::next_month_callback(GtkCalendar* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_next_month();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->next_month)
    (*base->next_month)(self);
}
void Calendar_Class::prev_year_callback(GtkCalendar* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_prev_year();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->prev_year)
    (*base->prev_year)(self);
}
void Calendar_Class::next_year_callback(GtkCalendar* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_next_year();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->next_year)
    (*base->next_year)(self);
}


Glib::ObjectBase* Calendar_Class::wrap_new(GObject* o)
{
  return manage(new Calendar((GtkCalendar*)(o)));

}


/* The implementation: */

Calendar::Calendar(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Calendar::Calendar(GtkCalendar* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


Calendar::Calendar(Calendar&& src) noexcept
: Gtk::Widget(std::move(src))
{}

Calendar& Calendar::operator=(Calendar&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  return *this;
}

Calendar::~Calendar() noexcept
{
  destroy_();
}

Calendar::CppClassType Calendar::calendar_class_; // initialize static member

GType Calendar::get_type()
{
  return calendar_class_.init().get_type();
}


GType Calendar::get_base_type()
{
  return gtk_calendar_get_type();
}


Calendar::Calendar()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Widget(Glib::ConstructParams(calendar_class_.init()))
{
  

}

void Calendar::select_month(guint month, guint year)
{
  gtk_calendar_select_month(gobj(), month, year);
}

void Calendar::select_day(guint day)
{
  gtk_calendar_select_day(gobj(), day);
}

void Calendar::mark_day(guint day)
{
  gtk_calendar_mark_day(gobj(), day);
}

void Calendar::unmark_day(guint day)
{
  gtk_calendar_unmark_day(gobj(), day);
}

void Calendar::clear_marks()
{
  gtk_calendar_clear_marks(gobj());
}

void Calendar::set_display_options(CalendarDisplayOptions flags)
{
  gtk_calendar_set_display_options(gobj(), ((GtkCalendarDisplayOptions)(flags)));
}

CalendarDisplayOptions Calendar::get_display_options() const
{
  return ((CalendarDisplayOptions)(gtk_calendar_get_display_options(const_cast<GtkCalendar*>(gobj()))));
}

void Calendar::get_date(guint& year, guint& month, guint& day) const
{
  gtk_calendar_get_date(const_cast<GtkCalendar*>(gobj()), &(year), &(month), &(day));
}

void Calendar::set_detail_width_chars(int chars)
{
  gtk_calendar_set_detail_width_chars(gobj(), chars);
}

void Calendar::set_detail_height_rows(int rows)
{
  gtk_calendar_set_detail_height_rows(gobj(), rows);
}

int Calendar::get_detail_width_chars() const
{
  return gtk_calendar_get_detail_width_chars(const_cast<GtkCalendar*>(gobj()));
}

int Calendar::get_detail_height_rows() const
{
  return gtk_calendar_get_detail_height_rows(const_cast<GtkCalendar*>(gobj()));
}

bool Calendar::get_day_is_marked(guint day) const
{
  return gtk_calendar_get_day_is_marked(const_cast<GtkCalendar*>(gobj()), day);
}


Glib::SignalProxy0< void > Calendar::signal_month_changed()
{
  return Glib::SignalProxy0< void >(this, &Calendar_signal_month_changed_info);
}


Glib::SignalProxy0< void > Calendar::signal_day_selected()
{
  return Glib::SignalProxy0< void >(this, &Calendar_signal_day_selected_info);
}


Glib::SignalProxy0< void > Calendar::signal_day_selected_double_click()
{
  return Glib::SignalProxy0< void >(this, &Calendar_signal_day_selected_double_click_info);
}


Glib::SignalProxy0< void > Calendar::signal_prev_month()
{
  return Glib::SignalProxy0< void >(this, &Calendar_signal_prev_month_info);
}


Glib::SignalProxy0< void > Calendar::signal_next_month()
{
  return Glib::SignalProxy0< void >(this, &Calendar_signal_next_month_info);
}


Glib::SignalProxy0< void > Calendar::signal_prev_year()
{
  return Glib::SignalProxy0< void >(this, &Calendar_signal_prev_year_info);
}


Glib::SignalProxy0< void > Calendar::signal_next_year()
{
  return Glib::SignalProxy0< void >(this, &Calendar_signal_next_year_info);
}


Glib::PropertyProxy< int > Calendar::property_year() 
{
  return Glib::PropertyProxy< int >(this, "year");
}

Glib::PropertyProxy_ReadOnly< int > Calendar::property_year() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "year");
}

Glib::PropertyProxy< int > Calendar::property_month() 
{
  return Glib::PropertyProxy< int >(this, "month");
}

Glib::PropertyProxy_ReadOnly< int > Calendar::property_month() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "month");
}

Glib::PropertyProxy< int > Calendar::property_day() 
{
  return Glib::PropertyProxy< int >(this, "day");
}

Glib::PropertyProxy_ReadOnly< int > Calendar::property_day() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "day");
}

Glib::PropertyProxy< bool > Calendar::property_show_heading() 
{
  return Glib::PropertyProxy< bool >(this, "show-heading");
}

Glib::PropertyProxy_ReadOnly< bool > Calendar::property_show_heading() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-heading");
}

Glib::PropertyProxy< bool > Calendar::property_show_day_names() 
{
  return Glib::PropertyProxy< bool >(this, "show-day-names");
}

Glib::PropertyProxy_ReadOnly< bool > Calendar::property_show_day_names() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-day-names");
}

Glib::PropertyProxy< bool > Calendar::property_no_month_change() 
{
  return Glib::PropertyProxy< bool >(this, "no-month-change");
}

Glib::PropertyProxy_ReadOnly< bool > Calendar::property_no_month_change() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "no-month-change");
}

Glib::PropertyProxy< bool > Calendar::property_show_week_numbers() 
{
  return Glib::PropertyProxy< bool >(this, "show-week-numbers");
}

Glib::PropertyProxy_ReadOnly< bool > Calendar::property_show_week_numbers() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-week-numbers");
}

Glib::PropertyProxy< bool > Calendar::property_show_details() 
{
  return Glib::PropertyProxy< bool >(this, "show-details");
}

Glib::PropertyProxy_ReadOnly< bool > Calendar::property_show_details() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-details");
}

Glib::PropertyProxy< int > Calendar::property_detail_width_chars() 
{
  return Glib::PropertyProxy< int >(this, "detail-width-chars");
}

Glib::PropertyProxy_ReadOnly< int > Calendar::property_detail_width_chars() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "detail-width-chars");
}

Glib::PropertyProxy< int > Calendar::property_detail_height_rows() 
{
  return Glib::PropertyProxy< int >(this, "detail-height-rows");
}

Glib::PropertyProxy_ReadOnly< int > Calendar::property_detail_height_rows() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "detail-height-rows");
}


void Gtk::Calendar::on_month_changed()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->month_changed)
    (*base->month_changed)(gobj());
}
void Gtk::Calendar::on_day_selected()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->day_selected)
    (*base->day_selected)(gobj());
}
void Gtk::Calendar::on_day_selected_double_click()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->day_selected_double_click)
    (*base->day_selected_double_click)(gobj());
}
void Gtk::Calendar::on_prev_month()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->prev_month)
    (*base->prev_month)(gobj());
}
void Gtk::Calendar::on_next_month()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->next_month)
    (*base->next_month)(gobj());
}
void Gtk::Calendar::on_prev_year()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->prev_year)
    (*base->prev_year)(gobj());
}
void Gtk::Calendar::on_next_year()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->next_year)
    (*base->next_year)(gobj());
}


} // namespace Gtk


