/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CColPoint {
public:
    CVector m_vecPoint;
    float field_C;
    CVector m_vecNormal;
    float field_1C;
    unsigned char m_nSurfaceTypeA;
    unsigned char m_nPieceTypeA;
    unsigned char m_nSurfaceTypeB;
    unsigned char m_nPieceTypeB;
    float m_fCollisionRadius;
	
	CColPoint& operator=(CColPoint const &right)
    {
        m_vecPoint = right.m_vecPoint;
        field_C = right.field_C;
        m_vecNormal = right.m_vecNormal;
        field_1C = right.field_1C;
        m_nSurfaceTypeA = right.m_nSurfaceTypeA;
        m_nPieceTypeA = right.m_nPieceTypeA;
        m_nSurfaceTypeB = right.m_nSurfaceTypeB;
        m_nPieceTypeB = right.m_nPieceTypeB;
        m_fCollisionRadius = right.m_fCollisionRadius;
        return *this;
    }
};

VALIDATE_SIZE(CColPoint, 0x28);
