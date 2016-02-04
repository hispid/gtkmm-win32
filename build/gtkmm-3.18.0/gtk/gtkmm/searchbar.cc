// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/searchbar.h>
#include <gtkmm/private/searchbar_p.h>


/*
 * Copyright 2013 The gtkmm Development Team
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
} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::SearchBar* wrap(GtkSearchBar* object, bool take_copy)
{
  return dynamic_cast<Gtk::SearchBar *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& SearchBar_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SearchBar_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_search_bar_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void SearchBar_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SearchBar_Class::wrap_new(GObject* o)
{
  return manage(new SearchBar((GtkSearchBar*)(o)));

}


/* The implementation: */

SearchBar::SearchBar(const Glib::ConstructParams& construct_params)
:
  Gtk::Bin(construct_params)
{
  }

SearchBar::SearchBar(GtkSearchBar* castitem)
:
  Gtk::Bin((GtkBin*)(castitem))
{
  }


SearchBar::SearchBar(SearchBar&& src) noexcept
: Gtk::Bin(std::move(src))
{}

SearchBar& SearchBar::operator=(SearchBar&& src) noexcept
{
  Gtk::Bin::operator=(std::move(src));
  return *this;
}

SearchBar::~SearchBar() noexcept
{
  destroy_();
}

SearchBar::CppClassType SearchBar::searchbar_class_; // initialize static member

GType SearchBar::get_type()
{
  return searchbar_class_.init().get_type();
}


GType SearchBar::get_base_type()
{
  return gtk_search_bar_get_type();
}


SearchBar::SearchBar()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(searchbar_class_.init()))
{
  

}

void SearchBar::connect_entry(Gtk::Entry& entry)
{
  gtk_search_bar_connect_entry(gobj(), (entry).gobj());
}

bool SearchBar::get_search_mode() const
{
  return gtk_search_bar_get_search_mode(const_cast<GtkSearchBar*>(gobj()));
}

void SearchBar::set_search_mode(bool search_mode)
{
  gtk_search_bar_set_search_mode(gobj(), static_cast<int>(search_mode));
}

bool SearchBar::get_show_close_button() const
{
  return gtk_search_bar_get_show_close_button(const_cast<GtkSearchBar*>(gobj()));
}

void SearchBar::set_show_close_button(bool visible)
{
  gtk_search_bar_set_show_close_button(gobj(), static_cast<int>(visible));
}

bool SearchBar::handle_event(GdkEventKey* gdk_event)
{
  return gtk_search_bar_handle_event(gobj(), ((GdkEvent*)(gdk_event)));
}


Glib::PropertyProxy< bool > SearchBar::property_search_mode_enabled() 
{
  return Glib::PropertyProxy< bool >(this, "search-mode-enabled");
}

Glib::PropertyProxy_ReadOnly< bool > SearchBar::property_search_mode_enabled() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "search-mode-enabled");
}

Glib::PropertyProxy< bool > SearchBar::property_show_close_button() 
{
  return Glib::PropertyProxy< bool >(this, "show-close-button");
}

Glib::PropertyProxy_ReadOnly< bool > SearchBar::property_show_close_button() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-close-button");
}


} // namespace Gtk

