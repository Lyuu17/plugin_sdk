/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CParticle.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CParticle) = ADDRESS_BY_VERSION(0x50C410, 0x50C500, 0x50C490);
int ctor_gaddr(CParticle) = GLOBAL_ADDRESS_BY_VERSION(0x50C410, 0x50C500, 0x50C490);

int dtor_addr(CParticle) = ADDRESS_BY_VERSION(0x50C420, 0x50C510, 0x50C4A0);
int dtor_gaddr(CParticle) = GLOBAL_ADDRESS_BY_VERSION(0x50C420, 0x50C510, 0x50C4A0);

int addrof(CParticle::ReloadConfig) = ADDRESS_BY_VERSION(0x50C430, 0x50C520, 0x50C4B0);
int gaddrof(CParticle::ReloadConfig) = GLOBAL_ADDRESS_BY_VERSION(0x50C430, 0x50C520, 0x50C4B0);

// Converted from cdecl void CParticle::ReloadConfig(void) 0x50C430
void CParticle::ReloadConfig() {
    plugin::CallDynGlobal(gaddrof(CParticle::ReloadConfig));
}

int addrof(CParticle::Initialise) = ADDRESS_BY_VERSION(0x50C570, 0x50C660, 0x50C5F0);
int gaddrof(CParticle::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x50C570, 0x50C660, 0x50C5F0);

// Converted from cdecl void CParticle::Initialise(void) 0x50C570
void CParticle::Initialise() {
    plugin::CallDynGlobal(gaddrof(CParticle::Initialise));
}

int addrof(CParticle::Shutdown) = ADDRESS_BY_VERSION(0x50CF40, 0x50D030, 0x50CFC0);
int gaddrof(CParticle::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x50CF40, 0x50D030, 0x50CFC0);

// Converted from cdecl void CParticle::Shutdown(void) 0x50CF40
void CParticle::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CParticle::Shutdown));
}

