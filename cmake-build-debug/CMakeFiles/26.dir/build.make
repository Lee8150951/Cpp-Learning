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
include CMakeFiles/26.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/26.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/26.dir/flags.make

CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.o: CMakeFiles/26.dir/flags.make
CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.o: ../01-Basic/26\ 函数指针.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.o -c "/Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/26 函数指针.cpp"

CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/26 函数指针.cpp" > CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.i

CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/26 函数指针.cpp" -o CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.s

# Object files for target 26
26_OBJECTS = \
"CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.o"

# External object files for target 26
26_EXTERNAL_OBJECTS =

26: CMakeFiles/26.dir/01-Basic/26_函数指针.cpp.o
26: CMakeFiles/26.dir/build.make
26: CMakeFiles/26.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 26"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/26.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/26.dir/build: 26
.PHONY : CMakeFiles/26.dir/build

CMakeFiles/26.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/26.dir/cmake_clean.cmake
.PHONY : CMakeFiles/26.dir/clean

CMakeFiles/26.dir/depend:
	cd /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jacoblee/Documents/CLionProjects/C++Learning /Users/jacoblee/Documents/CLionProjects/C++Learning /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug/CMakeFiles/26.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/26.dir/depend

