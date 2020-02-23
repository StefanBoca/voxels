// Copyright (c) 2013-2016, Stoyan Nikolov
// All rights reserved.
// Voxels Library, please see LICENSE for licensing details.
#pragma once

#include <utility>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>

#define VOXELS_LOG_SIZE 512

#include <glm/glm.hpp>

#include <Declarations.h>
#include <Library.h>

extern Voxels::VoxelsAllocate_f voxel_allocate;
extern Voxels::VoxelsDeallocate_f voxel_deallocate;
extern Voxels::VoxelsAllocateAligned_f voxel_alloc_aligned;
extern Voxels::VoxelsDeallocateAligned_f voxel_dealloc_aligned;

#include "Memory.h"

#include "Logger.h"
