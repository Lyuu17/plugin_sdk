/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPed.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CVector* vecPedCarDoorAnimOffset = (CVector*)ADDRESS_BY_VERSION(0x62E030, 0, 0);
PLUGIN_VARIABLE CVector *vecPedCarDoorLoAnimOffset = (CVector *)ADDRESS_BY_VERSION(0x62E03C, 0, 0);
PLUGIN_VARIABLE CVector *vecPedVanRearDoorAnimOffset = (CVector *)ADDRESS_BY_VERSION(0x62E048, 0, 0);
PLUGIN_VARIABLE CVector *vecPedTrainDoorAnimOffset = (CVector *)ADDRESS_BY_VERSION(0x62E054, 0, 0);
PLUGIN_VARIABLE CVector *vecPedDraggedOutCarAnimOffset = (CVector *)ADDRESS_BY_VERSION(0x62E060, 0, 0);
PLUGIN_VARIABLE CVector *vecPedQuickDraggedOutCarAnimOffset = (CVector *)ADDRESS_BY_VERSION(0x62E06C, 0, 0);

int ctor_addr(CPed) = ADDRESS_BY_VERSION(0x4C41C0, 0x43D4F0, 0);
int ctor_gaddr(CPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C41C0, 0x43D4F0, 0);

// Converted from thiscall void CPed::CPed(uint modelIndex) 0x4C41C0
CPed::CPed(unsigned int modelIndex) : CPhysical(plugin::dummy), m_aWeapons{ plugin::dummy, plugin::dummy,
plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy,
plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy } {
    plugin::CallMethodDynGlobal<CPed *, unsigned int>(ctor_gaddr(CPed), this, modelIndex);
}

int dtor_addr(CPed) = ADDRESS_BY_VERSION(0x43D4F0, 0x4C5170, 0);
int dtor_gaddr(CPed) = GLOBAL_ADDRESS_BY_VERSION(0x43D4F0, 0x4C5170, 0);

CPed::~CPed() {
    plugin::CallMethodDynGlobal<CPed*>(dtor_gaddr(CPed), this);
}

int addrof(CPed::IsPlayer) = ADDRESS_BY_VERSION(0x4D48E0, 0x4D4980, 0x4D4910);
int gaddrof(CPed::IsPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x4D48E0, 0x4D4980, 0x4D4910);

bool CPed::IsPlayer() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed*>(gaddrof(CPed::IsPlayer), this);
}

int addrof(CPed::UseGroundColModel) = ADDRESS_BY_VERSION(0x4CE730, 0x4CE7D0, 0x4CE760);
int gaddrof(CPed::UseGroundColModel) = GLOBAL_ADDRESS_BY_VERSION(0x4CE730, 0x4CE7D0, 0x4CE760);

bool CPed::UseGroundColModel() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed*>(gaddrof(CPed::UseGroundColModel), this);
}

int addrof(CPed::AddWeaponModel) = ADDRESS_BY_VERSION(0x4CF8F0, 0x4CF990, 0);
int gaddrof(CPed::AddWeaponModel) = GLOBAL_ADDRESS_BY_VERSION(0x4CF8F0, 0x4CF990, 0);

void CPed::AddWeaponModel(int weaponID) {
    return plugin::CallMethodAndReturnDynGlobal<void, CPed*, int>(gaddrof(CPed::AddWeaponModel), this, weaponID);
}

int addrof_o(CPed::SetAimFlag, void(CPed::*)(CEntity*)) = ADDRESS_BY_VERSION(0x4C69E0, 0x4C6A80, 0);
int gaddrof_o(CPed::SetAimFlag, void(CPed::*)(CEntity*)) = GLOBAL_ADDRESS_BY_VERSION(0x4C69E0, 0x4C6A80, 0);

void CPed::SetAimFlag(CEntity* aimingTo) {
    plugin::CallMethodDynGlobal<CPed*, CEntity*>(gaddrof_o(CPed::SetAimFlag, void(CPed::*)(CEntity*)), this, aimingTo);
}

int addrof_o(CPed::SetAimFlag, void(CPed::*)(float)) = ADDRESS_BY_VERSION(0x4C6960, 0x4C6A00, 0);
int gaddrof_o(CPed::SetAimFlag, void(CPed::*)(float)) = GLOBAL_ADDRESS_BY_VERSION(0x4C6960, 0x4C6A00, 0);

void CPed::SetAimFlag(float heading) {
    plugin::CallMethodDynGlobal<CPed*, float>(gaddrof_o(CPed::SetAimFlag, void(CPed::*)(float)), this, heading);
}

int addrof(CPed::SetAttack) = ADDRESS_BY_VERSION(0x4E6220, 0x4E62D0, 0);
int gaddrof(CPed::SetAttack) = GLOBAL_ADDRESS_BY_VERSION(0x4E6220, 0x4E62D0, 0);

