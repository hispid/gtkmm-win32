// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/socketcontrolmessage.h>
#include <giomm/private/socketcontrolmessage_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 The giomm Development Team
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

#include <gio/gio.h>
#include <glibmm/exceptionhandler.h>

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::SocketControlMessage> wrap(GSocketControlMessage* object, bool take_copy)
{
  return Glib::RefPtr<Gio::SocketControlMessage>( dynamic_cast<Gio::SocketControlMessage*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& SocketControlMessage_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SocketControlMessage_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_socket_control_message_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void SocketControlMessage_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->get_size = &get_size_vfunc_callback;
  klass->get_level = &get_level_vfunc_callback;
  klass->get_type = &get_type_vfunc_callback;
  klass->serialize = &serialize_vfunc_callback;

}

gsize SocketControlMessage_Class::get_size_vfunc_callback(GSocketControlMessage* self)
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
        return obj->get_size_vfunc();
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->get_size)
  {
    gsize retval = (*base->get_size)(self);
    return retval;
  }

  typedef gsize RType;
  return RType();
}
int SocketControlMessage_Class::get_level_vfunc_callback(GSocketControlMessage* self)
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
        return obj->get_level_vfunc();
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->get_level)
  {
    int retval = (*base->get_level)(self);
    return retval;
  }

  typedef int RType;
  return RType();
}
int SocketControlMessage_Class::get_type_vfunc_callback(GSocketControlMessage* self)
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
        return obj->get_type_vfunc();
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->get_type)
  {
    int retval = (*base->get_type)(self);
    return retval;
  }

  typedef int RType;
  return RType();
}
void SocketControlMessage_Class::serialize_vfunc_callback(GSocketControlMessage* self, gpointer data)
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
        obj->serialize_vfunc(data);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->serialize)
  {
    (*base->serialize)(self, data);
  }

}


Glib::ObjectBase* SocketControlMessage_Class::wrap_new(GObject* object)
{
  return new SocketControlMessage((GSocketControlMessage*)object);
}


/* The implementation: */

GSocketControlMessage* SocketControlMessage::gobj_copy()
{
  reference();
  return gobj();
}

SocketControlMessage::SocketControlMessage(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

SocketControlMessage::SocketControlMessage(GSocketControlMessage* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


SocketControlMessage::SocketControlMessage(SocketControlMessage&& src) noexcept
: Glib::Object(std::move(src))
{}

SocketControlMessage& SocketControlMessage::operator=(SocketControlMessage&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}

SocketControlMessage::~SocketControlMessage() noexcept
{}


SocketControlMessage::CppClassType SocketControlMessage::socketcontrolmessage_class_; // initialize static member

GType SocketControlMessage::get_type()
{
  return socketcontrolmessage_class_.init().get_type();
}


GType SocketControlMessage::get_base_type()
{
  return g_socket_control_message_get_type();
}


SocketControlMessage::SocketControlMessage()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(socketcontrolmessage_class_.init()))
{
  

}

Glib::RefPtr<SocketControlMessage> SocketControlMessage::deserialize(int level, int type, gsize size, gpointer data)
{
  return Glib::wrap(g_socket_control_message_deserialize(level, type, size, data));
}

int SocketControlMessage::get_level() const
{
  return g_socket_control_message_get_level(const_cast<GSocketControlMessage*>(gobj()));
}

int SocketControlMessage::get_msg_type() const
{
  return g_socket_control_message_get_msg_type(const_cast<GSocketControlMessage*>(gobj()));
}

gsize SocketControlMessage::get_size() const
{
  return g_socket_control_message_get_size(const_cast<GSocketControlMessage*>(gobj()));
}

void SocketControlMessage::serialize(gpointer data)
{
  g_socket_control_message_serialize(gobj(), data);
}


gsize Gio::SocketControlMessage::get_size_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_size)
  {
    gsize retval((*base->get_size)(const_cast<GSocketControlMessage*>(gobj())));
    return retval;
  }

  typedef gsize RType;
  return RType();
}
int Gio::SocketControlMessage::get_level_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_level)
  {
    int retval((*base->get_level)(const_cast<GSocketControlMessage*>(gobj())));
    return retval;
  }

  typedef int RType;
  return RType();
}
int Gio::SocketControlMessage::get_type_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_type)
  {
    int retval((*base->get_type)(const_cast<GSocketControlMessage*>(gobj())));
    return retval;
  }

  typedef int RType;
  return RType();
}
void Gio::SocketControlMessage::serialize_vfunc(gpointer data) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->serialize)
  {
    (*base->serialize)(gobj(),data);
  }
}


} // namespace Gio

