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
CMAKE_COMMAND = /cygdrive/c/Users/bartek-tominek/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/bartek-tominek/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug

# Include any dependencies generated for this target.
include matrixApp/App/CMakeFiles/matrixApp.dir/depend.make
# Include the progress variables for this target.
include matrixApp/App/CMakeFiles/matrixApp.dir/progress.make

# Include the compile flags for this target's objects.
include matrixApp/App/CMakeFiles/matrixApp.dir/flags.make

matrixApp/App/CMakeFiles/matrixApp.dir/main.cpp.o: matrixApp/App/CMakeFiles/matrixApp.dir/flags.make
matrixApp/App/CMakeFiles/matrixApp.dir/main.cpp.o: ../matrixApp/App/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object matrixApp/App/CMakeFiles/matrixApp.dir/main.cpp.o"
	cd /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug/matrixApp/App && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrixApp.dir/main.cpp.o -c /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/matrixApp/App/main.cpp

matrixApp/App/CMakeFiles/matrixApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrixApp.dir/main.cpp.i"
	cd /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug/matrixApp/App && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/matrixApp/App/main.cpp > CMakeFiles/matrixApp.dir/main.cpp.i

matrixApp/App/CMakeFiles/matrixApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrixApp.dir/main.cpp.s"
	cd /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug/matrixApp/App && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/matrixApp/App/main.cpp -o CMakeFiles/matrixApp.dir/main.cpp.s

# Object files for target matrixApp
matrixApp_OBJECTS = \
"CMakeFiles/matrixApp.dir/main.cpp.o"

# External object files for target matrixApp
matrixApp_EXTERNAL_OBJECTS =

matrixApp/App/matrixApp.exe: matrixApp/App/CMakeFiles/matrixApp.dir/main.cpp.o
matrixApp/App/matrixApp.exe: matrixApp/App/CMakeFiles/matrixApp.dir/build.make
matrixApp/App/matrixApp.exe: matrixApp/matrixLib/libmatrixLib.a
matrixApp/App/matrixApp.exe: matrixApp/App/CMakeFiles/matrixApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable matrixApp.exe"
	cd /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug/matrixApp/App && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrixApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
matrixApp/App/CMakeFiles/matrixApp.dir/build: matrixApp/App/matrixApp.exe
.PHONY : matrixApp/App/CMakeFiles/matrixApp.dir/build

matrixApp/App/CMakeFiles/matrixApp.dir/clean:
	cd /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug/matrixApp/App && $(CMAKE_COMMAND) -P CMakeFiles/matrixApp.dir/cmake_clean.cmake
.PHONY : matrixApp/App/CMakeFiles/matrixApp.dir/clean

matrixApp/App/CMakeFiles/matrixApp.dir/depend:
	cd /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/matrixApp/App /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug/matrixApp/App /cygdrive/c/Users/bartek-tominek/CLionProjects/JiPP2-Bart-omiej-Milecki/cmake-build-debug/matrixApp/App/CMakeFiles/matrixApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : matrixApp/App/CMakeFiles/matrixApp.dir/depend

