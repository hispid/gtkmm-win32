// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <glibmm/regex.h>
#include <glibmm/private/regex_p.h>


/* Copyright (C) 2007 The glibmm Development Team
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

namespace Glib
{

Glib::RefPtr<Glib::Regex> Regex::create(const Glib::ustring& pattern,
                                        RegexCompileFlags compile_options,
                                        RegexMatchFlags match_options)
{
  GError* gerror = nullptr;
  auto regex  = g_regex_new(pattern.c_str(), (GRegexCompileFlags)compile_options,
                               (GRegexMatchFlags)match_options, &gerror);

  if(gerror)
    Glib::Error::throw_exception(gerror);
  return Glib::wrap(regex);
}

// static
Glib::ustring Regex::escape_string(const Glib::ustring& string)
{
  const Glib::ScopedPtr<char> buf (g_regex_escape_string(string.raw().c_str(),
                                                         string.raw().size()));
  return Glib::ustring(buf.get());
}

bool Regex::match(
  const Glib::ustring& string,
  Glib::MatchInfo& match_info,
  RegexMatchFlags match_options
)
{
  GMatchInfo* ginfo = nullptr;
  bool const result = static_cast<bool>(g_regex_match(gobj(), string.c_str(),
    static_cast<GRegexMatchFlags>(match_options), &ginfo));
  match_info.set_gobject(ginfo);
  return result;
}

bool Regex::match(const Glib::ustring& string, RegexMatchFlags match_options)
{
  return g_regex_match(gobj(), string.c_str(), (GRegexMatchFlags)(match_options), 0);
}

bool Regex::match(
  const Glib::ustring& string,
  int start_position,
  Glib::MatchInfo& match_info,
  RegexMatchFlags match_options
)
{
  GError* gerror = nullptr;
  GMatchInfo* ginfo = nullptr;

  bool const result = static_cast<bool>(g_regex_match_full(gobj(),
    string.c_str(), -1, start_position,
    static_cast<GRegexMatchFlags>(match_options), &ginfo, &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  match_info.set_gobject(ginfo);
  return result;
}

bool Regex::match(
  const Glib::ustring& string,
  gssize string_len,
  int start_position,
  Glib::MatchInfo& match_info,
  RegexMatchFlags match_options
)
{
  GError* gerror = nullptr;
  GMatchInfo* ginfo = nullptr;

  bool const result = static_cast<bool>(g_regex_match_full(gobj(),
    string.c_str(), string_len, start_position,
    static_cast<GRegexMatchFlags>(match_options), &ginfo, &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  match_info.set_gobject(ginfo);
  return result;
}

bool Regex::match(const Glib::ustring& string, int start_position, RegexMatchFlags match_options)
{
  GError* gerror = nullptr;
  bool retvalue = g_regex_match_full(gobj(), string.c_str(), -1, start_position, ((GRegexMatchFlags)(match_options)), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

bool Regex::match(const Glib::ustring& string, gssize string_len, int start_position, RegexMatchFlags match_options)
{
  GError* gerror = nullptr;
  bool retvalue = g_regex_match_full(gobj(), string.c_str(), string_len, start_position, ((GRegexMatchFlags)(match_options)), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

bool Regex::match_all(
  const Glib::ustring& string,
  Glib::MatchInfo& match_info,
  RegexMatchFlags match_options
)
{
  GMatchInfo* ginfo = nullptr;
  bool const result = static_cast<bool>(g_regex_match_all(gobj(),
    string.c_str(), static_cast<GRegexMatchFlags>(match_options),
    &ginfo));
  match_info.set_gobject(ginfo);
  return result;
}

bool Regex::match_all(const Glib::ustring& string, RegexMatchFlags match_options)
{
  return g_regex_match_all(gobj(), string.c_str(), ((GRegexMatchFlags)(match_options)), 0);
}

bool Regex::match_all(
  const Glib::ustring& string,
  int start_position,
  Glib::MatchInfo& match_info,
  RegexMatchFlags match_options
)
{
  GError* gerror = nullptr;
  GMatchInfo* ginfo = nullptr;

  bool const retvalue = static_cast<bool>(g_regex_match_all_full(gobj(),
    string.c_str(), -1, start_position,
    static_cast<GRegexMatchFlags>(match_options), &ginfo, &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  match_info.set_gobject(ginfo);
  return retvalue;
}

bool Regex::match_all(
  const Glib::ustring& string,
  gssize string_len,
  int start_position,
  Glib::MatchInfo& match_info,
  RegexMatchFlags match_options
)
{
  GError* gerror = nullptr;
  GMatchInfo* ginfo = nullptr;

  bool const retvalue = static_cast<bool>(g_regex_match_all_full(gobj(),
    string.c_str(), string_len, start_position,
    static_cast<GRegexMatchFlags>(match_options), &ginfo, &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  match_info.set_gobject(ginfo);
  return retvalue;
}

bool Regex::match_all(const Glib::ustring& string, int start_position, RegexMatchFlags match_options)
{
  GError* gerror = nullptr;
  bool retvalue = g_regex_match_all_full(gobj(), string.c_str(), -1, start_position, ((GRegexMatchFlags)(match_options)), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

bool Regex::match_all(const Glib::ustring& string, gssize string_len, int start_position, RegexMatchFlags match_options)
{
  GError* gerror = nullptr;
  bool retvalue = g_regex_match_all_full(gobj(), string.c_str(), string_len, start_position, ((GRegexMatchFlags)(match_options)), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

Glib::ustring Regex::replace(const Glib::ustring& string, int start_position, const Glib::ustring& replacement, RegexMatchFlags match_options)
{
  GError* gerror = nullptr;
  auto retvalue = Glib::convert_return_gchar_ptr_to_ustring(g_regex_replace(gobj(), string.c_str(), -1, start_position, replacement.c_str(), ((GRegexMatchFlags)(match_options)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}


Glib::ustring Regex::replace_literal(const Glib::ustring& string, int start_position, const Glib::ustring& replacement, RegexMatchFlags match_options)
{
  GError* gerror = nullptr;
  auto retvalue = Glib::convert_return_gchar_ptr_to_ustring(g_regex_replace_literal(gobj(), string.c_str(), -1, start_position, replacement.c_str(), ((GRegexMatchFlags)(match_options)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

Glib::StringArrayHandle Regex::split(const Glib::ustring& string, int start_position, RegexMatchFlags match_options, int max_tokens) const
{
  GError* gerror = nullptr;
  auto retvalue = Glib::StringArrayHandle(g_regex_split_full(const_cast<GRegex*>(gobj()), string.c_str(), -1, start_position, ((GRegexMatchFlags)(match_options)), max_tokens, &(gerror)), Glib::OWNERSHIP_DEEP);
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}


MatchInfo::MatchInfo()
: gobject_(0),
  take_ownership(false)
{
}

MatchInfo::MatchInfo(GMatchInfo* castitem, bool take_the_ownership)
: gobject_(castitem),
  take_ownership(take_the_ownership)
{
}


MatchInfo::MatchInfo(MatchInfo&& other) noexcept
: gobject_(std::move(other.gobject_)),
  take_ownership(std::move(other.take_ownership))
{
  other.gobject_ = nullptr;
  other.take_ownership = false;
}

MatchInfo& MatchInfo::operator=(MatchInfo&& other) noexcept
{
  if(take_ownership && gobject_)
    g_match_info_free(gobject_);

  gobject_ = std::move(other.gobject_);
  take_ownership = std::move(other.take_ownership);

  other.gobject_ = nullptr;
  other.take_ownership = false;

  return *this;
}

void MatchInfo::set_gobject(GMatchInfo* castitem, bool take_the_ownership)
{
  if(gobject_ && this->take_ownership)
    g_match_info_free(gobject_);

  gobject_ = castitem;
  this->take_ownership = take_the_ownership;
}

MatchInfo::~MatchInfo()
{
  if(take_ownership && gobject_)
    g_match_info_free(gobject_);
}

} // namespace Glib

namespace
{
} // anonymous namespace


Glib::RegexError::RegexError(Glib::RegexError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (G_REGEX_ERROR, error_code, error_message)
{}

Glib::RegexError::RegexError(GError* gobject)
:
  Glib::Error (gobject)
{}

Glib::RegexError::Code Glib::RegexError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Glib::RegexError::throw_func(GError* gobject)
{
  throw Glib::RegexError(gobject);
}


/* Why reinterpret_cast<Regex*>(gobject) is needed:
 *
 * A Regex instance is in fact always a GRegex instance.
 * Unfortunately, GRegex cannot be a member of Regex,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because Regex does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Glib::Regex> wrap(GRegex* object, bool take_copy)
{
  if(take_copy && object)
    g_regex_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Glib::Regex>(reinterpret_cast<Glib::Regex*>(object));
}

} // namespace Glib


namespace Glib
{


void Regex::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_regex_ref(reinterpret_cast<GRegex*>(const_cast<Regex*>(this)));
}

void Regex::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_regex_unref(reinterpret_cast<GRegex*>(const_cast<Regex*>(this)));
}

GRegex* Regex::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GRegex*>(this);
}

const GRegex* Regex::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GRegex*>(this);
}

GRegex* Regex::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GRegex*>(const_cast<Regex*>(this));
  g_regex_ref(gobject);
  return gobject;
}


Glib::ustring Regex::get_pattern() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_regex_get_pattern(const_cast<GRegex*>(gobj())));
}

int Regex::get_max_backref() const
{
  return g_regex_get_max_backref(const_cast<GRegex*>(gobj()));
}

int Regex::get_capture_count() const
{
  return g_regex_get_capture_count(const_cast<GRegex*>(gobj()));
}

bool Regex::get_has_cr_or_lf() const
{
  return g_regex_get_has_cr_or_lf(const_cast<GRegex*>(gobj()));
}

int Regex::get_max_lookbehind() const
{
  return g_regex_get_max_lookbehind(const_cast<GRegex*>(gobj()));
}

int Regex::get_string_number(const Glib::ustring& name) const
{
  return g_regex_get_string_number(const_cast<GRegex*>(gobj()), name.c_str());
}

RegexCompileFlags Regex::get_compile_flags() const
{
  return ((RegexCompileFlags)(g_regex_get_compile_flags(const_cast<GRegex*>(gobj()))));
}

RegexMatchFlags Regex::get_match_flags() const
{
  return ((RegexMatchFlags)(g_regex_get_match_flags(const_cast<GRegex*>(gobj()))));
}

bool Regex::match_simple(const Glib::ustring& pattern, const Glib::ustring& string, RegexCompileFlags compile_options, RegexMatchFlags match_options)
{
  return g_regex_match_simple(pattern.c_str(), string.c_str(), ((GRegexCompileFlags)(compile_options)), ((GRegexMatchFlags)(match_options)));
}

Glib::StringArrayHandle Regex::split_simple(const Glib::ustring& pattern, const Glib::ustring& string, RegexCompileFlags compile_options, RegexMatchFlags match_options)
{
  return Glib::StringArrayHandle(g_regex_split_simple(pattern.c_str(), string.c_str(), ((GRegexCompileFlags)(compile_options)), ((GRegexMatchFlags)(match_options))), Glib::OWNERSHIP_DEEP);
}

Glib::StringArrayHandle Regex::split(const Glib::ustring& string, RegexMatchFlags match_options)
{
  return Glib::StringArrayHandle(g_regex_split(gobj(), string.c_str(), ((GRegexMatchFlags)(match_options))), Glib::OWNERSHIP_DEEP);
}

Glib::StringArrayHandle Regex::split(const gchar* string, gssize string_len, int start_position, RegexMatchFlags match_options, int max_tokens) const
{
  GError* gerror = nullptr;
  Glib::StringArrayHandle retvalue = Glib::StringArrayHandle(g_regex_split_full(const_cast<GRegex*>(gobj()), string, string_len, start_position, ((GRegexMatchFlags)(match_options)), max_tokens, &(gerror)), Glib::OWNERSHIP_DEEP);
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::ustring Regex::replace(const gchar* string, gssize string_len, int start_position, const Glib::ustring& replacement, RegexMatchFlags match_options)
{
  GError* gerror = nullptr;
  Glib::ustring retvalue = Glib::convert_return_gchar_ptr_to_ustring(g_regex_replace(gobj(), string, string_len, start_position, replacement.c_str(), ((GRegexMatchFlags)(match_options)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::ustring Regex::replace_literal(const gchar * string, gssize string_len, int start_position, const Glib::ustring& replacement, RegexMatchFlags match_options)
{
  GError* gerror = nullptr;
  Glib::ustring retvalue = Glib::convert_return_gchar_ptr_to_ustring(g_regex_replace_literal(gobj(), string, string_len, start_position, replacement.c_str(), ((GRegexMatchFlags)(match_options)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::ustring Regex::replace_eval(const Glib::ustring& string, gssize string_len, int start_position, RegexMatchFlags match_options, GRegexEvalCallback eval, gpointer user_data)
{
  GError* gerror = nullptr;
  Glib::ustring retvalue = Glib::convert_return_gchar_ptr_to_ustring(g_regex_replace_eval(gobj(), string.c_str(), string_len, start_position, ((GRegexMatchFlags)(match_options)), eval, user_data, &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool Regex::check_replacement(const Glib::ustring& replacement, gboolean* has_references)
{
  GError* gerror = nullptr;
  bool retvalue = g_regex_check_replacement(replacement.c_str(), has_references, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}


} // namespace Glib


namespace Glib
{


Glib::RefPtr<Regex> MatchInfo::get_regex()
{
  return Glib::wrap(g_match_info_get_regex(gobj()));
}

Glib::RefPtr<const Regex> MatchInfo::get_regex() const
{
  return const_cast<MatchInfo*>(this)->get_regex();
}

Glib::ustring MatchInfo::get_string() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_match_info_get_string(const_cast<GMatchInfo*>(gobj())));
}

bool MatchInfo::matches() const
{
  return g_match_info_matches(const_cast<GMatchInfo*>(gobj()));
}

bool MatchInfo::next()
{
  GError* gerror = nullptr;
  bool retvalue = g_match_info_next(gobj(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

int MatchInfo::get_match_count() const
{
  return g_match_info_get_match_count(const_cast<GMatchInfo*>(gobj()));
}

bool MatchInfo::is_partial_match() const
{
  return g_match_info_is_partial_match(const_cast<GMatchInfo*>(gobj()));
}

Glib::ustring MatchInfo::expand_references(const Glib::ustring& string_to_expand)
{
  GError* gerror = nullptr;
  Glib::ustring retvalue = Glib::convert_return_gchar_ptr_to_ustring(g_match_info_expand_references(gobj(), string_to_expand.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::ustring MatchInfo::fetch(int match_num)
{
  return Glib::convert_return_gchar_ptr_to_ustring(g_match_info_fetch(gobj(), match_num));
}

bool MatchInfo::fetch_pos(int match_num, int& start_pos, int& end_pos)
{
  return g_match_info_fetch_pos(gobj(), match_num, &(start_pos), &(end_pos));
}

Glib::ustring MatchInfo::fetch_named(const Glib::ustring& name)
{
  return Glib::convert_return_gchar_ptr_to_ustring(g_match_info_fetch_named(gobj(), name.c_str()));
}

bool MatchInfo::fetch_named_pos(const Glib::ustring& name, int& start_pos, int& end_pos)
{
  return g_match_info_fetch_named_pos(gobj(), name.c_str(), &(start_pos), &(end_pos));
}

Glib::StringArrayHandle MatchInfo::fetch_all()
{
  return Glib::StringArrayHandle(g_match_info_fetch_all(gobj()), Glib::OWNERSHIP_DEEP);
}


} // namespace Glib


