/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CFont::DrawFonts)
    static int address;
    static int global_address;
    static const int id = 0x501B50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501B50, 0x501C30, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CFont::GetNextSpace, wchar_t* (*)(const wchar_t*))
    static int address;
    static int global_address;
    static const int id = 0x501960;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501960, 0x501A40, 0>;
    using refs_t = RefList<>;
    using def_t = wchar_t*(const wchar_t*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<const wchar_t*>, 0>;
META_END

META_BEGIN_OVERLOADED(CFont::GetNumberLines, int(*)(float, float, const wchar_t*))
    static int address;
    static int global_address;
    static const int id = 0x501260;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501260, 0x501340, 0>;
    using refs_t = RefList<>;
    using def_t = int(float, float, const wchar_t*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, const wchar_t*>, 0, 1, 2, 3>;
META_END

META_BEGIN_OVERLOADED(CFont::GetStringWidth, float(*)(const wchar_t*, bool))
    static int address;
    static int global_address;
    static const int id = 0x5018A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5018A0, 0x501980, 0>;
    using refs_t = RefList<>;
    using def_t = float(const wchar_t*, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<const wchar_t*, bool>, 0, 1>;
META_END

META_BEGIN_OVERLOADED(CFont::GetTextRect, CRect* (*)(CRect*, float, float, const wchar_t*))
    static int address;
    static int global_address;
    static const int id = 0x5013B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5013B0, 0x501490, 0>;
    using refs_t = RefList<>;
    using def_t = CRect*(CRect*, float, float, const wchar_t*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CRect*, float, float, const wchar_t*>, 0, 1, 2, 3>;
META_END

META_BEGIN(CFont::InitPerFrame)
    static int address;
    static int global_address;
    static const int id = 0x500BE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x500BE0, 0x500CC0, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x500A40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x500A40, 0x500B20, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CFont::ParseToken, wchar_t*(*)(wchar_t*))
    static int address;
    static int global_address;
    static const int id = 0x5019A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5019A0, 0x501A80, 0>;
    using refs_t = RefList<>;
    using def_t = wchar_t*(wchar_t*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<wchar_t*>, 0>;
META_END

META_BEGIN_OVERLOADED(CFont::PrintChar, void(*)(float, float, short))
    static int address;
    static int global_address;
    static const int id = 0x500C30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x500C30, 0x500D10, 0>;
    using refs_t = RefList<>;
    using def_t = void*(float, float, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, short>, 0, 1, 2>;
META_END

META_BEGIN_OVERLOADED(CFont::PrintString, void(*)(float, float, const wchar_t*))
    static int address;
    static int global_address;
    static const int id = 0x500F50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x500F50, 0x501030, 0>;
    using refs_t = RefList<>;
    using def_t = void*(float, float, const wchar_t*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, short>, 0, 1, 2>;
META_END

META_BEGIN_OVERLOADED(CFont::PrintString, void(*)(float, float, const wchar_t*, const wchar_t*, float))
    static int address;
    static int global_address;
    static const int id = 0x501730;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501730, 0x501810, 0>;
    using refs_t = RefList<>;
    using def_t = void*(float, float, const wchar_t*, const wchar_t*, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, const wchar_t*, const wchar_t*, float>, 0, 1, 2, 3, 4>;
META_END

META_BEGIN(CFont::SetAlphaFade)
    static int address;
    static int global_address;
    static const int id = 0x501DD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501DD0, 0x501EB0, 0>;
    using refs_t = RefList<>;
    using def_t = void*(float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

META_BEGIN(CFont::SetBackGroundOnlyTextOff)
    static int address;
    static int global_address;
    static const int id = 0x501D40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501D40, 0x501E20, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetBackGroundOnlyTextOn)
    static int address;
    static int global_address;
    static const int id = 0x501D30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501D30, 0x501E10, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetBackgroundColor)
    static int address;
    static int global_address;
    static const int id = 0x501D00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501D00, 0x501DE0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CRGBA);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CRGBA>, 0>;
META_END

META_BEGIN(CFont::SetBackgroundOff)
    static int address;
    static int global_address;
    static const int id = 0x501CF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501CF0, 0x501DD0, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetBackgroundOn)
    static int address;
    static int global_address;
    static const int id = 0x501CE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501CE0, 0x501DC0, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetCentreOff)
    static int address;
    static int global_address;
    static const int id = 0x501CB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501CB0, 0x501D90, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetCentreOn)
    static int address;
    static int global_address;
    static const int id = 0x501C90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501C90, 0x501D70, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetCentreSize)
    static int address;
    static int global_address;
    static const int id = 0x501CD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501CD0, 0x501DB0, 0>;
    using refs_t = RefList<>;
    using def_t = void(float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

META_BEGIN(CFont::SetColor)
    static int address;
    static int global_address;
    static const int id = 0x501BD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501BD0, 0x501CB0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CRGBA);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CRGBA>, 0>;
META_END

META_BEGIN(CFont::SetDropColor)
    static int address;
    static int global_address;
    static const int id = 0x501DE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501DE0, 0x501EC0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CRGBA);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CRGBA>, 0>;
