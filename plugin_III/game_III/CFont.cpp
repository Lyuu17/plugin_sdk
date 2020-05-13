/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFont.h"
#include <string>
#include <string.h>

PLUGIN_SOURCE_FILE

SUPPORTED_10EN_11EN CFontDetails &CFont::Details = *(CFontDetails *)ADDRESS_BY_VERSION(0x8F317C, 0x8F3230, 0);
SUPPORTED_10EN_11EN CSprite2d *CFont::Sprite = (CSprite2d *)ADDRESS_BY_VERSION(0x95CC04, 0x95CDBC, 0);
SUPPORTED_10EN_11EN short &CFont::NewLine = *(short *)ADDRESS_BY_VERSION(0x95CC94, 0x95CE4C, 0);
SUPPORTED_10EN_11EN char *aStr = (char *)ADDRESS_BY_VERSION(0x64C624, 0x64C624, 0);

int addrof(CFont::DrawFonts) = ADDRESS_BY_VERSION(0x501B50, 0x501C30, 0);
int gaddrof(CFont::DrawFonts) = GLOBAL_ADDRESS_BY_VERSION(0x501B50, 0x501C30, 0);

// Converted from cdecl void CFont::DrawFonts(void) 0x501B50 
void CFont::DrawFonts() {
    plugin::CallDynGlobal(gaddrof(CFont::DrawFonts));
}

int addrof_o(CFont::GetNextSpace, wchar_t* (*)(const wchar_t*)) = ADDRESS_BY_VERSION(0x501960, 0x0, 0);
int gaddrof_o(CFont::GetNextSpace, wchar_t* (*)(const wchar_t*)) = GLOBAL_ADDRESS_BY_VERSION(0x501960, 0x0, 0);

// Converted from cdecl wchar_t* CFont::GetNextSpace(wchar_t *str) 0x501960
wchar_t* CFont::GetNextSpace(const wchar_t* str) {
    return plugin::CallAndReturnDynGlobal<wchar_t*, const wchar_t*>(gaddrof_o(CFont::GetNextSpace, wchar_t*(*)(const wchar_t*)), str);
}

int addrof_o(CFont::GetNumberLines, int(*)(float, float, const wchar_t*)) = ADDRESS_BY_VERSION(0x501260, 0x501340, 0);
int gaddrof_o(CFont::GetNumberLines, int(*)(float, float, const wchar_t*)) = GLOBAL_ADDRESS_BY_VERSION(0x501260, 0x501340, 0);

// Converted from cdecl int CFont::GetNumberLines(float x,float y,wchar_t *text) 0x501260
int CFont::GetNumberLines(float x, float y, const wchar_t* text) {
    return plugin::CallAndReturnDynGlobal<int, float, float, const wchar_t*>(gaddrof_o(CFont::GetNumberLines, int(*)(float, float, const wchar_t*)), x, y, text);
}

int addrof_o(CFont::GetStringWidth, float(*)(const wchar_t*, bool)) = ADDRESS_BY_VERSION(0x5018A0, 0x501980, 0);
int gaddrof_o(CFont::GetStringWidth, float(*)(const wchar_t*, bool)) = GLOBAL_ADDRESS_BY_VERSION(0x5018A0, 0x501980, 0);

// Converted from cdecl float CFont::GetStringWidth(wchar_t *str,bool sentence) 0x5018A0
float CFont::GetStringWidth(const wchar_t* str, bool sentence) {
    return plugin::CallAndReturnDynGlobal<float, const wchar_t*, bool>(gaddrof_o(CFont::GetStringWidth, float(*)(const wchar_t*, bool)), str, sentence);
}

int addrof_o(CFont::GetTextRect, CRect* (*)(CRect*, float, float, const wchar_t*)) = ADDRESS_BY_VERSION(0x5013B0, 0x501490, 0);
int gaddrof_o(CFont::GetTextRect, CRect* (*)(CRect*, float, float, const wchar_t*)) = GLOBAL_ADDRESS_BY_VERSION(0x5013B0, 0x501490, 0);

