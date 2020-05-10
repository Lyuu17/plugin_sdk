/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

struct cAMCrime
{
	int m_CrimeType;
	CVector m_vecPos;
	short m_nSampleIndex;
	char _pad0[2];
};

struct cPoliceRadioQueue
{
	int aSampleIndeces[60];
	unsigned char field_F0;
	unsigned char  field_F1;
	unsigned char  nSample;
	char _pad0[1];
	cAMCrime aObjects[10];
};
