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
CMAKE_SOURCE_DIR = /Users/oharayoji/Desktop/AtCoder

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/oharayoji/Desktop/AtCoder/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TEST.c.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/TEST.c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TEST.c.dir/flags.make

CMakeFiles/TEST.c.dir/TEST.c.o: CMakeFiles/TEST.c.dir/flags.make
CMakeFiles/TEST.c.dir/TEST.c.o: ../TEST.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oharayoji/Desktop/AtCoder/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TEST.c.dir/TEST.c.o"
	/opt/homebrew/bin/gcc-11 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TEST.c.dir/TEST.c.o -c /Users/oharayoji/Desktop/AtCoder/TEST.c

CMakeFiles/TEST.c.dir/TEST.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TEST.c.dir/TEST.c.i"
	/opt/homebrew/bin/gcc-11 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/oharayoji/Desktop/AtCoder/TEST.c > CMakeFiles/TEST.c.dir/TEST.c.i

CMakeFiles/TEST.c.dir/TEST.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TEST.c.dir/TEST.c.s"
	/opt/homebrew/bin/gcc-11 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/oharayoji/Desktop/AtCoder/TEST.c -o CMakeFiles/TEST.c.dir/TEST.c.s

# Object files for target TEST.c
TEST_c_OBJECTS = \
"CMakeFiles/TEST.c.dir/TEST.c.o"

# External object files for target TEST.c
TEST_c_EXTERNAL_OBJECTS =

TEST.c: CMakeFiles/TEST.c.dir/TEST.c.o
TEST.c: CMakeFiles/TEST.c.dir/build.make
TEST.c: CMakeFiles/TEST.c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/oharayoji/Desktop/AtCoder/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TEST.c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TEST.c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TEST.c.dir/build: TEST.c
.PHONY : CMakeFiles/TEST.c.dir/build

CMakeFiles/TEST.c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TEST.c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TEST.c.dir/clean

CMakeFiles/TEST.c.dir/depend:
	cd /Users/oharayoji/Desktop/AtCoder/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/oharayoji/Desktop/AtCoder /Users/oharayoji/Desktop/AtCoder /Users/oharayoji/Desktop/AtCoder/cmake-build-debug /Users/oharayoji/Desktop/AtCoder/cmake-build-debug /Users/oharayoji/Desktop/AtCoder/cmake-build-debug/CMakeFiles/TEST.c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TEST.c.dir/depend