// Converted from cdecl CRect* CFont::GetTextRect(CRect *rect_out,float x,float y,wchar_t *text) 0x5013B0
CRect* CFont::GetTextRect(CRect* rect_out, float x, float y, const wchar_t* text) {
    return plugin::CallAndReturnDynGlobal<CRect*, CRect*, float, float, const wchar_t*>(gaddrof_o(CFont::GetTextRect, CRect*(*)(CRect*, float, float, const wchar_t*)), rect_out, x, y, text);
}

int addrof(CFont::InitPerFrame) = ADDRESS_BY_VERSION(0x500BE0, 0x500CC0, 0);
int gaddrof(CFont::InitPerFrame) = GLOBAL_ADDRESS_BY_VERSION(0x500BE0, 0x500CC0, 0);

// Converted from cdecl void CFont::InitPerFrame(void) 0x500BE0 
void CFont::InitPerFrame() {
    plugin::CallDynGlobal(gaddrof(CFont::InitPerFrame));
}

int addrof(CFont::Initialise) = ADDRESS_BY_VERSION(0x500A40, 0x500B20, 0);
int gaddrof(CFont::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x500A40, 0x500B20, 0);

// Converted from cdecl void CFont::Initialise(void) 0x500A40 
void CFont::Initialise() {
    plugin::CallDynGlobal(gaddrof(CFont::Initialise));
}

int addrof_o(CFont::ParseToken, wchar_t* (*)(wchar_t*)) = ADDRESS_BY_VERSION(0x5019A0, 0x501A80, 0);
int gaddrof_o(CFont::ParseToken, wchar_t* (*)(wchar_t*)) = GLOBAL_ADDRESS_BY_VERSION(0x5019A0, 0x501A80, 0);

// Converted from cdecl wchar_t* CFont::ParseToken(wchar_t *str) 0x5019A0
wchar_t* CFont::ParseToken(wchar_t* str) {
    return plugin::CallAndReturnDynGlobal<wchar_t*, const wchar_t*>(gaddrof_o(CFont::ParseToken, wchar_t* (*)(wchar_t*)), str);
}

int addrof_o(CFont::PrintChar, void(*)(float, float, short)) = ADDRESS_BY_VERSION(0x500C30, 0x500D10, 0);
int gaddrof_o(CFont::PrintChar, void(*)(float, float, short)) = GLOBAL_ADDRESS_BY_VERSION(0x500C30, 0x500D10, 0);

// Converted from cdecl void CFont::PrintChar(float x,float y,short character) 0x500C30
void CFont::PrintChar(float x, float y, short character) {
    plugin::CallDynGlobal<float, float, short>(gaddrof_o(CFont::PrintChar, void(*)(float, float, short)), x, y, character);
}

int addrof_o(CFont::PrintString, void(*)(float, float, const wchar_t*)) = ADDRESS_BY_VERSION(0x500F50, 0x501030, 0);
int gaddrof_o(CFont::PrintString, void(*)(float, float, const wchar_t*)) = GLOBAL_ADDRESS_BY_VERSION(0x500F50, 0x501030, 0);

// Converted from cdecl void CFont::PrintString(float x,float y,wchar_t *text) 0x500F50
void CFont::PrintString(float x, float y, const wchar_t* text) {
    plugin::CallDynGlobal<float, float, const wchar_t*>(gaddrof_o(CFont::PrintString, void(*)(float, float, const wchar_t*)), x, y, text);
}

int addrof_o(CFont::PrintString, void(*)(float, float, const wchar_t*, const wchar_t*, float)) = ADDRESS_BY_VERSION(0x501730, 0x501810, 0);
int gaddrof_o(CFont::PrintString, void(*)(float, float, const wchar_t*, const wchar_t*, float)) = GLOBAL_ADDRESS_BY_VERSION(0x501730, 0x501810, 0);

// Converted from cdecl void CFont::PrintString(float x,float y,wchar_t *str1,wchar_t *str2,float) 0x501730
void CFont::PrintString(float x, float y, const wchar_t* start, const wchar_t* end, float arg4) {
    plugin::CallDynGlobal<float, float, const wchar_t*, const wchar_t*, float>(gaddrof_o(CFont::PrintString, void(*)(float, float, const wchar_t*, const wchar_t*, float)), x, y, start, end, arg4);
}

