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
    using refs_t = RefList<>;
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
    using refs_t = RefList<>;
    using def_t = void(int, unsigned short, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<int, unsigned short, float>, 0, 1, 2>;
META_END

}
