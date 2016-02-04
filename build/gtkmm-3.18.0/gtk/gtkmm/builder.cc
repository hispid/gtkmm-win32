// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/builder.h>
#include <gtkmm/private/builder_p.h>


/* Copyright 2007 The gtkmm Development Team
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

#include <glibmm/vectorutils.h>
#include <gtkmm/application.h>

#include <gtk/gtk.h>

namespace
{

//TODO: When we can break ABI, replace this GQuark by member data in Gtk::Builder.
GQuark quark_no_gtkmm_derived_types = g_quark_from_static_string("gtkmm__Builder::no_gtkmm_derived_types");

// Allow GtkBuilder to instantiate a gtkmm derived GType instead of the regular
// GTK+ GType, so we can, for instance, use our vfuncs and default signal handlers.
static GType
get_type_from_name_vfunc_callback(GtkBuilder* self, const char* type_name)
{
  if (!type_name)
    return G_TYPE_INVALID;

  GType gtype = G_TYPE_INVALID;

  // If a TreeModel (such as ListStore or TreeStore) is being built,
  // Buildable_Class may have requested no search for gtkmm-derived types.
  // See https://bugzilla.gnome.org/show_bug.cgi?id=742637
  if (!g_object_get_qdata((GObject*)self, quark_no_gtkmm_derived_types))
  {
    // See if there is a gtkmm version of the gclass:
    Glib::ustring classname_prefixed ("gtkmm__"); // gtkmm uses a prefix
    classname_prefixed += type_name;

    gtype = g_type_from_name(classname_prefixed.c_str());
  }

  if (gtype == G_TYPE_INVALID) // If it's not a registered typename
  {
    // Get the parent class of the object class (the original underlying C class).
    Gtk::Builder_Class::BaseClassType* const base =
      static_cast<Gtk::Builder_Class::BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)));

    // Call the original underlying C function.
    if (base && base->get_type_from_name)
      gtype = (*base->get_type_from_name)(self, type_name);
    else // If that's not possible, just use the normal GType.
      gtype = g_type_from_name(type_name);
  }

  return gtype;
}

} // anonymous namespace

namespace Gtk
{

// Called from Buildable
void Builder::set_no_gtkmm_derived_types(bool status)
{
  g_object_set_qdata((GObject*)gobj(), quark_no_gtkmm_derived_types, (gpointer)status);
}

// static
Glib::RefPtr<Builder> Builder::create_from_file(const std::string& filename)
{
  auto builder = Builder::create();
  if(builder->add_from_file(filename))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

// static
Glib::RefPtr<Builder> Builder::create_from_file(const std::string& filename, const char* object_id)
{
  auto builder = Builder::create();
  if(builder->add_from_file(filename, object_id))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

//static
Glib::RefPtr<Builder> Builder::create_from_file(const std::string& filename, const Glib::ustring& object_id)
{
  auto builder = Builder::create();
  if(builder->add_from_file(filename, object_id))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

//static
Glib::RefPtr<Builder> Builder::create_from_file(const std::string& filename, const std::vector<Glib::ustring>& object_ids)
{
  auto builder = Builder::create();
  if(builder->add_from_file(filename, object_ids))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

// static
Glib::RefPtr<Builder> Builder::create_from_resource(const std::string& resource_path)
{
  auto builder = Builder::create();
  if(builder->add_from_resource(resource_path))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

// static
Glib::RefPtr<Builder> Builder::create_from_resource(const std::string& resource_path, const char* object_id)
{
  auto builder = Builder::create();
  if(builder->add_from_resource(resource_path, object_id))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

//static
Glib::RefPtr<Builder> Builder::create_from_resource(const std::string& resource_path, const Glib::ustring& object_id)
{
  auto builder = Builder::create();
  if(builder->add_from_resource(resource_path, object_id))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

//static
Glib::RefPtr<Builder> Builder::create_from_resource(const std::string& resource_path, const std::vector<Glib::ustring>& object_ids)
{
  auto builder = Builder::create();
  if(builder->add_from_resource(resource_path, object_ids))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

//static
Glib::RefPtr<Builder> Builder::create_from_string(const Glib::ustring& buffer)
{
  auto builder = Builder::create();
  if(builder->add_from_string(buffer))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

//static
Glib::RefPtr<Builder> Builder::create_from_string(const Glib::ustring& buffer,
                                                  const char* object_id)
{
  auto builder = Builder::create();
  if(builder->add_from_string(buffer, object_id))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

//static
Glib::RefPtr<Builder> Builder::create_from_string(const Glib::ustring& buffer,
                                                  const Glib::ustring& object_id)
{
  auto builder = Builder::create();
  if(builder->add_from_string(buffer, object_id))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

//static
Glib::RefPtr<Builder> Builder::create_from_string(const Glib::ustring& buffer,
                                                  const std::vector<Glib::ustring>& object_ids)
{
  auto builder = Builder::create();
  if(builder->add_from_string(buffer, object_ids))
    return builder;
  else
    return Glib::RefPtr<Builder>();
}

bool Builder::add_from_file(const std::string& filename, const char* object_id)
{
  std::vector<Glib::ustring> object_ids (1, object_id);

  return add_from_file(filename, object_ids);
}

bool Builder::add_from_file(const std::string& filename, const Glib::ustring& object_id)
{
  std::vector<Glib::ustring> object_ids (1, object_id);

  return add_from_file(filename, object_ids);
}

bool Builder::add_from_resource(const std::string& resource_path, const char* object_id)
{
  std::vector<Glib::ustring> object_ids (1, object_id);

  return add_from_resource(resource_path, object_ids);
}

bool Builder::add_from_resource(const std::string& resource_path, const Glib::ustring& object_id)
{
  std::vector<Glib::ustring> object_ids (1, object_id);

  return add_from_resource(resource_path, object_ids);
}

bool Builder::add_from_string(const Glib::ustring& buffer)
{
  GError* gerror = nullptr;
  bool retvalue = gtk_builder_add_from_string(gobj(), buffer.c_str(), -1 /* means null-terminated */, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}