int addrof_o(CFont::SetAlphaFade, void(*)(float)) = ADDRESS_BY_VERSION(0x501DD0, 0x501EB0, 0);
int gaddrof_o(CFont::SetAlphaFade, void(*)(float)) = GLOBAL_ADDRESS_BY_VERSION(0x501DD0, 0x501EB0, 0);

// Converted from cdecl void CFont::SetAlphaFade(float alpha) 0x501DD0
void CFont::SetAlphaFade(float alpha) {
    plugin::CallDynGlobal<float>(gaddrof_o(CFont::SetAlphaFade, void(*)(float)), alpha);
}

int addrof(CFont::SetBackGroundOnlyTextOff) = ADDRESS_BY_VERSION(0x501D40, 0x501E20, 0);
int gaddrof(CFont::SetBackGroundOnlyTextOff) = GLOBAL_ADDRESS_BY_VERSION(0x501D40, 0x501E20, 0);

// Converted from cdecl void CFont::SetBackGroundOnlyTextOff(void) 0x501D40 
void CFont::SetBackGroundOnlyTextOff() {
    plugin::CallDynGlobal(gaddrof(CFont::SetBackGroundOnlyTextOff));
}

int addrof(CFont::SetBackGroundOnlyTextOn) = ADDRESS_BY_VERSION(0x501D30, 0x501E10, 0);
int gaddrof(CFont::SetBackGroundOnlyTextOn) = GLOBAL_ADDRESS_BY_VERSION(0x501D30, 0x501E10, 0);

// Converted from cdecl void CFont::SetBackGroundOnlyTextOn(void) 0x501D30 
void CFont::SetBackGroundOnlyTextOn() {
    plugin::CallDynGlobal(gaddrof(CFont::SetBackGroundOnlyTextOn));
}

int addrof(CFont::SetBackgroundColor) = ADDRESS_BY_VERSION(0x501D00, 0x501DE0, 0);
int gaddrof(CFont::SetBackgroundColor) = GLOBAL_ADDRESS_BY_VERSION(0x501D00, 0x501DE0, 0);

// Converted from cdecl void CFont::SetBackgroundColor(CRGBA color) 0x501D00 
void CFont::SetBackgroundColor(CRGBA color) {
    plugin::CallDynGlobal<CRGBA*>(gaddrof(CFont::SetAlphaFade), &color);
}

int addrof(CFont::SetBackgroundOff) = ADDRESS_BY_VERSION(0x501CF0, 0x501DD0, 0);
int gaddrof(CFont::SetBackgroundOff) = GLOBAL_ADDRESS_BY_VERSION(0x501CF0, 0x501DD0, 0);

// Converted from cdecl void CFont::SetBackgroundOff(void) 0x501CF0 
void CFont::SetBackgroundOff() {
    plugin::CallDynGlobal(gaddrof(CFont::SetBackgroundOff));
}

int addrof(CFont::SetBackgroundOn) = ADDRESS_BY_VERSION(0x501CE0, 0x501DC0, 0);
int gaddrof(CFont::SetBackgroundOn) = GLOBAL_ADDRESS_BY_VERSION(0x501CE0, 0x501DC0, 0);

// Converted from cdecl void CFont::SetBackgroundOn(void) 0x501CE0 
void CFont::SetBackgroundOn() {
    plugin::CallDynGlobal(gaddrof(CFont::SetBackgroundOn));
}

int addrof(CFont::SetCentreOff) = ADDRESS_BY_VERSION(0x501CB0, 0x501D90, 0);
int gaddrof(CFont::SetCentreOff) = GLOBAL_ADDRESS_BY_VERSION(0x501CB0, 0x501D90, 0);

// Converted from cdecl void CFont::SetCentreOff(void) 0x501CB0 
void CFont::SetCentreOff() {
    plugin::CallDynGlobal(gaddrof(CFont::SetCentreOff));
}

int addrof(CFont::SetCentreOn) = ADDRESS_BY_VERSION(0x501C90, 0x501D70, 0);
int gaddrof(CFont::SetCentreOn) = GLOBAL_ADDRESS_BY_VERSION(0x501C90, 0x501D70, 0);

