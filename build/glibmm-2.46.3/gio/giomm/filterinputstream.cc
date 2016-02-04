// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/filterinputstream.h>
#include <giomm/private/filterinputstream_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2008 The gtkmm Development Team
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

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::FilterInputStream> wrap(GFilterInputStream* object, bool take_copy)
{
  return Glib::RefPtr<Gio::FilterInputStream>( dynamic_cast<Gio::FilterInputStream*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& FilterInputStream_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FilterInputStream_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_filter_input_stream_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void FilterInputStream_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FilterInputStream_Class::wrap_new(GObject* object)
{
  return new FilterInputStream((GFilterInputStream*)object);
}


/* The implementation: */

GFilterInputStream* FilterInputStream::gobj_copy()
{
  reference();
  return gobj();
}

FilterInputStream::FilterInputStream(const Glib::ConstructParams& construct_params)
:
  Gio::InputStream(construct_params)
{

}

FilterInputStream::FilterInputStream(GFilterInputStream* castitem)
:
  Gio::InputStream((GInputStream*)(castitem))
{}


FilterInputStream::FilterInputStream(FilterInputStream&& src) noexcept
: Gio::InputStream(std::move(src))
{}

FilterInputStream& FilterInputStream::operator=(FilterInputStream&& src) noexcept
{
  Gio::InputStream::operator=(std::move(src));
  return *this;
}

FilterInputStream::~FilterInputStream() noexcept
{}


FilterInputStream::CppClassType FilterInputStream::filterinputstream_class_; // initialize static member

GType FilterInputStream::get_type()
{
  return filterinputstream_class_.init().get_type();
}


GType FilterInputStream::get_base_type()
{
  return g_filter_input_stream_get_type();
}


Glib::RefPtr<InputStream> FilterInputStream::get_base_stream()
{
  Glib::RefPtr<InputStream> retvalue = Glib::wrap(g_filter_input_stream_get_base_stream(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const InputStream> FilterInputStream::get_base_stream() const
{
  return const_cast<FilterInputStream*>(this)->get_base_stream();
}

bool FilterInputStream::get_close_base_stream() const
{
  return g_filter_input_stream_get_close_base_stream(const_cast<GFilterInputStream*>(gobj()));
}

void FilterInputStream::set_close_base_stream(bool close_base)
{
  g_filter_input_stream_set_close_base_stream(gobj(), static_cast<int>(close_base));
}


Glib::PropertyProxy_ReadOnly< Glib::RefPtr<InputStream> > FilterInputStream::property_base_stream() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<InputStream> >(this, "base-stream");
}

Glib::PropertyProxy< bool > FilterInputStream::property_close_base_stream() 
{
  return Glib::PropertyProxy< bool >(this, "close-base-stream");
}

Glib::PropertyProxy_ReadOnly< bool > FilterInputStream::property_close_base_stream() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "close-base-stream");
}


} // namespace Gio


