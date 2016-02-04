// -*- c++ -*-
// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!
#ifndef _GIOMM_UNIXCONNECTION_H
#define _GIOMM_UNIXCONNECTION_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 Jonathon Jongsma
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

#include <glibmm/object.h>
#include <giomm/socketconnection.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GUnixConnection GUnixConnection;
typedef struct _GUnixConnectionClass GUnixConnectionClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class UnixConnection_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/**
 * A Unix domain SocketConnection
 *
 * This is the subclass of SocketConnection that is created
 * for UNIX domain sockets.
 *
 * It contains functions to do some of the unix socket specific
 * functionallity like passing file descriptors.
 *
 * @newin{2,24}
 * @ingroup NetworkIO
 */

class UnixConnection : public Gio::SocketConnection
{
    
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef UnixConnection CppObjectType;
  typedef UnixConnection_Class CppClassType;
  typedef GUnixConnection BaseObjectType;
  typedef GUnixConnectionClass BaseClassType;

  // noncopyable
  UnixConnection(const UnixConnection&) = delete;
  UnixConnection& operator=(const UnixConnection&) = delete;

private:  friend class UnixConnection_Class;
  static CppClassType unixconnection_class_;

protected:
  explicit UnixConnection(const Glib::ConstructParams& construct_params);
  explicit UnixConnection(GUnixConnection* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  UnixConnection(UnixConnection&& src) noexcept;
  UnixConnection& operator=(UnixConnection&& src) noexcept;

  virtual ~UnixConnection() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GUnixConnection*       gobj()       { return reinterpret_cast<GUnixConnection*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GUnixConnection* gobj() const { return reinterpret_cast<GUnixConnection*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GUnixConnection* gobj_copy();

private:

    //This is not available on Win32.
//This source file will not be compiled on Win32,
//and no class defined in it will be registered by wrap_init().


public:
    
  /** Passes a file descriptor to the receiving side of the
   * connection. The receiving end has to call g_unix_connection_receive_fd()
   * to accept the file descriptor.
   * 
   * As well as sending the fd this also writes a single byte to the
   * stream, as this is required for fd passing to work on some
   * implementations.
   * 
   * @newin{2,22}
   * 
   * @param fd A file descriptor.
   * @param cancellable Optional Cancellable object, <tt>0</tt> to ignore.
   * @return A <tt>true</tt> on success, <tt>0</tt> on error.
   */
  bool send_fd(int fd, const Glib::RefPtr<Cancellable>& cancellable);

  /// A send_fd() convenience overload.
  bool send_fd(int fd);
    
  /** Receives a file descriptor from the sending end of the connection.
   * The sending end has to call g_unix_connection_send_fd() for this
   * to work.
   * 
   * As well as reading the fd this also reads a single byte from the
   * stream, as this is required for fd passing to work on some
   * implementations.
   * 
   * @newin{2,22}
   * 
   * @param cancellable Optional Cancellable object, <tt>0</tt> to ignore.
   * @return A file descriptor on success, -1 on error.
   */
  int receive_fd(const Glib::RefPtr<Cancellable>& cancellable);

  /// A receive_fd() convenience overload.
  int receive_fd();

    
  /** Receives credentials from the sending end of the connection.  The
   * sending end has to call g_unix_connection_send_credentials() (or
   * similar) for this to work.
   * 
   * As well as reading the credentials this also reads (and discards) a
   * single byte from the stream, as this is required for credentials
   * passing to work on some implementations.
   * 
   * Other ways to exchange credentials with a foreign peer includes the
   * UnixCredentialsMessage type and g_socket_get_credentials() function.
   * 
   * @newin{2,26}
   * 
   * @param cancellable A Cancellable or <tt>0</tt>.
   * @return Received credentials on success (free with
   * Glib::object_unref()), <tt>0</tt> if @a error is set.
   */
  Glib::RefPtr<Credentials> receive_credentials(const Glib::RefPtr<Cancellable>& cancellable);

  /// A receive_credentials() convenience overload.
  Glib::RefPtr<Credentials> receive_credentials();
    
  /** Receives credentials from the sending end of the connection.  The
   * sending end has to call g_unix_connection_send_credentials() (or
   * similar) for this to work.
   * 
   * As well as reading the credentials this also reads (and discards) a
   * single byte from the stream, as this is required for credentials
   * passing to work on some implementations.
   * 
   * Other ways to exchange credentials with a foreign peer includes the
   * UnixCredentialsMessage type and g_socket_get_credentials() function.
   * 
   * @newin{2,26}
   * 
   * @param cancellable A Cancellable or <tt>0</tt>.
   * @return Received credentials on success (free with
   * Glib::object_unref()), <tt>0</tt> if @a error is set.
   */
  Glib::RefPtr<const Credentials> receive_credentials(const Glib::RefPtr<Cancellable>& cancellable) const;

  /// A receive_credentials() convenience overload.
  Glib::RefPtr<const Credentials> receive_credentials() const;

  /**  Asynchronously receive credentials.
   * For more details, see receive_credentials() which is the synchronous
   * version of this call.
   *
   * When the operation is finished, @a slot will be called. You can then call
   * receive_credentials_finish() to get the result of the operation.
   *
   * @param slot A SlotAsyncReady to call when the request is satisfied. 
   * @param cancellable A Cancellable object.
   * @newin{2,36}
   */
  void receive_credentials_async(const SlotAsyncReady& slot,
    const Glib::RefPtr<Cancellable>& cancellable);
  

  /// A non-cancellable version of receive_credentials_async().
  void receive_credentials_async(const SlotAsyncReady& slot);

  
  /** Finishes an asynchronous receive credentials operation started with
   * g_unix_connection_receive_credentials_async().
   * 
   * @newin{2,32}
   * 
   * @param result A AsyncResult.
   * @return A Credentials, or <tt>0</tt> on error.
   * Free the returned object with Glib::object_unref().
   */
  Glib::RefPtr<Credentials> receive_credentials_finish(const Glib::RefPtr<AsyncResult>& result);

    
  /** Passes the credentials of the current user the receiving side
   * of the connection. The receiving end has to call
   * g_unix_connection_receive_credentials() (or similar) to accept the
   * credentials.
   * 
   * As well as sending the credentials this also writes a single NUL
   * byte to the stream, as this is required for credentials passing to
   * work on some implementations.
   * 
   * Other ways to exchange credentials with a foreign peer includes the
   * UnixCredentialsMessage type and g_socket_get_credentials() function.
   * 
   * @newin{2,26}
   * 
   * @param cancellable A Cancellable or <tt>0</tt>.
   * @return <tt>true</tt> on success, <tt>false</tt> if @a error is set.
   */
  bool send_credentials(const Glib::RefPtr<Cancellable>& cancellable);

  /// A send_credentials() convenience overload.
  bool send_credentials();

  /**  Asynchronously send credentials.
   * For more details, see send_credentials() which is the synchronous version
   * of this call.
   *
   * When the operation is finished, @a slot will be called. You can then call
   * send_credentials_finish() to get the result of the operation.
   *
   * @param slot A SlotAsyncReady to call when the request is satisfied. 
   * @param cancellable A Cancellable object.  
   * @newin{2,36}
   */
  void send_credentials_async(const SlotAsyncReady& slot,
    const Glib::RefPtr<Cancellable>& cancellable);
  

  /// A non-cancellable version of send_credentials_async().
  void send_credentials_async(const SlotAsyncReady& slot);

  
  /** Finishes an asynchronous send credentials operation started with
   * g_unix_connection_send_credentials_async().
   * 
   * @newin{2,32}
   * 
   * @param result A AsyncResult.
   * @return <tt>true</tt> if the operation was successful, otherwise <tt>false</tt>.
   */
  bool send_credentials_finish(const Glib::RefPtr<AsyncResult>& result);


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
   * @relates Gio::UnixConnection
   */
  Glib::RefPtr<Gio::UnixConnection> wrap(GUnixConnection* object, bool take_copy = false);
}


#endif /* _GIOMM_UNIXCONNECTION_H */

