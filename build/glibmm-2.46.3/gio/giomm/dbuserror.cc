// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/dbuserror.h>
#include <giomm/private/dbuserror_p.h>


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

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace


Gio::DBus::Error::Error(Gio::DBus::Error::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (G_DBUS_ERROR, error_code, error_message)
{}

Gio::DBus::Error::Error(GError* gobject)
:
  Glib::Error (gobject)
{}

Gio::DBus::Error::Code Gio::DBus::Error::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gio::DBus::Error::throw_func(GError* gobject)
{
  throw Gio::DBus::Error(gobject);
}


