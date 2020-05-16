/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CPed)
    static int address;
    static int global_address;
    static const int id = 0x43D4F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C41C0, 0x43D4F0, 0>;
    using refs_t = RefList<>;
    using def_t = CPed(CPed*, int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPed*, int>, 0, 1>;
META_END

DTOR_META_BEGIN(CPed)
    static int address;
    static int global_address;
    static const int id = 0x43D4F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43D4F0, 0x4C5170, 0>;
    using refs_t = RefList<>;
    using def_t = void(CPed*);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPed*>, 0>;
META_END

META_BEGIN(CPed::IsPlayer)
    static int address;
    static int global_address;
    static const int id = 0x4D48E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D48E0, 0x4D4980, 0x4D4910>;
    using refs_t = RefList<>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPed::UseGroundColModel)
    static int address;
    static int global_address;
    static const int id = 0x4CE730;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CE730, 0x4CE7D0, 0x4CE760>;
    using refs_t = RefList<>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPed::AddWeaponModel)
    static int address;
    static int global_address;
    static const int id = 0x4CF8F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF8F0, 0x4CF990, 0>;
    using refs_t = RefList<>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN_OVERLOADED(CPed::SetAimFlag, void(CPed::*)(CEntity*))
    static int address;
    static int global_address;
    static const int id = 0x4C69E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C69E0, 0x4C6A80, 0>;
    using refs_t = RefList<>;
    using def_t = void(CEntity*);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntity*>, 0>;
META_END

META_BEGIN_OVERLOADED(CPed::SetAimFlag, void(CPed::*)(float))
    static int address;
    static int global_address;
    static const int id = 0x4C6960;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C6960, 0x4C6A00, 0>;
    using refs_t = RefList<>;
    using def_t = void(float);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

META_BEGIN(CPed::SetAttack)
    static int address;
    static int global_address;
    static const int id = 0x4E6220;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4E6220, 0x4E62D0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CEntity*);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntity*>, 0>;
META_END

META_BEGIN(CPed::SetAttackTimer)
    static int address;
    static int global_address;
    static const int id = 0x4D1300;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D1300, 0x4D13A0, 0>;
    using refs_t = RefList<>;
    using def_t = void(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CPed::SetPointGunAt)
    static int address;
    static int global_address;
    static const int id = 0x4E5F70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4E5F70, 0x4E6020, 0>;
    using refs_t = RefList<>;
    using def_t = void(CEntity*);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntity*>, 0>;
META_END

META_BEGIN(CPed::ClearAimFlag)
    static int address;
    static int global_address;
    static const int id = 0x4C6A50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C6A50, 0x4C6AF0, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPed::RestorePreviousState)
    static int address;
    static int global_address;
    static const int id = 0x4C5E30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C5E30, 0x4C5ED0, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPed::ClearPointGunAt)
    static int address;
    static int global_address;
    static const int id = 0x4E6180;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4E6180, 0x4E6230, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPed::ClearLookFlag)
    static int address;
    static int global_address;
    static const int id = 0x4C64F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C64F0, 0x4C6590, 0>;
    using refs_t = RefList<>;
    using def_t = char();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPed::GiveWeapon)
    static int address;
    static int global_address;
    static const int id = 0x4CF9B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF9B0, 0x4CFA50, 0>;
    using refs_t = RefList<>;
    using def_t = void(eWeaponType, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<eWeaponType, unsigned int>, 0, 1>;
META_END

META_BEGIN(CPed::SetCurrentWeapon)
    static int address;
    static int global_address;
    static const int id = 0x4CFA60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CFA60, 0x4CFB00, 0>;
    using refs_t = RefList<>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN_OVERLOADED(CPed::SetObjective, void(CPed::*)(eObjective))
    static int address;
    static int global_address;
    static const int id = 0x4D82C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D82C0, 0x4D8360, 0>;
    using refs_t = RefList<>;
    using def_t = void(eObjective);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<eObjective>, 0>;
META_END

META_BEGIN_OVERLOADED(CPed::SetObjective, void(CPed::*)(eObjective, CVector const&))
    static int address;
    static int global_address;
    static const int id = 0x4D8A90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D8A90, 0x4D8B30, 0>;
    using refs_t = RefList<>;
    using def_t = void(eObjective, CVector const&);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<eObjective, CVector const&>, 0, 1>;
META_END

META_BEGIN_OVERLOADED(CPed::SetObjective, void(CPed::*)(eObjective, CVector, float))
    static int address;
    static int global_address;
    static const int id = 0x4D8770;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D8770, 0x4D8810, 0>;
    using refs_t = RefList<>;
    using def_t = void(eObjective, CVector, float);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<eObjective, CVector, float>, 0, 1, 2>;
META_END

META_BEGIN_OVERLOADED(CPed::SetObjective, void(CPed::*)(eObjective, short, short))
    static int address;
    static int global_address;
    static const int id = 0x4D89A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D89A0, 0x4D8A40, 0>;
    using refs_t = RefList<>;
    using def_t = void(eObjective, short, short);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<eObjective, short, short>, 0, 1, 2>;
META_END

META_BEGIN_OVERLOADED(CPed::SetObjective, void(CPed::*)(eObjective, void*))
    static int address;
    static int global_address;
    static const int id = 0x4D83E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D83E0, 0x4D8480, 0>;
    using refs_t = RefList<>;
    using def_t = void(eObjective, void*);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<eObjective, void*>, 0, 1>;
META_END

META_BEGIN(CPed::SetObjectiveTimer)
    static int address;
    static int global_address;
    static const int id = 0x4D81E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D81E0, 0x4D8280, 0>;
    using refs_t = RefList<>;
    using def_t = void(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CPed::WarpPedIntoCar)
    static int address;
    static int global_address;
    static const int id = 0x4D7D20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D7D20, 0x4D7DC0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CVehicle*);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CVehicle*>, 0>;
META_END

META_BEGIN(CPed::RemoveWeaponModel)
    static int address;
    static int global_address;
    static const int id = 0x4CF980;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF980, 0x4CFA20, 0>;
    using refs_t = RefList<>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPed::StopNonPartialAnims)
    static int address;
    static int global_address;
    static const int id = 0x4C5D50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C5D50, 0x4C5DF0, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
