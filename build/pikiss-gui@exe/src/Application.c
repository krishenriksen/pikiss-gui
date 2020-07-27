/* Application.c generated by valac 0.42.5, the Vala compiler
 * generated from Application.vala, do not modify */

/*
* Copyright (c) 2011-2020 PiKISS-gui
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Kris Henriksen <krishenriksen.work@gmail.com>
*/


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gstdio.h>
#include <gio/gio.h>
#include <config.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <stdio.h>


#define TYPE_PI_KISS (pi_kiss_get_type ())
#define PI_KISS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PI_KISS, PiKISS))
#define PI_KISS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PI_KISS, PiKISSClass))
#define IS_PI_KISS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PI_KISS))
#define IS_PI_KISS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PI_KISS))
#define PI_KISS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PI_KISS, PiKISSClass))

typedef struct _PiKISS PiKISS;
typedef struct _PiKISSClass PiKISSClass;
typedef struct _PiKISSPrivate PiKISSPrivate;
enum  {
	PI_KISS_0_PROPERTY,
	PI_KISS_NUM_PROPERTIES
};
static GParamSpec* pi_kiss_properties[PI_KISS_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block2Data Block2Data;
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_dir_close0(var) ((var == NULL) ? NULL : (var = (g_dir_close (var), NULL)))
typedef struct _Block3Data Block3Data;
typedef struct _Block4Data Block4Data;

struct _PiKISS {
	GtkWindow parent_instance;
	PiKISSPrivate * priv;
};

struct _PiKISSClass {
	GtkWindowClass parent_class;
};

struct _Block1Data {
	int _ref_count_;
	PiKISS* self;
	gchar* directory;
};

struct _Block2Data {
	int _ref_count_;
	Block1Data * _data1_;
	GtkButton* button;
};

struct _Block3Data {
	int _ref_count_;
	PiKISS* self;
	GtkBox* vbox;
};

struct _Block4Data {
	int _ref_count_;
	Block3Data * _data3_;
	GtkBox* box;
};


static gpointer pi_kiss_parent_class = NULL;

GType pi_kiss_get_type (void) G_GNUC_CONST;
static void pi_kiss_setup_apps (PiKISS* self,
                         const gchar* directory,
                         const gchar* category,
                         GtkBox* box);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (void * _userdata_);
static void _____lambda4_ (Block2Data* _data2_);
static void ______lambda4__gtk_button_clicked (GtkButton* _sender,
                                        gpointer self);
static void pi_kiss_on_clicked_category (PiKISS* self,
                                  GtkBox* box,
                                  GtkBox* vbox);
PiKISS* pi_kiss_new (void);
PiKISS* pi_kiss_construct (GType object_type);
static Block3Data* block3_data_ref (Block3Data* _data3_);
static void block3_data_unref (void * _userdata_);
static Block4Data* block4_data_ref (Block4Data* _data4_);
static void block4_data_unref (void * _userdata_);
static void _____lambda5_ (Block4Data* _data4_);
static void ______lambda5__gtk_tool_button_clicked (GtkToolButton* _sender,
                                             gpointer self);
gint pi_kiss_main (gchar** args,
                   int args_length1);
static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender,
                                        gpointer self);


