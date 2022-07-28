#pragma once
#include <glibpp/application.hpp>
#include <glibpp/enums.hpp>

namespace Gtk
{
    class Application : public GLib::Application
    {
    public:
        Application(const char *application_id, GLib::ApplicationFlags flags);
    };
}
