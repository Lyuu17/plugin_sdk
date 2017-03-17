/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPlane.h"

// Converted from thiscall void CPlane::CPlane(int modelIndex, uchar createdBy) 0x54B170
CPlane::CPlane(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x54B170, CPlane *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from cdecl void CPlane::CreateDropOffCesna(void) 0x54E160 
void CPlane::CreateDropOffCesna() {
    plugin::Call<0x54E160>();
}

// Converted from cdecl void CPlane::FindDropOffCesnaCoordinates(void) 0x54E260 
void CPlane::FindDropOffCesnaCoordinates() {
    plugin::Call<0x54E260>();
}

// Converted from cdecl void CPlane::FindDrugPlaneCoordinates(void) 0x54E280 
void CPlane::FindDrugPlaneCoordinates() {
    plugin::Call<0x54E280>();
}

// Converted from cdecl bool CPlane::HasCesnaBeenDestroyed(void) 0x54E150 
bool CPlane::HasCesnaBeenDestroyed() {
    return plugin::CallAndReturn<bool, 0x54E150>();
}

// Converted from cdecl bool CPlane::HasCesnaLanded(void) 0x54E140 
bool CPlane::HasCesnaLanded() {
    return plugin::CallAndReturn<bool, 0x54E140>();
}

// Converted from cdecl bool CPlane::HasDropOffCesnaBeenShotDown(void) 0x54E250 
bool CPlane::HasDropOffCesnaBeenShotDown() {
    return plugin::CallAndReturn<bool, 0x54E250>();
}

// Converted from cdecl void CPlane::InitPlanes(void) 0x54B820 
void CPlane::InitPlanes() {
    plugin::Call<0x54B820>();
}

// Converted from cdecl void CPlane::LoadPath(char const*,int &,float &,bool) 0x54BD50 
void CPlane::LoadPath(char const* arg0, int& arg1, float& arg2, bool arg3) {
    plugin::Call<0x54BD50, char const*, int&, float&, bool>(arg0, arg1, arg2, arg3);
}

// Converted from cdecl void CPlane::Shutdown(void) 0x54BCD0 
void CPlane::Shutdown() {
    plugin::Call<0x54BCD0>();
}

// Converted from cdecl bool CPlane::TestRocketCollision(CVector *) 0x54DE90 
bool CPlane::TestRocketCollision(CVector* arg0) {
    return plugin::CallAndReturn<bool, 0x54DE90, CVector*>(arg0);
}

// Converted from cdecl void CPlane::UpdatePlanes(void) 0x54BEC0 
void CPlane::UpdatePlanes() {
    plugin::Call<0x54BEC0>();
}

// Converted from thiscall void CPlane::~CPlane(void) 0x54B270
CPlane::~CPlane() {
    plugin::CallMethod<0x54B270, CPlane *>(this);
}
