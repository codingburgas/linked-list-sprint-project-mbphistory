# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kaloyan/linked-list-sprint-project-mbphistory

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kaloyan/linked-list-sprint-project-mbphistory

# Include any dependencies generated for this target.
include CMakeFiles/mbphistory.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mbphistory.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mbphistory.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mbphistory.dir/flags.make

CMakeFiles/mbphistory.dir/codegen:
.PHONY : CMakeFiles/mbphistory.dir/codegen

CMakeFiles/mbphistory.dir/main.cpp.o: CMakeFiles/mbphistory.dir/flags.make
CMakeFiles/mbphistory.dir/main.cpp.o: main.cpp
CMakeFiles/mbphistory.dir/main.cpp.o: CMakeFiles/mbphistory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kaloyan/linked-list-sprint-project-mbphistory/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mbphistory.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mbphistory.dir/main.cpp.o -MF CMakeFiles/mbphistory.dir/main.cpp.o.d -o CMakeFiles/mbphistory.dir/main.cpp.o -c /home/kaloyan/linked-list-sprint-project-mbphistory/main.cpp

CMakeFiles/mbphistory.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/mbphistory.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kaloyan/linked-list-sprint-project-mbphistory/main.cpp > CMakeFiles/mbphistory.dir/main.cpp.i

CMakeFiles/mbphistory.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/mbphistory.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kaloyan/linked-list-sprint-project-mbphistory/main.cpp -o CMakeFiles/mbphistory.dir/main.cpp.s

CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.o: CMakeFiles/mbphistory.dir/flags.make
CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.o: src/menu/menu_display.cpp
CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.o: CMakeFiles/mbphistory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kaloyan/linked-list-sprint-project-mbphistory/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.o -MF CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.o.d -o CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.o -c /home/kaloyan/linked-list-sprint-project-mbphistory/src/menu/menu_display.cpp

CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kaloyan/linked-list-sprint-project-mbphistory/src/menu/menu_display.cpp > CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.i

CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kaloyan/linked-list-sprint-project-mbphistory/src/menu/menu_display.cpp -o CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.s

CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.o: CMakeFiles/mbphistory.dir/flags.make
CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.o: src/menu/menu_actions.cpp
CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.o: CMakeFiles/mbphistory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kaloyan/linked-list-sprint-project-mbphistory/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.o -MF CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.o.d -o CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.o -c /home/kaloyan/linked-list-sprint-project-mbphistory/src/menu/menu_actions.cpp

CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kaloyan/linked-list-sprint-project-mbphistory/src/menu/menu_actions.cpp > CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.i

CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kaloyan/linked-list-sprint-project-mbphistory/src/menu/menu_actions.cpp -o CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.s

CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.o: CMakeFiles/mbphistory.dir/flags.make
CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.o: src/event/event_manager.cpp
CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.o: CMakeFiles/mbphistory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kaloyan/linked-list-sprint-project-mbphistory/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.o -MF CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.o.d -o CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.o -c /home/kaloyan/linked-list-sprint-project-mbphistory/src/event/event_manager.cpp

CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kaloyan/linked-list-sprint-project-mbphistory/src/event/event_manager.cpp > CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.i

CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kaloyan/linked-list-sprint-project-mbphistory/src/event/event_manager.cpp -o CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.s

# Object files for target mbphistory
mbphistory_OBJECTS = \
"CMakeFiles/mbphistory.dir/main.cpp.o" \
"CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.o" \
"CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.o" \
"CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.o"

# External object files for target mbphistory
mbphistory_EXTERNAL_OBJECTS =

mbphistory: CMakeFiles/mbphistory.dir/main.cpp.o
mbphistory: CMakeFiles/mbphistory.dir/src/menu/menu_display.cpp.o
mbphistory: CMakeFiles/mbphistory.dir/src/menu/menu_actions.cpp.o
mbphistory: CMakeFiles/mbphistory.dir/src/event/event_manager.cpp.o
mbphistory: CMakeFiles/mbphistory.dir/build.make
mbphistory: CMakeFiles/mbphistory.dir/compiler_depend.ts
mbphistory: /usr/lib/x86_64-linux-gnu/libcurses.so
mbphistory: /usr/lib/x86_64-linux-gnu/libform.so
mbphistory: CMakeFiles/mbphistory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/kaloyan/linked-list-sprint-project-mbphistory/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable mbphistory"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mbphistory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mbphistory.dir/build: mbphistory
.PHONY : CMakeFiles/mbphistory.dir/build

CMakeFiles/mbphistory.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mbphistory.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mbphistory.dir/clean

CMakeFiles/mbphistory.dir/depend:
	cd /home/kaloyan/linked-list-sprint-project-mbphistory && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kaloyan/linked-list-sprint-project-mbphistory /home/kaloyan/linked-list-sprint-project-mbphistory /home/kaloyan/linked-list-sprint-project-mbphistory /home/kaloyan/linked-list-sprint-project-mbphistory /home/kaloyan/linked-list-sprint-project-mbphistory/CMakeFiles/mbphistory.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/mbphistory.dir/depend