bool Builder::add_from_string(const Glib::ustring& buffer, const char* object_id)
{
  std::vector<Glib::ustring> object_ids (1, object_id);

  return add_from_string(buffer, object_ids);
}

bool Builder::add_from_string(const Glib::ustring& buffer, const Glib::ustring& object_id)
{
  std::vector<Glib::ustring> object_ids (1, object_id);

  return add_from_string(buffer, object_ids);
}

bool Builder::add_from_string(const Glib::ustring& buffer, const std::vector<Glib::ustring>& object_ids)
{
  GError* gerror = nullptr;
  bool retvalue = gtk_builder_add_objects_from_string(
    gobj(),
    buffer.c_str(),
    -1 /* means null-terminated */,
    const_cast<char**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(object_ids).data ()),
    &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

GtkWidget* Builder::get_cwidget(const Glib::ustring& name)
{
  auto *cobject = gtk_builder_get_object (gobj(), name.c_str());
  if(!cobject)
  {
    g_critical("gtkmm: object `%s' not found in GtkBuilder file.", name.c_str());
    return 0;
  }

  if (!GTK_IS_WIDGET (cobject))
  {
    g_critical("gtkmm: object `%s' (type=`%s') (in GtkBuilder file) is not a widget type.",
               name.c_str(), G_OBJECT_TYPE_NAME(cobject));
    // Don't unref cobject. gtk_builder_get_object() does not give us a reference.
    return 0;
  }

  return GTK_WIDGET (cobject);
}

Gtk::Widget* Builder::get_widget_checked(const Glib::ustring& name, GType type)
{
  // Get the widget from the GtkBuilder file.
  auto *cobject = get_cwidget(name);
  if(!cobject)
  {
    g_critical("gtkmm: Gtk::Builder: widget `%s' was not found in the GtkBuilder file, or the specified part of it.",
      name.c_str());
    return 0;
  }

  // Check if it has the correct type.
  if(!g_type_is_a(G_OBJECT_TYPE(cobject), type))
  {
    g_critical("gtkmm: widget `%s' (in GtkBuilder file) is of type `%s' but `%s' was expected",
               name.c_str(), G_OBJECT_TYPE_NAME(cobject), g_type_name(type));
    return 0;
  }

  // Don't take a reference. That's done only in methods that return
  // a Glib::RefPtr<Something>.
  return Glib::wrap (GTK_WIDGET (cobject), false /* take ref */);
}

} // namespace Gtk

namespace
{
} // anonymous namespace


