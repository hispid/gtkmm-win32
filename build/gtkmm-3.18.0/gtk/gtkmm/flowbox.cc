// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/flowbox.h>
#include <gtkmm/private/flowbox_p.h>


/* Copyright (C) 2014 The gtkmm Development Team
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>
#include <gtkmm/adjustment.h>

namespace
{

static void FuncProxy_Foreach_gtk_callback(GtkFlowBox* box, GtkFlowBoxChild* child, void* data)
{
  auto the_slot = static_cast<Gtk::FlowBox::SlotSelectedForeach*>(data);

  try
  {
    (*the_slot)(Glib::wrap(box), Glib::wrap(child));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

static gboolean SignalProxy_Filter_gtk_callback(GtkFlowBoxChild* child, void* data)
{
  auto the_slot = static_cast<Gtk::FlowBox::SlotFilter*>(data);

  try
  {
    return (*the_slot)(Glib::wrap(child));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
    return FALSE;
  }
}

static void SignalProxy_Filter_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::FlowBox::SlotFilter*>(data);
}

static gint SignalProxy_Sort_gtk_callback(GtkFlowBoxChild* child1, GtkFlowBoxChild* child2, void* data)
{
  auto the_slot = static_cast<Gtk::FlowBox::SlotSort*>(data);

  try
  {
    return (*the_slot)(Glib::wrap(child1), Glib::wrap(child2));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
    return 0;
  }
}

static void SignalProxy_Sort_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::FlowBox::SlotSort*>(data);
}

} // anonymous namespace

namespace Gtk
{

void FlowBox::selected_foreach(const SlotSelectedForeach& slot)
{
  SlotSelectedForeach slot_local_copy(slot);

  gtk_flow_box_selected_foreach(gobj(),
    &FuncProxy_Foreach_gtk_callback, &slot_local_copy);
}

void FlowBox::set_filter_func(const SlotFilter& slot)
{
  // Create a copy of the slot object. A pointer to this will be passed
  // through the callback's data parameter. It will be deleted
  // when SignalProxy_Filter_gtk_callback_destroy() is called.
  auto slot_copy = new SlotFilter(slot);

  gtk_flow_box_set_filter_func(gobj(),
    &SignalProxy_Filter_gtk_callback, slot_copy,
    &SignalProxy_Filter_gtk_callback_destroy);
}

void FlowBox::unset_filter_func()
{
  gtk_flow_box_set_filter_func(gobj(), 0, 0, 0);
}

void FlowBox::set_sort_func(const SlotSort& slot)
{
  // Create a copy of the slot object. A pointer to this will be passed
  // through the callback's data parameter. It will be deleted
  // when SignalProxy_Sort_gtk_callback_destroy() is called.
  auto slot_copy = new SlotSort(slot);

  gtk_flow_box_set_sort_func(gobj(),
    &SignalProxy_Sort_gtk_callback, slot_copy,
    &SignalProxy_Sort_gtk_callback_destroy);
}

void FlowBox::unset_sort_func()
{
  gtk_flow_box_set_sort_func(gobj(), 0, 0, 0);
}

} //namespace Gtk


namespace
{


static void FlowBox_signal_child_activated_callback(GtkFlowBox* self, GtkFlowBoxChild* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,FlowBoxChild* > SlotType;

  auto obj = dynamic_cast<FlowBox*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo FlowBox_signal_child_activated_info =
{
  "child-activated",
  (GCallback) &FlowBox_signal_child_activated_callback,
  (GCallback) &FlowBox_signal_child_activated_callback
};


static const Glib::SignalProxyInfo FlowBox_signal_selected_children_changed_info =
{
  "selected-children-changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::FlowBox* wrap(GtkFlowBox* object, bool take_copy)
{
  return dynamic_cast<Gtk::FlowBox *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& FlowBox_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FlowBox_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_flow_box_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Orientable::add_interface(get_type());

  }

  return *this;
}


void FlowBox_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->child_activated = &child_activated_callback;
  klass->selected_children_changed = &selected_children_changed_callback;
}


void FlowBox_Class::child_activated_callback(GtkFlowBox* self, GtkFlowBoxChild* p0)
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
        obj->on_child_activated(Glib::wrap(p0)
);
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
  if(base && base->child_activated)
    (*base->child_activated)(self, p0);
}
void FlowBox_Class::selected_children_changed_callback(GtkFlowBox* self)
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
        obj->on_selected_children_changed();
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
  if(base && base->selected_children_changed)
    (*base->selected_children_changed)(self);
}


Glib::ObjectBase* FlowBox_Class::wrap_new(GObject* o)
{
  return manage(new FlowBox((GtkFlowBox*)(o)));

}


/* The implementation: */

