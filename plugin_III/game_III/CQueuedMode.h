/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#pragma pack(push, 4)
struct CQueuedMode {
    short Mode;
    //short _pad2;
    float Duration;
    short MinZoom;
    short MaxZoom;
};
#pragma pack(pop)

VALIDATE_SIZE(CQueuedMode, 0xC);
