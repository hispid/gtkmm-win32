// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/emblem.h>
#include <giomm/private/emblem_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2008 Jonathon Jongsma
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

} //namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::Emblem> wrap(GEmblem* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Emblem>( dynamic_cast<Gio::Emblem*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& Emblem_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Emblem_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_emblem_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Icon::add_interface(get_type());

  }

  return *this;
}


void Emblem_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Emblem_Class::wrap_new(GObject* object)
{
  return new Emblem((GEmblem*)object);
}


/* The implementation: */

GEmblem* Emblem::gobj_copy()
{
  reference();
  return gobj();
}

Emblem::Emblem(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Emblem::Emblem(GEmblem* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Emblem::Emblem(Emblem&& src) noexcept
: Glib::Object(std::move(src))
  , Icon(std::move(src))
{}

Emblem& Emblem::operator=(Emblem&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Icon::operator=(std::move(src));
  return *this;
}

Emblem::~Emblem() noexcept
{}


Emblem::CppClassType Emblem::emblem_class_; // initialize static member

GType Emblem::get_type()
{
  return emblem_class_.init().get_type();
}


GType Emblem::get_base_type()
{
  return g_emblem_get_type();
}


Emblem::Emblem(const Glib::RefPtr<Icon>& icon)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(emblem_class_.init(), "icon", const_cast<GIcon*>(Glib::unwrap(icon)), static_cast<char*>(0)))
{
  

}

Emblem::Emblem(const Glib::RefPtr<Icon>& icon, EmblemOrigin origin)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(emblem_class_.init(), "icon", const_cast<GIcon*>(Glib::unwrap(icon)), "origin", ((GEmblemOrigin)(origin)), static_cast<char*>(0)))
{
  

}

Glib::RefPtr<Emblem> Emblem::create(const Glib::RefPtr<Icon>& icon)
{
  return Glib::RefPtr<Emblem>( new Emblem(icon) );
}

Glib::RefPtr<Emblem> Emblem::create(const Glib::RefPtr<Icon>& icon, EmblemOrigin origin)
{
  return Glib::RefPtr<Emblem>( new Emblem(icon, origin) );
}

Glib::RefPtr<Icon> Emblem::get_icon()
{
  return Glib::wrap(g_emblem_get_icon(gobj()));
}

Glib::RefPtr<const Icon> Emblem::get_icon() const
{
  return const_cast<Emblem*>(this)->get_icon();
}

EmblemOrigin Emblem::get_origin() const
{
  return ((EmblemOrigin)(g_emblem_get_origin(const_cast<GEmblem*>(gobj()))));
}


} // namespace Gio


