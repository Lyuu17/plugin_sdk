/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CMatrix::Attach)
    static int address;
    static int global_address;
    static const int id = 0x4B8DD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4B8DD0, 0x4B8EC0, 0x4B8E50>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x4B8DD0, GAME_10EN, H_CALL, 0x4B8DD0, 1,
        0x4B8EC0, GAME_11EN, H_CALL, 0x4B8EC0, 1,
        0x4B8E50, GAME_STEAM, H_CALL, 0x4B8E50, 1>;
    using def_t = void(RwMatrixTag*, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<RwMatrixTag*, bool>, 0, 1>;
META_END

}
