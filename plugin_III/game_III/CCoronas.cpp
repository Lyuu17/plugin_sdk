/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCoronas.h"

PLUGIN_SOURCE_FILE

RwTexture **gpCoronaTexture = (RwTexture **)ADDRESS_BY_VERSION(0x5FAF44, 0x5FAD2C, 0x607D24);

bool& CCoronas::SunBlockedByClouds = *(bool *)ADDRESS_BY_VERSION(0x95CD73, 0x95CF2B, 0x96D06B);
int& CCoronas::bChangeBrightnessImmediately = *(int *)ADDRESS_BY_VERSION(0x8E2C30, 0x8E2CE4, 0x8F2E24);
CRegisteredCorona *CCoronas::aCoronas = (CRegisteredCorona *)ADDRESS_BY_VERSION(0x72E518, 0x5FAD2C, 0x607D24);
int& CCoronas::LastCamLook = *(int *)ADDRESS_BY_VERSION(0x62F238, 0x62F238, 0x63F238);
float& CCoronas::LightsMult = *(float *)ADDRESS_BY_VERSION(0x5FB088, 0x5FAE70, 0x607E68);

int addrof(CCoronas::DoSunAndMoon) = ADDRESS_BY_VERSION(0x4FA380, 0x4FA460, 0x4FA3F0);
int gaddrof(CCoronas::DoSunAndMoon) = GLOBAL_ADDRESS_BY_VERSION(0x4FA380, 0x4FA460, 0x4FA3F0);

// Converted from cdecl void CCoronas::DoSunAndMoon(void) 0x4FA380
void CCoronas::DoSunAndMoon() {
    plugin::Call<0x4FA380>();
    plugin::CallDynGlobal(gaddrof(CCoronas::DoSunAndMoon));
}

int addrof(CCoronas::Init) = ADDRESS_BY_VERSION(0x4F9F90, 0x4FA070, 0x4FA000);
int gaddrof(CCoronas::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4F9F90, 0x4FA070, 0x4FA000);

// Converted from cdecl void CCoronas::Init(void) 0x4F9F90
void CCoronas::Init() {
    plugin::CallDynGlobal(gaddrof(CCoronas::Init));
}

int addrof_o(CCoronas::RegisterCorona, void(*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, RwTexture*, unsigned char, unsigned char, unsigned char, unsigned char, float)) = ADDRESS_BY_VERSION(0x4FA0E0, 0, 0);
int gaddrof_o(CCoronas::RegisterCorona, void(*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, RwTexture*, unsigned char, unsigned char, unsigned char, unsigned char, float)) = GLOBAL_ADDRESS_BY_VERSION(0x4FA0E0, 0, 0);

// Converted from cdecl void CCoronas::RegisterCorona(uint id, uchar red, uchar green, uchar blue, uchar alpha, CVector const& posn, float radius, float farClip, RwTexture *texture, uchar flareType, uchar enableReflection, uchar checkObstacles, uchar, float normalAngle) 0x4FA0E0
void CCoronas::RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, RwTexture* texture, unsigned char flareType, unsigned char enableReflection, unsigned char checkObstacles, unsigned char arg12, float normalAngle) {
    plugin::CallDynGlobal<unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, RwTexture*, unsigned char, unsigned char, unsigned char, unsigned char, float>(gaddrof_o(CCoronas::RegisterCorona, void(*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, RwTexture*, unsigned char, unsigned char, unsigned char, unsigned char, float)), id, red, green, blue, alpha, posn, radius, farClip, texture, flareType, enableReflection, checkObstacles, arg12, normalAngle);
}

int addrof_o(CCoronas::RegisterCorona, void(*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float)) = ADDRESS_BY_VERSION(0x4FA080, 0, 0);
int gaddrof_o(CCoronas::RegisterCorona, void(*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float)) = GLOBAL_ADDRESS_BY_VERSION(0x4FA080, 0, 0);

// Converted from cdecl void CCoronas::RegisterCorona(uint id, uchar red, uchar green, uchar blue, uchar alpha, CVector const& posn, float radius, float farClip, uchar coronaType, uchar flareType, uchar enableReflection, uchar checkObstacles, uchar, float normalAngle) 0x4FA080
void CCoronas::RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, unsigned char coronaType, unsigned char flareType, unsigned char enableReflection, unsigned char checkObstacles, unsigned char arg12, float normalAngle) {
    plugin::CallDynGlobal<unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float>(gaddrof_o(CCoronas::RegisterCorona, void(*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float)), id, red, green, blue, alpha, posn, radius, farClip, coronaType, flareType, enableReflection, checkObstacles, arg12, normalAngle);
}

int addrof(CCoronas::Render) = ADDRESS_BY_VERSION(0x4F8FB0, 0x4F9090, 0x4F9020);
int gaddrof(CCoronas::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4F8FB0, 0x4F9090, 0x4F9020);

// Converted from cdecl void CCoronas::Render(void) 0x4F8FB0
void CCoronas::Render() {
    plugin::CallDynGlobal(gaddrof(CCoronas::Render));
}

int addrof(CCoronas::RenderReflections) = ADDRESS_BY_VERSION(0x4F9B40, 0x4F9C20, 0x4F9BB0);
int gaddrof(CCoronas::RenderReflections) = GLOBAL_ADDRESS_BY_VERSION(0x4F9B40, 0x4F9C20, 0x4F9BB0);

// Converted from cdecl void CCoronas::RenderReflections(void) 0x4F9B40
void CCoronas::RenderReflections() {
    plugin::CallDynGlobal(gaddrof(CCoronas::RenderReflections));
}

int addrof(CCoronas::Shutdown) = ADDRESS_BY_VERSION(0x4FA050, 0x4FA130, 0x4FA0C0);
int gaddrof(CCoronas::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4FA050, 0x4FA130, 0x4FA0C0);

// Converted from cdecl void CCoronas::Shutdown(void) 0x4FA050
void CCoronas::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CCoronas::Shutdown));
}

int addrof(CCoronas::Update) = ADDRESS_BY_VERSION(0x4F8EC0, 0x4F8FA0, 0x4F8F30);
int gaddrof(CCoronas::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4F8EC0, 0x4F8FA0, 0x4F8F30);

// Converted from cdecl void CCoronas::Update(void) 0x4F8EC0
void CCoronas::Update() {
    plugin::CallDynGlobal(gaddrof(CCoronas::Update));
}

int addrof(CCoronas::UpdateCoronaCoors) = ADDRESS_BY_VERSION(0x4FA2D0, 0x4FA3B0, 0x4FA340);
int gaddrof(CCoronas::UpdateCoronaCoors) = GLOBAL_ADDRESS_BY_VERSION(0x4FA2D0, 0x4FA3B0, 0x4FA340);

// Converted from cdecl void CCoronas::UpdateCoronaCoors(uint id, CVector const& posn, float farClip, float angle) 0x4FA2D0
void CCoronas::UpdateCoronaCoors(unsigned int id, CVector const& posn, float farClip, float angle) {
    plugin::CallDynGlobal<unsigned int, CVector const&, float, float>(gaddrof(CCoronas::UpdateCoronaCoors), id, posn, farClip, angle);
}