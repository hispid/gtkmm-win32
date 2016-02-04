// Generated by gmmproc 2.47.3.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <atkmm/document.h>
#include <atkmm/private/document_p.h>


// -*- c++ -*-
/* $Id: document.ccg,v 1.1 2004/01/02 09:56:43 murrayc Exp $ */

/* Copyright 2003 The gtkmm Development Team
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

#include <atkmm/object.h>
#include <atk/atkdocument.h>


namespace Atk
{


} // namespace Atk


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Atk::Document> wrap(AtkDocument* object, bool take_copy)
{
  return Glib::RefPtr<Atk::Document>( dynamic_cast<Atk::Document*> (Glib::wrap_auto_interface<Atk::Document> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Atk
{


/* The *_Class implementation: */

const Glib::Interface_Class& Document_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Document_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = atk_document_get_type();
  }

  return *this;
}

void Document_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr); 

  klass->get_document_type = &get_document_type_vfunc_callback;
  klass->get_document = &get_document_vfunc_callback;

}

const gchar* Document_Class::get_document_type_vfunc_callback(AtkDocument* self)
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
        return obj->get_document_type_vfunc();
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
  if(base && base->get_document_type)
  {
    const gchar* retval = (*base->get_document_type)(self);
    return retval;
  }

  typedef const gchar* RType;
  return RType();
}
gpointer Document_Class::get_document_vfunc_callback(AtkDocument* self)
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
        return obj->get_document_vfunc();
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
  if(base && base->get_document)
  {
    gpointer retval = (*base->get_document)(self);
    return retval;
  }

  typedef gpointer RType;
  return RType();
}


Glib::ObjectBase* Document_Class::wrap_new(GObject* object)
{
  return new Document((AtkDocument*)(object));
}


/* The implementation: */

Document::Document()
:
  Glib::Interface(document_class_.init())
{}

Document::Document(AtkDocument* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Document::Document(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Document::Document(Document&& src) noexcept
: Glib::Interface(std::move(src))
{}

Document& Document::operator=(Document&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

Document::~Document() noexcept
{}

// static
void Document::add_interface(GType gtype_implementer)
{
  document_class_.init().add_interface(gtype_implementer);
}

Document::CppClassType Document::document_class_; // initialize static member

GType Document::get_type()
{
  return document_class_.init().get_type();
}


GType Document::get_base_type()
{
  return atk_document_get_type();
}


#ifndef ATKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::ustring Document::get_document_type() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(atk_document_get_document_type(const_cast<AtkDocument*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // ATKMM_DISABLE_DEPRECATED

#ifndef ATKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
gpointer Document::get_document()
{
  return atk_document_get_document(gobj());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // ATKMM_DISABLE_DEPRECATED

Glib::ustring Document::get_attribute_value(const Glib::ustring& attribute_name) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(atk_document_get_attribute_value(const_cast<AtkDocument*>(gobj()), attribute_name.c_str()));
}

bool Document::set_attribute_value(const Glib::ustring& attribute_name, const Glib::ustring& attribute_value)
{
  return atk_document_set_attribute_value(gobj(), attribute_name.c_str(), attribute_value.c_str());
}


const gchar* Atk::Document::get_document_type_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_document_type)
  {
    const gchar* retval((*base->get_document_type)(gobj()));
    return retval;
  }

  typedef const gchar* RType;
  return RType();
}
gpointer Atk::Document::get_document_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_document)
  {
    gpointer retval((*base->get_document)(const_cast<AtkDocument*>(gobj())));
    return retval;
  }

  typedef gpointer RType;
  return RType();
}


} // namespace Atk