FlowBox::FlowBox(const Glib::ConstructParams& construct_params)
:
  Gtk::Container(construct_params)
{
  }

FlowBox::FlowBox(GtkFlowBox* castitem)
:
  Gtk::Container((GtkContainer*)(castitem))
{
  }


FlowBox::FlowBox(FlowBox&& src) noexcept
: Gtk::Container(std::move(src))
  , Orientable(std::move(src))
{}

FlowBox& FlowBox::operator=(FlowBox&& src) noexcept
{
  Gtk::Container::operator=(std::move(src));
  Orientable::operator=(std::move(src));
  return *this;
}

FlowBox::~FlowBox() noexcept
{
  destroy_();
}

FlowBox::CppClassType FlowBox::flowbox_class_; // initialize static member

GType FlowBox::get_type()
{
  return flowbox_class_.init().get_type();
}


GType FlowBox::get_base_type()
{
  return gtk_flow_box_get_type();
}


FlowBox::FlowBox()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Container(Glib::ConstructParams(flowbox_class_.init()))
{
  

}

void FlowBox::set_homogeneous(bool homogeneous)
{
  gtk_flow_box_set_homogeneous(gobj(), static_cast<int>(homogeneous));
}

bool FlowBox::get_homogeneous() const
{
  return gtk_flow_box_get_homogeneous(const_cast<GtkFlowBox*>(gobj()));
}

void FlowBox::set_row_spacing(guint spacing)
{
  gtk_flow_box_set_row_spacing(gobj(), spacing);
}

guint FlowBox::get_row_spacing() const
{
  return gtk_flow_box_get_row_spacing(const_cast<GtkFlowBox*>(gobj()));
}

void FlowBox::set_column_spacing(guint spacing)
{
  gtk_flow_box_set_column_spacing(gobj(), spacing);
}

guint FlowBox::get_column_spacing() const
{
  return gtk_flow_box_get_column_spacing(const_cast<GtkFlowBox*>(gobj()));
}

void FlowBox::set_min_children_per_line(guint n_children)
{
  gtk_flow_box_set_min_children_per_line(gobj(), n_children);
}

guint FlowBox::get_min_children_per_line() const
{
  return gtk_flow_box_get_min_children_per_line(const_cast<GtkFlowBox*>(gobj()));
}

void FlowBox::set_max_children_per_line(guint n_children)
{
  gtk_flow_box_set_max_children_per_line(gobj(), n_children);
}

guint FlowBox::get_max_children_per_line() const
{
  return gtk_flow_box_get_max_children_per_line(const_cast<GtkFlowBox*>(gobj()));
}

void FlowBox::set_activate_on_single_click(bool single)
{
  gtk_flow_box_set_activate_on_single_click(gobj(), static_cast<int>(single));
}

bool FlowBox::get_activate_on_single_click() const
{
  return gtk_flow_box_get_activate_on_single_click(const_cast<GtkFlowBox*>(gobj()));
}

void FlowBox::insert(Widget& widget, int position)
{
  gtk_flow_box_insert(gobj(), (widget).gobj(), position);
}

FlowBoxChild* FlowBox::get_child_at_index(int idx)
{
  return Glib::wrap(gtk_flow_box_get_child_at_index(gobj(), idx));
}

const FlowBoxChild* FlowBox::get_child_at_index(int idx) const
{
  return const_cast<FlowBox*>(this)->get_child_at_index(idx);
}

std::vector< Gtk::FlowBoxChild*> FlowBox::get_selected_children()
{
  return Glib::ListHandler< Gtk::FlowBoxChild* >::list_to_vector(gtk_flow_box_get_selected_children(gobj()), Glib::OWNERSHIP_SHALLOW);
}

