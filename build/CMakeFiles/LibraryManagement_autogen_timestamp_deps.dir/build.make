# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = C:\Users\sz_lc\scoop\apps\cmake\3.31.2\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\sz_lc\scoop\apps\cmake\3.31.2\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Library-Management-main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Library-Management-main\build

# Utility rule file for LibraryManagement_autogen_timestamp_deps.

# Include any custom commands dependencies for this target.
include CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\progress.make

CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\codegen:
.PHONY : CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\codegen

LibraryManagement_autogen_timestamp_deps: CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\build.make
.PHONY : LibraryManagement_autogen_timestamp_deps

# Rule to build all files generated by this target.
CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\build: LibraryManagement_autogen_timestamp_deps
.PHONY : CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\build

CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\cmake_clean.cmake
.PHONY : CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\clean

CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Library-Management-main C:\Library-Management-main C:\Library-Management-main\build C:\Library-Management-main\build C:\Library-Management-main\build\CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles\LibraryManagement_autogen_timestamp_deps.dir\depend

