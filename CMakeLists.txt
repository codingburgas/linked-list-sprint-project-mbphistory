cmake_minimum_required(VERSION 3.30)
project(linked_list_sprint_project_mbphistory)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(src/event)
include_directories(src/menu)

add_executable(linked_list_sprint_project_mbphistory
    src/event/event.h
    src/event/event_core.cpp
    src/event/event_io.cpp
    src/menu/menu.h
    src/menu/menu_actions.cpp
    src/menu/menu_display.cpp
    main.cpp)
