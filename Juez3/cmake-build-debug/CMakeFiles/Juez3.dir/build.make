# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /cygdrive/c/Users/pablo/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/pablo/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Juez3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Juez3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Juez3.dir/flags.make

CMakeFiles/Juez3.dir/solution.cpp.o: CMakeFiles/Juez3.dir/flags.make
CMakeFiles/Juez3.dir/solution.cpp.o: ../solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Juez3.dir/solution.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Juez3.dir/solution.cpp.o -c /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3/solution.cpp

CMakeFiles/Juez3.dir/solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Juez3.dir/solution.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3/solution.cpp > CMakeFiles/Juez3.dir/solution.cpp.i

CMakeFiles/Juez3.dir/solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Juez3.dir/solution.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3/solution.cpp -o CMakeFiles/Juez3.dir/solution.cpp.s

CMakeFiles/Juez3.dir/solution.cpp.o.requires:

.PHONY : CMakeFiles/Juez3.dir/solution.cpp.o.requires

CMakeFiles/Juez3.dir/solution.cpp.o.provides: CMakeFiles/Juez3.dir/solution.cpp.o.requires
	$(MAKE) -f CMakeFiles/Juez3.dir/build.make CMakeFiles/Juez3.dir/solution.cpp.o.provides.build
.PHONY : CMakeFiles/Juez3.dir/solution.cpp.o.provides

CMakeFiles/Juez3.dir/solution.cpp.o.provides.build: CMakeFiles/Juez3.dir/solution.cpp.o


# Object files for target Juez3
Juez3_OBJECTS = \
"CMakeFiles/Juez3.dir/solution.cpp.o"

# External object files for target Juez3
Juez3_EXTERNAL_OBJECTS =

Juez3.exe: CMakeFiles/Juez3.dir/solution.cpp.o
Juez3.exe: CMakeFiles/Juez3.dir/build.make
Juez3.exe: CMakeFiles/Juez3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Juez3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Juez3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Juez3.dir/build: Juez3.exe

.PHONY : CMakeFiles/Juez3.dir/build

CMakeFiles/Juez3.dir/requires: CMakeFiles/Juez3.dir/solution.cpp.o.requires

.PHONY : CMakeFiles/Juez3.dir/requires

CMakeFiles/Juez3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Juez3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Juez3.dir/clean

CMakeFiles/Juez3.dir/depend:
	cd /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3 /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3 /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3/cmake-build-debug /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3/cmake-build-debug /cygdrive/c/Users/pablo/CLionProjects/EDA2/Juez3/cmake-build-debug/CMakeFiles/Juez3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Juez3.dir/depend
