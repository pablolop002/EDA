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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SumaDeDigitos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SumaDeDigitos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SumaDeDigitos.dir/flags.make

CMakeFiles/SumaDeDigitos.dir/main.cpp.o: CMakeFiles/SumaDeDigitos.dir/flags.make
CMakeFiles/SumaDeDigitos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SumaDeDigitos.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SumaDeDigitos.dir/main.cpp.o -c /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos/main.cpp

CMakeFiles/SumaDeDigitos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SumaDeDigitos.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos/main.cpp > CMakeFiles/SumaDeDigitos.dir/main.cpp.i

CMakeFiles/SumaDeDigitos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SumaDeDigitos.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos/main.cpp -o CMakeFiles/SumaDeDigitos.dir/main.cpp.s

CMakeFiles/SumaDeDigitos.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/SumaDeDigitos.dir/main.cpp.o.requires

CMakeFiles/SumaDeDigitos.dir/main.cpp.o.provides: CMakeFiles/SumaDeDigitos.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/SumaDeDigitos.dir/build.make CMakeFiles/SumaDeDigitos.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/SumaDeDigitos.dir/main.cpp.o.provides

CMakeFiles/SumaDeDigitos.dir/main.cpp.o.provides.build: CMakeFiles/SumaDeDigitos.dir/main.cpp.o


# Object files for target SumaDeDigitos
SumaDeDigitos_OBJECTS = \
"CMakeFiles/SumaDeDigitos.dir/main.cpp.o"

# External object files for target SumaDeDigitos
SumaDeDigitos_EXTERNAL_OBJECTS =

SumaDeDigitos.exe: CMakeFiles/SumaDeDigitos.dir/main.cpp.o
SumaDeDigitos.exe: CMakeFiles/SumaDeDigitos.dir/build.make
SumaDeDigitos.exe: CMakeFiles/SumaDeDigitos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SumaDeDigitos.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SumaDeDigitos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SumaDeDigitos.dir/build: SumaDeDigitos.exe

.PHONY : CMakeFiles/SumaDeDigitos.dir/build

CMakeFiles/SumaDeDigitos.dir/requires: CMakeFiles/SumaDeDigitos.dir/main.cpp.o.requires

.PHONY : CMakeFiles/SumaDeDigitos.dir/requires

CMakeFiles/SumaDeDigitos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SumaDeDigitos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SumaDeDigitos.dir/clean

CMakeFiles/SumaDeDigitos.dir/depend:
	cd /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos/cmake-build-debug /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos/cmake-build-debug /cygdrive/c/Users/pablo/CLionProjects/EDA2/SumaDeDigitos/cmake-build-debug/CMakeFiles/SumaDeDigitos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SumaDeDigitos.dir/depend
