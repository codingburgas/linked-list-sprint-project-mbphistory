cmake_minimum_required(VERSION 3.0)
project(MBPHistory)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(SOURCES
        main.cpp
        src/menu/menu_display.cpp
        src/menu/menu_actions.cpp
        src/event/event_manager.cpp
        src/event/event_manager.h
)

add_executable(mbphistory ${SOURCES})
target_link_libraries(mbphistory ${CURSES_LIBRARIES})