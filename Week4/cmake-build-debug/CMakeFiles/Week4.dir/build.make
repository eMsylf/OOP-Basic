# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Week4.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Week4.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Week4.dir\flags.make

CMakeFiles\Week4.dir\main.cpp.obj: CMakeFiles\Week4.dir\flags.make
CMakeFiles\Week4.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Week4.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Week4.dir\main.cpp.obj /FdCMakeFiles\Week4.dir\ /FS -c C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4\main.cpp
<<

CMakeFiles\Week4.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Week4.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe > CMakeFiles\Week4.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4\main.cpp
<<

CMakeFiles\Week4.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Week4.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Week4.dir\main.cpp.s /c C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4\main.cpp
<<

# Object files for target Week4
Week4_OBJECTS = \
"CMakeFiles\Week4.dir\main.cpp.obj"

# External object files for target Week4
Week4_EXTERNAL_OBJECTS =

Week4.exe: CMakeFiles\Week4.dir\main.cpp.obj
Week4.exe: CMakeFiles\Week4.dir\build.make
Week4.exe: CMakeFiles\Week4.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Week4.exe"
	"C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Week4.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Week4.dir\objects1.rsp @<<
 /out:Week4.exe /implib:Week4.lib /pdb:C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4\cmake-build-debug\Week4.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Week4.dir\build: Week4.exe

.PHONY : CMakeFiles\Week4.dir\build

CMakeFiles\Week4.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Week4.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Week4.dir\clean

CMakeFiles\Week4.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4 C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4 C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4\cmake-build-debug C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4\cmake-build-debug C:\Users\Bob\Documents\GitHub\OOP-Basic\Week4\cmake-build-debug\CMakeFiles\Week4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Week4.dir\depend

