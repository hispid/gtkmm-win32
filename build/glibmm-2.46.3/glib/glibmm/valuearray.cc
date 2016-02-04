// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!

#undef G_DISABLE_DEPRECATED
#define GLIB_DISABLE_DEPRECATION_WARNINGS 1
 
#ifndef GLIBMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <glibmm/valuearray.h>
#include <glibmm/private/valuearray_p.h>


/* Copyright (C) 2002-2009 The gtkmm Development Team
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

#include <glibmm/exceptionhandler.h>

static int ValueArray_Compare_glibmm_callback(gconstpointer a,
  gconstpointer b, gpointer user_data)
{
  Glib::ValueArray::SlotCompare* the_slot =
    static_cast<Glib::ValueArray::SlotCompare*>(user_data);

  try
  {
    return (*the_slot)(*reinterpret_cast<const Glib::ValueBase*>(a),
      *reinterpret_cast<const Glib::ValueBase*>(b));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return 0;
}

namespace Glib
{

ValueArray::ValueArray() : gobject_(g_value_array_new(0))
{}

ValueArray::ValueArray(guint n_preallocated) :
  gobject_(g_value_array_new(n_preallocated))
{}

bool ValueArray::get_nth(guint index, Glib::ValueBase& value)
{
  const auto g_value = g_value_array_get_nth(gobj(), index);

  if(g_value)
  {
    value.init(g_value);
    return true;
  }
  else
    return false;
}

Glib::ValueArray& ValueArray::append(const Glib::ValueBase& value)
{
  g_value_array_append(gobj(), value.gobj());
  return *this;
}

Glib::ValueArray& ValueArray::prepend(const Glib::ValueBase& value)
{
  g_value_array_prepend(gobj(), value.gobj());
  return *this;
}

Glib::ValueArray& ValueArray::insert(guint index, const Glib::ValueBase& value)
{
  g_value_array_insert(gobj(), index, value.gobj());
  return *this;
}

Glib::ValueArray& ValueArray::remove(guint index)
{
  g_value_array_remove(gobj(), index);
  return *this;
}

Glib::ValueArray& ValueArray::sort(const SlotCompare& compare_func)
{
  SlotCompare slot_copy(compare_func);
  g_value_array_sort_with_data(gobj(), &ValueArray_Compare_glibmm_callback,
    &slot_copy);
  return *this;
}

} // Glib namespace

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::ValueArray wrap(GValueArray* object, bool take_copy)
{
  return Glib::ValueArray(object, take_copy);
}

} // namespace Glib


namespace Glib
{


// static
GType ValueArray::get_type()
{
  return g_value_array_get_type();
}


ValueArray::ValueArray(const ValueArray& other)
:
  gobject_ ((other.gobject_) ? g_value_array_copy(other.gobject_) : 0)
{}

ValueArray::ValueArray(ValueArray&& other) noexcept
:
  gobject_(other.gobject_)
{
  other.gobject_ = nullptr;
}

ValueArray& ValueArray::operator=(ValueArray&& other) noexcept
{
  ValueArray temp (other);
  swap(temp);
  return *this;
}

ValueArray::ValueArray(GValueArray* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? g_value_array_copy(gobject) : gobject)
{}

ValueArray& ValueArray::operator=(const ValueArray& other)
{
  ValueArray temp (other);
  swap(temp);
  return *this;
}

ValueArray::~ValueArray() noexcept
{
  if(gobject_)
    g_value_array_free(gobject_);
}

void ValueArray::swap(ValueArray& other) noexcept
{
  GValueArray *const temp = gobject_;
  gobject_ = other.gobject_;
  other.gobject_ = temp;
}

GValueArray* ValueArray::gobj_copy() const
{
  return g_value_array_copy(gobject_);
}


} // namespace Glib


#endif // GLIBMM_DISABLE_DEPRECATED


