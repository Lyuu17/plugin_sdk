/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CCamera.h"

CCamera &TheCamera = *(CCamera *)0x6FACF8;

PLUGIN_VARIABLE bool &CCamera::m_bUseMouse3rdPerson = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x5F03D8, 0x5F03D8, 0x5FD3D8));

float CCamera::Find3rdPersonQuickAimPitch() {
    return plugin::CallMethodAndReturn<float, 0x46B850, CCamera *>(this);
}