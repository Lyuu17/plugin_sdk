/*
	Plugin-SDK (Grand Theft Auto 3) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#pragma pack(push, 1)
struct tSample
{
  unsigned int nOffset;
  unsigned int nLength;
  unsigned int nBaseFrequency;
  int nLoopStartOffset;
  int nLoopEndOffset;
};
#pragma pack(pop)


class cSampleManager
{
public:
	unsigned char m_nEffectsVolume;
	unsigned char m_nMusicVolume;
	unsigned char m_nEffectsFadeVolume;
	unsigned char m_nMusicFadeVolume;
	char field_4;
	char _pad0;
	char m_szCDRomRootPath[80];
	bool m_bInitialised;
	char m_nNumberOfProviders;
	char *m_aAudioProviders[64];
	tSample m_aSamples[3032];
/*
	static bool IsMP3RadioChannelAvailable();
	
	void SetStreamedVolumeAndPan(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
	void StartPreloadedStreamedFile(unsigned char v1);
*/
	
	int GetSampleBaseFrequency(unsigned int a1);
	int GetSampleLoopStartOffset(unsigned int a1);
	int GetSampleLoopEndOffset(unsigned int a1);
};

extern cSampleManager &SampleManager;