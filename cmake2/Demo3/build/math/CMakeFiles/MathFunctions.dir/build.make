# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/csf/git/cmake2/Demo3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csf/git/cmake2/Demo3/build

# Include any dependencies generated for this target.
include math/CMakeFiles/MathFunctions.dir/depend.make

# Include the progress variables for this target.
include math/CMakeFiles/MathFunctions.dir/progress.make

# Include the compile flags for this target's objects.
include math/CMakeFiles/MathFunctions.dir/flags.make

math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o: math/CMakeFiles/MathFunctions.dir/flags.make
math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o: ../math/MathFunctions.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/csf/git/cmake2/Demo3/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o"
	cd /home/csf/git/cmake2/Demo3/build/math && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MathFunctions.dir/MathFunctions.cc.o -c /home/csf/git/cmake2/Demo3/math/MathFunctions.cc

math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathFunctions.dir/MathFunctions.cc.i"
	cd /home/csf/git/cmake2/Demo3/build/math && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/csf/git/cmake2/Demo3/math/MathFunctions.cc > CMakeFiles/MathFunctions.dir/MathFunctions.cc.i

math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathFunctions.dir/MathFunctions.cc.s"
	cd /home/csf/git/cmake2/Demo3/build/math && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/csf/git/cmake2/Demo3/math/MathFunctions.cc -o CMakeFiles/MathFunctions.dir/MathFunctions.cc.s

math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o.requires:
.PHONY : math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o.requires

math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o.provides: math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o.requires
	$(MAKE) -f math/CMakeFiles/MathFunctions.dir/build.make math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o.provides.build
.PHONY : math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o.provides

math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o.provides.build: math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o

# Object files for target MathFunctions
MathFunctions_OBJECTS = \
"CMakeFiles/MathFunctions.dir/MathFunctions.cc.o"

# External object files for target MathFunctions
MathFunctions_EXTERNAL_OBJECTS =

math/libMathFunctions.a: math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o
math/libMathFunctions.a: math/CMakeFiles/MathFunctions.dir/build.make
math/libMathFunctions.a: math/CMakeFiles/MathFunctions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libMathFunctions.a"
	cd /home/csf/git/cmake2/Demo3/build/math && $(CMAKE_COMMAND) -P CMakeFiles/MathFunctions.dir/cmake_clean_target.cmake
	cd /home/csf/git/cmake2/Demo3/build/math && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MathFunctions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
math/CMakeFiles/MathFunctions.dir/build: math/libMathFunctions.a
.PHONY : math/CMakeFiles/MathFunctions.dir/build

math/CMakeFiles/MathFunctions.dir/requires: math/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o.requires
.PHONY : math/CMakeFiles/MathFunctions.dir/requires

math/CMakeFiles/MathFunctions.dir/clean:
	cd /home/csf/git/cmake2/Demo3/build/math && $(CMAKE_COMMAND) -P CMakeFiles/MathFunctions.dir/cmake_clean.cmake
.PHONY : math/CMakeFiles/MathFunctions.dir/clean

math/CMakeFiles/MathFunctions.dir/depend:
	cd /home/csf/git/cmake2/Demo3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csf/git/cmake2/Demo3 /home/csf/git/cmake2/Demo3/math /home/csf/git/cmake2/Demo3/build /home/csf/git/cmake2/Demo3/build/math /home/csf/git/cmake2/Demo3/build/math/CMakeFiles/MathFunctions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : math/CMakeFiles/MathFunctions.dir/depend

