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
include CMakeFiles/22.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/22.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/22.dir/flags.make

CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.o: CMakeFiles/22.dir/flags.make
CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.o: ../01-Basic/22\ 函数的分文件书写.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.o -c "/Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/22 函数的分文件书写.cpp"

CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/22 函数的分文件书写.cpp" > CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.i

CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/22 函数的分文件书写.cpp" -o CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.s

CMakeFiles/22.dir/01-Basic/22-source.cpp.o: CMakeFiles/22.dir/flags.make
CMakeFiles/22.dir/01-Basic/22-source.cpp.o: ../01-Basic/22-source.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/22.dir/01-Basic/22-source.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/22.dir/01-Basic/22-source.cpp.o -c /Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/22-source.cpp

CMakeFiles/22.dir/01-Basic/22-source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/22.dir/01-Basic/22-source.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/22-source.cpp > CMakeFiles/22.dir/01-Basic/22-source.cpp.i

CMakeFiles/22.dir/01-Basic/22-source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/22.dir/01-Basic/22-source.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jacoblee/Documents/CLionProjects/C++Learning/01-Basic/22-source.cpp -o CMakeFiles/22.dir/01-Basic/22-source.cpp.s

# Object files for target 22
22_OBJECTS = \
"CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.o" \
"CMakeFiles/22.dir/01-Basic/22-source.cpp.o"

# External object files for target 22
22_EXTERNAL_OBJECTS =

22: CMakeFiles/22.dir/01-Basic/22_函数的分文件书写.cpp.o
22: CMakeFiles/22.dir/01-Basic/22-source.cpp.o
22: CMakeFiles/22.dir/build.make
22: CMakeFiles/22.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 22"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/22.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/22.dir/build: 22
.PHONY : CMakeFiles/22.dir/build

CMakeFiles/22.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/22.dir/cmake_clean.cmake
.PHONY : CMakeFiles/22.dir/clean

CMakeFiles/22.dir/depend:
	cd /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jacoblee/Documents/CLionProjects/C++Learning /Users/jacoblee/Documents/CLionProjects/C++Learning /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug /Users/jacoblee/Documents/CLionProjects/C++Learning/cmake-build-debug/CMakeFiles/22.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/22.dir/depend

