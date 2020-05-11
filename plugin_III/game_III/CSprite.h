/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CVector.h"
#include "CRect.h"

class PLUGIN_API CSprite {
public:
    SUPPORTED_10EN_11EN_STEAM static bool CalcScreenCoors(CVector const& coords, RwV3d *out, float *w, float *h, bool checkMaxVisible);
    SUPPORTED_10EN_11EN_STEAM static double CalcHorizonCoors();
    SUPPORTED_10EN_11EN_STEAM static int FlushSpriteBuffer();
    SUPPORTED_10EN_11EN_STEAM static void InitSpriteBuffer();
    SUPPORTED_10EN_11EN_STEAM static void InitSpriteBuffer2D();
    SUPPORTED_10EN_11EN_STEAM static int RenderBufferedOneXLUSprite(float x, float y, float z, float w, float h, unsigned char r, unsigned char g, unsigned char b, short intensity, float recip, unsigned char a);
    SUPPORTED_10EN_11EN_STEAM static int RenderOneXLUSprite(float x, float y, float z, float w, float h, unsigned char r, unsigned char g, unsigned char b, short intensity, float recipz, unsigned char a);
    SUPPORTED_10EN_11EN_STEAM static short RenderBufferedOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, unsigned char r, unsigned char g, unsigned char b, short intensity, float recipz, float roll, unsigned char alpha);
    SUPPORTED_10EN_11EN_STEAM static short RenderOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, unsigned char r, unsigned char g, unsigned char b, short intensity, float recipz, float roll, unsigned char alpha);
    SUPPORTED_10EN_11EN_STEAM static short RenderBufferedOneXLUSprite_Rotate_Dimension(float x, float y, float z, float w, float h, unsigned char r, unsigned char g, unsigned char b, short intensity, float recipz, float roll, unsigned char alpha);
    SUPPORTED_10EN_11EN_STEAM static short RenderBufferedOneXLUSprite_Rotate_2Colours(float x, float y, float z, float w, float h, unsigned char tr, unsigned char tg, unsigned char tb, unsigned char br, unsigned char bg, unsigned char bb, float cx_, float cy, float recipz, float rotation, unsigned char alpha);
    SUPPORTED_10EN_11EN_STEAM static int RenderBufferedOneXLUSprite2D(float x, float y, float w, float h, RwRGBA *colour, short intensity, char alpha);
    SUPPORTED_10EN_11EN_STEAM static int RenderBufferedOneXLUSprite2D_Rotate_Dimension(float x, float y, float w, float h, RwRGBA* colour, short intensity, float angle, char alpha);
    SUPPORTED_10EN_11EN_STEAM static int Set6Vertices2D(RwD3D8Vertex* verts, CRect* rect, unsigned char col1, unsigned char col2, unsigned char col3, unsigned char col4);
    SUPPORTED_10EN_11EN_STEAM static int Set6Vertices2D(RwD3D8Vertex* verts, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned char *c0, unsigned char *c1, unsigned char *c2, unsigned char *c3);
};

#include "meta/meta.CSprite.h"
