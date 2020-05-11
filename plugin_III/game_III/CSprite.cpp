/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSprite.h"

PLUGIN_SOURCE_FILE

int addrof(CSprite::CalcScreenCoors) = ADDRESS_BY_VERSION(0x51C3A0, 0x051C5D0, 0x51C560);
int gaddrof(CSprite::CalcScreenCoors) = GLOBAL_ADDRESS_BY_VERSION(0x51C3A0, 0x051C5D0, 0x51C560);

bool CSprite::CalcScreenCoors(CVector const& posn, RwV3d *out, float *w, float *h, bool checkMaxVisible) {
    return plugin::CallAndReturnDynGlobal<bool, CVector const&, RwV3d*, float*, float*, bool>(gaddrof(CSprite::CalcScreenCoors), posn, out, w, h, checkMaxVisible);
}

int addrof(CSprite::CalcHorizonCoors) = ADDRESS_BY_VERSION(0x51C4A0, 0x51C6D0, 0x51C660);
int gaddrof(CSprite::CalcHorizonCoors) = GLOBAL_ADDRESS_BY_VERSION(0x51C4A0, 0x51C6D0, 0x51C660);

double CSprite::CalcHorizonCoors() {
    return plugin::CallAndReturnDynGlobal<double>(gaddrof(CSprite::CalcScreenCoors));
}

int addrof(CSprite::FlushSpriteBuffer) = ADDRESS_BY_VERSION(0x51C520, 0x51C750, 0x51C6E0);
int gaddrof(CSprite::FlushSpriteBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x51C520, 0x51C750, 0x51C6E0);

int CSprite::FlushSpriteBuffer() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CSprite::FlushSpriteBuffer));
}

int addrof(CSprite::InitSpriteBuffer) = ADDRESS_BY_VERSION(0x51C590, 0x51C7C0, 0x51C750);
int gaddrof(CSprite::InitSpriteBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x51C590, 0x51C7C0, 0x51C750);

void CSprite::InitSpriteBuffer() {
    plugin::CallDynGlobal(gaddrof(CSprite::InitSpriteBuffer));
}

int addrof(CSprite::InitSpriteBuffer2D) = ADDRESS_BY_VERSION(0x51C5B0, 0x51C7E0, 0x51C770);
int gaddrof(CSprite::InitSpriteBuffer2D) = GLOBAL_ADDRESS_BY_VERSION(0x51C5B0, 0x51C7E0, 0x51C770);

void CSprite::InitSpriteBuffer2D() {
    plugin::CallDynGlobal(gaddrof(CSprite::InitSpriteBuffer2D));
}

int addrof(CSprite::RenderBufferedOneXLUSprite) = ADDRESS_BY_VERSION(0x51C5D0, 0x51C800, 0x51C790);
int gaddrof(CSprite::RenderBufferedOneXLUSprite) = GLOBAL_ADDRESS_BY_VERSION(0x51C5D0, 0x51C800, 0x51C790);

int CSprite::RenderBufferedOneXLUSprite(float x, float y, float z, float w, float h, unsigned char r, unsigned char g, unsigned char b, short intensity, float recip, unsigned char a) {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CSprite::RenderBufferedOneXLUSprite), x, y, z, w, h, r, g, b, intensity, recip, a);
}

int addrof(CSprite::RenderOneXLUSprite) = ADDRESS_BY_VERSION(0x51C960, 0x51CB90, 0x51CB20);
int gaddrof(CSprite::RenderOneXLUSprite) = GLOBAL_ADDRESS_BY_VERSION(0x51C960, 0x51CB90, 0x51CB20);

int CSprite::RenderOneXLUSprite(float x, float y, float z, float w, float h, unsigned char r, unsigned char g, unsigned char b, short intensity, float recipz, unsigned char a) {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CSprite::RenderOneXLUSprite), x, y, z, w, h, r, g, b, intensity, recipz, a);
}

int addrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect) = ADDRESS_BY_VERSION(0x51CCD0, 0x51CF00, 0x51CE90);
int gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect) = GLOBAL_ADDRESS_BY_VERSION(0x51CCD0, 0x51CF00, 0x51CE90);

short CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, unsigned char r, unsigned char g, unsigned char b, short intensity, float recipz, float roll, unsigned char alpha) {
    return plugin::CallAndReturnDynGlobal<short>(gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect), x, y, z, w, h, r, g, b, intensity, recipz, roll, alpha);
}

int addrof(CSprite::RenderOneXLUSprite_Rotate_Aspect) = ADDRESS_BY_VERSION(0x51D110, 0x51D340, 0x51D2D0);
int gaddrof(CSprite::RenderOneXLUSprite_Rotate_Aspect) = GLOBAL_ADDRESS_BY_VERSION(0x51D110, 0x51D340, 0x51D2D0);