void CPed::SetAttack(CEntity* entity) {
    plugin::CallMethodDynGlobal<CPed*, CEntity*>(gaddrof(CPed::SetAttack), this, entity);
}

int addrof(CPed::SetAttackTimer) = ADDRESS_BY_VERSION(0x4D1300, 0x4D13A0, 0);
int gaddrof(CPed::SetAttackTimer) = GLOBAL_ADDRESS_BY_VERSION(0x4D1300, 0x4D13A0, 0);

void CPed::SetAttackTimer(unsigned int time) {
    plugin::CallMethodDynGlobal<CPed*, unsigned int>(gaddrof(CPed::SetAttackTimer), this, time);
}

int addrof(CPed::SetPointGunAt) = ADDRESS_BY_VERSION(0x4E5F70, 0x4E6020, 0);
int gaddrof(CPed::SetPointGunAt) = GLOBAL_ADDRESS_BY_VERSION(0x4E5F70, 0x4E6020, 0);

void CPed::SetPointGunAt(CEntity* entity) {
    plugin::CallMethodDynGlobal<CPed*, CEntity*>(gaddrof(CPed::SetPointGunAt), this, entity);
}

int addrof(CPed::ClearAimFlag) = ADDRESS_BY_VERSION(0x4C6A50, 0x4C6AF0, 0);
int gaddrof(CPed::ClearAimFlag) = GLOBAL_ADDRESS_BY_VERSION(0x4C6A50, 0x4C6AF0, 0);

void CPed::ClearAimFlag() {
    plugin::CallMethodDynGlobal<CPed*>(gaddrof(CPed::ClearAimFlag), this);
}

int addrof(CPed::RestorePreviousState) = ADDRESS_BY_VERSION(0x4C5E30, 0x4C5ED0, 0);
int gaddrof(CPed::RestorePreviousState) = GLOBAL_ADDRESS_BY_VERSION(0x4C5E30, 0x4C5ED0, 0);

void CPed::RestorePreviousState() {
    plugin::CallMethodDynGlobal<CPed*>(gaddrof(CPed::RestorePreviousState), this);
}

int addrof(CPed::ClearPointGunAt) = ADDRESS_BY_VERSION(0x4E6180, 0x4E6230, 0);
int gaddrof(CPed::ClearPointGunAt) = GLOBAL_ADDRESS_BY_VERSION(0x4E6180, 0x4E6230, 0);

void CPed::ClearPointGunAt() {
    plugin::CallMethodDynGlobal<CPed*>(gaddrof(CPed::ClearPointGunAt), this);
}

int addrof(CPed::ClearLookFlag) = ADDRESS_BY_VERSION(0x4C64F0, 0x4C6590, 0);
int gaddrof(CPed::ClearLookFlag) = GLOBAL_ADDRESS_BY_VERSION(0x4C64F0, 0x4C6590, 0);

char CPed::ClearLookFlag() {
    return plugin::CallMethodAndReturnDynGlobal<char, CPed*>(gaddrof(CPed::ClearPointGunAt), this);
}

int addrof(CPed::GiveWeapon) = ADDRESS_BY_VERSION(0x4CF9B0, 0x4CFA50, 0);
int gaddrof(CPed::GiveWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x4CF9B0, 0x4CFA50, 0);

void CPed::GiveWeapon(eWeaponType weaponType, unsigned int ammo)
{
    plugin::CallMethodDynGlobal<CPed*>(gaddrof(CPed::GiveWeapon), this, weaponType, ammo);
}

int addrof(CPed::SetCurrentWeapon) = ADDRESS_BY_VERSION(0x4CFA60, 0x4CFB00, 0);
int gaddrof(CPed::SetCurrentWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x4CFA60, 0x4CFB00, 0);

void CPed::SetCurrentWeapon(int slot) {
    plugin::CallMethodDynGlobal<CPed*, int>(gaddrof(CPed::ClearPointGunAt), this, slot);
}

int addrof_o(CPed::SetObjective, void(CPed::*)(eObjective)) = ADDRESS_BY_VERSION(0x4D82C0, 0x4D8360, 0);
int gaddrof_o(CPed::SetObjective, void(CPed::*)(eObjective)) = GLOBAL_ADDRESS_BY_VERSION(0x4D82C0, 0x4D8360, 0);

void CPed::SetObjective(eObjective objective) {
    plugin::CallMethodDynGlobal<CPed*, eObjective>(gaddrof_o(CPed::SetObjective, void(CPed::*)(eObjective)), this, objective);
}

