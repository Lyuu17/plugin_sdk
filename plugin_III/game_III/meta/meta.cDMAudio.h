/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(cDMAudio::PlayFrontEndSound)
    static int address;
    static int global_address;
    static const int id = 0x57CC20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x57CC20, 0x57CF70, 0x57CE70>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x57CC20, GAME_10EN, H_CALL, 0x57CC20, 1,
        0x57CF70, GAME_11EN, H_CALL, 0x57CF70, 1,
        0x57CE70, GAME_STEAM, H_CALL, 0x57CE70, 1>;
    using def_t = void(unsigned short, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned short, unsigned int>, 0, 1>;
META_END

META_BEGIN(cDMAudio::PlayOneShot)
    static int address;
    static int global_address;
    static const int id = 0x57C840;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x57C840, 0x57CB90, 0x57CA90>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x57C840, GAME_10EN, H_CALL, 0x57C840, 1,
        0x57CB90, GAME_11EN, H_CALL, 0x57CB90, 1,
        0x57CA90, GAME_STEAM, H_CALL, 0x57CA90, 1>;
    using def_t = void(int, unsigned short, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<int, unsigned short, float>, 0, 1, 2>;
META_END

}
