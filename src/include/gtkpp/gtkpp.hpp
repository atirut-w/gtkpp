#pragma once
#include <glibpp/glibpp.hpp>

namespace Gtk
{
    class Application : public GLib::Application
    {
    public:
        Application(const char *application_id, GLib::ApplicationFlags flags);
    };
}