static Block1Data*
block1_data_ref (Block1Data* _data1_)
{
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void
block1_data_unref (void * _userdata_)
{
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		PiKISS* self;
		self = _data1_->self;
		_g_free0 (_data1_->directory);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static Block2Data*
block2_data_ref (Block2Data* _data2_)
{
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}


static void
block2_data_unref (void * _userdata_)
{
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		PiKISS* self;
		self = _data2_->_data1_->self;
		_g_object_unref0 (_data2_->button);
		block1_data_unref (_data2_->_data1_);
		_data2_->_data1_ = NULL;
		g_slice_free (Block2Data, _data2_);
	}
}


static gchar*
string_replace (const gchar* self,
                const gchar* old,
                const gchar* replacement)
{
	gchar* result = NULL;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	g_return_val_if_fail (replacement != NULL, NULL);
	if ((*((gchar*) self)) == '\0') {
		_tmp1_ = TRUE;
	} else {
		_tmp1_ = (*((gchar*) old)) == '\0';
	}
	if (_tmp1_) {
		_tmp0_ = TRUE;
	} else {
		_tmp0_ = g_strcmp0 (old, replacement) == 0;
	}
	if (_tmp0_) {
		gchar* _tmp2_;
		_tmp2_ = g_strdup (self);
		result = _tmp2_;
		return result;
	}
	{
		GRegex* regex = NULL;
		gchar* _tmp3_;
		gchar* _tmp4_;
		GRegex* _tmp5_;
		GRegex* _tmp6_;
		gchar* _tmp7_ = NULL;
		GRegex* _tmp8_;
		gchar* _tmp9_;
		gchar* _tmp10_;
		_tmp3_ = g_regex_escape_string (old, -1);
		_tmp4_ = _tmp3_;
		_tmp5_ = g_regex_new (_tmp4_, 0, 0, &_inner_error_);
		_tmp6_ = _tmp5_;
		_g_free0 (_tmp4_);
		regex = _tmp6_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch1_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp8_ = regex;
		_tmp9_ = g_regex_replace_literal (_tmp8_, self, (gssize) -1, 0, replacement, 0, &_inner_error_);
		_tmp7_ = _tmp9_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_regex_unref0 (regex);
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch1_g_regex_error;
			}
			_g_regex_unref0 (regex);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp10_ = _tmp7_;
		_tmp7_ = NULL;
		result = _tmp10_;
		_g_free0 (_tmp7_);
		_g_regex_unref0 (regex);
		return result;
	}
	goto __finally1;
	__catch1_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally1:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


static void
_____lambda4_ (Block2Data* _data2_)
{
	Block1Data* _data1_;
	PiKISS* self;
	GError * _inner_error_ = NULL;
	_data1_ = _data2_->_data1_;
	self = _data1_->self;
	{
		GAppInfo* _tmp0_ = NULL;
		gchar* _tmp1_;
		gchar* _tmp2_;
		gchar* _tmp3_;
		gchar* _tmp4_;
		GtkButton* _tmp5_;
		const gchar* _tmp6_;
		const gchar* _tmp7_;
		gchar* _tmp8_;
		gchar* _tmp9_;
		gchar* _tmp10_;
		gchar* _tmp11_;
		gchar* _tmp12_;
		gchar* _tmp13_;
		GAppInfo* _tmp14_;
		GAppInfo* _tmp15_;
		_tmp1_ = g_strconcat ("\"", _data1_->directory, NULL);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_strconcat (_tmp2_, "/", NULL);
		_tmp4_ = _tmp3_;
		_tmp5_ = _data2_->button;
		_tmp6_ = gtk_button_get_label (_tmp5_);
		_tmp7_ = _tmp6_;
		_tmp8_ = g_strconcat (_tmp4_, _tmp7_, NULL);
		_tmp9_ = _tmp8_;
		_tmp10_ = g_strconcat (_tmp9_, ".sh", NULL);
		_tmp11_ = _tmp10_;
		_tmp12_ = g_strconcat (_tmp11_, "\"", NULL);
		_tmp13_ = _tmp12_;
		_tmp14_ = g_app_info_create_from_commandline (_tmp13_, NULL, G_APP_INFO_CREATE_NEEDS_TERMINAL, &_inner_error_);
		_tmp15_ = _tmp14_;
		_g_free0 (_tmp13_);
		_g_free0 (_tmp11_);
		_g_free0 (_tmp9_);
		_g_free0 (_tmp4_);
		_g_free0 (_tmp2_);
		_tmp0_ = _tmp15_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch2_g_error;
		}
		g_app_info_launch (_tmp0_, NULL, NULL, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_object_unref0 (_tmp0_);
			goto __catch2_g_error;
		}
		_g_object_unref0 (_tmp0_);
	}
	goto __finally2;
	__catch2_g_error:
	{
		GError* e = NULL;
		GError* _tmp16_;
		const gchar* _tmp17_;
		gchar* _tmp18_;
		gchar* _tmp19_;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp16_ = e;
		_tmp17_ = _tmp16_->message;
		_tmp18_ = g_strconcat ("Error! Load application: ", _tmp17_, NULL);
		_tmp19_ = _tmp18_;
		g_warning ("Application.vala:41: %s", _tmp19_);
		_g_free0 (_tmp19_);
		_g_error_free0 (e);
	}
	__finally2:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void
______lambda4__gtk_button_clicked (GtkButton* _sender,
                                   gpointer self)
{
	_____lambda4_ (self);
}


static void
pi_kiss_setup_apps (PiKISS* self,
                    const gchar* directory,
                    const gchar* category,
                    GtkBox* box)
{
	Block1Data* _data1_;
	gchar* _tmp0_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (directory != NULL);
	g_return_if_fail (category != NULL);
	g_return_if_fail (box != NULL);
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_data1_->self = g_object_ref (self);
	_tmp0_ = g_strdup (directory);
	_g_free0 (_data1_->directory);
	_data1_->directory = _tmp0_;
	{
		GDir* dir = NULL;
		GDir* _tmp1_;
		gchar* name = NULL;
		_tmp1_ = g_dir_open (_data1_->directory, (guint) 0, &_inner_error_);
		dir = _tmp1_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_FILE_ERROR) {
				goto __catch0_g_file_error;
			}
			block1_data_unref (_data1_);
			_data1_ = NULL;
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		name = NULL;
		while (TRUE) {
			GDir* _tmp2_;
			const gchar* _tmp3_;
			gchar* _tmp4_;
			const gchar* _tmp5_;
			gchar* path = NULL;
			const gchar* _tmp6_;
			gchar* _tmp7_;
			const gchar* _tmp8_;
			_tmp2_ = dir;
			_tmp3_ = g_dir_read_name (_tmp2_);
			_tmp4_ = g_strdup (_tmp3_);
			_g_free0 (name);
			name = _tmp4_;
			_tmp5_ = name;
			if (!(_tmp5_ != NULL)) {
				break;
			}
			_tmp6_ = name;
			_tmp7_ = g_build_filename (_data1_->directory, _tmp6_, NULL);
			path = _tmp7_;
			_tmp8_ = path;
			if (g_file_test (_tmp8_, G_FILE_TEST_IS_EXECUTABLE)) {
				Block2Data* _data2_;
				const gchar* _tmp9_;
				gchar* _tmp10_;
				gchar* _tmp11_;
				GtkButton* _tmp12_;
				GtkButton* _tmp13_;
				GtkButton* _tmp14_;
				GtkButton* _tmp15_;
				GtkButton* _tmp16_;
				_data2_ = g_slice_new0 (Block2Data);
				_data2_->_ref_count_ = 1;
				_data2_->_data1_ = block1_data_ref (_data1_);
				_tmp9_ = name;
				_tmp10_ = string_replace (_tmp9_, ".sh", "");
				_tmp11_ = _tmp10_;
				_tmp12_ = (GtkButton*) gtk_button_new_with_label (_tmp11_);
				g_object_ref_sink (_tmp12_);
				_tmp13_ = _tmp12_;
				_g_free0 (_tmp11_);
				_data2_->button = _tmp13_;
				_tmp14_ = _data2_->button;
				gtk_widget_set_size_request ((GtkWidget*) _tmp14_, 80, 32);
				_tmp15_ = _data2_->button;
				g_signal_connect_data (_tmp15_, "clicked", (GCallback) ______lambda4__gtk_button_clicked, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref, 0);
				_tmp16_ = _data2_->button;
				gtk_box_pack_start (box, (GtkWidget*) _tmp16_, FALSE, FALSE, (guint) 3);
				block2_data_unref (_data2_);
				_data2_ = NULL;
			}
			_g_free0 (path);
		}
		_g_free0 (name);
		_g_dir_close0 (dir);
	}
	goto __finally0;
	__catch0_g_file_error:
	{
		GError* err = NULL;
		GError* _tmp17_;
		const gchar* _tmp18_;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp17_ = err;
		_tmp18_ = _tmp17_->message;
		g_message ("Application.vala:49: %s", _tmp18_);
		_g_error_free0 (err);
	}
	__finally0:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		block1_data_unref (_data1_);
		_data1_ = NULL;
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	block1_data_unref (_data1_);
	_data1_ = NULL;
}


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


