// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/treerowreference.h>
#include <gtkmm/private/treerowreference_p.h>


/* Copyright (C) 2002 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtk/gtk.h>


namespace Gtk
{

TreeRowReference::TreeRowReference(const Glib::RefPtr<TreeModel>& model, const TreeModel::Path& path)
:
  gobject_ ( gtk_tree_row_reference_new(model->gobj(), const_cast<GtkTreePath*>(path.gobj())) )
{}

TreeRowReference::operator const void*() const
{
  return is_valid() ? GINT_TO_POINTER(1) : 0;
}

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::TreeRowReference wrap(GtkTreeRowReference* object, bool take_copy)
{
  return Gtk::TreeRowReference(object, take_copy);
}

} // namespace Glib


namespace Gtk
{


// static
GType TreeRowReference::get_type()
{
  return gtk_tree_row_reference_get_type();
}

TreeRowReference::TreeRowReference()
:
  gobject_ (0) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

TreeRowReference::TreeRowReference(const TreeRowReference& other)
:
  gobject_ ((other.gobject_) ? gtk_tree_row_reference_copy(other.gobject_) : 0)
{}

TreeRowReference::TreeRowReference(TreeRowReference&& other) noexcept
:
  gobject_(other.gobject_)
{
  other.gobject_ = nullptr;
}

TreeRowReference& TreeRowReference::operator=(TreeRowReference&& other) noexcept
{
  TreeRowReference temp (other);
  swap(temp);
  return *this;
}

TreeRowReference::TreeRowReference(GtkTreeRowReference* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gtk_tree_row_reference_copy(gobject) : gobject)
{}

TreeRowReference& TreeRowReference::operator=(const TreeRowReference& other)
{
  TreeRowReference temp (other);
  swap(temp);
  return *this;
}

TreeRowReference::~TreeRowReference() noexcept
{
  if(gobject_)
    gtk_tree_row_reference_free(gobject_);
}

void TreeRowReference::swap(TreeRowReference& other) noexcept
{
  GtkTreeRowReference *const temp = gobject_;
  gobject_ = other.gobject_;
  other.gobject_ = temp;
}

GtkTreeRowReference* TreeRowReference::gobj_copy() const
{
  return gtk_tree_row_reference_copy(gobject_);
}


TreeModel::Path TreeRowReference::get_path() const
{
  return Gtk::TreePath(gtk_tree_row_reference_get_path(const_cast<GtkTreeRowReference*>(gobj())), false);
}

Glib::RefPtr<TreeModel> TreeRowReference::get_model()
{
  Glib::RefPtr<TreeModel> retvalue = Glib::wrap(gtk_tree_row_reference_get_model(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const TreeModel> TreeRowReference::get_model() const
{
  return const_cast<TreeRowReference*>(this)->get_model();
}

bool TreeRowReference::is_valid() const
{
  return gtk_tree_row_reference_valid(const_cast<GtkTreeRowReference*>(gobj()));
}


} // namespace Gtk


