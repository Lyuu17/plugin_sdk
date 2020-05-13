/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRGBA.h"
#include "CRect.h"
#include "CFontDetails.h"
#include "CSprite2d.h"

class PLUGIN_API CFont {
public:
    // variables
    static CFontDetails &Details;
    static CSprite2d *Sprite; 
    static short &NewLine;

    // funcs

    SUPPORTED_10EN_11EN static void DrawFonts();
    // get next ' ' character in a string
    SUPPORTED_10EN_11EN static wchar_t* GetNextSpace(const wchar_t* str);
    SUPPORTED_10EN_11EN static int GetNumberLines(float x, float y, const wchar_t* text);
    SUPPORTED_10EN_11EN static float GetStringWidth(const wchar_t* str, bool sentence);
    SUPPORTED_10EN_11EN  static CRect* GetTextRect(CRect* rect_out, float x, float y, const wchar_t* text);
    SUPPORTED_10EN_11EN static void InitPerFrame();
    // CFont initialisation
    SUPPORTED_10EN_11EN static void Initialise();
    SUPPORTED_10EN_11EN static wchar_t* ParseToken(wchar_t* str);
    // this adds a single character into rendering buffer
    SUPPORTED_10EN_11EN static void PrintChar(float x, float y, short character);
    SUPPORTED_10EN_11EN static void PrintString(float x, float y, const wchar_t* text);
    SUPPORTED_10EN_11EN static void PrintString(float x, float y, const wchar_t* start, const wchar_t* end, float arg4);
    // like a 'global' font alpha, multiplied with each text alpha (from SetColor)
    SUPPORTED_10EN_11EN static void SetAlphaFade(float alpha);
    SUPPORTED_10EN_11EN static void SetBackGroundOnlyTextOff();
    SUPPORTED_10EN_11EN static void SetBackGroundOnlyTextOn();
    // sets background color
    SUPPORTED_10EN_11EN static void SetBackgroundColor(CRGBA color);
    SUPPORTED_10EN_11EN static void SetBackgroundOff();
    SUPPORTED_10EN_11EN static void SetBackgroundOn();
    SUPPORTED_10EN_11EN static void SetCentreOff();
    SUPPORTED_10EN_11EN static void SetCentreOn();
    // set line width at center
    SUPPORTED_10EN_11EN static void SetCentreSize(float size);
    // set text color
    SUPPORTED_10EN_11EN static void SetColor(CRGBA color);
    // drop color is used for text shadow and text outline
    SUPPORTED_10EN_11EN static void SetDropColor(CRGBA color);
    // set shadow size
    SUPPORTED_10EN_11EN static void SetDropShadowPosition(short value);
    // set text style
    SUPPORTED_10EN_11EN static void SetFontStyle(short style);
    SUPPORTED_10EN_11EN static void SetJustifyOff();
    SUPPORTED_10EN_11EN static void SetJustifyOn();
    SUPPORTED_10EN_11EN static void SetPropOff();
    SUPPORTED_10EN_11EN static void SetPropOn();
    SUPPORTED_10EN_11EN static void SetRightJustifyOff();
    SUPPORTED_10EN_11EN static void SetRightJustifyOn();
    SUPPORTED_10EN_11EN static void SetRightJustifyWrap(float value);
    // text scaling
    SUPPORTED_10EN_11EN static void SetScale(float width, float height);
    // set text rotation angle
    SUPPORTED_10EN_11EN static void SetSlant(float value);
    // set text rotation point
    SUPPORTED_10EN_11EN static void SetSlantRefPoint(float x, float y);
    // set line width at right
    SUPPORTED_10EN_11EN static void SetWrapx(float value);
    // CFont closing
    SUPPORTED_10EN_11EN static void Shutdown();
    SUPPORTED_10EN_11EN static short character_code(unsigned char character);

    SUPPORTED_10EN_11EN static char* GetNextSpace(const char* str);
    SUPPORTED_10EN_11EN static int GetNumberLines(float x, float y, const char* text);
    SUPPORTED_10EN_11EN static float GetStringWidth(const char* str, bool sentence);
    SUPPORTED_10EN_11EN static CRect* GetTextRect(CRect* rect_out, float x, float y, const char* text);
    SUPPORTED_10EN_11EN static char* ParseToken(char* str);
    // this adds a single character into rendering buffer
    SUPPORTED_10EN_11EN static void PrintChar(float x, float y, char character);
    SUPPORTED_10EN_11EN static void PrintString(float x, float y, const char* text);
    SUPPORTED_10EN_11EN static void PrintString(float x, float y, const char* start, const char* end, float arg4);
};

SUPPORTED_10EN_11EN void AsciiToUnicode(char const* str_ascii, wchar_t* str_unicode);
SUPPORTED_10EN_11EN int UnicodeStrlen(wchar_t const* str);
SUPPORTED_10EN_11EN char* UnicodeToAscii(wchar_t* str_unicode);
extern char *aStr;

#include "meta/meta.CFont.h"