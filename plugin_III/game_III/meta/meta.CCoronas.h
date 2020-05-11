/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCoronas::DoSunAndMoon)
    static int address;
    static int global_address;
    static const int id = 0x4FA380;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4FA380, 0x4FA460, 0x4FA3F0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCoronas::Init)
    static int address;
    static int global_address;
    static const int id = 0x4F9F90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4F9F90, 0x4FA070, 0x4FA000>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CCoronas::RegisterCorona, void(*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, RwTexture*, unsigned char, unsigned char, unsigned char, unsigned char, float))
    static int address;
    static int global_address;
    static const int id = 0x4FA0E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4FA0E0, 0x4FA1C0, 0x4FA150>;
    using refs_t = RefList<>;
    using def_t = void(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, RwTexture*, unsigned char, unsigned char, unsigned char, unsigned char, float);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, RwTexture*, unsigned char, unsigned char, unsigned char, unsigned char, float>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13>;
META_END

META_BEGIN_OVERLOADED(CCoronas::RegisterCorona, void(*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float))
    static int address;
    static int global_address;
    static const int id = 0x4FA080;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4FA080, 0x4FA160, 0x4FA0F0>;
    using refs_t = RefList<>;
    using def_t = void(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13>;
META_END

META_BEGIN(CCoronas::Render)
    static int address;
    static int global_address;
    static const int id = 0x4F8FB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4F8FB0, 0x4F9C20, 0x4F9BB0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCoronas::RenderReflections)
    static int address;
    static int global_address;
    static const int id = 0x4F9B40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4F9B40, 0x4F9C20, 0x4F9BB0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCoronas::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x4FA050;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4FA050, 0x4FA130, 0x4FA0C0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCoronas::Update)
    static int address;
    static int global_address;
    static const int id = 0x4F8EC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4F8EC0, 0x4F8FA0, 0x4F8F30>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCoronas::UpdateCoronaCoors)
    static int address;
    static int global_address;
    static const int id = 0x4FA2D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4FA2D0, 0x4FA3B0, 0x4FA340>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
