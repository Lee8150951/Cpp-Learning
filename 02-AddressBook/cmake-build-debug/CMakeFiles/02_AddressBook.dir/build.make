# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/02_AddressBook.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/02_AddressBook.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/02_AddressBook.dir/flags.make

CMakeFiles/02_AddressBook.dir/源文件/main.cpp.o: CMakeFiles/02_AddressBook.dir/flags.make
CMakeFiles/02_AddressBook.dir/源文件/main.cpp.o: ../源文件/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/02_AddressBook.dir/源文件/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/02_AddressBook.dir/源文件/main.cpp.o -c /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook/源文件/main.cpp

CMakeFiles/02_AddressBook.dir/源文件/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/02_AddressBook.dir/源文件/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook/源文件/main.cpp > CMakeFiles/02_AddressBook.dir/源文件/main.cpp.i

CMakeFiles/02_AddressBook.dir/源文件/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/02_AddressBook.dir/源文件/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook/源文件/main.cpp -o CMakeFiles/02_AddressBook.dir/源文件/main.cpp.s

# Object files for target 02_AddressBook
02_AddressBook_OBJECTS = \
"CMakeFiles/02_AddressBook.dir/源文件/main.cpp.o"

# External object files for target 02_AddressBook
02_AddressBook_EXTERNAL_OBJECTS =

02_AddressBook: CMakeFiles/02_AddressBook.dir/源文件/main.cpp.o
02_AddressBook: CMakeFiles/02_AddressBook.dir/build.make
02_AddressBook: CMakeFiles/02_AddressBook.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 02_AddressBook"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/02_AddressBook.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/02_AddressBook.dir/build: 02_AddressBook
.PHONY : CMakeFiles/02_AddressBook.dir/build

CMakeFiles/02_AddressBook.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/02_AddressBook.dir/cmake_clean.cmake
.PHONY : CMakeFiles/02_AddressBook.dir/clean

CMakeFiles/02_AddressBook.dir/depend:
	cd /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook/cmake-build-debug /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook/cmake-build-debug /Users/jacoblee/Documents/CLionProjects/C++Learning/02-AddressBook/cmake-build-debug/CMakeFiles/02_AddressBook.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/02_AddressBook.dir/depend

