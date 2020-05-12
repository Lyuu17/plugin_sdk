/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CModelInfo.h"

PLUGIN_SOURCE_FILE

SUPPORTED_10EN_11EN_STEAM CBaseModelInfo **CModelInfo::ms_modelInfoPtrs = (CBaseModelInfo**)GLOBAL_ADDRESS_BY_VERSION(0x83D408, 0x83D408, 0x84D548);
SUPPORTED_10EN_11EN_STEAM XtraCompsModelStore *CModelInfo::ms_xtraCompsModelStore = (XtraCompsModelStore*)GLOBAL_ADDRESS_BY_VERSION(0x940348, 0, 0);
SUPPORTED_10EN_11EN_STEAM MloInstanceStore *CModelInfo::ms_mloInstanceStore = (MloInstanceStore*)GLOBAL_ADDRESS_BY_VERSION(0x8E2B84, 0, 0);
SUPPORTED_10EN_11EN_STEAM EffectStore *CModelInfo::ms_2dEffectStore = (EffectStore*)GLOBAL_ADDRESS_BY_VERSION(0x9434F8, 0, 0);
SUPPORTED_10EN_11EN_STEAM ClumpModelStore *CModelInfo::ms_clumpModelStore = (ClumpModelStore*)GLOBAL_ADDRESS_BY_VERSION(0x6FA108, 0, 0);
SUPPORTED_10EN_11EN_STEAM MloModelStore *CModelInfo::ms_mloModelStore = (MloModelStore*)GLOBAL_ADDRESS_BY_VERSION(0x8F5980, 0, 0);
SUPPORTED_10EN_11EN_STEAM PedModelStore *CModelInfo::ms_pedModelStore = (PedModelStore*)GLOBAL_ADDRESS_BY_VERSION(0x941600, 0, 0);
SUPPORTED_10EN_11EN_STEAM SimpleModelStore *CModelInfo::ms_simpleModelStore = (SimpleModelStore*)GLOBAL_ADDRESS_BY_VERSION(0x885BB4, 0, 0);
SUPPORTED_10EN_11EN_STEAM TimeModelStore *CModelInfo::ms_timeModelStore = (TimeModelStore*)GLOBAL_ADDRESS_BY_VERSION(0x94076C, 0, 0);
SUPPORTED_10EN_11EN_STEAM VehicleModelStore *CModelInfo::ms_vehicleModelStore = (VehicleModelStore*)GLOBAL_ADDRESS_BY_VERSION(0x8E2DE0, 0, 0);

int addrof(CModelInfo::AddClumpModel) = ADDRESS_BY_VERSION(0x50BA10, 0x50BB00, 0x50BA90);
int gaddrof(CModelInfo::AddClumpModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BA10, 0x50BB00, 0x50BA90);

// Converted from cdecl CClumpModelInfo* CModelInfo::AddClumpModel(int index) 0x50BA10
CClumpModelInfo* CModelInfo::AddClumpModel(int index) {
    return plugin::CallAndReturnDynGlobal<CClumpModelInfo*, int>(gaddrof(CModelInfo::AddClumpModel), index);
}

int addrof(CModelInfo::AddMloModel) = ADDRESS_BY_VERSION(0x50B970, 0x50BA60, 0x50B9F0);
int gaddrof(CModelInfo::AddMloModel) = GLOBAL_ADDRESS_BY_VERSION(0x50B970, 0x50BA60, 0x50B9F0);

// Converted from cdecl CMloModelInfo* CModelInfo::AddMloModel(int index) 0x50B970
CMloModelInfo* CModelInfo::AddMloModel(int index) {
    return plugin::CallAndReturnDynGlobal<CMloModelInfo*, int>(gaddrof(CModelInfo::AddMloModel), index);
}

int addrof(CModelInfo::AddPedModel) = ADDRESS_BY_VERSION(0x50BAD0, 0x50BBC0, 0x50BB50);
int gaddrof(CModelInfo::AddPedModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BAD0, 0x50BBC0, 0x50BB50);

// Converted from cdecl CPedModelInfo* CModelInfo::AddPedModel(int index) 0x50BAD0
CPedModelInfo* CModelInfo::AddPedModel(int index) {
    return plugin::CallAndReturnDynGlobal<CPedModelInfo*, int>(gaddrof(CModelInfo::AddPedModel), index);
}

int addrof(CModelInfo::AddSimpleModel) = ADDRESS_BY_VERSION(0x50B920, 0x50BA10, 0x50B9A0);
int gaddrof(CModelInfo::AddSimpleModel) = GLOBAL_ADDRESS_BY_VERSION(0x50B920, 0x50BA10, 0x50B9A0);

// Converted from cdecl CSimpleModelInfo* CModelInfo::AddSimpleModel(int index) 0x50B920
CSimpleModelInfo* CModelInfo::AddSimpleModel(int index) {
    return plugin::CallAndReturnDynGlobal<CSimpleModelInfo*, int>(gaddrof(CModelInfo::AddSimpleModel), index);
}

int addrof(CModelInfo::AddTimeModel) = ADDRESS_BY_VERSION(0x50B9C0, 0x50BAB0, 0x50BA40);
int gaddrof(CModelInfo::AddTimeModel) = GLOBAL_ADDRESS_BY_VERSION(0x50B9C0, 0x50BAB0, 0x50BA40);

// Converted from cdecl CTimeModelInfo* CModelInfo::AddTimeModel(int index) 0x50B9C0
CTimeModelInfo* CModelInfo::AddTimeModel(int index) {
    return plugin::CallAndReturnDynGlobal<CTimeModelInfo*, int>(gaddrof(CModelInfo::AddTimeModel), index);
}

