/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CRegisteredCorona {
public:
    int m_nUniqueID;
    int m_nLastLOScheck;
    RwTexture *m_pTexture;
    RwRGBA m_Color;
    char m_nFadeState;
    CVector m_vPosn;
    float m_fSize;
    float normalAngle;
    bool m_bRegisteredThisFrame;
    float m_fDrawDist;
    char m_nFlareType;
    char m_nReflection;

    unsigned char LOScheck : 1;
    unsigned char offScreen : 1;
    unsigned char firstUpdate : 1;
    unsigned char drawStreak : 1;
    unsigned char sightClear : 1;

    bool renderReflection;
    float heightAboveRoad;

    float prevX[6];
    float prevY[6];
    unsigned char prevRed[6];
    unsigned char prevGreen[6];
    unsigned char prevBlue[6];
    bool hasValue[6];
    
    //funcs
    void Update();
    CRegisteredCorona();
};

VALIDATE_SIZE(CRegisteredCorona, 0x80);
