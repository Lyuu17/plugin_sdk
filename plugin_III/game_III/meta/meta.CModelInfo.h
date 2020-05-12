/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CModelInfo::AddClumpModel)
    static int address;
    static int global_address;
    static const int id = 0x50BA10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BA10, 0x50BB00, 0x50BA90>;
    using refs_t = RefList<>;
    using def_t = CClumpModelInfo*(int index);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::AddMloModel)
    static int address;
    static int global_address;
    static const int id = 0x50B970;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B970, 0x50BA60, 0x50B9F0>;
    using refs_t = RefList<>;
    using def_t = CMloModelInfo*(int index);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::AddPedModel)
    static int address;
    static int global_address;
    static const int id = 0x50BAD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BAD0, 0x50BBC0, 0x50BB50>;
    using refs_t = RefList<>;
    using def_t = CPedModelInfo*(int index);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::AddSimpleModel)
    static int address;
    static int global_address;
    static const int id = 0x50B920;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B920, 0x50BA10, 0x50B9A0>;
    using refs_t = RefList<>;
    using def_t = CSimpleModelInfo*(int index);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::AddTimeModel)
    static int address;
    static int global_address;
    static const int id = 0x50B9C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B9C0, 0x50BAB0, 0x50BA40>;
    using refs_t = RefList<>;
    using def_t = CTimeModelInfo*(int index);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::AddVehicleModel)
    static int address;
    static int global_address;
    static const int id = 0x50BA60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BA60, 0x50BB50, 0x50BAE0>;
    using refs_t = RefList<>;
    using def_t = CVehicleModelInfo*(int index);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::ConstructMloClumps)
    static int address;
    static int global_address;
    static const int id = 0x50BB40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BB40, 0x50BC30, 0x50BBC0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CModelInfo::Get2dEffectStore)
    static int address;
    static int global_address;
    static const int id = 0x50BB30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BB30, 0x50BC20, 0x50BBB0>;
    using refs_t = RefList<>;
    using def_t = EffectStore*();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CModelInfo::GetMloInstanceStore)
    static int address;
    static int global_address;
    static const int id = 0x50BB30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BB20, 0x50BC10, 0x50BBA0>;
    using refs_t = RefList<>;
    using def_t = MloInstanceStore*();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CModelInfo::GetModelInfo, CBaseModelInfo*(*)(char const*, int*))
    static int address;
    static int global_address;
    static const int id = 0x50BB30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BB30, 0x50B950, 0x50B8E0>;
    using refs_t = RefList<>;
    using def_t = CBaseModelInfo*(char const* name, int* index);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const*, int*>, 0, 1>;
META_END

META_BEGIN(CModelInfo::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x50B310;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B310, 0x50B3F0, 0x50B380>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CModelInfo::IsBoatModel)
    static int address;
    static int global_address;
    static const int id = 0x50BB90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BB90, 0x50BC80, 0x50BC10>;
    using refs_t = RefList<>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::ReInit2dEffects)
    static int address;
    static int global_address;
    static const int id = 0x50B580;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B580, 0x50B660, 0x50B5F0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CModelInfo::RemoveColModelsFromOtherLevels)
    static int address;
    static int global_address;
    static const int id = 0x50BBC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BBC0, 0x50BCB0, 0x50BC40>;
    using refs_t = RefList<>;
    using def_t = void(eLevelName);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<eLevelName>, 0>;
META_END

META_BEGIN(CModelInfo::ShutDown)
    static int address;
    static int global_address;
    static const int id = 0x50B5B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B5B0, 0x50B690, 0x50B620>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
