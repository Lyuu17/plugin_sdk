/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAnimationStyleDescriptor.h"
#include "CAnimBlendAssocGroup.h"
#include "CAnimBlendAssociation.h"
#include "CAnimBlock.h"
#include "CLinkList.h"

class PLUGIN_API CAnimManager {
public:
	SUPPORTED_10EN_11EN static void Initialise(void);
	SUPPORTED_10EN_11EN static void Shutdown(void);
	SUPPORTED_10EN_11EN static void UncompressAnimation(CAnimBlendHierarchy *hier);
	SUPPORTED_10EN_11EN static CAnimBlock *GetAnimationBlock(const char *name);
	SUPPORTED_10EN_11EN static CAnimBlendHierarchy *GetAnimation(const char *name, CAnimBlock *animBlock);
	SUPPORTED_10EN_11EN static const char *GetAnimGroupName(int index);
	SUPPORTED_10EN_11EN static CAnimBlendAssociation *CreateAnimAssociation(int AssocGroupId, int AnimationId);
	SUPPORTED_10EN_11EN static CAnimBlendAssociation *GetAnimAssociation(int AssocGroupId, int AnimationId);
	SUPPORTED_10EN_11EN static CAnimBlendAssociation *GetAnimAssociation(int AssocGroupId, const char *name);
	SUPPORTED_10EN_11EN static CAnimBlendAssociation *AddAnimation(RpClump *clump, int AssocGroupId, int AnimationId);
	SUPPORTED_10EN_11EN static CAnimBlendAssociation *AddAnimationAndSync(RpClump *clump, CAnimBlendAssociation *, int AssocGroupId, int AnimationId);
	SUPPORTED_10EN_11EN static CAnimBlendAssociation *BlendAnimation(RpClump *clump, int AssocGroupId, int AnimationId, float clumpAssocBlendData);
	SUPPORTED_10EN_11EN static void LoadAnimFiles(void);
	SUPPORTED_10EN_11EN static void LoadAnimFile(const char*);
	SUPPORTED_10EN_11EN static void LoadAnimFile(int, bool);
	SUPPORTED_10EN_11EN static void RemoveLastAnimFile(void);

	SUPPORTED_10EN_11EN static int &ms_numAnimations;
	SUPPORTED_10EN_11EN static CAnimBlendHierarchy *ms_aAnimations;
	SUPPORTED_10EN_11EN static int &ms_numAnimBlocks;
	SUPPORTED_10EN_11EN static CAnimBlock *ms_aAnimBlocks;
	SUPPORTED_10EN_11EN static CAnimBlendAssocGroup *&ms_aAnimAssocGroups;
	SUPPORTED_10EN_11EN static const int ms_numAnimAssocDefinitions = 25;
	SUPPORTED_10EN_11EN static CAnimationStyleDescriptor *ms_aAnimAssocDefinitions;	// 25
	SUPPORTED_10EN_11EN static CLinkList<CAnimBlendHierarchy*> &ms_animCache;
};

#include "meta/meta.CAnimManager.h"