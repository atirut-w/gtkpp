add_library(gtkpp SHARED src/application.cpp)
target_include_directories(gtkpp PUBLIC src/include)
add_subdirectory(glibpp)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED gtk4)

target_link_libraries(gtkpp glibpp ${GTK4_LIBRARIES})
target_include_directories(gtkpp PUBLIC ${GTK4_INCLUDE_DIRS})
