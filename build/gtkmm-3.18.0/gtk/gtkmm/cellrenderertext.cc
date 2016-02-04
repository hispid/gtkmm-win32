// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/cellrenderertext.h>
#include <gtkmm/private/cellrenderertext_p.h>


/*
 * Copyright 1998-2002 The gtkmm Development Team
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

Glib::PropertyProxy_Base CellRendererText::_property_renderable()
{
  return property_text();
}

void CellRendererText::edited(const Glib::ustring& path, const Glib::ustring& new_text)
{
  g_signal_emit_by_name(gobj(), "edited", path.c_str(), new_text.c_str());
}

} // namespace Gtk


namespace
{


static void CellRendererText_signal_edited_callback(GtkCellRendererText* self, const gchar* p0,const gchar* p1,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::ustring&,const Glib::ustring& > SlotType;

  auto obj = dynamic_cast<CellRendererText*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
, Glib::convert_const_gchar_ptr_to_ustring(p1)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo CellRendererText_signal_edited_info =
{
  "edited",
  (GCallback) &CellRendererText_signal_edited_callback,
  (GCallback) &CellRendererText_signal_edited_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::CellRendererText* wrap(GtkCellRendererText* object, bool take_copy)
{
  return dynamic_cast<Gtk::CellRendererText *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& CellRendererText_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CellRendererText_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_cell_renderer_text_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void CellRendererText_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->edited = &edited_callback;
}


void CellRendererText_Class::edited_callback(GtkCellRendererText* self, const gchar* p0, const gchar* p1)
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
        obj->on_edited(Glib::convert_const_gchar_ptr_to_ustring(p0)
, Glib::convert_const_gchar_ptr_to_ustring(p1)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->edited)
    (*base->edited)(self, p0, p1);
}


Glib::ObjectBase* CellRendererText_Class::wrap_new(GObject* o)
{
  return manage(new CellRendererText((GtkCellRendererText*)(o)));

}


/* The implementation: */

CellRendererText::CellRendererText(const Glib::ConstructParams& construct_params)
:
  Gtk::CellRenderer(construct_params)
{
  }

CellRendererText::CellRendererText(GtkCellRendererText* castitem)
:
  Gtk::CellRenderer((GtkCellRenderer*)(castitem))
{
  }


CellRendererText::CellRendererText(CellRendererText&& src) noexcept
: Gtk::CellRenderer(std::move(src))
{}

CellRendererText& CellRendererText::operator=(CellRendererText&& src) noexcept
{
  Gtk::CellRenderer::operator=(std::move(src));
  return *this;
}

CellRendererText::~CellRendererText() noexcept
{
  destroy_();
}

CellRendererText::CppClassType CellRendererText::cellrenderertext_class_; // initialize static member

GType CellRendererText::get_type()
{
  return cellrenderertext_class_.init().get_type();
}


GType CellRendererText::get_base_type()
{
  return gtk_cell_renderer_text_get_type();
}


CellRendererText::CellRendererText()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::CellRenderer(Glib::ConstructParams(cellrenderertext_class_.init()))
{
  

}

void CellRendererText::set_fixed_height_from_font(int number_of_rows)
{
  gtk_cell_renderer_text_set_fixed_height_from_font(gobj(), number_of_rows);
}


Glib::SignalProxy2< void,const Glib::ustring&,const Glib::ustring& > CellRendererText::signal_edited()
{
  return Glib::SignalProxy2< void,const Glib::ustring&,const Glib::ustring& >(this, &CellRendererText_signal_edited_info);
}


Glib::PropertyProxy< Glib::ustring > CellRendererText::property_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > CellRendererText::property_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "text");
}

Glib::PropertyProxy_WriteOnly< Glib::ustring > CellRendererText::property_markup() 
{
  return Glib::PropertyProxy_WriteOnly< Glib::ustring >(this, "markup");
}

Glib::PropertyProxy< Pango::AttrList > CellRendererText::property_attributes() 
{
  return Glib::PropertyProxy< Pango::AttrList >(this, "attributes");
}

Glib::PropertyProxy_ReadOnly< Pango::AttrList > CellRendererText::property_attributes() const
{
  return Glib::PropertyProxy_ReadOnly< Pango::AttrList >(this, "attributes");
}

Glib::PropertyProxy_WriteOnly< Glib::ustring > CellRendererText::property_background() 
{
  return Glib::PropertyProxy_WriteOnly< Glib::ustring >(this, "background");
}

Glib::PropertyProxy_WriteOnly< Glib::ustring > CellRendererText::property_foreground() 
{
  return Glib::PropertyProxy_WriteOnly< Glib::ustring >(this, "foreground");
}