static void
pi_kiss_on_clicked_category (PiKISS* self,
                             GtkBox* box,
                             GtkBox* vbox)
{
	GList* children = NULL;
	GList* _tmp0_;
	gboolean toolbar = FALSE;
	GList* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (box != NULL);
	g_return_if_fail (vbox != NULL);
	_tmp0_ = gtk_container_get_children ((GtkContainer*) vbox);
	children = _tmp0_;
	toolbar = TRUE;
	_tmp1_ = children;
	{
		GList* element_collection = NULL;
		GList* element_it = NULL;
		element_collection = _tmp1_;
		for (element_it = element_collection; element_it != NULL; element_it = element_it->next) {
			GtkWidget* _tmp2_;
			GtkWidget* element = NULL;
			_tmp2_ = _g_object_ref0 ((GtkWidget*) element_it->data);
			element = _tmp2_;
			{
				gboolean _tmp3_;
				_tmp3_ = toolbar;
				if (!_tmp3_) {
					GtkWidget* _tmp4_;
					_tmp4_ = element;
					gtk_container_remove ((GtkContainer*) vbox, _tmp4_);
				}
				toolbar = FALSE;
				_g_object_unref0 (element);
			}
		}
	}
	gtk_box_pack_start (vbox, (GtkWidget*) box, FALSE, FALSE, (guint) 0);
	gtk_widget_show_all ((GtkWidget*) vbox);
	(children == NULL) ? NULL : (children = (g_list_free (children), NULL));
}


