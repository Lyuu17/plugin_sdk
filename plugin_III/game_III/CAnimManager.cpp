/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CAnimManager.h"

PLUGIN_SOURCE_FILE

SUPPORTED_10EN_11EN CAnimationStyleDescriptor *CAnimManager::ms_aAnimAssocDefinitions = (CAnimationStyleDescriptor*)ADDRESS_BY_VERSION(0x5EB724, 0x5EB724, 0);
SUPPORTED_10EN_11EN CAnimBlock *CAnimManager::ms_aAnimBlocks = (CAnimBlock*)ADDRESS_BY_VERSION(0x6F01A0, 0x6F01A0, 0);
SUPPORTED_10EN_11EN CAnimBlendHierarchy *CAnimManager::ms_aAnimations = (CAnimBlendHierarchy*)ADDRESS_BY_VERSION(0x70F430, 0x70F430, 0);
SUPPORTED_10EN_11EN int &CAnimManager::ms_numAnimBlocks = *(int*)ADDRESS_BY_VERSION(0x885AF8, 0x885AA8, 0);
SUPPORTED_10EN_11EN int &CAnimManager::ms_numAnimations = *(int*)ADDRESS_BY_VERSION(0x8E2DD4, 0x8E2E88, 0);
SUPPORTED_10EN_11EN CAnimBlendAssocGroup *&CAnimManager::ms_aAnimAssocGroups = *(CAnimBlendAssocGroup**)ADDRESS_BY_VERSION(0x8F583C, 0x8F58F0, 0);
SUPPORTED_10EN_11EN CLinkList<CAnimBlendHierarchy*> &CAnimManager::ms_animCache = *(CLinkList<CAnimBlendHierarchy*>*)ADDRESS_BY_VERSION(0x9414DC, 0x941694, 0);

int addrof(CAnimManager::Initialise) = ADDRESS_BY_VERSION(0x403380, 0x403380, 0);
int gaddrof(CAnimManager::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x403380, 0x403380, 0);

void CAnimManager::Initialise() 
{
    plugin::CallDynGlobal(gaddrof(CAnimManager::Initialise));
}

int addrof(CAnimManager::Shutdown) = ADDRESS_BY_VERSION(0x4033B0, 0x4033B0, 0);
int gaddrof(CAnimManager::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4033B0, 0x4033B0, 0);

void CAnimManager::Shutdown(void) 
{
    plugin::CallDynGlobal(gaddrof(CAnimManager::Shutdown));
}

int addrof(CAnimManager::UncompressAnimation) = ADDRESS_BY_VERSION(0x403410, 0x403410, 0);
int gaddrof(CAnimManager::UncompressAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x403410, 0x403410, 0);

void CAnimManager::UncompressAnimation(CAnimBlendHierarchy* hier) 
{
    plugin::CallDynGlobal<CAnimBlendHierarchy*>(gaddrof(CAnimManager::UncompressAnimation), hier);
}

int addrof(CAnimManager::GetAnimationBlock) = ADDRESS_BY_VERSION(0x4034A0, 0x4034A0, 0);
int gaddrof(CAnimManager::GetAnimationBlock) = GLOBAL_ADDRESS_BY_VERSION(0x4034A0, 0x4034A0, 0);

CAnimBlock *CAnimManager::GetAnimationBlock(const char *name)
{
    return plugin::CallAndReturnDynGlobal<CAnimBlock*, const char*>(gaddrof(CAnimManager::GetAnimationBlock), name);
    //return plugin::CallAndReturn<CAnimBlock*, 0x4034A0, char const*>(name);
}

int addrof(CAnimManager::GetAnimation) = ADDRESS_BY_VERSION(0x4034F0, 0x4034F0, 0);
int gaddrof(CAnimManager::GetAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x4034F0, 0x4034F0, 0);

CAnimBlendHierarchy* CAnimManager::GetAnimation(const char* name, CAnimBlock* animBlock)
{
    return plugin::CallAndReturnDynGlobal<CAnimBlendHierarchy*, const char*, CAnimBlock*>(gaddrof(CAnimManager::GetAnimation), name, animBlock);
}

int addrof(CAnimManager::GetAnimGroupName) = ADDRESS_BY_VERSION(0x4035B0, 0x4035B0, 0);
int gaddrof(CAnimManager::GetAnimGroupName) = GLOBAL_ADDRESS_BY_VERSION(0x4035B0, 0x4035B0, 0);

const char* CAnimManager::GetAnimGroupName(int index)
{
    return plugin::CallAndReturnDynGlobal<const char*, int>(gaddrof(CAnimManager::GetAnimGroupName), index);
}

int addrof(CAnimManager::CreateAnimAssociation) = ADDRESS_BY_VERSION(0x4035C0, 0x4035C0, 0);
int gaddrof(CAnimManager::CreateAnimAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x4035C0, 0x4035C0, 0);

