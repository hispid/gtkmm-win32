// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/mountoperation.h>
#include <giomm/private/mountoperation_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
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

namespace
{


static void MountOperation_signal_ask_password_callback(GMountOperation* self, const gchar* p0,const gchar* p1,const gchar* p2,GAskPasswordFlags p3,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::ustring&,const Glib::ustring&,const Glib::ustring&,AskPasswordFlags > SlotType;

  auto obj = dynamic_cast<MountOperation*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
, Glib::convert_const_gchar_ptr_to_ustring(p1)
, Glib::convert_const_gchar_ptr_to_ustring(p2)
, ((AskPasswordFlags)(p3))
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo MountOperation_signal_ask_password_info =
{
  "ask_password",
  (GCallback) &MountOperation_signal_ask_password_callback,
  (GCallback) &MountOperation_signal_ask_password_callback
};


static void MountOperation_signal_ask_question_callback(GMountOperation* self, const gchar* p0,const gchar** p1,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::ustring&,const Glib::StringArrayHandle& > SlotType;

  auto obj = dynamic_cast<MountOperation*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
, Glib::StringArrayHandle(p1, Glib::OWNERSHIP_DEEP)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo MountOperation_signal_ask_question_info =
{
  "ask_question",
  (GCallback) &MountOperation_signal_ask_question_callback,
  (GCallback) &MountOperation_signal_ask_question_callback
};


static void MountOperation_signal_reply_callback(GMountOperation* self, GMountOperationResult p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,MountOperationResult > SlotType;

  auto obj = dynamic_cast<MountOperation*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(((MountOperationResult)(p0))
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo MountOperation_signal_reply_info =
{
  "reply",
  (GCallback) &MountOperation_signal_reply_callback,
  (GCallback) &MountOperation_signal_reply_callback
};


static const Glib::SignalProxyInfo MountOperation_signal_aborted_info =
{
  "aborted",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static void MountOperation_signal_show_unmount_progress_callback(GMountOperation* self, const gchar* p0,gint64 p1,gint64 p2,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::ustring&,gint64,gint64 > SlotType;

  auto obj = dynamic_cast<MountOperation*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
, p1, p2);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo MountOperation_signal_show_unmount_progress_info =
{
  "show_unmount_progress",
  (GCallback) &MountOperation_signal_show_unmount_progress_callback,
  (GCallback) &MountOperation_signal_show_unmount_progress_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::MountOperation> wrap(GMountOperation* object, bool take_copy)
{
  return Glib::RefPtr<Gio::MountOperation>( dynamic_cast<Gio::MountOperation*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& MountOperation_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MountOperation_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_mount_operation_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void MountOperation_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->ask_password = &ask_password_callback;
  klass->ask_question = &ask_question_callback;
  klass->reply = &reply_callback;
}


void MountOperation_Class::ask_password_callback(GMountOperation* self, const gchar* p0, const gchar* p1, const gchar* p2, GAskPasswordFlags p3)
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
        obj->on_ask_password(Glib::convert_const_gchar_ptr_to_ustring(p0)
, Glib::convert_const_gchar_ptr_to_ustring(p1)
, Glib::convert_const_gchar_ptr_to_ustring(p2)
, ((AskPasswordFlags)(p3))
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
  if(base && base->ask_password)
    (*base->ask_password)(self, p0, p1, p2, p3);
}
void MountOperation_Class::ask_question_callback(GMountOperation* self, const gchar* p0, const gchar** p1)
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
        obj->on_ask_question(Glib::convert_const_gchar_ptr_to_ustring(p0)
, Glib::StringArrayHandle(p1, Glib::OWNERSHIP_DEEP)
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
  if(base && base->ask_question)
    (*base->ask_question)(self, p0, p1);
}
void MountOperation_Class::reply_callback(GMountOperation* self, GMountOperationResult p0)
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
        obj->on_reply(((MountOperationResult)(p0))
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
  if(base && base->reply)
    (*base->reply)(self, p0);
}


Glib::ObjectBase* MountOperation_Class::wrap_new(GObject* object)
{
  return new MountOperation((GMountOperation*)object);
}


/* The implementation: */

GMountOperation* MountOperation::gobj_copy()
{
  reference();
  return gobj();
}

MountOperation::MountOperation(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

MountOperation::MountOperation(GMountOperation* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


MountOperation::MountOperation(MountOperation&& src) noexcept
: Glib::Object(std::move(src))
{}

MountOperation& MountOperation::operator=(MountOperation&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}

MountOperation::~MountOperation() noexcept
{}


MountOperation::CppClassType MountOperation::mountoperation_class_; // initialize static member

GType MountOperation::get_type()
{
  return mountoperation_class_.init().get_type();
}


GType MountOperation::get_base_type()
{
  return g_mount_operation_get_type();
}


MountOperation::MountOperation()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(mountoperation_class_.init()))
{
  

}

Glib::RefPtr<MountOperation> MountOperation::create()
{
  return Glib::RefPtr<MountOperation>( new MountOperation() );
}

Glib::ustring MountOperation::get_username() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_mount_operation_get_username(const_cast<GMountOperation*>(gobj())));
}

void MountOperation::set_username(const Glib::ustring& username)
{
  g_mount_operation_set_username(gobj(), username.c_str());
}

Glib::ustring MountOperation::get_password() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_mount_operation_get_password(const_cast<GMountOperation*>(gobj())));
}

void MountOperation::set_password(const Glib::ustring& password)
{
  g_mount_operation_set_password(gobj(), password.c_str());
}

bool MountOperation::get_anonymous() const
{
  return g_mount_operation_get_anonymous(const_cast<GMountOperation*>(gobj()));
}

void MountOperation::set_anonymous(bool anonymous)
{
  g_mount_operation_set_anonymous(gobj(), static_cast<int>(anonymous));
}

Glib::ustring MountOperation::get_domain() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_mount_operation_get_domain(const_cast<GMountOperation*>(gobj())));
}

void MountOperation::set_domain(const Glib::ustring& domain)
{
  g_mount_operation_set_domain(gobj(), domain.c_str());
}

PasswordSave MountOperation::get_password_save() const
{
  return (PasswordSave)g_mount_operation_get_password_save(const_cast<GMountOperation*>(gobj()));
}

void MountOperation::set_password_save(PasswordSave save)
{
  g_mount_operation_set_password_save(gobj(), (GPasswordSave)save);
}

int MountOperation::get_choice() const
{
  return g_mount_operation_get_choice(const_cast<GMountOperation*>(gobj()));
}

void MountOperation::set_choice(int choice)
{
  g_mount_operation_set_choice(gobj(), choice);
}

void MountOperation::reply(MountOperationResult result)
{
  g_mount_operation_reply(gobj(), ((GMountOperationResult)(result)));
}


Glib::SignalProxy4< void,const Glib::ustring&,const Glib::ustring&,const Glib::ustring&,AskPasswordFlags > MountOperation::signal_ask_password()
{
  return Glib::SignalProxy4< void,const Glib::ustring&,const Glib::ustring&,const Glib::ustring&,AskPasswordFlags >(this, &MountOperation_signal_ask_password_info);
}


Glib::SignalProxy2< void,const Glib::ustring&,const Glib::StringArrayHandle& > MountOperation::signal_ask_question()
{
  return Glib::SignalProxy2< void,const Glib::ustring&,const Glib::StringArrayHandle& >(this, &MountOperation_signal_ask_question_info);
}


Glib::SignalProxy1< void,MountOperationResult > MountOperation::signal_reply()
{
  return Glib::SignalProxy1< void,MountOperationResult >(this, &MountOperation_signal_reply_info);
}


Glib::SignalProxy0< void > MountOperation::signal_aborted()
{
  return Glib::SignalProxy0< void >(this, &MountOperation_signal_aborted_info);
}


Glib::SignalProxy3< void,const Glib::ustring&,gint64,gint64 > MountOperation::signal_show_unmount_progress()
{
  return Glib::SignalProxy3< void,const Glib::ustring&,gint64,gint64 >(this, &MountOperation_signal_show_unmount_progress_info);
}


Glib::PropertyProxy< Glib::ustring > MountOperation::property_username() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "username");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > MountOperation::property_username() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "username");
}

