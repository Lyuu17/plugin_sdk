/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CMatrix.h"
#include "tParticleType.h"
#include "tParticleSystemData.h"

class CEntity;

class PLUGIN_API CParticle {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CParticle)

public:
    CVector        m_vecPosition;
    CVector        m_vecDirection;
    CVector        m_vecScreenPosition;
    int            m_nTimeWhenWillBeDestroyed;
    int            m_nTimeWhenColorWillBeChanged;
    float          m_fZCoord;
    CVector        m_vecParticleMovementOffset;
    short          m_nCurrentZRotation;
    short          m_nZRotationTimer;
    float          m_fCurrentZRadius;
    short          m_nZRadiusTimer;
private:
    char _pad46[2];
public:
    float          m_fSize;
    float          m_fExpansionRate;
    short          m_nFadeToBlackTimer;
    short          m_nFadeAlphaTimer;
    unsigned char  m_nColorIntensity;
    unsigned char  m_nAlpha;
    unsigned short m_nCurrentFrame;
    short          m_nAnimationSpeedTimer;
    short          m_nRotationStep;
    short          m_nRotation;
    RwRGBA         m_color;
private:
    char _pad62[2];
public:
    CParticle *m_pNext;

    SUPPORTED_10EN_11EN_STEAM static void ReloadConfig();
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static CParticle* AddParticle(tParticleType type, CVector const& posn, CVector const& direction, CEntity* entity, float size, int rotationSpeed, int rotation, int currentFrame, int lifeSpan);
    SUPPORTED_10EN_11EN_STEAM static CParticle* AddParticle(tParticleType type, CVector const& posn, CVector const& direction, CEntity* entity, float size, RwRGBA const& color, int rotationSpeed, int rotation, int currentFrame, int lifeSpan);
    SUPPORTED_10EN_11EN_STEAM static void Update();
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void RemovePSystem(tParticleType particleType);
    SUPPORTED_10EN_11EN_STEAM static void RemoveParticle(CParticle* particle, CParticle* previousParticle, tParticleSystemData* particleSystem);
    SUPPORTED_10EN_11EN_STEAM static void AddJetExplosion(CVector const& posn, float power, float size);
    SUPPORTED_10EN_11EN_STEAM static void AddYardieDoorSmoke(CVector const& posn, CMatrix const& matrix);
};

VALIDATE_SIZE(CParticle, 0x68);

#include "meta/meta.CParticle.h"