static Block3Data*
block3_data_ref (Block3Data* _data3_)
{
	g_atomic_int_inc (&_data3_->_ref_count_);
	return _data3_;
}


static void
block3_data_unref (void * _userdata_)
{
	Block3Data* _data3_;
	_data3_ = (Block3Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data3_->_ref_count_)) {
		PiKISS* self;
		self = _data3_->self;
		_g_object_unref0 (_data3_->vbox);
		_g_object_unref0 (self);
		g_slice_free (Block3Data, _data3_);
	}
}


static Block4Data*
block4_data_ref (Block4Data* _data4_)
{
	g_atomic_int_inc (&_data4_->_ref_count_);
	return _data4_;
}


static void
block4_data_unref (void * _userdata_)
{
	Block4Data* _data4_;
	_data4_ = (Block4Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data4_->_ref_count_)) {
		PiKISS* self;
		self = _data4_->_data3_->self;
		_g_object_unref0 (_data4_->box);
		block3_data_unref (_data4_->_data3_);
		_data4_->_data3_ = NULL;
		g_slice_free (Block4Data, _data4_);
	}
}


static void
_____lambda5_ (Block4Data* _data4_)
{
	Block3Data* _data3_;
	PiKISS* self;
	GtkBox* _tmp0_;
	GtkBox* _tmp1_;
	_data3_ = _data4_->_data3_;
	self = _data3_->self;
	_tmp0_ = _data4_->box;
	_tmp1_ = _data3_->vbox;
	pi_kiss_on_clicked_category (self, _tmp0_, _tmp1_);
}


static void
______lambda5__gtk_tool_button_clicked (GtkToolButton* _sender,
                                        gpointer self)
{
	_____lambda5_ (self);
}


