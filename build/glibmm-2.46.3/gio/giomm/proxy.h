// -*- c++ -*-
// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!
#ifndef _GIOMM_PROXY_H
#define _GIOMM_PROXY_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <glibmm/error.h>
#include <glibmm/interface.h>
#include <giomm/asyncresult.h>
#include <giomm/cancellable.h>
#include <giomm/proxyaddress.h>
#include <giomm/iostream.h>
//#include <giomm/error.h> //Because this is thrown by some of these methods.


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GProxyInterface GProxyInterface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GProxy GProxy;
typedef struct _GProxyClass GProxyClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class Proxy_Class; } // namespace Gio
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{


/** Proxy - Interface for proxy handling.
 * A Proxy handles connecting to a remote host via a given type of proxy
 * server. It is implemented by the 'gio-proxy' extension point. The
 * extensions are named after their proxy protocol name. As an example, a
 * SOCKS5 proxy implementation can be retrieved with the name 'socks5' using
 * the C API's function g_io_extension_point_get_extension_by_name().
 *
 * @ingroup NetworkIO
 * @newin{2,28}
 */

class Proxy : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Proxy CppObjectType;
  typedef Proxy_Class CppClassType;
  typedef GProxy BaseObjectType;
  typedef GProxyInterface BaseClassType;

  // noncopyable
  Proxy(const Proxy&) = delete;
  Proxy& operator=(const Proxy&) = delete;

private:
  friend class Proxy_Class;
  static CppClassType proxy_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Proxy();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Proxy(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Proxy(GProxy* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Proxy(Proxy&& src) noexcept;
  Proxy& operator=(Proxy&& src) noexcept;

  virtual ~Proxy() noexcept;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GProxy*       gobj()       { return reinterpret_cast<GProxy*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GProxy* gobj() const { return reinterpret_cast<GProxy*>(gobject_); }

private:


public:

  
  /** Lookup "gio-proxy" extension point for a proxy implementation that supports
   * specified protocol.
   * 
   * @newin{2,26}
   * 
   * @param protocol The proxy protocol name (e.g. http, socks, etc).
   * @return Return a Proxy or <tt>0</tt> if protocol
   * is not supported.
   */
  static Glib::RefPtr<Proxy> get_default_for_protocol(const Glib::ustring& protocol);

  
  /** Given @a connection to communicate with a proxy (eg, a
   * SocketConnection that is connected to the proxy server), this
   * does the necessary handshake to connect to @a proxy_address, and if
   * required, wraps the IOStream to handle proxy payload.
   * 
   * @newin{2,26}
   * 
   * @param connection A IOStream.
   * @param proxy_address A ProxyAddress.
   * @param cancellable A Cancellable.
   * @return A IOStream that will replace @a connection. This might
   * be the same as @a connection, in which case a reference
   * will be added.
   */
  Glib::RefPtr<IOStream> connect(const Glib::RefPtr<IOStream>& connection, const Glib::RefPtr<const ProxyAddress>& proxy_address, const Glib::RefPtr<Cancellable>& cancellable);

  /** An Asynchronous version of connect().
   */
  void connect_async(const Glib::RefPtr<IOStream>& connection, const Glib::RefPtr<const ProxyAddress>& proxy_address, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable);

  /** An Asynchronous version of connect().
   */
  void connect_async(const Glib::RefPtr<IOStream>& connection, const Glib::RefPtr<const ProxyAddress>& proxy_address, const SlotAsyncReady& slot);
  

  /** See g_proxy_connect().
   * 
   * @newin{2,26}
   * 
   * @param result A AsyncResult.
   * @return A IOStream.
   */
  Glib::RefPtr<IOStream> connect_finish(const Glib::RefPtr<AsyncResult>& result);

  
  /** Some proxy protocols expect to be passed a hostname, which they
   * will resolve to an IP address themselves. Others, like SOCKS4, do
   * not allow this. This function will return <tt>false</tt> if @a proxy is
   * implementing such a protocol. When <tt>false</tt> is returned, the caller
   * should resolve the destination hostname first, and then pass a
   * ProxyAddress containing the stringified IP address to
   * g_proxy_connect() or g_proxy_connect_async().
   * 
   * @newin{2,26}
   * 
   * @return <tt>true</tt> if hostname resolution is supported.
   */
  bool supports_hostname() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};


} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::Proxy
   */
  Glib::RefPtr<Gio::Proxy> wrap(GProxy* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_PROXY_H */

