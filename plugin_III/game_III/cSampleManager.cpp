/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "cSampleManager.h"

PLUGIN_SOURCE_FILE

cSampleManager& SampleManager = *(cSampleManager*)ADDRESS_BY_VERSION(0x7341E0, 0x7341E0, 0x744320);
int& cSampleManager::MP3Count = *(int*)ADDRESS_BY_VERSION(0x95CC00, 0x95CDB8, 0);

bool cSampleManager::IsMP3RadioChannelAvailable() 
{
    return MP3Count != 0;
}

int addrof(cSampleManager::SetStreamedVolumeAndPan) = ADDRESS_BY_VERSION(0x5681D0, 0x568520, 0);
int gaddrof(cSampleManager::SetStreamedVolumeAndPan) = GLOBAL_ADDRESS_BY_VERSION(0x5681D0, 0x568520, 0);

void cSampleManager::SetStreamedVolumeAndPan(unsigned char nVolume, unsigned char nPan, unsigned char nEffectFlag, unsigned char nStream)
{
    plugin::CallMethodDynGlobal<cSampleManager*, unsigned char, unsigned char, unsigned char, unsigned char>(gaddrof(cSampleManager::SetStreamedVolumeAndPan), &SampleManager, nVolume, nPan, nEffectFlag, nStream);
}

int addrof(cSampleManager::StartPreloadedStreamedFile) = ADDRESS_BY_VERSION(0x567D60, 0x5680B0, 0);
int gaddrof(cSampleManager::StartPreloadedStreamedFile) = GLOBAL_ADDRESS_BY_VERSION(0x567D60, 0x5680B0, 0);

void cSampleManager::StartPreloadedStreamedFile(unsigned char nStream)
{
    plugin::CallMethodDynGlobal<cSampleManager*, unsigned char>(gaddrof(cSampleManager::StartPreloadedStreamedFile), &SampleManager, nStream);
}

int addrof(cSampleManager::StartStreamedFile) = ADDRESS_BY_VERSION(0x567D80, 0x5680D0, 0);
int gaddrof(cSampleManager::StartStreamedFile) = GLOBAL_ADDRESS_BY_VERSION(0x567D80, 0x5680D0, 0);

bool cSampleManager::StartStreamedFile(unsigned char nFile, unsigned int nPos, unsigned char nStream)
{
    return plugin::CallMethodAndReturnDynGlobal<bool, cSampleManager*, unsigned char, unsigned int, unsigned char>(gaddrof(cSampleManager::StartStreamedFile), &SampleManager, nFile, nPos, nStream);
}

int addrof(cSampleManager::StopStreamedFile) = ADDRESS_BY_VERSION(0x5680E0, 0x568430, 0);
int gaddrof(cSampleManager::StopStreamedFile) = GLOBAL_ADDRESS_BY_VERSION(0x5680E0, 0x568430, 0);

void cSampleManager::StopStreamedFile(unsigned char nStream)
{
    plugin::CallMethodDynGlobal<cSampleManager*, unsigned char>(gaddrof(cSampleManager::StopStreamedFile), &SampleManager, nStream);
}

int addrof(cSampleManager::IsStreamPlaying) = ADDRESS_BY_VERSION(0x568290, 0x5685E0, 0);
int gaddrof(cSampleManager::IsStreamPlaying) = GLOBAL_ADDRESS_BY_VERSION(0x568290, 0x5685E0, 0);

bool cSampleManager::IsStreamPlaying(unsigned char nStream)
{
    return plugin::CallMethodAndReturnDynGlobal<bool, cSampleManager*, unsigned char>(gaddrof(cSampleManager::IsStreamPlaying), &SampleManager, nStream);
}

int addrof(cSampleManager::GetSampleBaseFrequency) = ADDRESS_BY_VERSION(0x5672A0, 0X5675F0, 0X5674F0);
int gaddrof(cSampleManager::GetSampleBaseFrequency) = GLOBAL_ADDRESS_BY_VERSION(0x5672A0, 0X5675F0, 0X5674F0);

int cSampleManager::GetSampleBaseFrequency(unsigned int nSample)
{
    return plugin::CallMethodAndReturnDynGlobal<int, cSampleManager*, unsigned char>(gaddrof(cSampleManager::GetSampleBaseFrequency), &SampleManager, nSample);
}

int addrof(cSampleManager::GetSampleLoopStartOffset) = ADDRESS_BY_VERSION(0x5672C0, 0X567610, 0x567510);
int gaddrof(cSampleManager::GetSampleLoopStartOffset) = GLOBAL_ADDRESS_BY_VERSION(0x5672C0, 0X567610, 0x567510);

// Converted from int __thiscall cSampleManager::GetSampleLoopStartOffset(unsigned int a1) 0x5672C0
int cSampleManager::GetSampleLoopStartOffset(unsigned int nSample)
{
    return plugin::CallMethodAndReturnDynGlobal<int, cSampleManager*, unsigned char>(gaddrof(cSampleManager::GetSampleLoopStartOffset), &SampleManager, nSample);}

int addrof(cSampleManager::GetSampleLoopEndOffset) = ADDRESS_BY_VERSION(0x5672E0, 0x567630, 0x567530);
int gaddrof(cSampleManager::GetSampleLoopEndOffset) = GLOBAL_ADDRESS_BY_VERSION(0x5672E0, 0x567630, 0x567530);

// Converted from int __thiscall cSampleManager::GetSampleLoopEndOffset(unsigned int a1) 0x5672E0
int cSampleManager::GetSampleLoopEndOffset(unsigned int nSample)
{
    return plugin::CallMethodAndReturnDynGlobal<int, cSampleManager*, unsigned char>(gaddrof(cSampleManager::GetSampleLoopEndOffset), &SampleManager, nSample);
}