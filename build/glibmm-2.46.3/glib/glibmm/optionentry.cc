// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <glibmm/optionentry.h>
#include <glibmm/private/optionentry_p.h>


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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/utility.h>
#include <glib.h>

namespace Glib
{

OptionEntry::OptionEntry()
{
  gobject_ = g_new0(GOptionEntry, 1);
}

OptionEntry::~OptionEntry()
{
  release_gobject();
}

void OptionEntry::release_gobject() noexcept
{
  if(!gobject_)
    return;

  g_free(const_cast<char*>(gobject_->long_name));
  g_free(const_cast<char*>(gobject_->description));
  g_free(const_cast<char*>(gobject_->arg_description));
  g_free(gobject_);
}

OptionEntry::OptionEntry(const OptionEntry& src)
{
  gobject_ = g_new0(GOptionEntry, 1);

  operator=(src);
}

OptionEntry& OptionEntry::operator=(const OptionEntry& src)
{
  if(this != &src)
  {
    if(gobject_->long_name)
      g_free(const_cast<char*>(gobject_->long_name));

    gobject_->long_name = g_strdup(src.gobject_->long_name);

    gobject_->short_name = src.gobject_->short_name; //It's just one char.

    gobject_->flags = src.gobject_->flags;
    gobject_->arg = src.gobject_->arg;
    gobject_->arg_data = src.gobject_->arg_data; //Shared, because it's not owned by any instance of this class anyway.

    if(gobject_->description)
      g_free(const_cast<char*>(gobject_->description));

    gobject_->description = g_strdup(src.gobject_->description);

    if(gobject_->arg_description)
      g_free(const_cast<char*>(gobject_->arg_description));

    gobject_->arg_description = g_strdup(src.gobject_->arg_description);
  }

  return *this;
}

OptionEntry::OptionEntry(OptionEntry&& other) noexcept
: gobject_(std::move(other.gobject_))
{
  other.gobject_ = nullptr;
}

OptionEntry& OptionEntry::operator=(OptionEntry&& other) noexcept
{
  release_gobject();

  gobject_ = std::move(other.gobject_);
  other.gobject_ = nullptr;

  return *this;
}

void OptionEntry::set_long_name(const Glib::ustring& value)
{
  if(gobject_->long_name)
  {
    g_free((gchar*)(gobject_->long_name));
    gobject_->long_name = nullptr;
  }

  //Note that we do not use NULL for an empty string,
  //because G_OPTION_REMAINING is actually a "", so it actually has a distinct meaning:
  //TODO: Wrap G_OPTION_REMAINING in C++ somehow, maybe as an explicit set_long_name(void) or set_is_remaining()? murrayc.
  gobj()->long_name = (value).c_str() ? g_strdup((value).c_str()) : 0;
}

void OptionEntry::set_description(const Glib::ustring& value)
{
  if(gobject_->description)
  {
    g_free((gchar*)(gobject_->description));
    gobject_->description = nullptr;
  }

  gobj()->description = (value).empty() ? 0 : g_strdup((value).c_str());
}

void OptionEntry::set_arg_description(const Glib::ustring& value)
{
  if(gobject_->arg_description)
  {
    g_free((gchar*)(gobject_->arg_description));
    gobject_->arg_description = nullptr;
  }

  gobj()->arg_description = (value).empty() ? 0 : g_strdup((value).c_str());
}


} // namespace Glib


namespace
{
} // anonymous namespace


namespace Glib
{


 Glib::ustring OptionEntry::get_long_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gobj()->long_name);
}
 
 gchar OptionEntry::get_short_name() const
{
  return gobj()->short_name;
}
 
 void OptionEntry::set_short_name(const gchar& value)
{
  gobj()->short_name = value;
}
 
 int OptionEntry::get_flags() const
{
  return gobj()->flags;
}
 
 void OptionEntry::set_flags(const int& value)
{
  gobj()->flags = value;
}
 
 Glib::ustring OptionEntry::get_description() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gobj()->description);
}
 
 Glib::ustring OptionEntry::get_arg_description() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gobj()->arg_description);
}
 

} // namespace Glib