short CSprite::RenderOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, unsigned char r, unsigned char g, unsigned char b, short intensity, float recipz, float roll, unsigned char alpha) {
    return plugin::CallAndReturnDynGlobal<short>(gaddrof(CSprite::RenderOneXLUSprite_Rotate_Aspect), x, y, z, w, h, r, g, b, intensity, recipz, roll, alpha);
}

int addrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension) = ADDRESS_BY_VERSION(0x51D5B0, 0x51D7E0, 0x51D770);
int gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension) = GLOBAL_ADDRESS_BY_VERSION(0x51D5B0, 0x51D7E0, 0x51D770);

short CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension(float x, float y, float z, float w, float h, unsigned char r, unsigned char g, unsigned char b, short intensity, float recipz, float roll, unsigned char alpha) {
    return plugin::CallAndReturnDynGlobal<short>(gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension), x, y, z, w, h, r, g, b, intensity, recipz, roll, alpha);
}

int addrof(CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours) = ADDRESS_BY_VERSION(0x51D9E0, 0x51DC10, 0x51DBA0);
int gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours) = GLOBAL_ADDRESS_BY_VERSION(0x51D9E0, 0x51DC10, 0x51DBA0);

short CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours(float x, float y, float z, float w, float h, unsigned char tr, unsigned char tg, unsigned char tb, unsigned char br, unsigned char bg, unsigned char bb, float cx_, float cy, float recipz, float rotation, unsigned char alpha) {
    return plugin::CallAndReturnDynGlobal<short>(gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours), x, y, z, w, h, tr, tg, tb, br, bg, bb, cx_, cy, recipz, rotation, alpha);
}

int addrof(CSprite::RenderBufferedOneXLUSprite2D) = ADDRESS_BY_VERSION(0x51E3C0, 0x51E5F0, 0x51E580);
int gaddrof(CSprite::RenderBufferedOneXLUSprite2D) = GLOBAL_ADDRESS_BY_VERSION(0x51E3C0, 0x51E5F0, 0x51E580);

int CSprite::RenderBufferedOneXLUSprite2D(float x, float y, float w, float h, RwRGBA* colour, short intensity, char alpha) {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CSprite::RenderBufferedOneXLUSprite2D), x, y, w, h, colour, intensity, alpha);
}

int addrof(CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension) = ADDRESS_BY_VERSION(0x51E490, 0x51E6C0, 0x51E650);
int gaddrof(CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension) = GLOBAL_ADDRESS_BY_VERSION(0x51E490, 0x51E6C0, 0x51E650);

int CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension(float x, float y, float w, float h, RwRGBA* colour, short intensity, float angle, char alpha) {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension), x, y, w, h, colour, intensity, angle, alpha);
}

int addrof_o(CSprite::Set6Vertices2D, int(*)(RwD3D8Vertex*, CRect*, unsigned char, unsigned char, unsigned char, unsigned char)) = ADDRESS_BY_VERSION(0x51E5F0, 0x51E820, 0x51E7B0);
int gaddrof_o(CSprite::Set6Vertices2D, int(*)(RwD3D8Vertex*, CRect*, unsigned char, unsigned char, unsigned char, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x51E5F0, 0x51E820, 0x51E7B0);

int CSprite::Set6Vertices2D(RwD3D8Vertex* verts, CRect* rect, unsigned char col1, unsigned char col2, unsigned char col3, unsigned char col4) {
    return plugin::CallAndReturnDynGlobal<int, RwD3D8Vertex*, CRect*, unsigned char, unsigned char, unsigned char, unsigned char>(gaddrof_o(CSprite::Set6Vertices2D, int(*)(RwD3D8Vertex*, CRect*, unsigned char, unsigned char, unsigned char, unsigned char)), verts, rect, col1, col2, col3, col4);
}

int addrof_o(CSprite::Set6Vertices2D, int(*)(RwD3D8Vertex*, float, float, float, float, float, float, float, float, unsigned char*, unsigned char*, unsigned char*, unsigned char*)) = ADDRESS_BY_VERSION(0x51E7F0, 0x51EA20, 0x51E9B0);
int gaddrof_o(CSprite::Set6Vertices2D, int(*)(RwD3D8Vertex*, float, float, float, float, float, float, float, float, unsigned char*, unsigned char*, unsigned char*, unsigned char*)) = GLOBAL_ADDRESS_BY_VERSION(0x51E7F0, 0x51EA20, 0x51E9B0);

int CSprite::Set6Vertices2D(RwD3D8Vertex* verts, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned char* c0, unsigned char* c1, unsigned char* c2, unsigned char* c3) {
    return plugin::CallAndReturnDynGlobal<int, RwD3D8Vertex*, float, float, float, float, float, float, float, float, unsigned char*, unsigned char*, unsigned char*, unsigned char*>(gaddrof_o(CSprite::Set6Vertices2D, int(*)(RwD3D8Vertex*, float, float, float, float, float, float, float, float, unsigned char*, unsigned char*, unsigned char*, unsigned char*)), verts, x1, y1, x2, y2, x3, y3, x4, y4, c0, c1, c2, c3);
}