PiKISS*
pi_kiss_construct (GType object_type)
{
	PiKISS * self = NULL;
	Block3Data* _data3_;
	GtkScrolledWindow* scroller = NULL;
	GtkScrolledWindow* _tmp0_;
	GtkScrolledWindow* _tmp1_;
	GtkToolbar* toolbar = NULL;
	GtkToolbar* _tmp2_;
	GtkToolbar* _tmp3_;
	GtkStyleContext* _tmp4_;
	GtkBox* _tmp5_;
	GtkBox* _tmp6_;
	GtkToolbar* _tmp7_;
	GtkScrolledWindow* _tmp31_;
	GtkBox* _tmp32_;
	GtkScrolledWindow* _tmp33_;
	GtkScrolledWindow* _tmp34_;
	GError * _inner_error_ = NULL;
	_data3_ = g_slice_new0 (Block3Data);
	_data3_->_ref_count_ = 1;
	self = (PiKISS*) g_object_new (object_type, NULL);
	_data3_->self = g_object_ref (self);
	gtk_window_set_title ((GtkWindow*) self, "PiKISS (Pi Keeping It Simple, Stupid!)");
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
	gtk_window_set_default_size ((GtkWindow*) self, 680, 480);
	_tmp0_ = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
	g_object_ref_sink (_tmp0_);
	scroller = _tmp0_;
	_tmp1_ = scroller;
	gtk_scrolled_window_set_policy (_tmp1_, GTK_POLICY_NEVER, GTK_POLICY_AUTOMATIC);
	_tmp2_ = (GtkToolbar*) gtk_toolbar_new ();
	g_object_ref_sink (_tmp2_);
	toolbar = _tmp2_;
	_tmp3_ = toolbar;
	_tmp4_ = gtk_widget_get_style_context ((GtkWidget*) _tmp3_);
	gtk_style_context_add_class (_tmp4_, GTK_STYLE_CLASS_PRIMARY_TOOLBAR);
	_tmp5_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
	g_object_ref_sink (_tmp5_);
	_data3_->vbox = _tmp5_;
	_tmp6_ = _data3_->vbox;
	_tmp7_ = toolbar;
	gtk_box_pack_start (_tmp6_, (GtkWidget*) _tmp7_, FALSE, TRUE, (guint) 0);
	{
		gchar* directory = NULL;
		gchar* _tmp8_;
		GDir* dir = NULL;
		const gchar* _tmp9_;
		GDir* _tmp10_;
		gchar* name = NULL;
		_tmp8_ = g_strdup (PACKAGE_SHAREDIR "/" PROJECT_NAME);
		directory = _tmp8_;
		_tmp9_ = directory;
		_tmp10_ = g_dir_open (_tmp9_, (guint) 0, &_inner_error_);
		dir = _tmp10_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_free0 (directory);
			if (_inner_error_->domain == G_FILE_ERROR) {
				goto __catch3_g_file_error;
			}
			_g_free0 (directory);
			_g_object_unref0 (toolbar);
			_g_object_unref0 (scroller);
			block3_data_unref (_data3_);
			_data3_ = NULL;
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		name = NULL;
		while (TRUE) {
			GDir* _tmp11_;
			const gchar* _tmp12_;
			gchar* _tmp13_;
			const gchar* _tmp14_;
			gchar* path = NULL;
			const gchar* _tmp15_;
			const gchar* _tmp16_;
			gchar* _tmp17_;
			const gchar* _tmp18_;
			_tmp11_ = dir;
			_tmp12_ = g_dir_read_name (_tmp11_);
			_tmp13_ = g_strdup (_tmp12_);
			_g_free0 (name);
			name = _tmp13_;
			_tmp14_ = name;
			if (!(_tmp14_ != NULL)) {
				break;
			}
			_tmp15_ = directory;
			_tmp16_ = name;
			_tmp17_ = g_build_filename (_tmp15_, _tmp16_, NULL);
			path = _tmp17_;
			_tmp18_ = path;
			if (g_file_test (_tmp18_, G_FILE_TEST_IS_DIR)) {
				Block4Data* _data4_;
				GtkBox* _tmp19_;
				GtkToolButton* button = NULL;
				const gchar* _tmp20_;
				GtkToolButton* _tmp21_;
				GtkToolButton* _tmp22_;
				GtkToolButton* _tmp23_;
				GtkToolbar* _tmp24_;
				GtkToolButton* _tmp25_;
				const gchar* _tmp26_;
				const gchar* _tmp27_;
				GtkBox* _tmp28_;
				_data4_ = g_slice_new0 (Block4Data);
				_data4_->_ref_count_ = 1;
				_data4_->_data3_ = block3_data_ref (_data3_);
				_tmp19_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
				g_object_ref_sink (_tmp19_);
				_data4_->box = _tmp19_;
				_tmp20_ = name;
				_tmp21_ = (GtkToolButton*) gtk_tool_button_new (NULL, _tmp20_);
				g_object_ref_sink (_tmp21_);
				button = _tmp21_;
				_tmp22_ = button;
				gtk_tool_item_set_is_important ((GtkToolItem*) _tmp22_, TRUE);
				_tmp23_ = button;
				g_signal_connect_data (_tmp23_, "clicked", (GCallback) ______lambda5__gtk_tool_button_clicked, block4_data_ref (_data4_), (GClosureNotify) block4_data_unref, 0);
				_tmp24_ = toolbar;
				_tmp25_ = button;
				gtk_container_add ((GtkContainer*) _tmp24_, (GtkWidget*) _tmp25_);
				_tmp26_ = path;
				_tmp27_ = name;
				_tmp28_ = _data4_->box;
				pi_kiss_setup_apps (self, _tmp26_, _tmp27_, _tmp28_);
				_g_object_unref0 (button);
				block4_data_unref (_data4_);
				_data4_ = NULL;
			}
			_g_free0 (path);
		}
		_g_free0 (name);
		_g_dir_close0 (dir);
		_g_free0 (directory);
	}
	goto __finally3;
	__catch3_g_file_error:
	{
		GError* err = NULL;
		GError* _tmp29_;
		const gchar* _tmp30_;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp29_ = err;
		_tmp30_ = _tmp29_->message;
		g_message ("Application.vala:111: %s", _tmp30_);
		_g_error_free0 (err);
	}
	__finally3:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		_g_object_unref0 (toolbar);
		_g_object_unref0 (scroller);
		block3_data_unref (_data3_);
		_data3_ = NULL;
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_tmp31_ = scroller;
	_tmp32_ = _data3_->vbox;
	gtk_container_add ((GtkContainer*) _tmp31_, (GtkWidget*) _tmp32_);
	_tmp33_ = scroller;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp33_);
	_tmp34_ = scroller;
	gtk_widget_show_all ((GtkWidget*) _tmp34_);
	_g_object_unref0 (toolbar);
	_g_object_unref0 (scroller);
	block3_data_unref (_data3_);
	_data3_ = NULL;
	return self;
}