int addrof(CModelInfo::AddVehicleModel) = ADDRESS_BY_VERSION(0x50BA60, 0x50BB50, 0x50BAE0);
int gaddrof(CModelInfo::AddVehicleModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BA60, 0x50BB50, 0x50BAE0);

// Converted from cdecl CVehicleModelInfo* CModelInfo::AddVehicleModel(int index) 0x50BA60
CVehicleModelInfo* CModelInfo::AddVehicleModel(int index) {
    return plugin::CallAndReturnDynGlobal<CVehicleModelInfo*, int>(gaddrof(CModelInfo::AddVehicleModel), index);
}

int addrof(CModelInfo::ConstructMloClumps) = ADDRESS_BY_VERSION(0x50BB40, 0x50BC30, 0x50BBC0);
int gaddrof(CModelInfo::ConstructMloClumps) = GLOBAL_ADDRESS_BY_VERSION(0x50BB40, 0x50BC30, 0x50BBC0);

// Converted from cdecl void CModelInfo::ConstructMloClumps(void) 0x50BB40 
void CModelInfo::ConstructMloClumps() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::ConstructMloClumps));
}

int addrof(CModelInfo::Get2dEffectStore) = ADDRESS_BY_VERSION(0x50BB30, 0x50BC20, 0x50BBB0);
int gaddrof(CModelInfo::Get2dEffectStore) = GLOBAL_ADDRESS_BY_VERSION(0x50BB30, 0x50BC20, 0x50BBB0);

// Converted from cdecl EffectStore* CModelInfo::Get2dEffectStore(void) 0x50BB30
EffectStore* CModelInfo::Get2dEffectStore() {
    return plugin::CallAndReturnDynGlobal<EffectStore*>(gaddrof(CModelInfo::Get2dEffectStore));
}

int addrof(CModelInfo::GetMloInstanceStore) = ADDRESS_BY_VERSION(0x50BB20, 0x50BC10, 0x50BBA0);
int gaddrof(CModelInfo::GetMloInstanceStore) = GLOBAL_ADDRESS_BY_VERSION(0x50BB20, 0x50BC10, 0x50BBA0);

// Converted from cdecl MloInstanceStore* CModelInfo::GetMloInstanceStore(void) 0x50BB20
MloInstanceStore* CModelInfo::GetMloInstanceStore() {
    return plugin::CallAndReturnDynGlobal<MloInstanceStore*>(gaddrof(CModelInfo::GetMloInstanceStore));
}

int addrof_o(CModelInfo::GetModelInfo, CBaseModelInfo* (*)(char const*, int*)) = ADDRESS_BY_VERSION(0x50BB30, 0x50B950, 0x50B8E0);
int gaddrof_o(CModelInfo::GetModelInfo, CBaseModelInfo* (*)(char const*, int*)) = GLOBAL_ADDRESS_BY_VERSION(0x50BB30, 0x50B950, 0x50B8E0);

// Converted from cdecl CBaseModelInfo* CModelInfo::GetModelInfo(char const* name,int *index) 0x50B860
CBaseModelInfo* CModelInfo::GetModelInfo(char const* name, int* index) {
    return plugin::CallAndReturnDynGlobal<CBaseModelInfo*, char const*, int*>(gaddrof_o(CModelInfo::GetModelInfo, CBaseModelInfo * (*)(char const*, int*)), name, index);
}

int addrof(CModelInfo::Initialise) = ADDRESS_BY_VERSION(0x50B310, 0x50B3F0, 0x50B380);
int gaddrof(CModelInfo::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x50B310, 0x50B3F0, 0x50B380);

// Converted from cdecl void CModelInfo::Initialise(void) 0x50B310 
void CModelInfo::Initialise() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::Initialise));
}

int addrof(CModelInfo::IsBoatModel) = ADDRESS_BY_VERSION(0x50BB90, 0x50BC80, 0x50BC10);
int gaddrof(CModelInfo::IsBoatModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BB90, 0x50BC80, 0x50BC10);

// Converted from cdecl bool CModelInfo::IsBoatModel(int index) 0x50BB90
bool CModelInfo::IsBoatModel(int index) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CModelInfo::IsBoatModel), index);
}

int addrof(CModelInfo::ReInit2dEffects) = ADDRESS_BY_VERSION(0x50B580, 0x50B660, 0x50B5F0);
int gaddrof(CModelInfo::ReInit2dEffects) = GLOBAL_ADDRESS_BY_VERSION(0x50B580, 0x50B660, 0x50B5F0);

// Converted from cdecl void CModelInfo::ReInit2dEffects(void) 0x50B580 
void CModelInfo::ReInit2dEffects() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::IsBoatModel));
}

int addrof(CModelInfo::RemoveColModelsFromOtherLevels) = ADDRESS_BY_VERSION(0x50BBC0, 0x50BCB0, 0x50BC40);
int gaddrof(CModelInfo::RemoveColModelsFromOtherLevels) = GLOBAL_ADDRESS_BY_VERSION(0x50BBC0, 0x50BCB0, 0x50BC40);

// Converted from cdecl void CModelInfo::RemoveColModelsFromOtherLevels(eLevelName levelName) 0x50BBC0 
void CModelInfo::RemoveColModelsFromOtherLevels(eLevelName levelName) {
    plugin::CallDynGlobal(gaddrof(CModelInfo::RemoveColModelsFromOtherLevels), levelName);
}

int addrof(CModelInfo::ShutDown) = ADDRESS_BY_VERSION(0x50B5B0, 0x50B690, 0x50B620);
int gaddrof(CModelInfo::ShutDown) = GLOBAL_ADDRESS_BY_VERSION(0x50B5B0, 0x50B690, 0x50B620);

// Converted from cdecl void CModelInfo::ShutDown(void) 0x50B5B0 
void CModelInfo::ShutDown() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::ShutDown));
}
