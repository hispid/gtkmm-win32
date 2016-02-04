// Generated by gmmproc 2.47.3.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <atkmm/selection.h>
#include <atkmm/private/selection_p.h>


// -*- c++ -*-
/* $Id: selection.ccg,v 1.1 2003/01/21 13:37:07 murrayc Exp $ */

/* Copyright 1998-2002 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <atkmm/object.h>
#include <atk/atkselection.h>


namespace
{


static const Glib::SignalProxyInfo Selection_signal_selection_changed_info =
{
  "selection_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Atk::Selection> wrap(AtkSelection* object, bool take_copy)
{
  return Glib::RefPtr<Atk::Selection>( dynamic_cast<Atk::Selection*> (Glib::wrap_auto_interface<Atk::Selection> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Atk
{


/* The *_Class implementation: */

const Glib::Interface_Class& Selection_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Selection_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = atk_selection_get_type();
  }

  return *this;
}

void Selection_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr); 

  klass->add_selection = &add_selection_vfunc_callback;
  klass->clear_selection = &clear_selection_vfunc_callback;
  klass->ref_selection = &ref_selection_vfunc_callback;
  klass->get_selection_count = &get_selection_count_vfunc_callback;
  klass->is_child_selected = &is_child_selected_vfunc_callback;
  klass->remove_selection = &remove_selection_vfunc_callback;
  klass->select_all_selection = &select_all_selection_vfunc_callback;

  klass->selection_changed = &selection_changed_callback;
}

gboolean Selection_Class::add_selection_vfunc_callback(AtkSelection* self, gint i)
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
        return static_cast<int>(obj->add_selection_vfunc(i
));
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->add_selection)
  {
    gboolean retval = (*base->add_selection)(self, i);
    return retval;
  }

  typedef gboolean RType;
  return RType();
}
gboolean Selection_Class::clear_selection_vfunc_callback(AtkSelection* self)
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
        return static_cast<int>(obj->clear_selection_vfunc());
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->clear_selection)
  {
    gboolean retval = (*base->clear_selection)(self);
    return retval;
  }

  typedef gboolean RType;
  return RType();
}
AtkObject* Selection_Class::ref_selection_vfunc_callback(AtkSelection* self, gint i)
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
        return Glib::unwrap_copy(obj->get_selection_vfunc(i
));
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->ref_selection)
  {
    AtkObject* retval = (*base->ref_selection)(self, i);
    return retval;
  }

  typedef AtkObject* RType;
  return RType();
}
gint Selection_Class::get_selection_count_vfunc_callback(AtkSelection* self)
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
        return obj->get_selection_count_vfunc();
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_selection_count)
  {
    gint retval = (*base->get_selection_count)(self);
    return retval;
  }

  typedef gint RType;
  return RType();
}
gboolean Selection_Class::is_child_selected_vfunc_callback(AtkSelection* self, gint i)
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
        return static_cast<int>(obj->is_child_selected_vfunc(i
));
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->is_child_selected)
  {
    gboolean retval = (*base->is_child_selected)(self, i);
    return retval;
  }

  typedef gboolean RType;
  return RType();
}
gboolean Selection_Class::remove_selection_vfunc_callback(AtkSelection* self, gint i)
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
        return static_cast<int>(obj->remove_selection_vfunc(i
));
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->remove_selection)
  {
    gboolean retval = (*base->remove_selection)(self, i);
    return retval;
  }

  typedef gboolean RType;
  return RType();
}
gboolean Selection_Class::select_all_selection_vfunc_callback(AtkSelection* self)
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
        return static_cast<int>(obj->select_all_selection_vfunc());
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->select_all_selection)
  {
    gboolean retval = (*base->select_all_selection)(self);
    return retval;
  }

  typedef gboolean RType;
  return RType();
}

void Selection_Class::selection_changed_callback(AtkSelection* self)
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
        obj->on_selection_changed();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->selection_changed)
    (*base->selection_changed)(self);
}


Glib::ObjectBase* Selection_Class::wrap_new(GObject* object)
{
  return new Selection((AtkSelection*)(object));
}


/* The implementation: */

Selection::Selection()
:
  Glib::Interface(selection_class_.init())
{}

Selection::Selection(AtkSelection* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Selection::Selection(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Selection::Selection(Selection&& src) noexcept
: Glib::Interface(std::move(src))
{}

Selection& Selection::operator=(Selection&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

Selection::~Selection() noexcept
{}

// static
void Selection::add_interface(GType gtype_implementer)
{
  selection_class_.init().add_interface(gtype_implementer);
}

Selection::CppClassType Selection::selection_class_; // initialize static member

GType Selection::get_type()
{
  return selection_class_.init().get_type();
}


GType Selection::get_base_type()
{
  return atk_selection_get_type();
}


bool Selection::add_selection(int i)
{
  return atk_selection_add_selection(gobj(), i);
}

bool Selection::clear_selection()
{
  return atk_selection_clear_selection(gobj());
}

Glib::RefPtr<Atk::Object> Selection::get_selection(int i)
{
  return Glib::wrap(atk_selection_ref_selection(gobj(), i));
}

int Selection::get_selection_count() const
{
  return atk_selection_get_selection_count(const_cast<AtkSelection*>(gobj()));
}

bool Selection::is_child_selected(int i) const
{
  return atk_selection_is_child_selected(const_cast<AtkSelection*>(gobj()), i);
}

bool Selection::remove_selection(int i)
{
  return atk_selection_remove_selection(gobj(), i);
}

bool Selection::select_all_selection()
{
  return atk_selection_select_all_selection(gobj());
}


Glib::SignalProxy0< void > Selection::signal_selection_changed()
{
  return Glib::SignalProxy0< void >(this, &Selection_signal_selection_changed_info);
}


void Atk::Selection::on_selection_changed()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->selection_changed)
    (*base->selection_changed)(gobj());
}

bool Atk::Selection::add_selection_vfunc(int i) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->add_selection)
  {
    bool retval((*base->add_selection)(gobj(),i));
    return retval;
  }

  typedef bool RType;
  return RType();
}
bool Atk::Selection::clear_selection_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->clear_selection)
  {
    bool retval((*base->clear_selection)(gobj()));
    return retval;
  }

  typedef bool RType;
  return RType();
}
Glib::RefPtr<Atk::Object> Atk::Selection::get_selection_vfunc(int i) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->ref_selection)
  {
    Glib::RefPtr<Atk::Object> retval(Glib::wrap((*base->ref_selection)(gobj(),i)));
    return retval;
  }

  typedef Glib::RefPtr<Atk::Object> RType;
  return RType();
}
int Atk::Selection::get_selection_count_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_selection_count)
  {
    int retval((*base->get_selection_count)(const_cast<AtkSelection*>(gobj())));
    return retval;
  }

  typedef int RType;
  return RType();
}
bool Atk::Selection::is_child_selected_vfunc(int i) const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->is_child_selected)
  {
    bool retval((*base->is_child_selected)(const_cast<AtkSelection*>(gobj()),i));
    return retval;
  }

  typedef bool RType;
  return RType();
}
bool Atk::Selection::remove_selection_vfunc(int i) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->remove_selection)
  {
    bool retval((*base->remove_selection)(gobj(),i));
    return retval;
  }

  typedef bool RType;
  return RType();
}
bool Atk::Selection::select_all_selection_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->select_all_selection)
  {
    bool retval((*base->select_all_selection)(gobj()));
    return retval;
  }

  typedef bool RType;
  return RType();
}


} // namespace Atk