int addrof_o(CParticle::AddParticle, CParticle* (*)(tParticleType, CVector const&, CVector const&, CEntity*, float, int, int, int, int)) = ADDRESS_BY_VERSION(0x50D140, 0x50D330, 0x50D2C0);
int gaddrof_o(CParticle::AddParticle, CParticle* (*)(tParticleType, CVector const&, CVector const&, CEntity*, float, int, int, int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x50D140, 0x50D330, 0x50D2C0);

// Converted from cdecl CParticle* CParticle::AddParticle(tParticleType type,CVector const&posn,CVector const&direction,CEntity *entity,float size,int rotationSpeed,int rotation,int currentFrame,int lifeSpan) 0x50D140
CParticle* CParticle::AddParticle(tParticleType type, CVector const& posn, CVector const& direction, CEntity* entity, float size, int rotationSpeed, int rotation, int currentFrame, int lifeSpan) {
    return plugin::CallAndReturnDynGlobal<CParticle*, tParticleType, CVector const&, CVector const&, CEntity*, float, int, int, int, int>(gaddrof_o(CParticle::AddParticle, CParticle * (*)(tParticleType, CVector const&, CVector const&, CEntity*, float, int, int, int, int)), type, posn, direction, entity, size, rotationSpeed, rotationSpeed, rotation, rotation, currentFrame, lifeSpan);
}

int addrof_o(CParticle::AddParticle, CParticle* (*)(tParticleType, CVector const&, CVector const&, CEntity*, float, RwRGBA const&, int, int, int, int)) = ADDRESS_BY_VERSION(0x50D190, 0x50D380, 0x50D310);
int gaddrof_o(CParticle::AddParticle, CParticle* (*)(tParticleType, CVector const&, CVector const&, CEntity*, float, RwRGBA const&, int, int, int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x50D190, 0x50D380, 0x50D310);

// Converted from cdecl CParticle* CParticle::AddParticle(tParticleType type,CVector const&posn,CVector const&direction,CEntity *entity,float,RwRGBA const&color,int rotationSpeed,int rotation,int currentFrame,int lifeSpan) 0x50D190
CParticle* CParticle::AddParticle(tParticleType type, CVector const& posn, CVector const& direction, CEntity* entity, float size, RwRGBA const& color, int rotationSpeed, int rotation, int currentFrame, int lifeSpan) {
    return plugin::CallAndReturnDynGlobal<CParticle*, tParticleType, CVector const&, CVector const&, CEntity*, float, RwRGBA const&, int, int, int, int>(gaddrof_o(CParticle::AddParticle, CParticle * (*)(tParticleType, CVector const&, CVector const&, CEntity*, float, int, int, int, int)), type, posn, direction, entity, size, color, rotationSpeed, rotationSpeed, rotation, rotation, currentFrame, lifeSpan);
}

int addrof(CParticle::Update) = ADDRESS_BY_VERSION(0x50DCF0, 0x50DEE0, 0x50DE70);
int gaddrof(CParticle::Update) = GLOBAL_ADDRESS_BY_VERSION(0x50DCF0, 0x50DEE0, 0x50DE70);

// Converted from cdecl void CParticle::Update(void) 0x50DCF0
void CParticle::Update() {
    plugin::CallDynGlobal(gaddrof(CParticle::Update));
}

int addrof(CParticle::Render) = ADDRESS_BY_VERSION(0x50EE20, 0x50F010, 0x50EFA0);
int gaddrof(CParticle::Render) = GLOBAL_ADDRESS_BY_VERSION(0x50EE20, 0x50F010, 0x50EFA0);

// Converted from cdecl void CParticle::Render(void) 0x50EE20
void CParticle::Render() {
    plugin::CallDynGlobal(gaddrof(CParticle::Render));
}

int addrof(CParticle::RemovePSystem) = ADDRESS_BY_VERSION(0x50F6E0, 0x50F8D0, 0x50F860);
int gaddrof(CParticle::RemovePSystem) = GLOBAL_ADDRESS_BY_VERSION(0x50F6E0, 0x50F8D0, 0x50F860);

// Converted from cdecl void CParticle::RemovePSystem(tParticleType particleType) 0x50F6E0
void CParticle::RemovePSystem(tParticleType particleType) {
    plugin::CallDynGlobal(gaddrof(CParticle::RemovePSystem), particleType);
}

int addrof(CParticle::RemoveParticle) = ADDRESS_BY_VERSION(0x50F720, 0x50F910, 0x50F8A0);
int gaddrof(CParticle::RemoveParticle) = GLOBAL_ADDRESS_BY_VERSION(0x50F720, 0x50F910, 0x50F8A0);

// Converted from cdecl void CParticle::RemoveParticle(CParticle* particle,CParticle* previousParticle,tParticleSystemData *particleSystem) 0x50F720
void CParticle::RemoveParticle(CParticle* particle, CParticle* previousParticle, tParticleSystemData* particleSystem) {
    plugin::CallDynGlobal(gaddrof(CParticle::RemoveParticle), particle, previousParticle, particleSystem);
}

int addrof(CParticle::AddJetExplosion) = ADDRESS_BY_VERSION(0x50F760, 0x50F950, 0x50F8E0);
int gaddrof(CParticle::AddJetExplosion) = GLOBAL_ADDRESS_BY_VERSION(0x50F760, 0x50F950, 0x50F8E0);

// Converted from cdecl void CParticle::AddJetExplosion(CVector const& posn,float power,float size) 0x50F760
void CParticle::AddJetExplosion(CVector const& posn, float power, float size) {
    plugin::CallDynGlobal(gaddrof(CParticle::AddJetExplosion), posn, power, size);
}

int addrof(CParticle::AddYardieDoorSmoke) = ADDRESS_BY_VERSION(0x50FAA0, 0x50FC90, 0x50FC20);
int gaddrof(CParticle::AddYardieDoorSmoke) = GLOBAL_ADDRESS_BY_VERSION(0x50FAA0, 0x50FC90, 0x50FC20);

// Converted from cdecl void CParticle::AddYardieDoorSmoke(CVector const& posn,CMatrix const& matrix) 0x50FAA0
void CParticle::AddYardieDoorSmoke(CVector const& posn, CMatrix const& matrix) {
    plugin::CallDynGlobal(gaddrof(CParticle::AddYardieDoorSmoke), posn, matrix);
}