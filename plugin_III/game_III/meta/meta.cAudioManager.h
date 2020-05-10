/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(cAudioManager::GetDistanceSquared)
    static int address;
    static int global_address;
    static const int id = 0x569750;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x569750, 0X569AA0, 0X5699A0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x569750, GAME_10EN, H_CALL, 0x569750, 1,
        0X569AA0, GAME_11EN, H_CALL, 0X569AA0, 1,
        0X5699A0, GAME_STEAM, H_CALL, 0X5699A0, 1>;
    using def_t = float(CVector const&);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CVector const&>, 0>;
META_END

META_BEGIN(cAudioManager::CalculateDistance)
    static int address;
    static int global_address;
    static const int id = 0x5697A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5697A0, 0X569AF0, 0X5699F0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x5697A0, GAME_10EN, H_CALL, 0x5697A0, 1,
        0X569AF0, GAME_11EN, H_CALL, 0X569AF0, 1,
        0X5699F0, GAME_STEAM, H_CALL, 0X5699F0, 1>;
    using def_t = int(unsigned char&, float);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned char&, float>, 0, 1>;
META_END

META_BEGIN(cAudioManager::ComputeVolume)
    static int address;
    static int global_address;
    static const int id = 0x57ABB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x57ABB0, 0X57AF00, 0X57AE00>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x57ABB0, GAME_10EN, H_CALL, 0x57ABB0, 1,
        0X57AF00, GAME_11EN, H_CALL, 0X57AF00, 1,
        0X57AE00, GAME_STEAM, H_CALL, 0X57AE00, 1>;
    using def_t = unsigned char(unsigned char, float, float);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned char, float, float>, 0, 1, 2>;
META_END

META_BEGIN(cAudioManager::RandomDisplacement)
    static int address;
    static int global_address;
    static const int id = 0x4B0DE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x57AF90, 0X57B2E0, 0X57B1E0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x57AF90, GAME_10EN, H_CALL, 0x57AF90, 1,
        0X57B2E0, GAME_11EN, H_CALL, 0X57B2E0, 1,
        0X57B1E0, GAME_STEAM, H_CALL, 0X57B1E0, 1>;
    using def_t = int(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(cAudioManager::AddSampleToRequestedQueue)
    static int address;
    static int global_address;
    static const int id = 0x57B070;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x57B070, 0X57B3C0, 0X57B2C0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x57B070, GAME_10EN, H_CALL, 0x57B070, 1,
        0X57B3C0, GAME_11EN, H_CALL, 0X57B3C0, 1,
        0X57B2C0, GAME_STEAM, H_CALL, 0X57B2C0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(cAudioManager::ProcessLoopingScriptObject)
    static int address;
    static int global_address;
    static const int id = 0x576770;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0, 0x576770, 0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0, GAME_10EN, H_CALL, 0, 1,
        0x576770, GAME_11EN, H_CALL, 0x576770, 1,
        0, GAME_STEAM, H_CALL, 0, 1>;
    using def_t = void(unsigned char);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned char>, 0>;
META_END

}