CAnimBlendAssociation* CAnimManager::CreateAnimAssociation(int AssocGroupId, int AnimationId) 
{
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation*, int, int>(gaddrof(CAnimManager::CreateAnimAssociation), AssocGroupId, AnimationId);
}

int addrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation* (*)(int, int)) = ADDRESS_BY_VERSION(0x4035E0, 0x4035E0, 0);
int gaddrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation* (*)(int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x4035E0, 0x4035E0, 0);

CAnimBlendAssociation *CAnimManager::GetAnimAssociation(int AssocGroupId, int AnimationId)
{
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation*, int, int>(gaddrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation*(*)(int, int)), AssocGroupId, AnimationId);
}

int addrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation* (*)(int, char const*)) = ADDRESS_BY_VERSION(0x403600, 0x403600, 0);
int gaddrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation* (*)(int, char const*)) = GLOBAL_ADDRESS_BY_VERSION(0x403600, 0x403600, 0);

CAnimBlendAssociation* CAnimManager::GetAnimAssociation(int AssocGroupId, char const* name) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation*, int, char const*>(gaddrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation*(*)(int, char const*)), AssocGroupId, name);
}

int addrof(CAnimManager::AddAnimation) = ADDRESS_BY_VERSION(0x403620, 0x403620, 0);
int gaddrof(CAnimManager::AddAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x403620, 0x403620, 0);

CAnimBlendAssociation* CAnimManager::AddAnimation(RpClump* clump, int AssocGroupId, int AnimationId)
{
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation*, RpClump*, int, int>(gaddrof(CAnimManager::AddAnimation), clump, AssocGroupId, AnimationId);
}

int addrof(CAnimManager::AddAnimationAndSync) = ADDRESS_BY_VERSION(0x4036A0, 0x4036A0, 0);
int gaddrof(CAnimManager::AddAnimationAndSync) = GLOBAL_ADDRESS_BY_VERSION(0x4036A0, 0x4036A0, 0);

CAnimBlendAssociation* CAnimManager::AddAnimationAndSync(RpClump* clump, CAnimBlendAssociation* AnimBlendAssoc, int AssocGroupId, int AnimationId)
{
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation*, RpClump*, CAnimBlendAssociation*, int, int>(gaddrof(CAnimManager::AddAnimationAndSync), clump, AnimBlendAssoc, AssocGroupId, AnimationId);
}

int addrof(CAnimManager::BlendAnimation) = ADDRESS_BY_VERSION(0x403710, 0x403710, 0);
int gaddrof(CAnimManager::BlendAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x403710, 0x403710, 0);

CAnimBlendAssociation* CAnimManager::BlendAnimation(RpClump* clump, int AssocGroupId, int AnimationId, float clumpAssocBlendData)
{
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation*, RpClump*, int, int, float>(gaddrof(CAnimManager::BlendAnimation), clump, AssocGroupId, AnimationId, clumpAssocBlendData);
}

int addrof(CAnimManager::LoadAnimFiles) = ADDRESS_BY_VERSION(0x4038F0, 0x4038F0, 0);
int gaddrof(CAnimManager::LoadAnimFiles) = GLOBAL_ADDRESS_BY_VERSION(0x4038F0, 0x4038F0, 0);

void CAnimManager::LoadAnimFiles(void)
{
    return plugin::CallDynGlobal(gaddrof(CAnimManager::LoadAnimFiles));
}

int addrof_o(CAnimManager::LoadAnimFile, void(*)(const char*)) = ADDRESS_BY_VERSION(0x403A10, 0x403A10, 0);
int gaddrof_o(CAnimManager::LoadAnimFile, void(*)(const char*)) = GLOBAL_ADDRESS_BY_VERSION(0x403A10, 0x403A10, 0);

void CAnimManager::LoadAnimFile(const char* szFile)
{
    return plugin::CallDynGlobal<const char*>(gaddrof_o(CAnimManager::LoadAnimFile, void(*)(const char*)), szFile);
}

int addrof_o(CAnimManager::LoadAnimFile, void(*)(int, bool)) = ADDRESS_BY_VERSION(0x403A40, 0x403A40, 0);
int gaddrof_o(CAnimManager::LoadAnimFile, void(*)(int, bool)) = GLOBAL_ADDRESS_BY_VERSION(0x403A40, 0x403A40, 0);

void CAnimManager::LoadAnimFile(int AnimId, bool unk)
{
    return plugin::CallDynGlobal<int, bool>(gaddrof_o(CAnimManager::LoadAnimFile, void(*)(int, bool)), AnimId, unk);
}

int addrof(CAnimManager::RemoveLastAnimFile) = ADDRESS_BY_VERSION(0x404320, 0x404320, 0);
int gaddrof(CAnimManager::RemoveLastAnimFile) = GLOBAL_ADDRESS_BY_VERSION(0x404320, 0x404320, 0);

void CAnimManager::RemoveLastAnimFile(void)
{
    return plugin::CallDynGlobal(gaddrof(CAnimManager::RemoveLastAnimFile));
}