std::vector< const Gtk::FlowBoxChild*> FlowBox::get_selected_children() const
{
  return Glib::ListHandler< const Gtk::FlowBoxChild* >::list_to_vector(gtk_flow_box_get_selected_children(const_cast<GtkFlowBox*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}

void FlowBox::select_child(FlowBoxChild& child)
{
  gtk_flow_box_select_child(gobj(), (child).gobj());
}

void FlowBox::unselect_child(FlowBoxChild& child)
{
  gtk_flow_box_unselect_child(gobj(), (child).gobj());
}

void FlowBox::select_all()
{
  gtk_flow_box_select_all(gobj());
}

void FlowBox::unselect_all()
{
  gtk_flow_box_unselect_all(gobj());
}

void FlowBox::set_selection_mode(SelectionMode mode)
{
  gtk_flow_box_set_selection_mode(gobj(), ((GtkSelectionMode)(mode)));
}

SelectionMode FlowBox::get_selection_mode() const
{
  return ((SelectionMode)(gtk_flow_box_get_selection_mode(const_cast<GtkFlowBox*>(gobj()))));
}

void FlowBox::set_hadjustment(const Glib::RefPtr<Adjustment>& adjustment)
{
  gtk_flow_box_set_hadjustment(gobj(), Glib::unwrap(adjustment));
}

void FlowBox::set_vadjustment(const Glib::RefPtr<Adjustment>& adjustment)
{
  gtk_flow_box_set_vadjustment(gobj(), Glib::unwrap(adjustment));
}

void FlowBox::invalidate_filter()
{
  gtk_flow_box_invalidate_filter(gobj());
}

void FlowBox::invalidate_sort()
{
  gtk_flow_box_invalidate_sort(gobj());
}


Glib::SignalProxy1< void,FlowBoxChild* > FlowBox::signal_child_activated()
{
  return Glib::SignalProxy1< void,FlowBoxChild* >(this, &FlowBox_signal_child_activated_info);
}


Glib::SignalProxy0< void > FlowBox::signal_selected_children_changed()
{
  return Glib::SignalProxy0< void >(this, &FlowBox_signal_selected_children_changed_info);
}


Glib::PropertyProxy< SelectionMode > FlowBox::property_selection_mode() 
{
  return Glib::PropertyProxy< SelectionMode >(this, "selection-mode");
}

Glib::PropertyProxy_ReadOnly< SelectionMode > FlowBox::property_selection_mode() const
{
  return Glib::PropertyProxy_ReadOnly< SelectionMode >(this, "selection-mode");
}

Glib::PropertyProxy< bool > FlowBox::property_activate_on_single_click() 
{
  return Glib::PropertyProxy< bool >(this, "activate-on-single-click");
}

Glib::PropertyProxy_ReadOnly< bool > FlowBox::property_activate_on_single_click() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "activate-on-single-click");
}

Glib::PropertyProxy< bool > FlowBox::property_homogeneous() 
{
  return Glib::PropertyProxy< bool >(this, "homogeneous");
}

Glib::PropertyProxy_ReadOnly< bool > FlowBox::property_homogeneous() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "homogeneous");
}

Glib::PropertyProxy< guint > FlowBox::property_min_children_per_line() 
{
  return Glib::PropertyProxy< guint >(this, "min-children-per-line");
}

Glib::PropertyProxy_ReadOnly< guint > FlowBox::property_min_children_per_line() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "min-children-per-line");
}

Glib::PropertyProxy< guint > FlowBox::property_max_children_per_line() 
{
  return Glib::PropertyProxy< guint >(this, "max-children-per-line");
}

Glib::PropertyProxy_ReadOnly< guint > FlowBox::property_max_children_per_line() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "max-children-per-line");
}

Glib::PropertyProxy< guint > FlowBox::property_row_spacing() 
{
  return Glib::PropertyProxy< guint >(this, "row-spacing");
}

Glib::PropertyProxy_ReadOnly< guint > FlowBox::property_row_spacing() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "row-spacing");
}

Glib::PropertyProxy< guint > FlowBox::property_column_spacing() 
{
  return Glib::PropertyProxy< guint >(this, "column-spacing");
}

Glib::PropertyProxy_ReadOnly< guint > FlowBox::property_column_spacing() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "column-spacing");
}


void Gtk::FlowBox::on_child_activated(FlowBoxChild* child)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->child_activated)
    (*base->child_activated)(gobj(),(GtkFlowBoxChild*)Glib::unwrap(child));
}
void Gtk::FlowBox::on_selected_children_changed()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->selected_children_changed)
    (*base->selected_children_changed)(gobj());
}


} // namespace Gtk


