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
CMAKE_SOURCE_DIR = "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Test_Tesst.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test_Tesst.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test_Tesst.dir/flags.make

CMakeFiles/Test_Tesst.dir/main.cpp.o: CMakeFiles/Test_Tesst.dir/flags.make
CMakeFiles/Test_Tesst.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test_Tesst.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test_Tesst.dir/main.cpp.o -c "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst/main.cpp"

CMakeFiles/Test_Tesst.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test_Tesst.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst/main.cpp" > CMakeFiles/Test_Tesst.dir/main.cpp.i

CMakeFiles/Test_Tesst.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test_Tesst.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst/main.cpp" -o CMakeFiles/Test_Tesst.dir/main.cpp.s

# Object files for target Test_Tesst
Test_Tesst_OBJECTS = \
"CMakeFiles/Test_Tesst.dir/main.cpp.o"

# External object files for target Test_Tesst
Test_Tesst_EXTERNAL_OBJECTS =

Test_Tesst: CMakeFiles/Test_Tesst.dir/main.cpp.o
Test_Tesst: CMakeFiles/Test_Tesst.dir/build.make
Test_Tesst: CMakeFiles/Test_Tesst.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Test_Tesst"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test_Tesst.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test_Tesst.dir/build: Test_Tesst

.PHONY : CMakeFiles/Test_Tesst.dir/build

CMakeFiles/Test_Tesst.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Test_Tesst.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Test_Tesst.dir/clean

CMakeFiles/Test_Tesst.dir/depend:
	cd "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst" "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst" "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst/cmake-build-debug" "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst/cmake-build-debug" "/Users/janabi/Desktop/Projects/OpenCVProjects/Test Tesst/cmake-build-debug/CMakeFiles/Test_Tesst.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Test_Tesst.dir/depend

