/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(cSampleManager::SetStreamedVolumeAndPan)
    static int address;
    static int global_address;
    static const int id = 0x5681D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5681D0, 0x568520, 0>;
    using refs_t = RefList<>;
    using def_t = void(unsigned char, unsigned char, unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned char, unsigned char, unsigned char, unsigned char>, 0, 1, 2, 3>;
META_END

META_BEGIN(cSampleManager::StartPreloadedStreamedFile)
    static int address;
    static int global_address;
    static const int id = 0x567D60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x567D60, 0x5680B0, 0>;
    using refs_t = RefList<>;
    using def_t = void(unsigned char, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned char, int>, 0, 1>;
META_END

META_BEGIN(cSampleManager::StartStreamedFile)
    static int address;
    static int global_address;
    static const int id = 0x567D80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x567D80, 0x5680D0, 0>;
    using refs_t = RefList<>;
    using def_t = bool(unsigned char, unsigned int, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned char, unsigned int, unsigned char>, 0, 1, 2>;
META_END

META_BEGIN(cSampleManager::StopStreamedFile)
    static int address;
    static int global_address;
    static const int id = 0x5680E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5680E0, 0x568430, 0>;
    using refs_t = RefList<>;
    using def_t = void(unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned char>, 0>;
META_END

META_BEGIN(cSampleManager::IsStreamPlaying)
    static int address;
    static int global_address;
    static const int id = 0x568290;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x568290, 0x5685E0, 0>;
    using refs_t = RefList<>;
    using def_t = bool(unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned char>, 0>;
META_END

META_BEGIN(cSampleManager::GetSampleBaseFrequency)
    static int address;
    static int global_address;
    static const int id = 0x5685E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5672A0, 0X5675F0, 0X5674F0>;
    using refs_t = RefList<>;
    using def_t = int(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(cSampleManager::GetSampleLoopStartOffset)
    static int address;
    static int global_address;
    static const int id = 0x5672C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5672C0, 0X567610, 0x567510>;
    using refs_t = RefList<>;
    using def_t = int(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(cSampleManager::GetSampleLoopEndOffset)
    static int address;
    static int global_address;
    static const int id = 0x5672E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5672E0, 0x567630, 0x567530>;
    using refs_t = RefList<>;
    using def_t = int(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

}
