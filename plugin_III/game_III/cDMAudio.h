/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API cDMAudio
{
public:
    SUPPORTED_10EN_11EN_STEAM void PlayFrontEndSound(unsigned short v1, unsigned int v2);
    SUPPORTED_10EN_11EN_STEAM void PlayOneShot(int v1, unsigned short v2, float v3);
};

extern cDMAudio &DMAudio;

#include "meta/meta.cDMAudio.h"
