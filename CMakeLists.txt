cmake_minimum_required(VERSION 3.0)
project(MBPHistory)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(SOURCES
        main.cpp
        src/event/event_core.cpp
)

add_executable(mbphistory ${SOURCES})
target_link_libraries(mbphistory ${CURSES_LIBRARIES})