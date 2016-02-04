// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/converter.h>
#include <giomm/private/converter_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

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

} // namespace Gio

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gio::ConverterResult>::value_type()
{
  return g_converter_result_get_type();
}

// static
GType Glib::Value<Gio::ConverterFlags>::value_type()
{
  return g_converter_flags_get_type();
}


namespace Glib
{

Glib::RefPtr<Gio::Converter> wrap(GConverter* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Converter>( dynamic_cast<Gio::Converter*> (Glib::wrap_auto_interface<Gio::Converter> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gio
{


/* The *_Class implementation: */

const Glib::Interface_Class& Converter_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Converter_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = g_converter_get_type();
  }

  return *this;
}

void Converter_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr); 

  klass->convert = &convert_vfunc_callback;
  klass->reset = &reset_vfunc_callback;

}

GConverterResult Converter_Class::convert_vfunc_callback(GConverter* self, const void* inbuf, gsize inbuf_size, void* outbuf, gsize outbuf_size, GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError** error)
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
        return ((GConverterResult)(obj->convert_vfunc(inbuf, inbuf_size, outbuf, outbuf_size, ((ConverterFlags)(flags))
, *(bytes_read)
, *(bytes_written)
)));
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
  if(base && base->convert)
  {
    GConverterResult retval = (*base->convert)(self, inbuf, inbuf_size, outbuf, outbuf_size, flags, bytes_read, bytes_written, error);
    if(*error)
      ::Glib::Error::throw_exception(*error);
    return retval;
  }

  typedef GConverterResult RType;
  return RType();
}
void Converter_Class::reset_vfunc_callback(GConverter* self)
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
        obj->reset_vfunc();
        return;
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
  if(base && base->reset)
  {
    (*base->reset)(self);
  }

}


Glib::ObjectBase* Converter_Class::wrap_new(GObject* object)
{
  return new Converter((GConverter*)(object));
}


/* The implementation: */

Converter::Converter()
:
  Glib::Interface(converter_class_.init())
{}

Converter::Converter(GConverter* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Converter::Converter(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Converter::Converter(Converter&& src) noexcept
: Glib::Interface(std::move(src))
{}

Converter& Converter::operator=(Converter&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

Converter::~Converter() noexcept
{}

// static
void Converter::add_interface(GType gtype_implementer)
{
  converter_class_.init().add_interface(gtype_implementer);
}

Converter::CppClassType Converter::converter_class_; // initialize static member

GType Converter::get_type()
{
  return converter_class_.init().get_type();
}


GType Converter::get_base_type()
{
  return g_converter_get_type();
}


ConverterResult Converter::convert(const void* inbuf, gsize inbuf_size, void* outbuf, gsize outbuf_size, ConverterFlags flags, gsize& bytes_read, gsize& bytes_written)
{
  GError* gerror = nullptr;
  ConverterResult retvalue = ((ConverterResult)(g_converter_convert(gobj(), inbuf, inbuf_size, outbuf, outbuf_size, ((GConverterFlags)(flags)), &(bytes_read), &(bytes_written), &(gerror))));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void Converter::reset()
{
  g_converter_reset(gobj());
}


ConverterResult Gio::Converter::convert_vfunc(const void* inbuf, gsize inbuf_size, void* outbuf, gsize outbuf_size, ConverterFlags flags, gsize& bytes_read, gsize& bytes_written) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->convert)
  {
    GError* gerror = nullptr;
    ConverterResult retval(((ConverterResult)((*base->convert)(gobj(),inbuf,inbuf_size,outbuf,outbuf_size,((GConverterFlags)(flags)),&(bytes_read),&(bytes_written),&(gerror)))));
    if(gerror)
      ::Glib::Error::throw_exception(gerror);
    return retval;
  }

  typedef ConverterResult RType;
  return RType();
}
void Gio::Converter::reset_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->reset)
  {
    (*base->reset)(gobj());
  }
}


} // namespace Gio


