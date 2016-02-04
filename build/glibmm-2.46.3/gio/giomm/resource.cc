// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/resource.h>
#include <giomm/private/resource_p.h>


/* Copyright (C) 2012 The giomm Development Team
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
// Hand-coded because we want ResourceFlags& instead of guint32&.
void Resource::get_info(const std::string& path, gsize& size,
  ResourceFlags& flags, ResourceLookupFlags lookup_flags) const
{
  guint32 file_flags = 0;
  GError* gerror = nullptr;
  // Ignore the gboolean return value from g_resource_get_info().
  // gerror is set if and only if the return value is FALSE.
  g_resource_get_info(const_cast<GResource*>(gobj()), path.c_str(),
    (GResourceLookupFlags)lookup_flags, &size, &file_flags, &gerror);
  if (gerror)
    ::Glib::Error::throw_exception(gerror);
  flags = static_cast<ResourceFlags>(file_flags);
}

void Resource::get_file_exists(const std::string& path, ResourceLookupFlags lookup_flags) const
{
  GError* gerror = nullptr;
  g_resource_get_info(const_cast<GResource*>(gobj()), path.c_str(),
    (GResourceLookupFlags)lookup_flags, 0, 0, &gerror);
  if (gerror)
    ::Glib::Error::throw_exception(gerror);
}

bool Resource::get_file_exists_nothrow(const std::string& path, ResourceLookupFlags lookup_flags) const
{
  return g_resource_get_info(const_cast<GResource*>(gobj()), path.c_str(),
    (GResourceLookupFlags)lookup_flags, 0, 0, 0);
}

// Hand-coded because we want ResourceFlags& instead of guint32&.
//static
void Resource::get_info_global(const std::string& path, gsize& size,
  ResourceFlags& flags, ResourceLookupFlags lookup_flags)
{
  guint32 file_flags = 0;
  GError* gerror = nullptr;
  // Ignore the gboolean return value from g_resources_get_info().
  // gerror is set if and only if the return value is FALSE.
  g_resources_get_info(path.c_str(),
    (GResourceLookupFlags)lookup_flags, &size, &file_flags, &gerror);
  if (gerror)
    ::Glib::Error::throw_exception(gerror);
  flags = static_cast<ResourceFlags>(file_flags);
}

//static
void Resource::get_file_exists_global(const std::string& path, ResourceLookupFlags lookup_flags)
{
  GError* gerror = 0;
  g_resources_get_info(path.c_str(),
    (GResourceLookupFlags)lookup_flags, 0, 0, &gerror);
  if (gerror)
    ::Glib::Error::throw_exception(gerror);
}

//static
bool Resource::get_file_exists_global_nothrow(const std::string& path, ResourceLookupFlags lookup_flags)
{
  return g_resources_get_info(path.c_str(), (GResourceLookupFlags)lookup_flags, 0, 0, 0);
}

} // namespace Gio

namespace
{
} // anonymous namespace


Gio::ResourceError::ResourceError(Gio::ResourceError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (G_RESOURCE_ERROR, error_code, error_message)
{}

Gio::ResourceError::ResourceError(GError* gobject)
:
  Glib::Error (gobject)
{}

Gio::ResourceError::Code Gio::ResourceError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gio::ResourceError::throw_func(GError* gobject)
{
  throw Gio::ResourceError(gobject);
}

// static
GType Glib::Value<Gio::ResourceFlags>::value_type()
{
  return g_resource_flags_get_type();
}

// static
GType Glib::Value<Gio::ResourceLookupFlags>::value_type()
{
  return g_resource_lookup_flags_get_type();
}


/* Why reinterpret_cast<Resource*>(gobject) is needed:
 *
 * A Resource instance is in fact always a GResource instance.
 * Unfortunately, GResource cannot be a member of Resource,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because Resource does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gio::Resource> wrap(GResource* object, bool take_copy)
{
  if(take_copy && object)
    g_resource_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::Resource>(reinterpret_cast<Gio::Resource*>(object));
}

} // namespace Glib


namespace Gio
{


void Resource::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_resource_ref(reinterpret_cast<GResource*>(const_cast<Resource*>(this)));
}

void Resource::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_resource_unref(reinterpret_cast<GResource*>(const_cast<Resource*>(this)));
}

GResource* Resource::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GResource*>(this);
}

const GResource* Resource::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GResource*>(this);
}

GResource* Resource::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GResource*>(const_cast<Resource*>(this));
  g_resource_ref(gobject);
  return gobject;
}


Glib::RefPtr<Resource> Resource::create_from_data(const Glib::RefPtr<const Glib::Bytes>& data)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Resource> retvalue = Glib::wrap(g_resource_new_from_data(const_cast<GBytes*>(Glib::unwrap<Glib::Bytes>(data)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Resource> Resource::create_from_file(const std::string& filename)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Resource> retvalue = Glib::wrap(g_resource_load(filename.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<InputStream> Resource::open_stream(const std::string& path, ResourceLookupFlags lookup_flags) const
{
  GError* gerror = nullptr;
  Glib::RefPtr<InputStream> retvalue = Glib::wrap(g_resource_open_stream(const_cast<GResource*>(gobj()), path.c_str(), ((GResourceLookupFlags)(lookup_flags)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<const Glib::Bytes> Resource::lookup_data(const std::string& path, ResourceLookupFlags lookup_flags) const
{
  GError* gerror = nullptr;
  Glib::RefPtr<const Glib::Bytes> retvalue = Glib::wrap(g_resource_lookup_data(const_cast<GResource*>(gobj()), path.c_str(), ((GResourceLookupFlags)(lookup_flags)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

std::vector<std::string> Resource::enumerate_children(const std::string& path, ResourceLookupFlags lookup_flags) const
{
  GError* gerror = nullptr;
  std::vector<std::string> retvalue = Glib::ArrayHandler<std::string>::array_to_vector(g_resource_enumerate_children(const_cast<GResource*>(gobj()), path.c_str(), ((GResourceLookupFlags)(lookup_flags)), &(gerror)), Glib::OWNERSHIP_DEEP);
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void Resource::register_global()
{
  g_resources_register(gobj());
}

void Resource::unregister_global()
{
  g_resources_unregister(gobj());
}

Glib::RefPtr<InputStream> Resource::open_stream_global(const std::string& path, ResourceLookupFlags lookup_flags)
{
  GError* gerror = nullptr;
  Glib::RefPtr<InputStream> retvalue = Glib::wrap(g_resources_open_stream(path.c_str(), ((GResourceLookupFlags)(lookup_flags)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<const Glib::Bytes> Resource::lookup_data_global(const std::string& path, ResourceLookupFlags lookup_flags)
{
  GError* gerror = nullptr;
  Glib::RefPtr<const Glib::Bytes> retvalue = Glib::wrap(g_resources_lookup_data(path.c_str(), ((GResourceLookupFlags)(lookup_flags)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

std::vector<std::string> Resource::enumerate_children_global(const std::string& path, ResourceLookupFlags lookup_flags)
{
  GError* gerror = nullptr;
  std::vector<std::string> retvalue = Glib::ArrayHandler<std::string>::array_to_vector(g_resources_enumerate_children(path.c_str(), ((GResourceLookupFlags)(lookup_flags)), &(gerror)), Glib::OWNERSHIP_DEEP);
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}


} // namespace Gio

