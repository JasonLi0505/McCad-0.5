# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lu/Programming/McCadTrunk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lu/Programming/McCadTrunk/qtcreator-build

# Include any dependencies generated for this target.
include src/CMakeFiles/TKMcCadExStep.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/TKMcCadExStep.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/TKMcCadExStep.dir/flags.make

src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o: src/CMakeFiles/TKMcCadExStep.dir/flags.make
src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o: ../src/McCadExDllStep/McCadExDllStep_Step.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lu/Programming/McCadTrunk/qtcreator-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Building CXX object src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o"
	cd /home/lu/Programming/McCadTrunk/qtcreator-build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o -c /home/lu/Programming/McCadTrunk/src/McCadExDllStep/McCadExDllStep_Step.cxx

src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.i: cmake_force
	@echo "Preprocessing CXX source to CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.i"
	cd /home/lu/Programming/McCadTrunk/qtcreator-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lu/Programming/McCadTrunk/src/McCadExDllStep/McCadExDllStep_Step.cxx > CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.i

src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.s: cmake_force
	@echo "Compiling CXX source to assembly CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.s"
	cd /home/lu/Programming/McCadTrunk/qtcreator-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lu/Programming/McCadTrunk/src/McCadExDllStep/McCadExDllStep_Step.cxx -o CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.s

src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o.requires:
.PHONY : src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o.requires

src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o.provides: src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o.requires
	$(MAKE) -f src/CMakeFiles/TKMcCadExStep.dir/build.make src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o.provides.build
.PHONY : src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o.provides

src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o.provides.build: src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o
.PHONY : src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o.provides.build

# Object files for target TKMcCadExStep
TKMcCadExStep_OBJECTS = \
"CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o"

# External object files for target TKMcCadExStep
TKMcCadExStep_EXTERNAL_OBJECTS =

../lib/libTKMcCadExStep.so: src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKMath.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKernel.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKG2d.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKSTEP.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKBRep.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKG3d.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKXSBase.so.2.0.0
../lib/libTKMcCadExStep.so: ../lib/libTKMcCadGUI.so
../lib/libTKMcCadExStep.so: ../lib/libTKMcCadEXPlug.so
../lib/libTKMcCadExStep.so: ../lib/libTKMcCadDiscDs.so
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKSTEPBase.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKSTEPAttr.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKShHealing.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKSTEP209.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKGeomBase.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKGeomAlgo.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKTopAlgo.so.2.0.0
../lib/libTKMcCadExStep.so: ../lib/libTKMcCadGUI.so
../lib/libTKMcCadExStep.so: /opt/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtOpenGL.so
../lib/libTKMcCadExStep.so: /opt/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtGui.so
../lib/libTKMcCadExStep.so: /opt/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtXml.so
../lib/libTKMcCadExStep.so: /opt/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtNetwork.so
../lib/libTKMcCadExStep.so: /opt/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtCore.so
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKXDESTEP.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKSTEP.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKSTEP209.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKSTEPAttr.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKSTEPBase.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKXSBase.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKShHealing.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKXCAF.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKCAF.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKLCAF.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKV3d.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKMesh.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKV2d.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKService.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/lib/libXmu.so
../lib/libTKMcCadExStep.so: /usr/lib/libSM.so
../lib/libTKMcCadExStep.so: /usr/lib/libICE.so
../lib/libTKMcCadExStep.so: /usr/lib/libX11.so
../lib/libTKMcCadExStep.so: /usr/lib/libXext.so
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKHLR.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKTopAlgo.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKGeomAlgo.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKBRep.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKGeomBase.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKG3d.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKG2d.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKMath.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKCDF.so.2.0.0
../lib/libTKMcCadExStep.so: /usr/local/lib/libTKernel.so.2.0.0
../lib/libTKMcCadExStep.so: src/CMakeFiles/TKMcCadExStep.dir/build.make
../lib/libTKMcCadExStep.so: src/CMakeFiles/TKMcCadExStep.dir/link.txt
	@echo "Linking CXX shared library ../../lib/libTKMcCadExStep.so"
	cd /home/lu/Programming/McCadTrunk/qtcreator-build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TKMcCadExStep.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/TKMcCadExStep.dir/build: ../lib/libTKMcCadExStep.so
.PHONY : src/CMakeFiles/TKMcCadExStep.dir/build

src/CMakeFiles/TKMcCadExStep.dir/requires: src/CMakeFiles/TKMcCadExStep.dir/McCadExDllStep/McCadExDllStep_Step.cxx.o.requires
.PHONY : src/CMakeFiles/TKMcCadExStep.dir/requires

src/CMakeFiles/TKMcCadExStep.dir/clean:
	cd /home/lu/Programming/McCadTrunk/qtcreator-build/src && $(CMAKE_COMMAND) -P CMakeFiles/TKMcCadExStep.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/TKMcCadExStep.dir/clean

src/CMakeFiles/TKMcCadExStep.dir/depend:
	cd /home/lu/Programming/McCadTrunk/qtcreator-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lu/Programming/McCadTrunk /home/lu/Programming/McCadTrunk/src /home/lu/Programming/McCadTrunk/qtcreator-build /home/lu/Programming/McCadTrunk/qtcreator-build/src /home/lu/Programming/McCadTrunk/qtcreator-build/src/CMakeFiles/TKMcCadExStep.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/TKMcCadExStep.dir/depend

