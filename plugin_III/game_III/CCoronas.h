/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRegisteredCorona.h"

class PLUGIN_API CCoronas {
public:

    // are there any obstacles between sun and camera
    SUPPORTED_10EN_11EN_STEAM static bool& SunBlockedByClouds;
    // change coronas brightness immediately
    SUPPORTED_10EN_11EN_STEAM static int& bChangeBrightnessImmediately;
    SUPPORTED_10EN_11EN_STEAM static CRegisteredCorona *aCoronas;
    SUPPORTED_10EN_11EN_STEAM static int& LastCamLook;
    // coronas intensity multiplier
    SUPPORTED_10EN_11EN_STEAM static float& LightsMult; // 1.0f

    //funcs

    // Draw sun
    SUPPORTED_10EN_11EN_STEAM static void DoSunAndMoon();
    // Initialises coronas
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, RwTexture* texture, unsigned char flareType, unsigned char enableReflection, unsigned char checkObstacles, unsigned char arg12, float normalAngle);
    SUPPORTED_10EN_11EN_STEAM static void RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, unsigned char coronaType, unsigned char flareType, unsigned char enableReflection, unsigned char checkObstacles, unsigned char arg12, float normalAngle);
    // Renders coronas
    SUPPORTED_10EN_11EN_STEAM static void Render();
    // Renders coronas reflections on a wet ground
    SUPPORTED_10EN_11EN_STEAM static void RenderReflections();
    // Terminates coronas
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    // Updates coronas
    SUPPORTED_10EN_11EN_STEAM static void Update();
    SUPPORTED_10EN_11EN_STEAM static void UpdateCoronaCoors(unsigned int id, CVector const& posn, float farClip, float angle);
};

extern RwTexture **gpCoronaTexture;

#include "meta/meta.CCoronas.h"