Gtk::BuilderError::BuilderError(Gtk::BuilderError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (GTK_BUILDER_ERROR, error_code, error_message)
{}

Gtk::BuilderError::BuilderError(GError* gobject)
:
  Glib::Error (gobject)
{}

Gtk::BuilderError::Code Gtk::BuilderError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gtk::BuilderError::throw_func(GError* gobject)
{
  throw Gtk::BuilderError(gobject);
}

// static
GType Glib::Value<Gtk::BuilderError::Code>::value_type()
{
  return gtk_builder_error_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::Builder> wrap(GtkBuilder* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::Builder>( dynamic_cast<Gtk::Builder*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Builder_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Builder_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_builder_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Builder_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->get_type_from_name = &get_type_from_name_vfunc_callback;
  
}


Glib::ObjectBase* Builder_Class::wrap_new(GObject* object)
{
  return new Builder((GtkBuilder*)object);
}


/* The implementation: */

GtkBuilder* Builder::gobj_copy()
{
  reference();
  return gobj();
}

Builder::Builder(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Builder::Builder(GtkBuilder* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Builder::Builder(Builder&& src) noexcept
: Glib::Object(std::move(src))
{}

Builder& Builder::operator=(Builder&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}

Builder::~Builder() noexcept
{}


Builder::CppClassType Builder::builder_class_; // initialize static member

GType Builder::get_type()
{
  return builder_class_.init().get_type();
}


GType Builder::get_base_type()
{
  return gtk_builder_get_type();
}


Builder::Builder()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(builder_class_.init()))
{
  

}

Glib::RefPtr<Builder> Builder::create()
{
  return Glib::RefPtr<Builder>( new Builder() );
}

bool Builder::add_from_file(const std::string& filename)
{
  GError* gerror = nullptr;
  bool retvalue = gtk_builder_add_from_file(gobj(), filename.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool Builder::add_from_file(const std::string& filename, const std::vector<Glib::ustring>& object_ids)
{
  GError* gerror = nullptr;
  bool retvalue = gtk_builder_add_objects_from_file(gobj(), filename.c_str(), const_cast<char**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(object_ids).data()), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool Builder::add_from_resource(const std::string& resource_path)
{
  GError* gerror = nullptr;
  bool retvalue = gtk_builder_add_from_resource(gobj(), resource_path.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool Builder::add_from_resource(const std::string& resource_path, const std::vector<Glib::ustring>& object_ids)
{
  GError* gerror = nullptr;
  bool retvalue = gtk_builder_add_objects_from_resource(gobj(), resource_path.c_str(), const_cast<char**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(object_ids).data()), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool Builder::add_from_string(const char* buffer, gsize length)
{
  GError* gerror = nullptr;
  bool retvalue = gtk_builder_add_from_string(gobj(), buffer, length, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void Builder::expose_object(const Glib::ustring& name, const Glib::RefPtr<Glib::Object>& object)
{
  gtk_builder_expose_object(gobj(), name.c_str(), Glib::unwrap(object));
}

void Builder::expose_widget(const Glib::ustring& name, Widget& widget)
{
  gtk_builder_expose_object(gobj(), name.c_str(), G_OBJECT((widget).gobj()));
}

Glib::RefPtr<Glib::Object> Builder::get_object(const Glib::ustring& name)
{
  Glib::RefPtr<Glib::Object> retvalue = Glib::wrap(gtk_builder_get_object(gobj(), name.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Glib::Object> Builder::get_object(const Glib::ustring& name) const
{
  return const_cast<Builder*>(this)->get_object(name);
}

std::vector<Glib::RefPtr<Glib::Object> > Builder::get_objects()
{
  return Glib::SListHandler<Glib::RefPtr<Glib::Object> >::slist_to_vector(gtk_builder_get_objects(gobj()), Glib::OWNERSHIP_SHALLOW);
}

std::vector<Glib::RefPtr<const Glib::Object> > Builder::get_objects() const
{
  return Glib::SListHandler<Glib::RefPtr<const Glib::Object> >::slist_to_vector(gtk_builder_get_objects(const_cast<GtkBuilder*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}

void Builder::set_translation_domain(const Glib::ustring& domain)
{
  gtk_builder_set_translation_domain(gobj(), domain.c_str());
}

Glib::ustring Builder::get_translation_domain() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_builder_get_translation_domain(const_cast<GtkBuilder*>(gobj())));
}

void Builder::set_application(const Glib::RefPtr<Application>& application)
{
  gtk_builder_set_application(gobj(), Glib::unwrap(application));
}

Glib::RefPtr<Application> Builder::get_application()
{
  Glib::RefPtr<Application> retvalue = Glib::wrap(gtk_builder_get_application(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Application> Builder::get_application() const
{
  return const_cast<Builder*>(this)->get_application();
}


Glib::PropertyProxy< Glib::ustring > Builder::property_translation_domain() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "translation-domain");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Builder::property_translation_domain() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "translation-domain");
}


} // namespace Gtk