// Converted from cdecl void CFont::SetCentreOn(void) 0x501C90 
void CFont::SetCentreOn() {
    plugin::CallDynGlobal(gaddrof(CFont::SetCentreOn));
}

int addrof(CFont::SetCentreSize) = ADDRESS_BY_VERSION(0x501CD0, 0x501DB0, 0);
int gaddrof(CFont::SetCentreSize) = GLOBAL_ADDRESS_BY_VERSION(0x501CD0, 0x501DB0, 0);

// Converted from cdecl void CFont::SetCentreSize(float size) 0x501CD0
void CFont::SetCentreSize(float size) {
    plugin::CallDynGlobal<float>(gaddrof(CFont::SetCentreSize), size);
}

int addrof(CFont::SetColor) = ADDRESS_BY_VERSION(0x501BD0, 0x501CB0, 0);
int gaddrof(CFont::SetColor) = GLOBAL_ADDRESS_BY_VERSION(0x501BD0, 0x501CB0, 0);

// Converted from cdecl void CFont::SetColor(CRGBA color) 0x501BD0
void CFont::SetColor(CRGBA color) {
    plugin::CallDynGlobal<CRGBA*>(gaddrof(CFont::SetColor), &color);
}

int addrof(CFont::SetDropColor) = ADDRESS_BY_VERSION(0x501DE0, 0x501EC0, 0);
int gaddrof(CFont::SetDropColor) = GLOBAL_ADDRESS_BY_VERSION(0x501DE0, 0x501EC0, 0);

// Converted from cdecl void CFont::SetDropColor(CRGBA color) 0x501DE0
void CFont::SetDropColor(CRGBA color) {
    plugin::CallDynGlobal<CRGBA*>(gaddrof(CFont::SetDropColor), &color);
}

int addrof(CFont::SetDropShadowPosition) = ADDRESS_BY_VERSION(0x501E70, 0x501F50, 0);
int gaddrof(CFont::SetDropShadowPosition) = GLOBAL_ADDRESS_BY_VERSION(0x501E70, 0x501F50, 0);

// Converted from cdecl void CFont::SetDropShadowPosition(short value) 0x501E70
void CFont::SetDropShadowPosition(short value) {
    plugin::CallDynGlobal<short>(gaddrof(CFont::SetDropShadowPosition), value);
}

int addrof(CFont::SetFontStyle) = ADDRESS_BY_VERSION(0x501DB0, 0x501E90, 0);
int gaddrof(CFont::SetFontStyle) = GLOBAL_ADDRESS_BY_VERSION(0x501DB0, 0x501E90, 0);

// Converted from cdecl void CFont::SetFontStyle(short style) 0x501DB0
void CFont::SetFontStyle(short style) {
    plugin::CallDynGlobal<short>(gaddrof(CFont::SetFontStyle), style);
}

int addrof(CFont::SetJustifyOff) = ADDRESS_BY_VERSION(0x501C80, 0x501D60, 0);
int gaddrof(CFont::SetJustifyOff) = GLOBAL_ADDRESS_BY_VERSION(0x501C80, 0x501D60, 0);

// Converted from cdecl void CFont::SetJustifyOff(void) 0x501C80 
void CFont::SetJustifyOff() {
    plugin::CallDynGlobal(gaddrof(CFont::SetJustifyOff));
}

int addrof(CFont::SetJustifyOn) = ADDRESS_BY_VERSION(0x501C60, 0x501D40, 0);
int gaddrof(CFont::SetJustifyOn) = GLOBAL_ADDRESS_BY_VERSION(0x501C60, 0x501D40, 0);

// Converted from cdecl void CFont::SetJustifyOn(void) 0x501C60 
void CFont::SetJustifyOn() {
    plugin::CallDynGlobal(gaddrof(CFont::SetJustifyOn));
}

int addrof(CFont::SetPropOff) = ADDRESS_BY_VERSION(0x501D90, 0x501E70, 0);
int gaddrof(CFont::SetPropOff) = GLOBAL_ADDRESS_BY_VERSION(0x501D90, 0x501E70, 0);

// Converted from cdecl void CFont::SetPropOff(void) 0x501D90 
void CFont::SetPropOff() {
    plugin::CallDynGlobal(gaddrof(CFont::SetPropOff));
}

