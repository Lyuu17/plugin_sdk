/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cAudioManager.h"

cAudioManager &gAudioManager = *(cAudioManager *)0x880FC0;

// Converted from thiscall void cAudioManager::cAudioManager(void) 0x579AB0 
cAudioManager::cAudioManager() {
    plugin::CallMethod<0x579AB0, cAudioManager *>(this);
}

// Converted from thiscall void cAudioManager::~cAudioManager() 0x57A0A0 
cAudioManager::~cAudioManager() {
    plugin::CallMethod<0x57A0A0, cAudioManager *>(this);
}

// Converted from thiscall bool cAudioManager::UsesSiren(uint index) 0x56C3C0
bool cAudioManager::UsesSiren(unsigned int index) {
    return plugin::CallMethodAndReturn<bool, 0x56C3C0, cAudioManager *, unsigned int>(this, index);
}

// Converted from thiscall bool cAudioManager::UsesSirenSwitching(uint index) 0x56C3F0
bool cAudioManager::UsesSirenSwitching(unsigned int index) {
    return plugin::CallMethodAndReturn<bool, 0x56C3F0, cAudioManager *, unsigned int>(this, index);
}

int addrof(cAudioManager::GetDistanceSquared) = ADDRESS_BY_VERSION(0x569750, 0X569AA0, 0X5699A0);
int gaddrof(cAudioManager::GetDistanceSquared) = GLOBAL_ADDRESS_BY_VERSION(0x569750, 0X569AA0, 0X5699A0);

// Converted from float __thiscall cAudioManager::GetDistanceSquared(CVector const &vec) 0x569750
float cAudioManager::GetDistanceSquared(CVector const& vec)
{
    return plugin::CallMethodAndReturnDynGlobal<float, cAudioManager*, CVector const&>(gaddrof(cAudioManager::GetDistanceSquared), this, vec);
}

int addrof(cAudioManager::CalculateDistance) = ADDRESS_BY_VERSION(0x5697A0, 0X569AF0, 0X5699F0);
int gaddrof(cAudioManager::CalculateDistance) = GLOBAL_ADDRESS_BY_VERSION(0x5697A0, 0X569AF0, 0X5699F0);

// Converted from int __thiscall cAudioManager::CalculateDistance(unsigned char &a1, float a2) 0x5697A0
int cAudioManager::CalculateDistance(unsigned char& a1, float a2)
{
    return plugin::CallMethodAndReturnDynGlobal<int, cAudioManager*, unsigned char&, float>(gaddrof(cAudioManager::CalculateDistance), this, a1, a2);
}

int addrof(cAudioManager::ComputeVolume) = ADDRESS_BY_VERSION(0x57ABB0, 0X57AF00, 0X57AE00);
int gaddrof(cAudioManager::ComputeVolume) = GLOBAL_ADDRESS_BY_VERSION(0x57ABB0, 0X57AF00, 0X57AE00);

// Converted from bool __thiscall cAudioManager::ComputeVolume(unsigned char a1, float a2, float a3) 0x57ABB0
unsigned char cAudioManager::ComputeVolume(unsigned char a1, float a2, float a3)
{
    return plugin::CallMethodAndReturnDynGlobal<unsigned char, cAudioManager*, unsigned char, float, float>(gaddrof(cAudioManager::ComputeVolume), this, a1, a2, a3);
}

int addrof(cAudioManager::RandomDisplacement) = ADDRESS_BY_VERSION(0x57AF90, 0X57B2E0, 0X57B1E0);
int gaddrof(cAudioManager::RandomDisplacement) = GLOBAL_ADDRESS_BY_VERSION(0x57AF90, 0X57B2E0, 0X57B1E0);

// Converted from int __thiscall cAudioManager::RandomDisplacement(unsigned int a1) 0x57AF90
int cAudioManager::RandomDisplacement(unsigned int a1)
{
    return plugin::CallMethodAndReturnDynGlobal<int, cAudioManager*, unsigned int>(gaddrof(cAudioManager::RandomDisplacement), this, a1);
}

int addrof(cAudioManager::AddSampleToRequestedQueue) = ADDRESS_BY_VERSION(0x57B070, 0x57B3C0, 0x57B2C0);
int gaddrof(cAudioManager::AddSampleToRequestedQueue) = GLOBAL_ADDRESS_BY_VERSION(0x57B070, 0x57B3C0, 0x57B2C0);

// Converted from void __thiscall cAudioManager::AddSampleToRequestedQueue() 0x57B070
void cAudioManager::AddSampleToRequestedQueue()
{
    return plugin::CallMethodAndReturnDynGlobal<void, cAudioManager*>(gaddrof(cAudioManager::AddSampleToRequestedQueue), this);
}

int addrof(cAudioManager::ProcessLoopingScriptObject) = ADDRESS_BY_VERSION(0, 0x576770, 0);
int gaddrof(cAudioManager::ProcessLoopingScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0, 0x576770, 0);

void cAudioManager::ProcessLoopingScriptObject(unsigned char a1)
{
    return plugin::CallMethodAndReturnDynGlobal<void, cAudioManager*, unsigned char>(gaddrof(cAudioManager::ProcessLoopingScriptObject), this, a1);
}
