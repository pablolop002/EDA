# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /cygdrive/c/Users/pablo/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/pablo/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp

# Include any dependencies generated for this target.
include CMakeFiles/cmTC_e1847.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmTC_e1847.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmTC_e1847.dir/flags.make

CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o: CMakeFiles/cmTC_e1847.dir/flags.make
CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o: testCCompiler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o   -c /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp/testCCompiler.c

CMakeFiles/cmTC_e1847.dir/testCCompiler.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/cmTC_e1847.dir/testCCompiler.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp/testCCompiler.c > CMakeFiles/cmTC_e1847.dir/testCCompiler.c.i

CMakeFiles/cmTC_e1847.dir/testCCompiler.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/cmTC_e1847.dir/testCCompiler.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp/testCCompiler.c -o CMakeFiles/cmTC_e1847.dir/testCCompiler.c.s

CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o.requires:

.PHONY : CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o.requires

CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o.provides: CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o.requires
	$(MAKE) -f CMakeFiles/cmTC_e1847.dir/build.make CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o.provides.build
.PHONY : CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o.provides

CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o.provides.build: CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o


# Object files for target cmTC_e1847
cmTC_e1847_OBJECTS = \
"CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o"

# External object files for target cmTC_e1847
cmTC_e1847_EXTERNAL_OBJECTS =

cmTC_e1847.exe: CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o
cmTC_e1847.exe: CMakeFiles/cmTC_e1847.dir/build.make
cmTC_e1847.exe: CMakeFiles/cmTC_e1847.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cmTC_e1847.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmTC_e1847.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmTC_e1847.dir/build: cmTC_e1847.exe

.PHONY : CMakeFiles/cmTC_e1847.dir/build

CMakeFiles/cmTC_e1847.dir/requires: CMakeFiles/cmTC_e1847.dir/testCCompiler.c.o.requires

.PHONY : CMakeFiles/cmTC_e1847.dir/requires

CMakeFiles/cmTC_e1847.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmTC_e1847.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmTC_e1847.dir/clean

CMakeFiles/cmTC_e1847.dir/depend:
	cd /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp /cygdrive/c/Users/pablo/CLionProjects/EDA2/EV1/cmake-build-debug/CMakeFiles/CMakeTmp/CMakeFiles/cmTC_e1847.dir/DependInfo.cmake
.PHONY : CMakeFiles/cmTC_e1847.dir/depend

