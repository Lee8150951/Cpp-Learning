# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jacoblee/Documents/CLionProjects/C++Learning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/19.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/19.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/19.dir/flags.make

CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.o: CMakeFiles/19.dir/flags.make
CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.o: ../01-Basic/19\ array冒泡排序.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.o -c "/Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/19 array冒泡排序.cpp"

CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/19 array冒泡排序.cpp" > CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.i

CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/19 array冒泡排序.cpp" -o CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.s

# Object files for target 19
19_OBJECTS = \
"CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.o"

# External object files for target 19
19_EXTERNAL_OBJECTS =

19: CMakeFiles/19.dir/01-Basic/19_array冒泡排序.cpp.o
19: CMakeFiles/19.dir/build.make
19: CMakeFiles/19.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 19"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/19.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/19.dir/build: 19
.PHONY : CMakeFiles/19.dir/build

CMakeFiles/19.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/19.dir/cmake_clean.cmake
.PHONY : CMakeFiles/19.dir/clean

CMakeFiles/19.dir/depend:
	cd /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jacoblee/Documents/CLionProjects/C++Learning /Users/jacoblee/Documents/CLionProjects/C++Learning /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug/CMakeFiles/19.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/19.dir/depend

