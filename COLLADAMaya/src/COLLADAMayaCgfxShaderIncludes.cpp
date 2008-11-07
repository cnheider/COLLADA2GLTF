/*
    Copyright (c) 2008 NetAllied Systems GmbH

	This file is part of COLLADAMaya.

    Portions of the code are:
    Copyright (c) 2005-2007 Feeling Software Inc.
    Copyright (c) 2005-2007 Sony Computer Entertainment America
    Copyright (c) 2004-2005 Alias Systems Corp.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/

#include "COLLADAMayaStableHeaders.h"

#ifdef _WIN32
# pragma warning(disable: 4312)
#endif

#include "cgfxAttrDef.cpp"
#if MAYA_API_VERSION > 800
#include "cgfxEffectDef.cpp"
#endif // MAYA_API_VERSION > 800
#include "cgfxFindImage.cpp"
#include "cgfxShaderCmd.cpp"
#include "cgfxShaderNode.cpp"
#include "cgfxVector.cpp"
#include "nv_dds.cpp"

#ifdef _WIN32
# pragma warning(default: 4312)
#endif

