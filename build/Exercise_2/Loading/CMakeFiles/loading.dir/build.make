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
include Exercise_2/Loading/CMakeFiles/loading.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Exercise_2/Loading/CMakeFiles/loading.dir/compiler_depend.make

# Include the progress variables for this target.
include Exercise_2/Loading/CMakeFiles/loading.dir/progress.make

# Include the compile flags for this target's objects.
include Exercise_2/Loading/CMakeFiles/loading.dir/flags.make

Exercise_2/Loading/CMakeFiles/loading.dir/loading.cpp.o: Exercise_2/Loading/CMakeFiles/loading.dir/flags.make
Exercise_2/Loading/CMakeFiles/loading.dir/loading.cpp.o: ../Exercise_2/Loading/loading.cpp
Exercise_2/Loading/CMakeFiles/loading.dir/loading.cpp.o: Exercise_2/Loading/CMakeFiles/loading.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Exercise_2/Loading/CMakeFiles/loading.dir/loading.cpp.o"
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_2/Loading" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Exercise_2/Loading/CMakeFiles/loading.dir/loading.cpp.o -MF CMakeFiles/loading.dir/loading.cpp.o.d -o CMakeFiles/loading.dir/loading.cpp.o -c "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/Exercise_2/Loading/loading.cpp"

Exercise_2/Loading/CMakeFiles/loading.dir/loading.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/loading.dir/loading.cpp.i"
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_2/Loading" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/Exercise_2/Loading/loading.cpp" > CMakeFiles/loading.dir/loading.cpp.i

Exercise_2/Loading/CMakeFiles/loading.dir/loading.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/loading.dir/loading.cpp.s"
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_2/Loading" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/Exercise_2/Loading/loading.cpp" -o CMakeFiles/loading.dir/loading.cpp.s

# Object files for target loading
loading_OBJECTS = \
"CMakeFiles/loading.dir/loading.cpp.o"

# External object files for target loading
loading_EXTERNAL_OBJECTS =

bin/Exercise_2/loading: Exercise_2/Loading/CMakeFiles/loading.dir/loading.cpp.o
bin/Exercise_2/loading: Exercise_2/Loading/CMakeFiles/loading.dir/build.make
bin/Exercise_2/loading: Exercise_2/Loading/CMakeFiles/loading.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/Exercise_2/loading"
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_2/Loading" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/loading.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Exercise_2/Loading/CMakeFiles/loading.dir/build: bin/Exercise_2/loading
.PHONY : Exercise_2/Loading/CMakeFiles/loading.dir/build

Exercise_2/Loading/CMakeFiles/loading.dir/clean:
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_2/Loading" && $(CMAKE_COMMAND) -P CMakeFiles/loading.dir/cmake_clean.cmake
.PHONY : Exercise_2/Loading/CMakeFiles/loading.dir/clean

Exercise_2/Loading/CMakeFiles/loading.dir/depend:
	cd "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises" "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/Exercise_2/Loading" "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build" "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_2/Loading" "/home/jiaboyuan/programming/C++/Analysis and Design on Algorithm/Exercises/build/Exercise_2/Loading/CMakeFiles/loading.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : Exercise_2/Loading/CMakeFiles/loading.dir/depend

