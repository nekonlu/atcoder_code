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
CMAKE_COMMAND = "/Users/oharayoji/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/oharayoji/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/oharayoji/Desktop/AtCoder/ABC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/oharayoji/Desktop/AtCoder/ABC/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/241B.cpp.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/241B.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/241B.cpp.dir/flags.make

CMakeFiles/241B.cpp.dir/241B.cpp.o: CMakeFiles/241B.cpp.dir/flags.make
CMakeFiles/241B.cpp.dir/241B.cpp.o: ../241B.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oharayoji/Desktop/AtCoder/ABC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/241B.cpp.dir/241B.cpp.o"
	/opt/homebrew/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/241B.cpp.dir/241B.cpp.o -c /Users/oharayoji/Desktop/AtCoder/ABC/241B.cpp

CMakeFiles/241B.cpp.dir/241B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/241B.cpp.dir/241B.cpp.i"
	/opt/homebrew/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oharayoji/Desktop/AtCoder/ABC/241B.cpp > CMakeFiles/241B.cpp.dir/241B.cpp.i

CMakeFiles/241B.cpp.dir/241B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/241B.cpp.dir/241B.cpp.s"
	/opt/homebrew/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oharayoji/Desktop/AtCoder/ABC/241B.cpp -o CMakeFiles/241B.cpp.dir/241B.cpp.s

# Object files for target 241B.cpp
241B_cpp_OBJECTS = \
"CMakeFiles/241B.cpp.dir/241B.cpp.o"

# External object files for target 241B.cpp
241B_cpp_EXTERNAL_OBJECTS =

241B.cpp: CMakeFiles/241B.cpp.dir/241B.cpp.o
241B.cpp: CMakeFiles/241B.cpp.dir/build.make
241B.cpp: CMakeFiles/241B.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/oharayoji/Desktop/AtCoder/ABC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 241B.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/241B.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/241B.cpp.dir/build: 241B.cpp
.PHONY : CMakeFiles/241B.cpp.dir/build

CMakeFiles/241B.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/241B.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/241B.cpp.dir/clean

CMakeFiles/241B.cpp.dir/depend:
	cd /Users/oharayoji/Desktop/AtCoder/ABC/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/oharayoji/Desktop/AtCoder/ABC /Users/oharayoji/Desktop/AtCoder/ABC /Users/oharayoji/Desktop/AtCoder/ABC/cmake-build-debug /Users/oharayoji/Desktop/AtCoder/ABC/cmake-build-debug /Users/oharayoji/Desktop/AtCoder/ABC/cmake-build-debug/CMakeFiles/241B.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/241B.cpp.dir/depend

