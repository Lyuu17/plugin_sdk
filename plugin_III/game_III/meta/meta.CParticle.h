/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CParticle)
    static int address;
    static int global_address;
    static const int id = 0x43CD40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C410, 0x50C500, 0x50C490>;
    using refs_t = RefList<>;
    using def_t = CParticle *(CParticle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CParticle *>, 0>;
META_END

DTOR_META_BEGIN(CParticle)
    static int address;
    static int global_address;
    static const int id = 0x43CD30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C420, 0x50C510, 0x50C4A0>;
    using refs_t = RefList<>;
    using def_t = void(CParticle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CParticle *>, 0>;
META_END

META_BEGIN(CParticle::ReloadConfig)
    static int address;
    static int global_address;
    static const int id = 0x50C430;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C430, 0x50C520, 0x50C4B0>;
    using refs_t = RefList<>;
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
    using refs_t = RefList<>;
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
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const&, CVector const&, CEntity*, float, int, int, int, int))
    static int address;
    static int global_address;
    static const int id = 0x50D140;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D140, 0x50D330, 0x50D2C0>;
    using refs_t = RefList<>;
    using def_t = CParticle *(tParticleType, CVector const&, CVector const&, CEntity*, float, int, int, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<tParticleType,CVector const &,CVector const &,CEntity *,float,int,int,int,int>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN_OVERLOADED(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const&, CVector const&, CEntity*, float, RwRGBA const&, int, int, int, int))
    static int address;
    static int global_address;
    static const int id = 0x50D190;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D190, 0x50D380, 0x50D310>;
    using refs_t = RefList<>;
    using def_t = CParticle *(tParticleType, CVector const &, CVector const &, CEntity *, float, RwRGBA const *, int, int, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<tParticleType, CVector const&, CVector const&, CEntity*, float, RwRGBA const&, int, int, int, int>, 0,1,2,3,4,5,6,7,8,9>;
META_END

META_BEGIN(CParticle::Update)
    static int address;
    static int global_address;
    static const int id = 0x50DCF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50DCF0, 0x50DEE0, 0x50DE70>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<>;
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
    using refs_t = RefList<>;
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
    using refs_t = RefList<>;
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
    using refs_t = RefList<>;
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CParticle*, CParticle*, tParticleSystemData*>, 0, 1, 2>;
META_END

META_BEGIN(CParticle::AddJetExplosion)
    static int address;
    static int global_address;
    static const int id = 0x50F760;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50F760, 0x50F950, 0x50F8E0>;
    using refs_t = RefList<>;
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const&, float, float>, 0, 1, 2>;
META_END

META_BEGIN(CParticle::AddYardieDoorSmoke)
    static int address;
    static int global_address;
    static const int id = 0x50FAA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50FAA0, 0x50FC90, 0x50FC20>;
    using refs_t = RefList<>;
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const&, CMatrix const&>, 0, 1>;
META_END

template <>
SUPPORTED_10EN_11EN_STEAM inline CParticle *operator_new<CParticle>() {
    void *objData = operator new(sizeof(CParticle)); 
    CParticle *obj = reinterpret_cast<CParticle *>(objData);
    plugin::CallMethodDynGlobal<CParticle *>(ctor_gaddr(CParticle), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CParticle *operator_new_array<CParticle>(unsigned int objCount) {
    void *objData = operator new(sizeof(CParticle) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CParticle *objArray = reinterpret_cast<CParticle *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CParticle *>(ctor_gaddr(CParticle), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CParticle>(CParticle *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CParticle *>(dtor_gaddr(CParticle), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CParticle>(CParticle *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CParticle *>(dtor_gaddr(CParticle), &objArray[i]);
    operator delete(objData);
}

}
