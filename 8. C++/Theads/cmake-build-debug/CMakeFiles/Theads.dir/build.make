# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/klo/CLionProjects/Theads

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/klo/CLionProjects/Theads/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Theads.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Theads.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Theads.dir/flags.make

CMakeFiles/Theads.dir/main.cpp.o: CMakeFiles/Theads.dir/flags.make
CMakeFiles/Theads.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/klo/CLionProjects/Theads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Theads.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Theads.dir/main.cpp.o -c /Users/klo/CLionProjects/Theads/main.cpp

CMakeFiles/Theads.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Theads.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/klo/CLionProjects/Theads/main.cpp > CMakeFiles/Theads.dir/main.cpp.i

CMakeFiles/Theads.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Theads.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/klo/CLionProjects/Theads/main.cpp -o CMakeFiles/Theads.dir/main.cpp.s

# Object files for target Theads
Theads_OBJECTS = \
"CMakeFiles/Theads.dir/main.cpp.o"

# External object files for target Theads
Theads_EXTERNAL_OBJECTS =

Theads: CMakeFiles/Theads.dir/main.cpp.o
Theads: CMakeFiles/Theads.dir/build.make
Theads: CMakeFiles/Theads.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/klo/CLionProjects/Theads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Theads"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Theads.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Theads.dir/build: Theads

.PHONY : CMakeFiles/Theads.dir/build

CMakeFiles/Theads.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Theads.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Theads.dir/clean

CMakeFiles/Theads.dir/depend:
	cd /Users/klo/CLionProjects/Theads/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/klo/CLionProjects/Theads /Users/klo/CLionProjects/Theads /Users/klo/CLionProjects/Theads/cmake-build-debug /Users/klo/CLionProjects/Theads/cmake-build-debug /Users/klo/CLionProjects/Theads/cmake-build-debug/CMakeFiles/Theads.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Theads.dir/depend

