# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/edauandes/Documents/eda23/t3/newest/EDA_T3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/edauandes/Documents/eda23/t3/newest/EDA_T3/build

# Include any dependencies generated for this target.
include CMakeFiles/calculadora.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calculadora.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calculadora.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculadora.dir/flags.make

CMakeFiles/calculadora.dir/test/test.cpp.o: CMakeFiles/calculadora.dir/flags.make
CMakeFiles/calculadora.dir/test/test.cpp.o: ../test/test.cpp
CMakeFiles/calculadora.dir/test/test.cpp.o: CMakeFiles/calculadora.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edauandes/Documents/eda23/t3/newest/EDA_T3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculadora.dir/test/test.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculadora.dir/test/test.cpp.o -MF CMakeFiles/calculadora.dir/test/test.cpp.o.d -o CMakeFiles/calculadora.dir/test/test.cpp.o -c /home/edauandes/Documents/eda23/t3/newest/EDA_T3/test/test.cpp

CMakeFiles/calculadora.dir/test/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculadora.dir/test/test.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edauandes/Documents/eda23/t3/newest/EDA_T3/test/test.cpp > CMakeFiles/calculadora.dir/test/test.cpp.i

CMakeFiles/calculadora.dir/test/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculadora.dir/test/test.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edauandes/Documents/eda23/t3/newest/EDA_T3/test/test.cpp -o CMakeFiles/calculadora.dir/test/test.cpp.s

CMakeFiles/calculadora.dir/src/btree.cpp.o: CMakeFiles/calculadora.dir/flags.make
CMakeFiles/calculadora.dir/src/btree.cpp.o: ../src/btree.cpp
CMakeFiles/calculadora.dir/src/btree.cpp.o: CMakeFiles/calculadora.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edauandes/Documents/eda23/t3/newest/EDA_T3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calculadora.dir/src/btree.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculadora.dir/src/btree.cpp.o -MF CMakeFiles/calculadora.dir/src/btree.cpp.o.d -o CMakeFiles/calculadora.dir/src/btree.cpp.o -c /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/btree.cpp

CMakeFiles/calculadora.dir/src/btree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculadora.dir/src/btree.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/btree.cpp > CMakeFiles/calculadora.dir/src/btree.cpp.i

CMakeFiles/calculadora.dir/src/btree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculadora.dir/src/btree.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/btree.cpp -o CMakeFiles/calculadora.dir/src/btree.cpp.s

CMakeFiles/calculadora.dir/src/node.cpp.o: CMakeFiles/calculadora.dir/flags.make
CMakeFiles/calculadora.dir/src/node.cpp.o: ../src/node.cpp
CMakeFiles/calculadora.dir/src/node.cpp.o: CMakeFiles/calculadora.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edauandes/Documents/eda23/t3/newest/EDA_T3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/calculadora.dir/src/node.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculadora.dir/src/node.cpp.o -MF CMakeFiles/calculadora.dir/src/node.cpp.o.d -o CMakeFiles/calculadora.dir/src/node.cpp.o -c /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/node.cpp

CMakeFiles/calculadora.dir/src/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculadora.dir/src/node.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/node.cpp > CMakeFiles/calculadora.dir/src/node.cpp.i

CMakeFiles/calculadora.dir/src/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculadora.dir/src/node.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/node.cpp -o CMakeFiles/calculadora.dir/src/node.cpp.s

CMakeFiles/calculadora.dir/src/stack.cpp.o: CMakeFiles/calculadora.dir/flags.make
CMakeFiles/calculadora.dir/src/stack.cpp.o: ../src/stack.cpp
CMakeFiles/calculadora.dir/src/stack.cpp.o: CMakeFiles/calculadora.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edauandes/Documents/eda23/t3/newest/EDA_T3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/calculadora.dir/src/stack.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculadora.dir/src/stack.cpp.o -MF CMakeFiles/calculadora.dir/src/stack.cpp.o.d -o CMakeFiles/calculadora.dir/src/stack.cpp.o -c /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/stack.cpp

CMakeFiles/calculadora.dir/src/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculadora.dir/src/stack.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/stack.cpp > CMakeFiles/calculadora.dir/src/stack.cpp.i

CMakeFiles/calculadora.dir/src/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculadora.dir/src/stack.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/stack.cpp -o CMakeFiles/calculadora.dir/src/stack.cpp.s

CMakeFiles/calculadora.dir/src/calculator.cpp.o: CMakeFiles/calculadora.dir/flags.make
CMakeFiles/calculadora.dir/src/calculator.cpp.o: ../src/calculator.cpp
CMakeFiles/calculadora.dir/src/calculator.cpp.o: CMakeFiles/calculadora.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edauandes/Documents/eda23/t3/newest/EDA_T3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/calculadora.dir/src/calculator.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculadora.dir/src/calculator.cpp.o -MF CMakeFiles/calculadora.dir/src/calculator.cpp.o.d -o CMakeFiles/calculadora.dir/src/calculator.cpp.o -c /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/calculator.cpp

CMakeFiles/calculadora.dir/src/calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculadora.dir/src/calculator.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/calculator.cpp > CMakeFiles/calculadora.dir/src/calculator.cpp.i

CMakeFiles/calculadora.dir/src/calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculadora.dir/src/calculator.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edauandes/Documents/eda23/t3/newest/EDA_T3/src/calculator.cpp -o CMakeFiles/calculadora.dir/src/calculator.cpp.s

# Object files for target calculadora
calculadora_OBJECTS = \
"CMakeFiles/calculadora.dir/test/test.cpp.o" \
"CMakeFiles/calculadora.dir/src/btree.cpp.o" \
"CMakeFiles/calculadora.dir/src/node.cpp.o" \
"CMakeFiles/calculadora.dir/src/stack.cpp.o" \
"CMakeFiles/calculadora.dir/src/calculator.cpp.o"

# External object files for target calculadora
calculadora_EXTERNAL_OBJECTS =

calculadora: CMakeFiles/calculadora.dir/test/test.cpp.o
calculadora: CMakeFiles/calculadora.dir/src/btree.cpp.o
calculadora: CMakeFiles/calculadora.dir/src/node.cpp.o
calculadora: CMakeFiles/calculadora.dir/src/stack.cpp.o
calculadora: CMakeFiles/calculadora.dir/src/calculator.cpp.o
calculadora: CMakeFiles/calculadora.dir/build.make
calculadora: CMakeFiles/calculadora.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/edauandes/Documents/eda23/t3/newest/EDA_T3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable calculadora"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculadora.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculadora.dir/build: calculadora
.PHONY : CMakeFiles/calculadora.dir/build

CMakeFiles/calculadora.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calculadora.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calculadora.dir/clean

CMakeFiles/calculadora.dir/depend:
	cd /home/edauandes/Documents/eda23/t3/newest/EDA_T3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/edauandes/Documents/eda23/t3/newest/EDA_T3 /home/edauandes/Documents/eda23/t3/newest/EDA_T3 /home/edauandes/Documents/eda23/t3/newest/EDA_T3/build /home/edauandes/Documents/eda23/t3/newest/EDA_T3/build /home/edauandes/Documents/eda23/t3/newest/EDA_T3/build/CMakeFiles/calculadora.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculadora.dir/depend

