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
CMAKE_COMMAND = /snap/cmake/876/bin/cmake

# The command to remove a file.
RM = /snap/cmake/876/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build"

# Include any dependencies generated for this target.
include Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/compiler_depend.make

# Include the progress variables for this target.
include Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/progress.make

# Include the compile flags for this target's objects.
include Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/flags.make

Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/matrixchain.cpp.o: Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/flags.make
Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/matrixchain.cpp.o: ../Exercise_1/MatrixChain/matrixchain.cpp
Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/matrixchain.cpp.o: Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/matrixchain.cpp.o"
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_1/MatrixChain" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/matrixchain.cpp.o -MF CMakeFiles/matrixchain.dir/matrixchain.cpp.o.d -o CMakeFiles/matrixchain.dir/matrixchain.cpp.o -c "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/Exercise_1/MatrixChain/matrixchain.cpp"

Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/matrixchain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrixchain.dir/matrixchain.cpp.i"
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_1/MatrixChain" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/Exercise_1/MatrixChain/matrixchain.cpp" > CMakeFiles/matrixchain.dir/matrixchain.cpp.i

Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/matrixchain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrixchain.dir/matrixchain.cpp.s"
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_1/MatrixChain" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/Exercise_1/MatrixChain/matrixchain.cpp" -o CMakeFiles/matrixchain.dir/matrixchain.cpp.s

# Object files for target matrixchain
matrixchain_OBJECTS = \
"CMakeFiles/matrixchain.dir/matrixchain.cpp.o"

# External object files for target matrixchain
matrixchain_EXTERNAL_OBJECTS =

bin/Exercise_1/matrixchain: Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/matrixchain.cpp.o
bin/Exercise_1/matrixchain: Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/build.make
bin/Exercise_1/matrixchain: Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/Exercise_1/matrixchain"
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_1/MatrixChain" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrixchain.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/build: bin/Exercise_1/matrixchain
.PHONY : Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/build

Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/clean:
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_1/MatrixChain" && $(CMAKE_COMMAND) -P CMakeFiles/matrixchain.dir/cmake_clean.cmake
.PHONY : Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/clean

Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/depend:
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises" "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/Exercise_1/MatrixChain" "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build" "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_1/MatrixChain" "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : Exercise_1/MatrixChain/CMakeFiles/matrixchain.dir/depend