int addrof_o(CPed::SetObjective, void(CPed::*)(eObjective, CVector const&)) = ADDRESS_BY_VERSION(0x4D8A90, 0x4D8B30, 0);
int gaddrof_o(CPed::SetObjective, void(CPed::*)(eObjective, CVector const&)) = GLOBAL_ADDRESS_BY_VERSION(0x4D8A90, 0x4D8B30, 0);

void CPed::SetObjective(eObjective objective, CVector const& arg1) {
    plugin::CallMethodDynGlobal<CPed*, eObjective, const CVector&>(gaddrof_o(CPed::SetObjective, void(CPed::*)(eObjective, CVector const&)), this, objective, arg1);
}

int addrof_o(CPed::SetObjective, void(CPed::*)(eObjective, CVector, float)) = ADDRESS_BY_VERSION(0x4D8770, 0x4D8810, 0);
int gaddrof_o(CPed::SetObjective, void(CPed::*)(eObjective, CVector, float)) = GLOBAL_ADDRESS_BY_VERSION(0x4D8770, 0x4D8810, 0);

void CPed::SetObjective(eObjective objective, CVector arg1, float arg2) {
    plugin::CallMethodDynGlobal<CPed*, eObjective, CVector, float>(gaddrof_o(CPed::SetObjective, void(CPed::*)(eObjective, CVector, float)), this, objective, arg1, arg2);
}

int addrof_o(CPed::SetObjective, void(CPed::*)(eObjective, short, short)) = ADDRESS_BY_VERSION(0x4D89A0, 0x4D8A40, 0);
int gaddrof_o(CPed::SetObjective, void(CPed::*)(eObjective, short, short)) = GLOBAL_ADDRESS_BY_VERSION(0x4D89A0, 0x4D8A40, 0);

void CPed::SetObjective(eObjective objective, short arg1, short arg2) {
    plugin::CallMethodDynGlobal<CPed*, eObjective, short, short>(gaddrof_o(CPed::SetObjective, void(CPed::*)(eObjective, short, short)), this, objective, arg1, arg2);
}

int addrof_o(CPed::SetObjective, void(CPed::*)(eObjective, void*)) = ADDRESS_BY_VERSION(0x4D83E0, 0x4D8480, 0);
int gaddrof_o(CPed::SetObjective, void(CPed::*)(eObjective, void*)) = GLOBAL_ADDRESS_BY_VERSION(0x4D83E0, 0x4D8480, 0);

void CPed::SetObjective(eObjective objective, void* arg1) {
    plugin::CallMethodDynGlobal<CPed*, eObjective, void*>(gaddrof_o(CPed::SetObjective, void(CPed::*)(eObjective, void*)), this, objective, arg1);
}

int addrof(CPed::SetObjectiveTimer) = ADDRESS_BY_VERSION(0x4D81E0, 0x4D8280, 0);
int gaddrof(CPed::SetObjectiveTimer) = GLOBAL_ADDRESS_BY_VERSION(0x4D81E0, 0x4D8280, 0);

void CPed::SetObjectiveTimer(unsigned int time) {
    plugin::CallMethodDynGlobal<CPed*, unsigned int>(gaddrof(CPed::SetObjectiveTimer), this, time);
}

int addrof(CPed::WarpPedIntoCar) = ADDRESS_BY_VERSION(0x4D7D20, 0x4D7DC0, 0);
int gaddrof(CPed::WarpPedIntoCar) = GLOBAL_ADDRESS_BY_VERSION(0x4D7D20, 0x4D7DC0, 0);

void CPed::WarpPedIntoCar(CVehicle* vehicle) {
    plugin::CallMethodDynGlobal<CPed*, CVehicle*>(gaddrof(CPed::WarpPedIntoCar), this, vehicle);
}

int addrof(CPed::RemoveWeaponModel) = ADDRESS_BY_VERSION(0x4CF980, 0x4CFA20, 0);
int gaddrof(CPed::RemoveWeaponModel) = GLOBAL_ADDRESS_BY_VERSION(0x4CF980, 0x4CFA20, 0);

// Converted from thiscall void CPed::RemoveWeaponModel(int modelIndex) 0x4CF980
void CPed::RemoveWeaponModel(int modelIndex) {
    plugin::CallMethodDynGlobal<CPed*, int>(gaddrof(CPed::RemoveWeaponModel), this, modelIndex);
}

int addrof(CPed::StopNonPartialAnims) = ADDRESS_BY_VERSION(0x4C5D50, 0x4C5DF0, 0);
int gaddrof(CPed::StopNonPartialAnims) = GLOBAL_ADDRESS_BY_VERSION(0x4C5D50, 0x4C5DF0, 0);

// Converted from thiscall void CPed::StopNonPartialAnims(void) 0x4C5D50 
void CPed::StopNonPartialAnims() {
    plugin::CallMethodDynGlobal<CPed*>(gaddrof(CPed::StopNonPartialAnims), this);
}
