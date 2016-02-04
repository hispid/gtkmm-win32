// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/dbusauthobserver.h>
#include <giomm/private/dbusauthobserver_p.h>


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
#include <giomm/credentials.h>

//To help the generated code:
typedef Gio::Credentials Credentials;
typedef Gio::IOStream IOStream;

namespace Gio
{

} // namespace Gio

namespace
{


static gboolean AuthObserver_signal_authorize_authenticated_peer_callback(GDBusAuthObserver* self, GIOStream* p0,GCredentials* p1,void* data)
{
  using namespace Gio::DBus;
  typedef sigc::slot< bool,const Glib::RefPtr<const IOStream>&,const Glib::RefPtr<const Credentials>& > SlotType;

  auto obj = dynamic_cast<AuthObserver*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, Glib::wrap(p1, true)
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static gboolean AuthObserver_signal_authorize_authenticated_peer_notify_callback(GDBusAuthObserver* self, GIOStream* p0,GCredentials* p1, void* data)
{
  using namespace Gio::DBus;
  typedef sigc::slot< void,const Glib::RefPtr<const IOStream>&,const Glib::RefPtr<const Credentials>& > SlotType;

  auto obj = dynamic_cast<AuthObserver*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, Glib::wrap(p1, true)
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static const Glib::SignalProxyInfo AuthObserver_signal_authorize_authenticated_peer_info =
{
  "authorize-authenticated-peer",
  (GCallback) &AuthObserver_signal_authorize_authenticated_peer_callback,
  (GCallback) &AuthObserver_signal_authorize_authenticated_peer_notify_callback
};


static gboolean AuthObserver_signal_allow_mechanism_callback(GDBusAuthObserver* self, const gchar* p0,void* data)
{
  using namespace Gio::DBus;
  typedef sigc::slot< bool,const std::string& > SlotType;

  auto obj = dynamic_cast<AuthObserver*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_stdstring(p0)
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static gboolean AuthObserver_signal_allow_mechanism_notify_callback(GDBusAuthObserver* self, const gchar* p0, void* data)
{
  using namespace Gio::DBus;
  typedef sigc::slot< void,const std::string& > SlotType;

  auto obj = dynamic_cast<AuthObserver*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_stdstring(p0)
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static const Glib::SignalProxyInfo AuthObserver_signal_allow_mechanism_info =
{
  "allow_mechanism",
  (GCallback) &AuthObserver_signal_allow_mechanism_callback,
  (GCallback) &AuthObserver_signal_allow_mechanism_notify_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::DBus::AuthObserver> wrap(GDBusAuthObserver* object, bool take_copy)
{
  return Glib::RefPtr<Gio::DBus::AuthObserver>( dynamic_cast<Gio::DBus::AuthObserver*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{

namespace DBus
{


/* The *_Class implementation: */

const Glib::Class& AuthObserver_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AuthObserver_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_dbus_auth_observer_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void AuthObserver_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* AuthObserver_Class::wrap_new(GObject* object)
{
  return new AuthObserver((GDBusAuthObserver*)object);
}


/* The implementation: */

GDBusAuthObserver* AuthObserver::gobj_copy()
{
  reference();
  return gobj();
}

AuthObserver::AuthObserver(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

AuthObserver::AuthObserver(GDBusAuthObserver* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


AuthObserver::AuthObserver(AuthObserver&& src) noexcept
: Glib::Object(std::move(src))
{}

AuthObserver& AuthObserver::operator=(AuthObserver&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}

AuthObserver::~AuthObserver() noexcept
{}


AuthObserver::CppClassType AuthObserver::authobserver_class_; // initialize static member

GType AuthObserver::get_type()
{
  return authobserver_class_.init().get_type();
}


GType AuthObserver::get_base_type()
{
  return g_dbus_auth_observer_get_type();
}


AuthObserver::AuthObserver()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(authobserver_class_.init()))
{
  

}

Glib::RefPtr<AuthObserver> AuthObserver::create()
{
  return Glib::RefPtr<AuthObserver>( new AuthObserver() );
}

bool AuthObserver::authorize_authenticated_peer(const Glib::RefPtr<const IOStream>& stream, const Glib::RefPtr<const Credentials>& credentials)
{
  return g_dbus_auth_observer_authorize_authenticated_peer(gobj(), const_cast<GIOStream*>(Glib::unwrap(stream)), const_cast<GCredentials*>(Glib::unwrap<Gio::Credentials>(credentials)));
}

bool AuthObserver::allow_mechanism(const std::string& mechanism)
{
  return g_dbus_auth_observer_allow_mechanism(gobj(), mechanism.c_str());
}


Glib::SignalProxy2< bool,const Glib::RefPtr<const IOStream>&,const Glib::RefPtr<const Credentials>& > AuthObserver::signal_authorize_authenticated_peer()
{
  return Glib::SignalProxy2< bool,const Glib::RefPtr<const IOStream>&,const Glib::RefPtr<const Credentials>& >(this, &AuthObserver_signal_authorize_authenticated_peer_info);
}


Glib::SignalProxy1< bool,const std::string& > AuthObserver::signal_allow_mechanism()
{
  return Glib::SignalProxy1< bool,const std::string& >(this, &AuthObserver_signal_allow_mechanism_info);
}


} // namespace DBus

} // namespace Gio


