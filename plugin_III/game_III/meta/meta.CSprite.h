/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CSprite::CalcScreenCoors)
    static int address;
    static int global_address;
    static const int id = 0x51C3A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51C3A0, 0x051C5D0, 0x51C560>;
    using refs_t = RefList<>;
    using def_t = bool(CVector const&, RwV3d*, float*, float*, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const&, RwV3d*, float*, float*, bool>, 0, 1, 2, 3, 4>;
META_END

META_BEGIN(CSprite::CalcHorizonCoors)
    static int address;
    static int global_address;
    static const int id = 0x51C4A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51C4A0, 0x51C6D0, 0x51C660>;
    using refs_t = RefList<>;
    using def_t = double();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSprite::FlushSpriteBuffer)
    static int address;
    static int global_address;
    static const int id = 0x51C520;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51C520, 0x51C750, 0x51C6E0>;
    using refs_t = RefList<>;
    using def_t = int();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSprite::InitSpriteBuffer)
    static int address;
    static int global_address;
    static const int id = 0x51C590;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51C590, 0x51C7C0, 0x51C750>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSprite::InitSpriteBuffer2D)
    static int address;
    static int global_address;
    static const int id = 0x51C5B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51C5B0, 0x51C7E0, 0x51C770>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite)
    static int address;
    static int global_address;
    static const int id = 0x51C5D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51C5D0, 0x51C800, 0x51C790>;
    using refs_t = RefList<>;
    using def_t = int(float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, unsigned char>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
META_END

META_BEGIN(CSprite::RenderOneXLUSprite)
    static int address;
    static int global_address;
    static const int id = 0x51C960;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51C960, 0x51CB90, 0x51CB20>;
    using refs_t = RefList<>;
    using def_t = int(float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, unsigned char>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect)
    static int address;
    static int global_address;
    static const int id = 0x51CCD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51CCD0, 0x51CF00, 0x51CE90>;
    using refs_t = RefList<>;
    using def_t = int(float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, unsigned short);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11>;
META_END

META_BEGIN(CSprite::RenderOneXLUSprite_Rotate_Aspect)
    static int address;
    static int global_address;
    static const int id = 0x51D110;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51D110, 0x51D340, 0x51D2D0>;
    using refs_t = RefList<>;
    using def_t = short(float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension)
    static int address;
    static int global_address;
    static const int id = 0x51D5B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51D5B0, 0x51D7E0, 0x51D770>;
    using refs_t = RefList<>;
    using def_t = short(float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours)
    static int address;
    static int global_address;
    static const int id = 0x51D9E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51D9E0, 0x51DC10, 0x51DBA0>;
    using refs_t = RefList<>;
    using def_t = short(float, float, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float, float, float, float, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite2D)
    static int address;
    static int global_address;
    static const int id = 0x51E3C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51E3C0, 0x51E5F0, 0x51E580>;
    using refs_t = RefList<>;
    using def_t = int(float, float, float, float, RwRGBA*, short, char);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, float, float, RwRGBA*, short, char>, 0, 1, 2, 3, 4, 5, 6>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension)
    static int address;
    static int global_address;
    static const int id = 0x51E490;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51E490, 0x51E6C0, 0x51E650>;
    using refs_t = RefList<>;
    using def_t = int(float, float, float, float, RwRGBA*, short, float, char);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, float, float, RwRGBA*, short, float, char>, 0, 1, 2, 3, 4, 5, 6, 7>;
META_END

META_BEGIN_OVERLOADED(CSprite::Set6Vertices2D, int(*)(RwD3D8Vertex*, CRect*, unsigned char, unsigned char, unsigned char, unsigned char))
    static int address;
    static int global_address;
    static const int id = 0x51E5F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51E5F0, 0x51E820, 0x51E7B0>;
    using refs_t = RefList<>;
    using def_t = int(RwD3D8Vertex*, CRect*, unsigned char, unsigned char, unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RwD3D8Vertex*, CRect*, unsigned char, unsigned char, unsigned char, unsigned char>, 0, 1, 2, 3, 4, 5>;
META_END

META_BEGIN_OVERLOADED(CSprite::Set6Vertices2D, int(*)(RwD3D8Vertex*, float, float, float, float, float, float, float, float, unsigned char*, unsigned char*, unsigned char*, unsigned char*))
    static int address;
    static int global_address;
    static const int id = 0x51E7F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51E7F0, 0x51EA20, 0x51E9B0>;
    using refs_t = RefList<>;
    using def_t = int(RwD3D8Vertex*, float, float, float, float, float, float, float, float, unsigned char*, unsigned char*, unsigned char*, unsigned char*);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RwD3D8Vertex*, float, float, float, float, float, float, float, float, unsigned char*, unsigned char*, unsigned char*, unsigned char*>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13>;
META_END

}
