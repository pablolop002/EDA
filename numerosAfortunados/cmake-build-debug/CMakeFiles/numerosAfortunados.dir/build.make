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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/numerosAfortunados.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/numerosAfortunados.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/numerosAfortunados.dir/flags.make

CMakeFiles/numerosAfortunados.dir/main.cpp.o: CMakeFiles/numerosAfortunados.dir/flags.make
CMakeFiles/numerosAfortunados.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/numerosAfortunados.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/numerosAfortunados.dir/main.cpp.o -c /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados/main.cpp

CMakeFiles/numerosAfortunados.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numerosAfortunados.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados/main.cpp > CMakeFiles/numerosAfortunados.dir/main.cpp.i

CMakeFiles/numerosAfortunados.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numerosAfortunados.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados/main.cpp -o CMakeFiles/numerosAfortunados.dir/main.cpp.s

CMakeFiles/numerosAfortunados.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/numerosAfortunados.dir/main.cpp.o.requires

CMakeFiles/numerosAfortunados.dir/main.cpp.o.provides: CMakeFiles/numerosAfortunados.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/numerosAfortunados.dir/build.make CMakeFiles/numerosAfortunados.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/numerosAfortunados.dir/main.cpp.o.provides

CMakeFiles/numerosAfortunados.dir/main.cpp.o.provides.build: CMakeFiles/numerosAfortunados.dir/main.cpp.o


# Object files for target numerosAfortunados
numerosAfortunados_OBJECTS = \
"CMakeFiles/numerosAfortunados.dir/main.cpp.o"

# External object files for target numerosAfortunados
numerosAfortunados_EXTERNAL_OBJECTS =

numerosAfortunados.exe: CMakeFiles/numerosAfortunados.dir/main.cpp.o
numerosAfortunados.exe: CMakeFiles/numerosAfortunados.dir/build.make
numerosAfortunados.exe: CMakeFiles/numerosAfortunados.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable numerosAfortunados.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/numerosAfortunados.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/numerosAfortunados.dir/build: numerosAfortunados.exe

.PHONY : CMakeFiles/numerosAfortunados.dir/build

CMakeFiles/numerosAfortunados.dir/requires: CMakeFiles/numerosAfortunados.dir/main.cpp.o.requires

.PHONY : CMakeFiles/numerosAfortunados.dir/requires

CMakeFiles/numerosAfortunados.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/numerosAfortunados.dir/cmake_clean.cmake
.PHONY : CMakeFiles/numerosAfortunados.dir/clean

CMakeFiles/numerosAfortunados.dir/depend:
	cd /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados/cmake-build-debug /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados/cmake-build-debug /cygdrive/c/Users/pablo/CLionProjects/EDA2/numerosAfortunados/cmake-build-debug/CMakeFiles/numerosAfortunados.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/numerosAfortunados.dir/depend
