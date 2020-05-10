/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "cSampleManager.h"

cSampleManager& SampleManager = *(cSampleManager*)ADDRESS_BY_VERSION(0x7341E0, 0x7341E0, 0x744320);

int cSampleManager::GetSampleBaseFrequency(unsigned int a1)
{
	return ((int (__thiscall *)(cSampleManager*, unsigned int))ADDRESS_BY_VERSION(0x5672A0, 0X5675F0, 0X5674F0))(this, a1);
}

// Converted from int __thiscall cSampleManager::GetSampleLoopStartOffset(unsigned int a1) 0x5672C0
int cSampleManager::GetSampleLoopStartOffset(unsigned int a1)
{
	return ((int (__thiscall *)(cSampleManager*, unsigned int))ADDRESS_BY_VERSION(0x5672C0, 0X567610, 0x567510))(this, a1);
}

// Converted from int __thiscall cSampleManager::GetSampleLoopEndOffset(unsigned int a1) 0x5672E0
int cSampleManager::GetSampleLoopEndOffset(unsigned int a1)
{
	return ((int (__thiscall *)(cSampleManager*, unsigned int))ADDRESS_BY_VERSION(0x5672E0, 0x567630, 0x567530))(this, a1);
}