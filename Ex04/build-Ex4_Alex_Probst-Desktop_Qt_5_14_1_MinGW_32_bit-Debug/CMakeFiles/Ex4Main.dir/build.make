# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\alexp\Documents\BME_Cpp\Ex04\Ex4_Alex_Probst

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\alexp\Documents\BME_Cpp\Ex04\build-Ex4_Alex_Probst-Desktop_Qt_5_14_1_MinGW_32_bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/Ex4Main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ex4Main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ex4Main.dir/flags.make

CMakeFiles/Ex4Main.dir/main.cpp.obj: CMakeFiles/Ex4Main.dir/flags.make
CMakeFiles/Ex4Main.dir/main.cpp.obj: C:/Users/alexp/Documents/BME_Cpp/Ex04/Ex4_Alex_Probst/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alexp\Documents\BME_Cpp\Ex04\build-Ex4_Alex_Probst-Desktop_Qt_5_14_1_MinGW_32_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ex4Main.dir/main.cpp.obj"
	C:\Qt\Tools\mingw730_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ex4Main.dir\main.cpp.obj -c C:\Users\alexp\Documents\BME_Cpp\Ex04\Ex4_Alex_Probst\main.cpp

CMakeFiles/Ex4Main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ex4Main.dir/main.cpp.i"
	C:\Qt\Tools\mingw730_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alexp\Documents\BME_Cpp\Ex04\Ex4_Alex_Probst\main.cpp > CMakeFiles\Ex4Main.dir\main.cpp.i

CMakeFiles/Ex4Main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ex4Main.dir/main.cpp.s"
	C:\Qt\Tools\mingw730_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alexp\Documents\BME_Cpp\Ex04\Ex4_Alex_Probst\main.cpp -o CMakeFiles\Ex4Main.dir\main.cpp.s

# Object files for target Ex4Main
Ex4Main_OBJECTS = \
"CMakeFiles/Ex4Main.dir/main.cpp.obj"

# External object files for target Ex4Main
Ex4Main_EXTERNAL_OBJECTS =

Ex4Main.exe: CMakeFiles/Ex4Main.dir/main.cpp.obj
Ex4Main.exe: CMakeFiles/Ex4Main.dir/build.make
Ex4Main.exe: CMakeFiles/Ex4Main.dir/linklibs.rsp
Ex4Main.exe: CMakeFiles/Ex4Main.dir/objects1.rsp
Ex4Main.exe: CMakeFiles/Ex4Main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\alexp\Documents\BME_Cpp\Ex04\build-Ex4_Alex_Probst-Desktop_Qt_5_14_1_MinGW_32_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ex4Main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ex4Main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ex4Main.dir/build: Ex4Main.exe

.PHONY : CMakeFiles/Ex4Main.dir/build

CMakeFiles/Ex4Main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ex4Main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ex4Main.dir/clean

CMakeFiles/Ex4Main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\alexp\Documents\BME_Cpp\Ex04\Ex4_Alex_Probst C:\Users\alexp\Documents\BME_Cpp\Ex04\Ex4_Alex_Probst C:\Users\alexp\Documents\BME_Cpp\Ex04\build-Ex4_Alex_Probst-Desktop_Qt_5_14_1_MinGW_32_bit-Debug C:\Users\alexp\Documents\BME_Cpp\Ex04\build-Ex4_Alex_Probst-Desktop_Qt_5_14_1_MinGW_32_bit-Debug C:\Users\alexp\Documents\BME_Cpp\Ex04\build-Ex4_Alex_Probst-Desktop_Qt_5_14_1_MinGW_32_bit-Debug\CMakeFiles\Ex4Main.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ex4Main.dir/depend

