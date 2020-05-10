/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CParticle::ReloadConfig)
    static int address;
    static int global_address;
    static const int id = 0x50C430;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C430, 0x50C520, 0x50C4B0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x50C430, GAME_10EN, H_CALL, 0x50C430, 1,
        0x50C520, GAME_11EN, H_CALL, 0x50C520, 1,
        0x50C4B0, GAME_STEAM, H_CALL, 0x50C4B0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CParticle::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x50C570;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C570, 0x50C660, 0x50C5F0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x50C570, GAME_10EN, H_CALL, 0x50C570, 1,
        0x50C660, GAME_11EN, H_CALL, 0x50C660, 1,
        0x50C5F0, GAME_STEAM, H_CALL, 0x50C5F0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CParticle::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x50CF40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CF40, 0x50D030, 0x50CFC0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x50CF40, GAME_10EN, H_CALL, 0x50CF40, 1,
        0x50D030, GAME_11EN, H_CALL, 0x50D030, 1,
        0x50CFC0, GAME_STEAM, H_CALL, 0x50CFC0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

/*
META_BEGIN(CParticle::AddParticle)
    static int address;
    static int global_address;
    static const int id = 0x50D140;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D140, 0x50D330, 0x50D2C0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x50D140, GAME_10EN, H_CALL, 0x50D140, 1,
        0x50D330, GAME_11EN, H_CALL, 0x50D330, 1,
        0x50D2C0, GAME_STEAM, H_CALL, 0x50D2C0, 1>;
    using def_t = CParticle*(tParticleType, CVector const&, CVector const&, CEntity *, float, int, int, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<tParticleType, CVector const&, CVector const&, CEntity*, float, int, int, int, int>, 0, 1, 2, 3, 4, 5, 6, 7, 8>;
META_END

META_BEGIN(CParticle::AddParticle)
    static int address;
    static int global_address;
    static const int id = 0x50D140;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D140, 0x50D330, 0x50D2C0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x50D140, GAME_10EN, H_CALL, 0x50D140, 1,
        0x50D330, GAME_11EN, H_CALL, 0x50D330, 1,
        0x50D2C0, GAME_STEAM, H_CALL, 0x50D2C0, 1>;
    using def_t = CParticle*(tParticleType, CVector const&, CVector const&, CEntity*, float, RwRGBA const&, int, int, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<tParticleType, CVector const&, CVector const&, CEntity*, float, RwRGBA const&, int, int, int, int>, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9>;
META_END
*/

META_BEGIN(CParticle::Update)
    static int address;
    static int global_address;
    static const int id = 0x50DCF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50DCF0, 0x50DEE0, 0x50DE70>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x50DCF0, GAME_10EN, H_CALL, 0x50DCF0, 1,
        0x50DEE0, GAME_11EN, H_CALL, 0x50DEE0, 1,
        0x50DE70, GAME_STEAM, H_CALL, 0x50DE70, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CParticle::Render)
    static int address;
    static int global_address;
    static const int id = 0x50EE20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50EE20, 0x50F010, 0x50EFA0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x50EE20, GAME_10EN, H_CALL, 0x50EE20, 1,
        0x50F010, GAME_11EN, H_CALL, 0x50F010, 1,
        0x50EFA0, GAME_STEAM, H_CALL, 0x50EFA0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CParticle::RemovePSystem)
    static int address;
    static int global_address;
    static const int id = 0x50F6E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50F6E0, 0x50F8D0, 0x50F860>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x50F6E0, GAME_10EN, H_CALL, 0x50F6E0, 1,
        0x50F8D0, GAME_11EN, H_CALL, 0x50F8D0, 1,
        0x50F860, GAME_STEAM, H_CALL, 0x50F860, 1>;
    using def_t = void(tParticleType);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<tParticleType>, 0>;
META_END

META_BEGIN(CParticle::RemoveParticle)
    static int address;
    static int global_address;
    static const int id = 0x50F720;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50F720, 0x50F910, 0x50F8A0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x50F720, GAME_10EN, H_CALL, 0x50F720, 1,
        0x50F910, GAME_11EN, H_CALL, 0x50F910, 1,
        0x50F8A0, GAME_STEAM, H_CALL, 0x50F8A0, 1>;
    using def_t = void(CParticle*, CParticle*, tParticleSystemData*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CParticle*, CParticle*, tParticleSystemData*>, 0, 1, 2>;
META_END

}
