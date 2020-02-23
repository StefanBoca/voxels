cmake_minimum_required( VERSION 2.8 )
project( libvoxels )

set(CMAKE_CXX_FLAGS "-fPIC -O3")
set (CMAKE_CXX_STANDARD 17)

set( CMAKE_BUILD_TYPE Release CACHE STRING "Build Type." FORCE )
set( LIBVOXELS_BUILD_SHARED_LIBS FALSE CACHE BOOL "Build shared libraries." )

if( LIBVOXELS_BUILD_SHARED_LIBS )
	set( LIB_TYPE SHARED )
else()
	set( LIB_TYPE STATIC )
endif()

set( SRC_DIR "src" )
set( INC_DIR "include" )

set(
	SOURCES
    ${INC_DIR}/Declarations.h
    ${INC_DIR}/Grid.h
    ${INC_DIR}/Library.h
    ${INC_DIR}/MaterialMap.h
    ${INC_DIR}/Polygonizer.h
    ${INC_DIR}/Structs.h
    ${INC_DIR}/Version.h
    ${INC_DIR}/Voxels.h
    ${INC_DIR}/VoxelSurface.h

    ${SRC_DIR}/Aligned.h
    ${SRC_DIR}/Logger.h
    ${SRC_DIR}/Memory.cpp
    ${SRC_DIR}/Memory.h
	${SRC_DIR}/stdafx.h
    ${SRC_DIR}/StdAllocatorAligned.h
    ${SRC_DIR}/StructConversions.h
	${SRC_DIR}/Transvoxel.inl
    ${SRC_DIR}/TransVoxelImpl.cpp
    ${SRC_DIR}/TransVoxelImpl.h
	${SRC_DIR}/VoxelGrid.cpp
    ${SRC_DIR}/VoxelGrid.h
	${SRC_DIR}/Voxels.cpp
)

include_directories( ${INC_DIR} third_party/glm/)

add_library( libvoxels ${LIB_TYPE} ${SOURCES} )

# GCC will automatically add the prefix lib
if( CMAKE_COMPILER_IS_GNUCXX )
	set_target_properties( libvoxels PROPERTIES OUTPUT_NAME voxels )
endif()
