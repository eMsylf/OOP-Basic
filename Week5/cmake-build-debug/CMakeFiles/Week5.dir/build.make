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
CMAKE_SOURCE_DIR = C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Week5.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Week5.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Week5.dir\flags.make

CMakeFiles\Week5.dir\main.cpp.obj: CMakeFiles\Week5.dir\flags.make
CMakeFiles\Week5.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Week5.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Week5.dir\main.cpp.obj /FdCMakeFiles\Week5.dir\ /FS -c C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\main.cpp
<<

CMakeFiles\Week5.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Week5.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\Week5.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\main.cpp
<<

CMakeFiles\Week5.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Week5.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Week5.dir\main.cpp.s /c C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\main.cpp
<<

CMakeFiles\Week5.dir\Bibliotheek.cpp.obj: CMakeFiles\Week5.dir\flags.make
CMakeFiles\Week5.dir\Bibliotheek.cpp.obj: ..\Bibliotheek.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Week5.dir/Bibliotheek.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Week5.dir\Bibliotheek.cpp.obj /FdCMakeFiles\Week5.dir\ /FS -c C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\Bibliotheek.cpp
<<

CMakeFiles\Week5.dir\Bibliotheek.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Week5.dir/Bibliotheek.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\Week5.dir\Bibliotheek.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\Bibliotheek.cpp
<<

CMakeFiles\Week5.dir\Bibliotheek.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Week5.dir/Bibliotheek.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Week5.dir\Bibliotheek.cpp.s /c C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\Bibliotheek.cpp
<<

CMakeFiles\Week5.dir\Boek.cpp.obj: CMakeFiles\Week5.dir\flags.make
CMakeFiles\Week5.dir\Boek.cpp.obj: ..\Boek.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Week5.dir/Boek.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Week5.dir\Boek.cpp.obj /FdCMakeFiles\Week5.dir\ /FS -c C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\Boek.cpp
<<

CMakeFiles\Week5.dir\Boek.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Week5.dir/Boek.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\Week5.dir\Boek.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\Boek.cpp
<<

CMakeFiles\Week5.dir\Boek.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Week5.dir/Boek.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Week5.dir\Boek.cpp.s /c C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\Boek.cpp
<<

# Object files for target Week5
Week5_OBJECTS = \
"CMakeFiles\Week5.dir\main.cpp.obj" \
"CMakeFiles\Week5.dir\Bibliotheek.cpp.obj" \
"CMakeFiles\Week5.dir\Boek.cpp.obj"

# External object files for target Week5
Week5_EXTERNAL_OBJECTS =

Week5.exe: CMakeFiles\Week5.dir\main.cpp.obj
Week5.exe: CMakeFiles\Week5.dir\Bibliotheek.cpp.obj
Week5.exe: CMakeFiles\Week5.dir\Boek.cpp.obj
Week5.exe: CMakeFiles\Week5.dir\build.make
Week5.exe: CMakeFiles\Week5.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Week5.exe"
	"C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Week5.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Week5.dir\objects1.rsp @<<
 /out:Week5.exe /implib:Week5.lib /pdb:C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\cmake-build-debug\Week5.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Week5.dir\build: Week5.exe

.PHONY : CMakeFiles\Week5.dir\build

CMakeFiles\Week5.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Week5.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Week5.dir\clean

CMakeFiles\Week5.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5 C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5 C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\cmake-build-debug C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\cmake-build-debug C:\Users\Bob\Documents\GitHub\OOP-Basic\Week5\cmake-build-debug\CMakeFiles\Week5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Week5.dir\depend

