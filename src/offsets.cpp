#pragma once

#include "offsets.h"


RelocPtr<float> g_havokWorldScale(0x15B78F4);
RelocPtr<float> g_inverseHavokWorldScale(0x15ADFE8);

RelocAddr<_hkReferencedObject_addReference> hkReferencedObject_addReference(0xA01280);
RelocAddr<_hkReferencedObject_removeReference> hkReferencedObject_removeReference(0xA01340);
RelocAddr<_hkpConvexVerticesShape_getOriginalVertices> hkpConvexVerticesShape_getOriginalVertices(0xB98F70);

RelocAddr<_GetHavokWorldFromCell> GetHavokWorldFromCell(0x276A90);
RelocAddr<_GetNodeFromCollidable> GetNodeFromCollidable(0xE01FE0);

RelocAddr<_NiCamera_FinishAccumulatingPostResolveDepth> NiCamera_FinishAccumulatingPostResolveDepth(0x12FF0E0);
