# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\progs\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\progs\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Darthur\projects\c++\opencv_cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Darthur\projects\c++\opencv_cmake\build

# Include any dependencies generated for this target.
include CMakeFiles/myopencv.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/myopencv.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/myopencv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myopencv.dir/flags.make

CMakeFiles/myopencv.dir/helloworld.cpp.obj: CMakeFiles/myopencv.dir/flags.make
CMakeFiles/myopencv.dir/helloworld.cpp.obj: CMakeFiles/myopencv.dir/includes_CXX.rsp
CMakeFiles/myopencv.dir/helloworld.cpp.obj: ../helloworld.cpp
CMakeFiles/myopencv.dir/helloworld.cpp.obj: CMakeFiles/myopencv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Darthur\projects\c++\opencv_cmake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myopencv.dir/helloworld.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\X86_64~2.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myopencv.dir/helloworld.cpp.obj -MF CMakeFiles\myopencv.dir\helloworld.cpp.obj.d -o CMakeFiles\myopencv.dir\helloworld.cpp.obj -c C:\Users\Darthur\projects\c++\opencv_cmake\helloworld.cpp

CMakeFiles/myopencv.dir/helloworld.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myopencv.dir/helloworld.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\X86_64~2.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Darthur\projects\c++\opencv_cmake\helloworld.cpp > CMakeFiles\myopencv.dir\helloworld.cpp.i

CMakeFiles/myopencv.dir/helloworld.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myopencv.dir/helloworld.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\X86_64~2.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Darthur\projects\c++\opencv_cmake\helloworld.cpp -o CMakeFiles\myopencv.dir\helloworld.cpp.s

# Object files for target myopencv
myopencv_OBJECTS = \
"CMakeFiles/myopencv.dir/helloworld.cpp.obj"

# External object files for target myopencv
myopencv_EXTERNAL_OBJECTS =

myopencv.exe: CMakeFiles/myopencv.dir/helloworld.cpp.obj
myopencv.exe: CMakeFiles/myopencv.dir/build.make
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_gapi454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_highgui454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_ml454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_objdetect454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_photo454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_stitching454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_video454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_videoio454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_imgcodecs454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_dnn454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_calib3d454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_features2d454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_flann454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_imgproc454.dll.a
myopencv.exe: C:/progs/opencv/opencv/build/x64/mingw/lib/libopencv_core454.dll.a
myopencv.exe: CMakeFiles/myopencv.dir/linklibs.rsp
myopencv.exe: CMakeFiles/myopencv.dir/objects1.rsp
myopencv.exe: CMakeFiles/myopencv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Darthur\projects\c++\opencv_cmake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable myopencv.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\myopencv.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myopencv.dir/build: myopencv.exe
.PHONY : CMakeFiles/myopencv.dir/build

CMakeFiles/myopencv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\myopencv.dir\cmake_clean.cmake
.PHONY : CMakeFiles/myopencv.dir/clean

CMakeFiles/myopencv.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Darthur\projects\c++\opencv_cmake C:\Users\Darthur\projects\c++\opencv_cmake C:\Users\Darthur\projects\c++\opencv_cmake\build C:\Users\Darthur\projects\c++\opencv_cmake\build C:\Users\Darthur\projects\c++\opencv_cmake\build\CMakeFiles\myopencv.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myopencv.dir/depend