META_END

META_BEGIN(CFont::SetDropShadowPosition)
    static int address;
    static int global_address;
    static const int id = 0x501E70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501E70, 0x501F50, 0>;
    using refs_t = RefList<>;
    using def_t = void(short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

META_BEGIN(CFont::SetFontStyle)
    static int address;
    static int global_address;
    static const int id = 0x501DB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501DB0, 0x501E90, 0>;
    using refs_t = RefList<>;
    using def_t = void(short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

META_BEGIN(CFont::SetJustifyOff)
    static int address;
    static int global_address;
    static const int id = 0x501C80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501C80, 0x501D60, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetJustifyOn)
    static int address;
    static int global_address;
    static const int id = 0x501C60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501C60, 0x501D40, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetPropOff)
    static int address;
    static int global_address;
    static const int id = 0x501D90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501D90, 0x501E70, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetPropOn)
    static int address;
    static int global_address;
    static const int id = 0x501DA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501DA0, 0x501E80, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetRightJustifyOff)
    static int address;
    static int global_address;
    static const int id = 0x501D70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501D70, 0x501E50, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetRightJustifyOn)
    static int address;
    static int global_address;
    static const int id = 0x501D70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501D50, 0x501E30, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::SetRightJustifyWrap)
    static int address;
    static int global_address;
    static const int id = 0x501DC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501DC0, 0x501EA0, 0>;
    using refs_t = RefList<>;
    using def_t = void(float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

META_BEGIN(CFont::SetScale)
    static int address;
    static int global_address;
    static const int id = 0x501B80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501B80, 0x501C60, 0>;
    using refs_t = RefList<>;
    using def_t = void(float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float>, 0, 1>;
META_END

META_BEGIN(CFont::SetSlant)
    static int address;
    static int global_address;
    static const int id = 0x501BC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501BC0, 0x501CA0, 0>;
    using refs_t = RefList<>;
    using def_t = void(float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

META_BEGIN(CFont::SetSlantRefPoint)
    static int address;
    static int global_address;
    static const int id = 0x501BC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501BC0, 0x501C80, 0>;
    using refs_t = RefList<>;
    using def_t = void(float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float>, 0, 1>;
META_END

META_BEGIN(CFont::SetWrapx)
    static int address;
    static int global_address;
    static const int id = 0x501CC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501CC0, 0x501DA0, 0>;
    using refs_t = RefList<>;
    using def_t = void(float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

META_BEGIN(CFont::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x500BA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x500BA0, 0x500C80, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFont::character_code)
    static int address;
    static int global_address;
    static const int id = 0x501E80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x501E80, 0x501F60, 0>;
    using refs_t = RefList<>;
    using def_t = short(unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char>, 0>;
META_END

META_BEGIN(AsciiToUnicode)
    static int address;
    static int global_address;
    static const int id = 0x5009C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5009C0, 0x500AA0, 0>;
    using refs_t = RefList<>;
    using def_t = void(char const*, wchar_t*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const*, wchar_t*>, 0, 1>;
META_END

META_BEGIN(UnicodeStrlen)
    static int address;
    static int global_address;
    static const int id = 0x5009C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5009C0, 0x500B00, 0>;
    using refs_t = RefList<>;
    using def_t = int(wchar_t const*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<wchar_t const*>, 0>;
META_END

META_BEGIN(UnicodeToAscii)
    static int address;
    static int global_address;
    static const int id = 0x5009C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5009C0, 0x52C530, 0>;
    using refs_t = RefList<>;
    using def_t = char*(wchar_t*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<wchar_t*>, 0>;
META_END

}
