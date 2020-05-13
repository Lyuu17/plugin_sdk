/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeaponInfo.h"

PLUGIN_SOURCE_FILE

SUPPORTED_10EN_11EN_STEAM CWeaponInfo(&aWeaponInfo)[14] = *(CWeaponInfo(*)[14])*(int *)ADDRESS_BY_VERSION(0x6503EC, 0x6503EC, 0x6603F8);
SUPPORTED_10EN_11EN_STEAM char **CWeaponInfo::ms_aWeaponNames = (char **)ADDRESS_BY_VERSION(0x603334, 0x602BFC, 0x60FBF4);

int ctor_addr(CWeaponInfo) = ADDRESS_BY_VERSION(0x5654F0, 0x5655D0, 0x565580);
int ctor_gaddr(CWeaponInfo) = GLOBAL_ADDRESS_BY_VERSION(0x5654F0, 0x5655D0, 0x565580);

// Converted from thiscall void CWeaponInfo::CWeaponInfo(void) 0x5654F0
CWeaponInfo::CWeaponInfo() {
    plugin::CallMethodDynGlobal(ctor_gaddr(CWeaponInfo), this);
}

int addrof(CWeaponInfo::FindWeaponFireType) = ADDRESS_BY_VERSION(0x5653E0, 0x565110, 0x5654D0);
int gaddrof(CWeaponInfo::FindWeaponFireType) = GLOBAL_ADDRESS_BY_VERSION(0x5653E0, 0x565110, 0x5654D0);

// Converted from cdecl eWeaponFire CWeaponInfo::FindWeaponFireType(char *name) 0x5653E0
eWeaponFire CWeaponInfo::FindWeaponFireType(char* name) {
    return plugin::CallAndReturnDynGlobal<eWeaponFire, char*>(gaddrof(CWeaponInfo::FindWeaponFireType), name);
}

int addrof(CWeaponInfo::FindWeaponType) = ADDRESS_BY_VERSION(0x5653B0, 0x5654F0, 0x5654A0);
int gaddrof(CWeaponInfo::FindWeaponType) = GLOBAL_ADDRESS_BY_VERSION(0x5653B0, 0x5654F0, 0x5654A0);

// Converted from cdecl eWeaponType CWeaponInfo::FindWeaponType(char *name) 0x5653B0
eWeaponType CWeaponInfo::FindWeaponType(char* name) {
    return plugin::CallAndReturnDynGlobal<eWeaponType, char*>(gaddrof(CWeaponInfo::FindWeaponType), name);
}

int addrof(CWeaponInfo::GetWeaponInfo) = ADDRESS_BY_VERSION(0x564FD0, 0x565110, 0x5650C0);
int gaddrof(CWeaponInfo::GetWeaponInfo) = GLOBAL_ADDRESS_BY_VERSION(0x564FD0, 0x565110, 0x5650C0);

// Converted from cdecl CWeaponInfo* CWeaponInfo::GetWeaponInfo(eWeaponType weaponType) 0x564FD0
CWeaponInfo* CWeaponInfo::GetWeaponInfo(eWeaponType weaponType) {
    return plugin::CallAndReturnDynGlobal<CWeaponInfo*, eWeaponType>(gaddrof(CWeaponInfo::GetWeaponInfo), weaponType);
}

int addrof(CWeaponInfo::Initialise) = ADDRESS_BY_VERSION(0x564EA0, 0x564FE0, 0x564F90);
int gaddrof(CWeaponInfo::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x564EA0, 0x564FE0, 0x564F90);

// Converted from cdecl void CWeaponInfo::Initialise(void) 0x564EA0 
void CWeaponInfo::Initialise() {
    plugin::CallDynGlobal(gaddrof(CWeaponInfo::Initialise));
}

int addrof(CWeaponInfo::LoadWeaponData) = ADDRESS_BY_VERSION(0x564FE0, 0x565120, 0x5650D0);
int gaddrof(CWeaponInfo::LoadWeaponData) = GLOBAL_ADDRESS_BY_VERSION(0x564FE0, 0x565120, 0x5650D0);

// Converted from cdecl void CWeaponInfo::LoadWeaponData(void) 0x564FE0 
void CWeaponInfo::LoadWeaponData() {
    plugin::CallDynGlobal(gaddrof(CWeaponInfo::LoadWeaponData));
}

int addrof(CWeaponInfo::Shutdown) = ADDRESS_BY_VERSION(0x564FB0, 0x5650F0, 0x5650A0);
int gaddrof(CWeaponInfo::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x564FB0, 0x5650F0, 0x5650A0);

// Converted from cdecl void CWeaponInfo::Shutdown(void) 0x564FB0
void CWeaponInfo::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CWeaponInfo::Shutdown));
}