PiKISS*
pi_kiss_new (void)
{
	return pi_kiss_construct (TYPE_PI_KISS);
}


static void
_gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender,
                                   gpointer self)
{
	gtk_main_quit ();
}


gint
pi_kiss_main (gchar** args,
              int args_length1)
{
	gint result = 0;
	PiKISS* window = NULL;
	PiKISS* _tmp0_;
	GError * _inner_error_ = NULL;
	gtk_init (&args_length1, &args);
	_tmp0_ = pi_kiss_new ();
	g_object_ref_sink (_tmp0_);
	window = _tmp0_;
	{
		GdkPixbuf* _tmp1_ = NULL;
		GtkIconTheme* _tmp2_;
		GdkPixbuf* _tmp3_;
		_tmp2_ = gtk_icon_theme_get_default ();
		_tmp3_ = gtk_icon_theme_load_icon (_tmp2_, "pikiss-gui", 48, 0, &_inner_error_);
		_tmp1_ = _tmp3_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch4_g_error;
		}
		gtk_window_set_icon ((GtkWindow*) window, _tmp1_);
		_g_object_unref0 (_tmp1_);
	}
	goto __finally4;
	__catch4_g_error:
	{
		GError* e = NULL;
		FILE* _tmp4_;
		GError* _tmp5_;
		const gchar* _tmp6_;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp4_ = stderr;
		_tmp5_ = e;
		_tmp6_ = _tmp5_->message;
		fprintf (_tmp4_, "Could not load application icon: %s\n", _tmp6_);
		_g_error_free0 (e);
	}
	__finally4:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		gint _tmp7_ = -1;
		_g_object_unref0 (window);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return _tmp7_;
	}
	g_signal_connect ((GtkWidget*) window, "destroy", (GCallback) _gtk_main_quit_gtk_widget_destroy, NULL);
	gtk_widget_show ((GtkWidget*) window);
	gtk_main ();
	result = 0;
	_g_object_unref0 (window);
	return result;
}


int
main (int argc,
      char ** argv)
{
	return pi_kiss_main (argv, argc);
}


static void
pi_kiss_class_init (PiKISSClass * klass)
{
	pi_kiss_parent_class = g_type_class_peek_parent (klass);
}


static void
pi_kiss_instance_init (PiKISS * self)
{
}


GType
pi_kiss_get_type (void)
{
	static volatile gsize pi_kiss_type_id__volatile = 0;
	if (g_once_init_enter (&pi_kiss_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PiKISSClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) pi_kiss_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PiKISS), 0, (GInstanceInitFunc) pi_kiss_instance_init, NULL };
		GType pi_kiss_type_id;
		pi_kiss_type_id = g_type_register_static (gtk_window_get_type (), "PiKISS", &g_define_type_info, 0);
		g_once_init_leave (&pi_kiss_type_id__volatile, pi_kiss_type_id);
	}
	return pi_kiss_type_id__volatile;
}



