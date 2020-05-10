/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCollision::ProcessLineOfSight)
    static int address;
    static int global_address;
    static const int id = 0x40F910;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40F910, 0x40F910, 0x40F910>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x40F910, GAME_10EN, H_CALL, 0x40F910, 1,
        0x40F910, GAME_11EN, H_CALL, 0x40F910, 1,
        0x40F910, GAME_STEAM, H_CALL, 0x40F910, 1>;
    using def_t = bool(CColLine const&, CMatrix const&, CColModel&, CColPoint&, float&, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CColLine const&, CMatrix const&, CColModel&, CColPoint&, float&, bool>, 0, 1, 2, 3, 4, 5>;
META_END

}