#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< Gdk::Color > CellRendererText::property_background_gdk() 
{
  return Glib::PropertyProxy< Gdk::Color >(this, "background-gdk");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Gdk::Color > CellRendererText::property_background_gdk() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::Color >(this, "background-gdk");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< Gdk::Color > CellRendererText::property_foreground_gdk() 
{
  return Glib::PropertyProxy< Gdk::Color >(this, "foreground-gdk");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Gdk::Color > CellRendererText::property_foreground_gdk() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::Color >(this, "foreground-gdk");
}
#endif // GTKMM_DISABLE_DEPRECATED


Glib::PropertyProxy< Gdk::RGBA > CellRendererText::property_background_rgba() 
{
  return Glib::PropertyProxy< Gdk::RGBA >(this, "background-rgba");
}

Glib::PropertyProxy_ReadOnly< Gdk::RGBA > CellRendererText::property_background_rgba() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::RGBA >(this, "background-rgba");
}

Glib::PropertyProxy< Gdk::RGBA > CellRendererText::property_foreground_rgba() 
{
  return Glib::PropertyProxy< Gdk::RGBA >(this, "foreground-rgba");
}

Glib::PropertyProxy_ReadOnly< Gdk::RGBA > CellRendererText::property_foreground_rgba() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::RGBA >(this, "foreground-rgba");
}

Glib::PropertyProxy< Glib::ustring > CellRendererText::property_font() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "font");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > CellRendererText::property_font() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "font");
}

Glib::PropertyProxy< Pango::FontDescription > CellRendererText::property_font_desc() 
{
  return Glib::PropertyProxy< Pango::FontDescription >(this, "font-desc");
}

Glib::PropertyProxy_ReadOnly< Pango::FontDescription > CellRendererText::property_font_desc() const
{
  return Glib::PropertyProxy_ReadOnly< Pango::FontDescription >(this, "font-desc");
}

Glib::PropertyProxy< Glib::ustring > CellRendererText::property_family() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "family");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > CellRendererText::property_family() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "family");
}

Glib::PropertyProxy< Pango::Style > CellRendererText::property_style() 
{
  return Glib::PropertyProxy< Pango::Style >(this, "style");
}

Glib::PropertyProxy_ReadOnly< Pango::Style > CellRendererText::property_style() const
{
  return Glib::PropertyProxy_ReadOnly< Pango::Style >(this, "style");
}

Glib::PropertyProxy< Pango::Variant > CellRendererText::property_variant() 
{
  return Glib::PropertyProxy< Pango::Variant >(this, "variant");
}

Glib::PropertyProxy_ReadOnly< Pango::Variant > CellRendererText::property_variant() const
{
  return Glib::PropertyProxy_ReadOnly< Pango::Variant >(this, "variant");
}

Glib::PropertyProxy< int > CellRendererText::property_weight() 
{
  return Glib::PropertyProxy< int >(this, "weight");
}

Glib::PropertyProxy_ReadOnly< int > CellRendererText::property_weight() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "weight");
}

Glib::PropertyProxy< Pango::Stretch > CellRendererText::property_stretch() 
{
  return Glib::PropertyProxy< Pango::Stretch >(this, "stretch");
}

Glib::PropertyProxy_ReadOnly< Pango::Stretch > CellRendererText::property_stretch() const
{
  return Glib::PropertyProxy_ReadOnly< Pango::Stretch >(this, "stretch");
}

Glib::PropertyProxy< int > CellRendererText::property_size() 
{
  return Glib::PropertyProxy< int >(this, "size");
}

Glib::PropertyProxy_ReadOnly< int > CellRendererText::property_size() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "size");
}

Glib::PropertyProxy< double > CellRendererText::property_size_points() 
{
  return Glib::PropertyProxy< double >(this, "size-points");
}

Glib::PropertyProxy_ReadOnly< double > CellRendererText::property_size_points() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "size-points");
}

Glib::PropertyProxy< double > CellRendererText::property_scale() 
{
  return Glib::PropertyProxy< double >(this, "scale");
}

Glib::PropertyProxy_ReadOnly< double > CellRendererText::property_scale() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "scale");
}

Glib::PropertyProxy< bool > CellRendererText::property_editable() 
{
  return Glib::PropertyProxy< bool >(this, "editable");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_editable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "editable");
}

Glib::PropertyProxy< bool > CellRendererText::property_strikethrough() 
{
  return Glib::PropertyProxy< bool >(this, "strikethrough");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_strikethrough() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "strikethrough");
}

Glib::PropertyProxy< Pango::Underline > CellRendererText::property_underline() 
{
  return Glib::PropertyProxy< Pango::Underline >(this, "underline");
}

Glib::PropertyProxy_ReadOnly< Pango::Underline > CellRendererText::property_underline() const
{
  return Glib::PropertyProxy_ReadOnly< Pango::Underline >(this, "underline");
}

Glib::PropertyProxy< int > CellRendererText::property_rise() 
{
  return Glib::PropertyProxy< int >(this, "rise");
}

Glib::PropertyProxy_ReadOnly< int > CellRendererText::property_rise() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "rise");
}

