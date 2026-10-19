cmake_minimum_required(VERSION 3.19)
project(Qt_console_project LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(Qt_console_project
    main.cpp
)

target_link_libraries(Qt_console_project
    PRIVATE
        Qt::Core
)

install(TARGETS Qt_console_project
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
