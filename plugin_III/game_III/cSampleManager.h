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


class PLUGIN_API cSampleManager
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

	SUPPORTED_10EN_11EN_STEAM static int &MP3Count;

	SUPPORTED_10EN_11EN_STEAM static bool IsMP3RadioChannelAvailable();
	
	SUPPORTED_10EN_11EN void SetStreamedVolumeAndPan(unsigned char nVolume, unsigned char nPan, unsigned char nEffectFlag, unsigned char nStream);
	SUPPORTED_10EN_11EN void StartPreloadedStreamedFile(unsigned char nStream);
	SUPPORTED_10EN_11EN bool StartStreamedFile(unsigned char nFile, unsigned int nPos, unsigned char nStream);
	SUPPORTED_10EN_11EN void StopStreamedFile(unsigned char nStream);
	SUPPORTED_10EN_11EN bool IsStreamPlaying(unsigned char nStream);
	SUPPORTED_10EN_11EN_STEAM int GetSampleBaseFrequency(unsigned int nSample);
	SUPPORTED_10EN_11EN_STEAM int GetSampleLoopStartOffset(unsigned int nSample);
	SUPPORTED_10EN_11EN_STEAM int GetSampleLoopEndOffset(unsigned int nSample);
};

extern cSampleManager &SampleManager;

#include "meta/meta.cSampleManager.h"