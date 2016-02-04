// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/proxy.h>
#include <giomm/private/proxy_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 The gtkmm Development Team
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
#include <utility>
#include <glibmm/error.h>
#include <glibmm/exceptionhandler.h>
#include "slot_async.h"

namespace Gio
{

void Proxy::connect_async(const Glib::RefPtr<IOStream>& connection, const Glib::RefPtr<const ProxyAddress>& proxy_address, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  auto slot_copy = new SlotAsyncReady(slot);

  g_proxy_connect_async(gobj(),
    Glib::unwrap(connection),
    const_cast<GProxyAddress*>(Glib::unwrap(proxy_address)),
    Glib::unwrap(cancellable),
    &SignalProxy_async_callback,
    slot_copy);
}

void Proxy::connect_async(const Glib::RefPtr<IOStream>& connection, const Glib::RefPtr<const ProxyAddress>& proxy_address, const SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  auto slot_copy = new SlotAsyncReady(slot);

  g_proxy_connect_async(gobj(),
    Glib::unwrap(connection),
    const_cast<GProxyAddress*>(Glib::unwrap(proxy_address)),
    0,
    &SignalProxy_async_callback,
    slot_copy);
}

} //namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::Proxy> wrap(GProxy* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Proxy>( dynamic_cast<Gio::Proxy*> (Glib::wrap_auto_interface<Gio::Proxy> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gio
{


/* The *_Class implementation: */

const Glib::Interface_Class& Proxy_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Proxy_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = g_proxy_get_type();
  }

  return *this;
}

void Proxy_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr); 


}


Glib::ObjectBase* Proxy_Class::wrap_new(GObject* object)
{
  return new Proxy((GProxy*)(object));
}


/* The implementation: */

Proxy::Proxy()
:
  Glib::Interface(proxy_class_.init())
{}

Proxy::Proxy(GProxy* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Proxy::Proxy(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Proxy::Proxy(Proxy&& src) noexcept
: Glib::Interface(std::move(src))
{}

Proxy& Proxy::operator=(Proxy&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

Proxy::~Proxy() noexcept
{}

// static
void Proxy::add_interface(GType gtype_implementer)
{
  proxy_class_.init().add_interface(gtype_implementer);
}

Proxy::CppClassType Proxy::proxy_class_; // initialize static member

GType Proxy::get_type()
{
  return proxy_class_.init().get_type();
}


GType Proxy::get_base_type()
{
  return g_proxy_get_type();
}


Glib::RefPtr<Proxy> Proxy::get_default_for_protocol(const Glib::ustring& protocol)
{
  return Glib::wrap(g_proxy_get_default_for_protocol(protocol.c_str()));
}

Glib::RefPtr<IOStream> Proxy::connect(const Glib::RefPtr<IOStream>& connection, const Glib::RefPtr<const ProxyAddress>& proxy_address, const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = nullptr;
  Glib::RefPtr<IOStream> retvalue = Glib::wrap(g_proxy_connect(gobj(), Glib::unwrap(connection), const_cast<GProxyAddress*>(Glib::unwrap(proxy_address)), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<IOStream> Proxy::connect_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = nullptr;
  Glib::RefPtr<IOStream> retvalue = Glib::wrap(g_proxy_connect_finish(gobj(), Glib::unwrap(result), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool Proxy::supports_hostname() const
{
  return g_proxy_supports_hostname(const_cast<GProxy*>(gobj()));
}


} // namespace Gio