Glib::PropertyProxy< Glib::ustring > MountOperation::property_password() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "password");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > MountOperation::property_password() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "password");
}

Glib::PropertyProxy< bool > MountOperation::property_anonymous() 
{
  return Glib::PropertyProxy< bool >(this, "anonymous");
}

Glib::PropertyProxy_ReadOnly< bool > MountOperation::property_anonymous() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "anonymous");
}

Glib::PropertyProxy< Glib::ustring > MountOperation::property_domain() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "domain");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > MountOperation::property_domain() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "domain");
}

Glib::PropertyProxy< PasswordSave > MountOperation::property_password_save() 
{
  return Glib::PropertyProxy< PasswordSave >(this, "password-save");
}

Glib::PropertyProxy_ReadOnly< PasswordSave > MountOperation::property_password_save() const
{
  return Glib::PropertyProxy_ReadOnly< PasswordSave >(this, "password-save");
}

Glib::PropertyProxy< int > MountOperation::property_choice() 
{
  return Glib::PropertyProxy< int >(this, "choice");
}

Glib::PropertyProxy_ReadOnly< int > MountOperation::property_choice() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "choice");
}


void Gio::MountOperation::on_ask_password(const Glib::ustring& message, const Glib::ustring& default_user, const Glib::ustring& default_domain, AskPasswordFlags flags)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->ask_password)
    (*base->ask_password)(gobj(),message.c_str(),default_user.c_str(),default_domain.c_str(),((GAskPasswordFlags)(flags)));
}
void Gio::MountOperation::on_ask_question(const Glib::ustring& message, const Glib::StringArrayHandle& choices)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->ask_question)
    (*base->ask_question)(gobj(),message.c_str(),const_cast<const gchar**>((choices).data()));
}
void Gio::MountOperation::on_reply(MountOperationResult result)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->reply)
    (*base->reply)(gobj(),((GMountOperationResult)(result)));
}


} // namespace Gio


