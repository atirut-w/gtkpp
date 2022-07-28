#include <gtkpp/application.hpp>
#include <gtk-4.0/gtk/gtk.h>

using namespace Gtk;

Application::Application(const char *application_id, GLib::ApplicationFlags flags)
{
    this->object = gtk_application_new(application_id, (GApplicationFlags)flags);
}
