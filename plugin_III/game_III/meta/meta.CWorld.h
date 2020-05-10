/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CWorld::CameraToIgnoreThisObject)
    static int address;
    static int global_address;
    static const int id = 0X4B5C30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0X4B5C30, 0X4B5D20, 0X4B5CB0>;
    using refs_t = RefList<>;
    using def_t = void(CEntity *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CWorld::FindGroundZFor3DCoord)
    static int address;
    static int global_address;
    static const int id = 0x4B3AE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4B3AE0, 0x4B3BD0, 0x4B3B60>;
    using refs_t = RefList<>;
    using def_t = void(float, float, float, bool*);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float, float, float, bool*>, 0, 1, 2, 3>;
META_END

META_BEGIN(CWorld::ProcessLineOfSight)
    static int address;
    static int global_address;
    static const int id = 0X4AF970;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AF970, 0x4AFA60, 0x4AF9F0>;
    using refs_t = RefList<>;
    using def_t = void(CVector const&, CVector const&, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, bool);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const&, CVector const&, CColPoint &, CEntity * &, bool, bool, bool, bool, bool, bool, bool>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
META_END

META_BEGIN(CWorld::ProcessVerticalLine)
    static int address;
    static int global_address;
    static const int id = 0x4B0DE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4B0DE0, 0x4B0ED0, 0x4B0E60>;
    using refs_t = RefList<>;
    using def_t = void(CVector const&, float, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, CStoredCollPoly*);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const&, float, CColPoint &, CEntity * &, bool, bool, bool, bool, bool, bool, CStoredCollPoly *>, 0, 1, 2, 3, 4, 5, 6, 7, 9, 10>;
META_END

}
