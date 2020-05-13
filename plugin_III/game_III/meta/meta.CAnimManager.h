/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CAnimManager::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x403380;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x403380, 0x403380, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CAnimManager::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x4033B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4033B0, 0x4033B0, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CAnimManager::UncompressAnimation)
    static int address;
    static int global_address;
    static const int id = 0x403410;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x403410, 0x403410, 0>;
    using refs_t = RefList<>;
    using def_t = void(CAnimBlendHierarchy*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CAnimBlendHierarchy*>, 0>;
META_END

META_BEGIN(CAnimManager::GetAnimationBlock)
    static int address;
    static int global_address;
    static const int id = 0x4034A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4034A0, 0x4034A0, 0>;
    using refs_t = RefList<>;
    using def_t = CAnimBlock*(const char*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<const char*>, 0>;
META_END

META_BEGIN(CAnimManager::GetAnimation)
    static int address;
    static int global_address;
    static const int id = 0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4034F0, 0x4034F0, 0>;
    using refs_t = RefList<>;
    using def_t = CAnimBlendHierarchy*(const char*, CAnimBlock*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<const char*, CAnimBlock*>, 0, 1>;
META_END

META_BEGIN(CAnimManager::GetAnimGroupName)
    static int address;
    static int global_address;
    static const int id = 0x4035B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4035B0, 0x4035B0, 0>;
    using refs_t = RefList<>;
    using def_t = const char*(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<const char*>, 0>;
META_END

META_BEGIN(CAnimManager::CreateAnimAssociation)
    static int address;
    static int global_address;
    static const int id = 0x4035C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4035C0, 0x4035C0, 0>;
    using refs_t = RefList<>;
    using def_t = CAnimBlendAssociation*(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int, int>, 0, 1>;
META_END

META_BEGIN_OVERLOADED(CAnimManager::GetAnimAssociation, CAnimBlendAssociation*(*)(int, int))
    static int address;
    static int global_address;
    static const int id = 0x4035E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4035E0, 0x4035E0, 0>;
    using refs_t = RefList<>;
    using def_t = CAnimBlendAssociation*(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int, int>, 0, 1>;
META_END

META_BEGIN_OVERLOADED(CAnimManager::GetAnimAssociation, CAnimBlendAssociation*(*)(int, const char*))
    static int address;
    static int global_address;
    static const int id = 0x403600;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x403600, 0x403600, 0>;
    using refs_t = RefList<>;
    using def_t = CAnimBlendAssociation*(int, const char*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int, const char*>, 0, 1>;
META_END

META_BEGIN(CAnimManager::AddAnimation)
    static int address;
    static int global_address;
    static const int id = 0x403620;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x403620, 0x403620, 0>;
    using refs_t = RefList<>;
    using def_t = CAnimBlendAssociation*(RpClump*, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RpClump*, int, int>, 0, 1, 2>;
META_END

META_BEGIN(CAnimManager::AddAnimationAndSync)
    static int address;
    static int global_address;
    static const int id = 0x4036A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4036A0, 0x4036A0, 0>;
    using refs_t = RefList<>;
    using def_t = CAnimBlendAssociation*(RpClump*, CAnimBlendAssociation*, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RpClump*, CAnimBlendAssociation*, int, int>, 0, 1, 2, 3>;
META_END

META_BEGIN(CAnimManager::BlendAnimation)
    static int address;
    static int global_address;
    static const int id = 0x403710;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x403710, 0x403710, 0>;
    using refs_t = RefList<>;
    using def_t = CAnimBlendAssociation*(RpClump*, int, int, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RpClump*, int, int, float>, 0, 1, 2, 3>;
META_END

META_BEGIN(CAnimManager::LoadAnimFiles)
    static int address;
    static int global_address;
    static const int id = 0x4038F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4038F0, 0x4038F0, 0>;
    using refs_t = RefList<>;
    using def_t = void(void);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CAnimManager::LoadAnimFile, void(*)(const char*))
    static int address;
    static int global_address;
    static const int id = 0x403A10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x403A10, 0x403A10, 0>;
    using refs_t = RefList<>;
    using def_t = void(const char*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<const char*>, 0>;
META_END

META_BEGIN_OVERLOADED(CAnimManager::LoadAnimFile, void(*)(int, bool))
    static int address;
    static int global_address;
    static const int id = 0x403A40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x403A40, 0x403A40, 0>;
    using refs_t = RefList<>;
    using def_t = void(int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int, bool>, 0, 1>;
META_END

META_BEGIN(CAnimManager::RemoveLastAnimFile)
    static int address;
    static int global_address;
    static const int id = 0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x404320, 0x404320, 0>;
    using refs_t = RefList<>;
    using def_t = void(void);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