int addrof(CFont::SetPropOn) = ADDRESS_BY_VERSION(0x501DA0, 0x501E80, 0);
int gaddrof(CFont::SetPropOn) = GLOBAL_ADDRESS_BY_VERSION(0x501DA0, 0x501E80, 0);

// Converted from cdecl void CFont::SetPropOn(void) 0x501DA0 
void CFont::SetPropOn() {
    plugin::CallDynGlobal(gaddrof(CFont::SetPropOn));
}

int addrof(CFont::SetRightJustifyOff) = ADDRESS_BY_VERSION(0x501D70, 0x501E50, 0);
int gaddrof(CFont::SetRightJustifyOff) = GLOBAL_ADDRESS_BY_VERSION(0x501D70, 0x501E50, 0);

// Converted from cdecl void CFont::SetRightJustifyOff(void) 0x501D70 
void CFont::SetRightJustifyOff() {
    plugin::CallDynGlobal(gaddrof(CFont::SetRightJustifyOff));
}

int addrof(CFont::SetRightJustifyOn) = ADDRESS_BY_VERSION(0x501D50, 0x501E30, 0);
int gaddrof(CFont::SetRightJustifyOn) = GLOBAL_ADDRESS_BY_VERSION(0x501D50, 0x501E30, 0);

// Converted from cdecl void CFont::SetRightJustifyOn(void) 0x501D50 
void CFont::SetRightJustifyOn() {
    plugin::CallDynGlobal(gaddrof(CFont::SetRightJustifyOn));
}

int addrof(CFont::SetRightJustifyWrap) = ADDRESS_BY_VERSION(0x501DC0, 0x501EA0, 0);
int gaddrof(CFont::SetRightJustifyWrap) = GLOBAL_ADDRESS_BY_VERSION(0x501DC0, 0x501EA0, 0);

// Converted from cdecl void CFont::SetRightJustifyWrap(float value) 0x501DC0
void CFont::SetRightJustifyWrap(float value) {
    plugin::CallDynGlobal<float>(gaddrof(CFont::SetRightJustifyWrap), value);
}

int addrof(CFont::SetScale) = ADDRESS_BY_VERSION(0x501B80, 0x501C60, 0);
int gaddrof(CFont::SetScale) = GLOBAL_ADDRESS_BY_VERSION(0x501B80, 0x501C60, 0);

// Converted from cdecl void CFont::SetScale(float width,float height) 0x501B80
void CFont::SetScale(float width, float height) {
    plugin::CallDynGlobal<float, float>(gaddrof(CFont::SetScale), width, height);
}

int addrof(CFont::SetSlant) = ADDRESS_BY_VERSION(0x501BC0, 0x501CA0, 0);
int gaddrof(CFont::SetSlant) = GLOBAL_ADDRESS_BY_VERSION(0x501BC0, 0x501CA0, 0);

// Converted from cdecl void CFont::SetSlant(float value) 0x501BC0
void CFont::SetSlant(float value) {
    plugin::CallDynGlobal<float>(gaddrof(CFont::SetSlant), value);
}

int addrof(CFont::SetSlantRefPoint) = ADDRESS_BY_VERSION(0x501BA0, 0x501C80, 0);
int gaddrof(CFont::SetSlantRefPoint) = GLOBAL_ADDRESS_BY_VERSION(0x501BA0, 0x501C80, 0);

// Converted from cdecl void CFont::SetSlantRefPoint(float x,float y) 0x501BA0 
void CFont::SetSlantRefPoint(float x, float y) {
    plugin::CallDynGlobal<float, float>(gaddrof(CFont::SetSlantRefPoint), x, y);
}

int addrof(CFont::SetWrapx) = ADDRESS_BY_VERSION(0x501CC0, 0x501DA0, 0);
int gaddrof(CFont::SetWrapx) = GLOBAL_ADDRESS_BY_VERSION(0x501CC0, 0x501DA0, 0);

// Converted from cdecl void CFont::SetWrapx(float value) 0x501CC0
void CFont::SetWrapx(float value) {
    plugin::CallDynGlobal<float>(gaddrof(CFont::SetWrapx), value);
}

