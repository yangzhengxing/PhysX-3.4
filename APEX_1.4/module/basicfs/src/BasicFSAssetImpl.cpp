/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#include "ApexDefs.h"
#include "Apex.h"
#include "BasicFSAssetImpl.h"
#include "BasicFSActor.h"
#include "ModuleBasicFSImpl.h"
//#include "ApexSharedSerialization.h"
#include "BasicFSScene.h"

namespace nvidia
{
namespace basicfs
{


BasicFSAssetImpl::BasicFSAssetImpl(ModuleBasicFSImpl* module, const char* name)
			: mModule(module)
			, mName(name)
{
}

BasicFSAssetImpl::~BasicFSAssetImpl()
{
}

}
} // end namespace nvidia::apex