Glib::PropertyProxy< Glib::ustring > CellRendererText::property_language() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "language");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > CellRendererText::property_language() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "language");
}

Glib::PropertyProxy< Pango::EllipsizeMode > CellRendererText::property_ellipsize() 
{
  return Glib::PropertyProxy< Pango::EllipsizeMode >(this, "ellipsize");
}

Glib::PropertyProxy_ReadOnly< Pango::EllipsizeMode > CellRendererText::property_ellipsize() const
{
  return Glib::PropertyProxy_ReadOnly< Pango::EllipsizeMode >(this, "ellipsize");
}

Glib::PropertyProxy< int > CellRendererText::property_width_chars() 
{
  return Glib::PropertyProxy< int >(this, "width-chars");
}

Glib::PropertyProxy_ReadOnly< int > CellRendererText::property_width_chars() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "width-chars");
}

Glib::PropertyProxy< int > CellRendererText::property_max_width_chars() 
{
  return Glib::PropertyProxy< int >(this, "max-width-chars");
}

Glib::PropertyProxy_ReadOnly< int > CellRendererText::property_max_width_chars() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "max-width-chars");
}

Glib::PropertyProxy< Pango::WrapMode > CellRendererText::property_wrap_mode() 
{
  return Glib::PropertyProxy< Pango::WrapMode >(this, "wrap-mode");
}

Glib::PropertyProxy_ReadOnly< Pango::WrapMode > CellRendererText::property_wrap_mode() const
{
  return Glib::PropertyProxy_ReadOnly< Pango::WrapMode >(this, "wrap-mode");
}

Glib::PropertyProxy< int > CellRendererText::property_wrap_width() 
{
  return Glib::PropertyProxy< int >(this, "wrap-width");
}

Glib::PropertyProxy_ReadOnly< int > CellRendererText::property_wrap_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "wrap-width");
}

Glib::PropertyProxy< Pango::Alignment > CellRendererText::property_alignment() 
{
  return Glib::PropertyProxy< Pango::Alignment >(this, "alignment");
}

Glib::PropertyProxy_ReadOnly< Pango::Alignment > CellRendererText::property_alignment() const
{
  return Glib::PropertyProxy_ReadOnly< Pango::Alignment >(this, "alignment");
}

Glib::PropertyProxy< bool > CellRendererText::property_background_set() 
{
  return Glib::PropertyProxy< bool >(this, "background-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_background_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "background-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_foreground_set() 
{
  return Glib::PropertyProxy< bool >(this, "foreground-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_foreground_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "foreground-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_family_set() 
{
  return Glib::PropertyProxy< bool >(this, "family-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_family_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "family-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_style_set() 
{
  return Glib::PropertyProxy< bool >(this, "style-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_style_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "style-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_variant_set() 
{
  return Glib::PropertyProxy< bool >(this, "variant-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_variant_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "variant-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_weight_set() 
{
  return Glib::PropertyProxy< bool >(this, "weight-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_weight_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "weight-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_stretch_set() 
{
  return Glib::PropertyProxy< bool >(this, "stretch-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_stretch_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "stretch-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_size_set() 
{
  return Glib::PropertyProxy< bool >(this, "size-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_size_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "size-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_scale_set() 
{
  return Glib::PropertyProxy< bool >(this, "scale-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_scale_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "scale-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_editable_set() 
{
  return Glib::PropertyProxy< bool >(this, "editable-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_editable_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "editable-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_strikethrough_set() 
{
  return Glib::PropertyProxy< bool >(this, "strikethrough-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_strikethrough_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "strikethrough-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_underline_set() 
{
  return Glib::PropertyProxy< bool >(this, "underline-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_underline_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "underline-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_rise_set() 
{
  return Glib::PropertyProxy< bool >(this, "rise-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_rise_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "rise-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_language_set() 
{
  return Glib::PropertyProxy< bool >(this, "language-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_language_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "language-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_ellipsize_set() 
{
  return Glib::PropertyProxy< bool >(this, "ellipsize-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_ellipsize_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "ellipsize-set");
}

Glib::PropertyProxy< bool > CellRendererText::property_single_paragraph_mode() 
{
  return Glib::PropertyProxy< bool >(this, "single-paragraph-mode");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_single_paragraph_mode() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "single-paragraph-mode");
}

Glib::PropertyProxy< bool > CellRendererText::property_align_set() 
{
  return Glib::PropertyProxy< bool >(this, "align-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererText::property_align_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "align-set");
}

Glib::PropertyProxy< Glib::ustring > CellRendererText::property_placeholder_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "placeholder-text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > CellRendererText::property_placeholder_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "placeholder-text");
}


void Gtk::CellRendererText::on_edited(const Glib::ustring& path, const Glib::ustring& new_text)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->edited)
    (*base->edited)(gobj(),path.c_str(),new_text.c_str());
}


} // namespace Gtk


