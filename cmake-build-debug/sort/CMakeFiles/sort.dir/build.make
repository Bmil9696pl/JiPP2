# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug

# Include any dependencies generated for this target.
include sort\CMakeFiles\sort.dir\depend.make
# Include the progress variables for this target.
include sort\CMakeFiles\sort.dir\progress.make

# Include the compile flags for this target's objects.
include sort\CMakeFiles\sort.dir\flags.make

sort\CMakeFiles\sort.dir\main.cpp.obj: sort\CMakeFiles\sort.dir\flags.make
sort\CMakeFiles\sort.dir\main.cpp.obj: ..\sort\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sort/CMakeFiles/sort.dir/main.cpp.obj"
	cd C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug\sort
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\sort.dir\main.cpp.obj /FdCMakeFiles\sort.dir\ /FS -c C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\sort\main.cpp
<<
	cd C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug

sort\CMakeFiles\sort.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort.dir/main.cpp.i"
	cd C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug\sort
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\sort.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\sort\main.cpp
<<
	cd C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug

sort\CMakeFiles\sort.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort.dir/main.cpp.s"
	cd C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug\sort
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\sort.dir\main.cpp.s /c C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\sort\main.cpp
<<
	cd C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug

# Object files for target sort
sort_OBJECTS = \
"CMakeFiles\sort.dir\main.cpp.obj"

# External object files for target sort
sort_EXTERNAL_OBJECTS =

sort\sort.exe: sort\CMakeFiles\sort.dir\main.cpp.obj
sort\sort.exe: sort\CMakeFiles\sort.dir\build.make
sort\sort.exe: sort\CMakeFiles\sort.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sort.exe"
	cd C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug\sort
	"C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\sort.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\sort.dir\objects1.rsp @<<
 /out:sort.exe /implib:sort.lib /pdb:C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug\sort\sort.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<
	cd C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug

# Rule to build all files generated by this target.
sort\CMakeFiles\sort.dir\build: sort\sort.exe
.PHONY : sort\CMakeFiles\sort.dir\build

sort\CMakeFiles\sort.dir\clean:
	cd C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug\sort
	$(CMAKE_COMMAND) -P CMakeFiles\sort.dir\cmake_clean.cmake
	cd C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug
.PHONY : sort\CMakeFiles\sort.dir\clean

sort\CMakeFiles\sort.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\sort C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug\sort C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\cmake-build-debug\sort\CMakeFiles\sort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : sort\CMakeFiles\sort.dir\depend

