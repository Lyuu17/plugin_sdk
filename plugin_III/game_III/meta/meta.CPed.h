/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPed::IsPlayer)
    static int address;
    static int global_address;
    static const int id = 0x4D48E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D48E0, 0x4D4980, 0x4D4910>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x4D48E0, GAME_10EN, H_CALL, 0x4D48E0, 1,
        0x4D4980, GAME_11EN, H_CALL, 0x4D4980, 1,
        0x4D4910, GAME_STEAM, H_CALL, 0x4D4910, 1>;
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
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x4CE730, GAME_10EN, H_CALL, 0x4CE730, 1,
        0x4CE7D0, GAME_11EN, H_CALL, 0x4CE7D0, 1,
        0x4CE760, GAME_STEAM, H_CALL, 0x4CE760, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
