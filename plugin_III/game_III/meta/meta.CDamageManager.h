/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CDamageManager::GetWheelStatus)
    static int address;
    static int global_address;
    static const int id = 0x545910;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x545910, 0X545B10, 0X545AC0>;
    using refs_t = RefList<>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CDamageManager::SetEngineStatus)
    static int address;
    static int global_address;
    static const int id = 0x545940;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x545940, 0x545B40, 0x545AF0>;
    using refs_t = RefList<>;
    using def_t = void(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CDamageManager::SetWheelStatus)
    static int address;
    static int global_address;
    static const int id = 0x545900;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x545900, 0x545B00, 0x545AB0>;
    using refs_t = RefList<>;
    using def_t = void(int, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<int, unsigned int>, 0, 1>;
META_END

META_BEGIN(CDamageManager::ProgressWheelDamage)
    static int address;
    static int global_address;
    static const int id = 0x545A40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x545A40, 0x545C40, 0x545BF0>;
    using refs_t = RefList<>;
    using def_t = bool(unsigned char);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned char>, 0>;
META_END

}
