# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MapLoader.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MapLoader.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MapLoader.dir/flags.make

CMakeFiles/MapLoader.dir/main.cpp.o: CMakeFiles/MapLoader.dir/flags.make
CMakeFiles/MapLoader.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MapLoader.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MapLoader.dir/main.cpp.o -c /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader/main.cpp

CMakeFiles/MapLoader.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MapLoader.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader/main.cpp > CMakeFiles/MapLoader.dir/main.cpp.i

CMakeFiles/MapLoader.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MapLoader.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader/main.cpp -o CMakeFiles/MapLoader.dir/main.cpp.s

# Object files for target MapLoader
MapLoader_OBJECTS = \
"CMakeFiles/MapLoader.dir/main.cpp.o"

# External object files for target MapLoader
MapLoader_EXTERNAL_OBJECTS =

MapLoader: CMakeFiles/MapLoader.dir/main.cpp.o
MapLoader: CMakeFiles/MapLoader.dir/build.make
MapLoader: CMakeFiles/MapLoader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MapLoader"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MapLoader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MapLoader.dir/build: MapLoader

.PHONY : CMakeFiles/MapLoader.dir/build

CMakeFiles/MapLoader.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MapLoader.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MapLoader.dir/clean

CMakeFiles/MapLoader.dir/depend:
	cd /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader/cmake-build-debug /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader/cmake-build-debug /Users/ruslandallin/Documents/Concordia/COMP345/MapLoaderA1/MapLoader/cmake-build-debug/CMakeFiles/MapLoader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MapLoader.dir/depend

