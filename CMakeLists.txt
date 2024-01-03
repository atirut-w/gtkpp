add_library("gtkpp"
    "src/dummy.cpp"
)
target_include_directories("gtkpp" PUBLIC "include")

add_subdirectory("glibpp")
target_link_libraries("gtkpp" PUBLIC "glibpp")
