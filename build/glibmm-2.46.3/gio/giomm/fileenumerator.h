// -*- c++ -*-
// Generated by gmmproc 2.46.3 -- DO NOT MODIFY!
#ifndef _GIOMM_FILEENUMERATOR_H
#define _GIOMM_FILEENUMERATOR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

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

#include <glibmm/object.h>
#include <glibmm/arrayhandle.h>
#include <glibmm/listhandle.h>
#include <glibmm/priorities.h>
#include <giomm/asyncresult.h>
#include <giomm/cancellable.h>
#include <giomm/fileinfo.h>
//#include <giomm/file.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GFileEnumerator GFileEnumerator;
typedef struct _GFileEnumeratorClass GFileEnumeratorClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class FileEnumerator_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

class File;

//TODO: Consider wrapping this like a std::iterator (or at least renaming it), though the asyncness probably makes that unsuitable.

/** Enumerated Files Routines.
 * FileEnumerator allows you to operate on a set of Gio::Files, returning a Gio::FileInfo instance for each file enumerated
 * (e.g. Gio::File::enumerate_children() will return a FileEnumerator for each of the children within a directory).
 *
 * To get the next file's information from a Gio::FileEnumerator, use next_file() or its asynchronous version, next_file_async().
 * Note that the asynchronous version will return a list of Gio::FileInfos, whereas the synchronous version will only return the next
 * file in the enumerator.
 *
 * To close a Gio::FileEnumerator, use FileEnumerator::close(), or its asynchronous version, close_async(). Once a FileEnumerator is closed,
 * no further actions may be performed on it.
 *
 * @newin{2,16}
 */

class FileEnumerator : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef FileEnumerator CppObjectType;
  typedef FileEnumerator_Class CppClassType;
  typedef GFileEnumerator BaseObjectType;
  typedef GFileEnumeratorClass BaseClassType;

  // noncopyable
  FileEnumerator(const FileEnumerator&) = delete;
  FileEnumerator& operator=(const FileEnumerator&) = delete;

private:  friend class FileEnumerator_Class;
  static CppClassType fileenumerator_class_;

