/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cDMAudio.h"

PLUGIN_SOURCE_FILE

cDMAudio& DMAudio = *(cDMAudio*)ADDRESS_BY_VERSION(0x95CDBE, 0x95CF76, 0x96D0B6);

int addrof(cDMAudio::PlayFrontEndSound) = ADDRESS_BY_VERSION(0x57CC20, 0x57CF70, 0x57CE70);
int gaddrof(cDMAudio::PlayFrontEndSound) = GLOBAL_ADDRESS_BY_VERSION(0x57CC20, 0x57CF70, 0x57CE70);

void cDMAudio::PlayFrontEndSound(unsigned short v1, unsigned int v2)
{
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned short, unsigned int>(gaddrof(cDMAudio::PlayFrontEndSound), this, v1, v2);
}

int addrof(cDMAudio::PlayOneShot) = ADDRESS_BY_VERSION(0x57C840, 0x57CB90, 0x57CA90);
int gaddrof(cDMAudio::PlayOneShot) = GLOBAL_ADDRESS_BY_VERSION(0x57C840, 0x57CB90, 0x57CA90);

void cDMAudio::PlayOneShot(int v1, unsigned short v2, float v3)
{
    plugin::CallMethodDynGlobal<cDMAudio*, unsigned short, unsigned int>(gaddrof(cDMAudio::PlayOneShot), this, v1, v2, v3);
}
