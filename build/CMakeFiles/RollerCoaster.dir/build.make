# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/derek/Developer/Code/Git/RollerCoasterGenerator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/derek/Developer/Code/Git/RollerCoasterGenerator/build

# Include any dependencies generated for this target.
include CMakeFiles/RollerCoaster.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/RollerCoaster.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/RollerCoaster.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RollerCoaster.dir/flags.make

CMakeFiles/RollerCoaster.dir/src/main.cpp.o: CMakeFiles/RollerCoaster.dir/flags.make
CMakeFiles/RollerCoaster.dir/src/main.cpp.o: /Users/derek/Developer/Code/Git/RollerCoasterGenerator/src/main.cpp
CMakeFiles/RollerCoaster.dir/src/main.cpp.o: CMakeFiles/RollerCoaster.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/derek/Developer/Code/Git/RollerCoasterGenerator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RollerCoaster.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RollerCoaster.dir/src/main.cpp.o -MF CMakeFiles/RollerCoaster.dir/src/main.cpp.o.d -o CMakeFiles/RollerCoaster.dir/src/main.cpp.o -c /Users/derek/Developer/Code/Git/RollerCoasterGenerator/src/main.cpp

CMakeFiles/RollerCoaster.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RollerCoaster.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/derek/Developer/Code/Git/RollerCoasterGenerator/src/main.cpp > CMakeFiles/RollerCoaster.dir/src/main.cpp.i

CMakeFiles/RollerCoaster.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RollerCoaster.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/derek/Developer/Code/Git/RollerCoasterGenerator/src/main.cpp -o CMakeFiles/RollerCoaster.dir/src/main.cpp.s

# Object files for target RollerCoaster
RollerCoaster_OBJECTS = \
"CMakeFiles/RollerCoaster.dir/src/main.cpp.o"

# External object files for target RollerCoaster
RollerCoaster_EXTERNAL_OBJECTS =

RollerCoaster: CMakeFiles/RollerCoaster.dir/src/main.cpp.o
RollerCoaster: CMakeFiles/RollerCoaster.dir/build.make
RollerCoaster: /Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/System/Library/Frameworks/OpenGL.framework
RollerCoaster: /Users/derek/Developer/Code/Git/RollerCoasterGenerator/libs/glfw/lib/libglfw.dylib
RollerCoaster: CMakeFiles/RollerCoaster.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/derek/Developer/Code/Git/RollerCoasterGenerator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RollerCoaster"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RollerCoaster.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RollerCoaster.dir/build: RollerCoaster
.PHONY : CMakeFiles/RollerCoaster.dir/build

CMakeFiles/RollerCoaster.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RollerCoaster.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RollerCoaster.dir/clean

CMakeFiles/RollerCoaster.dir/depend:
	cd /Users/derek/Developer/Code/Git/RollerCoasterGenerator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/derek/Developer/Code/Git/RollerCoasterGenerator /Users/derek/Developer/Code/Git/RollerCoasterGenerator /Users/derek/Developer/Code/Git/RollerCoasterGenerator/build /Users/derek/Developer/Code/Git/RollerCoasterGenerator/build /Users/derek/Developer/Code/Git/RollerCoasterGenerator/build/CMakeFiles/RollerCoaster.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/RollerCoaster.dir/depend