protected:
  explicit FileEnumerator(const Glib::ConstructParams& construct_params);
  explicit FileEnumerator(GFileEnumerator* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  FileEnumerator(FileEnumerator&& src) noexcept;
  FileEnumerator& operator=(FileEnumerator&& src) noexcept;

  virtual ~FileEnumerator() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GFileEnumerator*       gobj()       { return reinterpret_cast<GFileEnumerator*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GFileEnumerator* gobj() const { return reinterpret_cast<GFileEnumerator*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GFileEnumerator* gobj_copy();

private:


public:
  
  /** Returns information for the next file in the enumerated object.
   * Will block until the information is available. The FileInfo 
   * returned from this function will contain attributes that match the 
   * attribute string that was passed when the FileEnumerator was created.
   * 
   * See the documentation of FileEnumerator for information about the
   * order of returned files.
   * 
   * On error, returns <tt>0</tt> and sets @a error to the error. If the
   * enumerator is at the end, <tt>0</tt> will be returned and @a error will
   * be unset.
   * 
   * @param cancellable Optional Cancellable object, <tt>0</tt> to ignore.
   * @return A FileInfo or <tt>0</tt> on error
   * or end of enumerator.  Free the returned object with
   * Glib::object_unref() when no longer needed.
   */
  Glib::RefPtr<FileInfo> next_file(const Glib::RefPtr<Cancellable>& cancellable);

  /// A next_file() convenience overload.
  Glib::RefPtr<FileInfo> next_file();

  
  /** Releases all resources used by this enumerator, making the
   * enumerator return IO_ERROR_CLOSED on all calls.
   * 
   * This will be automatically called when the last reference
   * is dropped, but you might want to call this function to make 
   * sure resources are released as early as possible.
   * 
   * @param cancellable Optional Cancellable object, <tt>0</tt> to ignore.
   * @return #<tt>true</tt> on success or #<tt>false</tt> on error.
   */
  bool close(const Glib::RefPtr<Cancellable>& cancellable);

  /// A close() convenience overload.
  bool close();


  /** Request information for a number of files from the enumerator asynchronously.
   * When all I/O for the operation is finished the callback slot will be called with the requested information.
   *
   * The callback could be called with less than num_files files in case of error or at the end of the enumerator.
   * In case of a partial error the callback will be called with any succeeding items and no error, and on the next request the error will be reported.
   * If a request is cancelled the callback will be called with ERROR_CANCELLED.
   *
   * During an async request no other sync and async calls are allowed, and will result in ERROR_PENDING errors.
   *
   * Any outstanding I/O request with higher priority (lower numerical value) will be executed before an outstanding request with lower priority.
   * The default priority is PRIORITY_DEFAULT.
   * @param slot A callback to call when the request is satisfied.
   * @param cancellable An cancellable object which can be used to cancel the request.
   * @param num_files The number of file info objects to request.
   * @param io_priority The I/O priority of the request.
   */
  void next_files_async(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, int num_files = 1, int io_priority = Glib::PRIORITY_DEFAULT);

  /** Request information for a number of files from the enumerator asynchronously.
   * When all I/O for the operation is finished the callback slot will be called with the requested information.
   *
   * The callback could be called with less than num_files files in case of error or at the end of the enumerator.
   * In case of a partial error the callback will be called with any succeeding items and no error, and on the next request the error will be reported.
   * If a request is cancelled the callback will be called with ERROR_CANCELLED.
   *
   * During an async request no other sync and async calls are allowed, and will result in ERROR_PENDING errors.
   *
   * Any outstanding I/O request with higher priority (lower numerical value) will be executed before an outstanding request with lower priority.
   * The default priority is PRIORITY_DEFAULT.
   * @param slot A callback to call when the request is satisfied.
   * @param num_files The number of file info objects to request.
   * @param io_priority The I/O priority of the request.
   */
  void next_files_async(const SlotAsyncReady& slot, int num_files = 1, int io_priority = Glib::PRIORITY_DEFAULT);
  

  /** Finishes the asynchronous operation started with g_file_enumerator_next_files_async().
   * 
   * @param result A AsyncResult.
   * @return A List of FileInfos. You must free the list with 
   * Glib::list_free() and unref the infos with Glib::object_unref() when you're 
   * done with them.
   */
  Glib::ListHandle< Glib::RefPtr<FileInfo> > next_files_finish(const Glib::RefPtr<AsyncResult>& result);


  /** Asynchronously closes the file enumerator.
   *
   * See close(), which is the synchronous version of this function.
   *
   * The operation can be cancelled by triggering the cancellable object from another thread.
   * If the operation was cancelled, a Gio::Error with CANCELLED will be thrown by close_finish().
   *
   * @param io_priority The I/O priority of the request.
   * @param cancellable A Cancellable object which can be used to cancel the operation.
   * @param slot A callback to call when the request is satisfied.
   */
  void close_async(int io_priority, const Glib::RefPtr<Cancellable>& cancellable, const SlotAsyncReady& slot);

  /** Asynchronously closes the file enumerator.
   *
   * See close(), which is the synchronous version of this function.
   *
   * @param io_priority The I/O priority of the request.
   * @param slot  A callback to call when the request is satisfied.
   */
  void close_async(int io_priority, const SlotAsyncReady& slot);
  

  /** Finishes closing a file enumerator, started from g_file_enumerator_close_async().
   * 
   * If the file enumerator was already closed when g_file_enumerator_close_async() 
   * was called, then this function will throw a Gio::Error with CLOSED, and 
   * return <tt>false</tt>. If the file enumerator had pending operation when the close 
   * operation was started, then this function will throw a Gio::Error with PENDING, and
   * return <tt>false</tt>.  The operation may have been 
   * cancelled by triggering the cancellable object from another thread. If the operation
   * was cancelled, a Gio::Error with CANCELLED will be thrown, and <tt>false</tt> will be 
   * returned.
   * 
   * @param result A AsyncResult.
   * @return <tt>true</tt> if the close operation has finished successfully.
   */
  bool close_finish(const Glib::RefPtr<AsyncResult>& result);

  
  /** Checks if the file enumerator has been closed.
   * 
   * @return <tt>true</tt> if the @a enumerator is closed.
   */
  bool is_closed() const;
  
  /** Checks if the file enumerator has pending operations.
   * 
   * @return <tt>true</tt> if the @a enumerator has pending operations.
   */
  bool has_pending() const;
  
  /** Sets the file enumerator as having pending operations.
   * 
   * @param pending A boolean value.
   */
  void set_pending(bool pending =  true);

  
  /** Get the File container which is being enumerated.
   * 
   * @newin{2,18}
   * 
   * @return The File which is being enumerated.
   */
  Glib::RefPtr<File> get_container();
  
  /** Get the File container which is being enumerated.
   * 
   * @newin{2,18}
   * 
   * @return The File which is being enumerated.
   */
  Glib::RefPtr<const File> get_container() const;

  
  /** Return a new File which refers to the file named by @a info in the source
   * directory of @a enumerator.  This function is primarily intended to be used
   * inside loops with g_file_enumerator_next_file().
   * 
   * This is a convenience method that's equivalent to:
   * 
   * [C example ellipted]
   * 
   * @newin{2,36}
   * 
   * @param info A FileInfo gotten from g_file_enumerator_next_file()
   * or the async equivalents.
   * @return A File for the FileInfo passed it.
   */
  Glib::RefPtr<File> get_child(const Glib::RefPtr<FileInfo>& info);
  
  /** Return a new File which refers to the file named by @a info in the source
   * directory of @a enumerator.  This function is primarily intended to be used
   * inside loops with g_file_enumerator_next_file().
   * 
   * This is a convenience method that's equivalent to:
   * 
   * [C example ellipted]
   * 
   * @newin{2,36}
   * 
   * @param info A FileInfo gotten from g_file_enumerator_next_file()
   * or the async equivalents.
   * @return A File for the FileInfo passed it.
   */
  Glib::RefPtr<const File> get_child(const Glib::RefPtr<FileInfo>& info) const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::FileEnumerator
   */
  Glib::RefPtr<Gio::FileEnumerator> wrap(GFileEnumerator* object, bool take_copy = false);
}


#endif /* _GIOMM_FILEENUMERATOR_H */