int addrof(CFont::Shutdown) = ADDRESS_BY_VERSION(0x500BA0, 0x500C80, 0);
int gaddrof(CFont::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x500BA0, 0x500C80, 0);

// Converted from cdecl void CFont::Shutdown(void) 0x500BA0 
void CFont::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CFont::Shutdown));
}

int addrof(CFont::character_code) = ADDRESS_BY_VERSION(0x501E80, 0x501F60, 0);
int gaddrof(CFont::character_code) = GLOBAL_ADDRESS_BY_VERSION(0x501E80, 0x501F60, 0);

// Converted from cdecl short CFont::character_code(uchar character) 0x501E80
short CFont::character_code(unsigned char character) {
    return plugin::CallAndReturnDynGlobal<short, unsigned char>(gaddrof(CFont::character_code), character);
}

char* CFont::GetNextSpace(const char* str) {
    _SWSTRING_INIT(str, 1);
    wchar_t *result = GetNextSpace(_SWSTRING(1));
    return const_cast<char *>(&str[result - _SWSTRING(1)]);
}

int CFont::GetNumberLines(float x, float y, const char* text) {
    _SWSTRING_INIT(text, 1);
    return GetNumberLines(x, y, _SWSTRING(1));
}

float CFont::GetStringWidth(const char* str, bool sentence) {
    _SWSTRING_INIT(str, 1);
    return GetStringWidth(_SWSTRING(1), sentence);
}

CRect* CFont::GetTextRect(CRect* rect_out, float x, float y, const char* text) {
    _SWSTRING_INIT(text, 1);
    return GetTextRect(rect_out, x, y, _SWSTRING(1));
}

char* CFont::ParseToken(char* str) {
    _SWSTRING_INIT(str, 1);
    wchar_t *result = ParseToken(_SWSTRING(1));
    return &str[result - _SWSTRING(1)];
}

void CFont::PrintChar(float x, float y, char character) {
    PrintChar(x, y, static_cast<short>(character));
}

void CFont::PrintString(float x, float y, const char* text) {
    _SWSTRING_INIT(text, 1);
    PrintString(x, y, _SWSTRING(1));
}

void CFont::PrintString(float x, float y, const char* start, const char* end, float arg4) {
    _SWSTRING_INIT(start, 1);
    PrintString(x, y, _SWSTRING(1), &_SWSTRING(1)[end - start], arg4);
}

int addrof(AsciiToUnicode) = ADDRESS_BY_VERSION(0x5009C0, 0x500AA0, 0);
int gaddrof(AsciiToUnicode) = GLOBAL_ADDRESS_BY_VERSION(0x5009C0, 0x500AA0, 0);

// Converted from cdecl void AsciiToUnicode(char const* str_ascii,wchar_t * str_unicode) 0x5009C0
void AsciiToUnicode(char const* str_ascii, wchar_t* str_unicode) {
    plugin::CallDynGlobal<char const*, wchar_t*>(gaddrof(AsciiToUnicode), str_ascii, str_unicode);
}

int addrof(UnicodeStrlen) = ADDRESS_BY_VERSION(0x500A20, 0x500B00, 0);
int gaddrof(UnicodeStrlen) = GLOBAL_ADDRESS_BY_VERSION(0x500A20, 0x500B00, 0);

// Converted from cdecl int UnicodeStrlen(wchar_t const* str) 0x500A20 
int UnicodeStrlen(wchar_t const* str) {
    return plugin::CallAndReturnDynGlobal<int, wchar_t const*>(gaddrof(UnicodeStrlen), str);
}

int addrof(UnicodeToAscii) = ADDRESS_BY_VERSION(0x52C2F0, 0x52C530, 0);
int gaddrof(UnicodeToAscii) = GLOBAL_ADDRESS_BY_VERSION(0x52C2F0, 0x52C530, 0);

// Converted from cdecl char* UnicodeToAscii(wchar_t *str_unicode) 0x52C2F0
char* UnicodeToAscii(wchar_t* str_unicode) {
    return plugin::CallAndReturnDynGlobal<char*, wchar_t*>(gaddrof(UnicodeToAscii), str_unicode);
}
