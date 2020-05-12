/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CWeaponInfo)
    static int address;
    static int global_address;
    static const int id = 0x5654F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5654F0, 0x5655D0, 0x565580>;
    using refs_t = RefList<>;
    using def_t = void*(CWeaponInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CWeaponInfo*>, 0>;
META_END

META_BEGIN(CWeaponInfo::FindWeaponFireType)
    static int address;
    static int global_address;
    static const int id = 0x5653E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5653E0, 0x565110, 0x5654D0>;
    using refs_t = RefList<>;
    using def_t = eWeaponFire(eWeaponFire*, char*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<eWeaponFire*, char*>, 0, 1>;
META_END

META_BEGIN(CWeaponInfo::FindWeaponType)
    static int address;
    static int global_address;
    static const int id = 0x5653B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5653B0, 0x5654F0, 0x5654A0>;
    using refs_t = RefList<>;
    using def_t = eWeaponType(eWeaponType*, char*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<eWeaponType*, char*>, 0, 1>;
META_END

META_BEGIN(CWeaponInfo::GetWeaponInfo)
    static int address;
    static int global_address;
    static const int id = 0x564FD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x564FD0, 0x565110, 0x5650C0>;
    using refs_t = RefList<>;
    using def_t = CWeaponInfo*(eWeaponType*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<eWeaponType*>, 0>;
META_END

META_BEGIN(CWeaponInfo::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x564EA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x564EA0, 0x564FE0, 0x564F90>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeaponInfo::LoadWeaponData)
    static int address;
    static int global_address;
    static const int id = 0x564FE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x564FE0, 0x565120, 0x5650D0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeaponInfo::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x564FB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x564FB0, 0x5650F0, 0x5650A0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
