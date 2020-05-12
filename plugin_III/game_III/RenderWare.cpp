/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"
#include "RenderWare.h"

RwGlobals *&RwEngineInstance = *(RwGlobals **)0x661228;

RsGlobalType &RsGlobal = *(RsGlobalType *)0x8F4360;

/* rwplcore.h */

RwFreeList* _rwFreeListCreate(RwInt32 entrySize, RwInt32 entriesPerBlock, RwInt32 alignment, const RwChar* fileCreate, RwUInt32 lineCreate) {
    return ((RwFreeList*(__cdecl *)(RwInt32, RwInt32, RwInt32, const RwChar*, RwUInt32))ADDRESS_BY_VERSION(0x5C1790, 0, 0))(entrySize, entriesPerBlock, alignment, fileCreate, lineCreate);
}

RwFreeList* RwFreeListCreateAndPreallocateSpace(RwInt32 entrySize, RwInt32 entriesPerBlock, RwInt32 alignment, RwInt32 numBlocksToPreallocate, RwFreeList* inPlaceSpaceForFreeListStruct) {
    return ((RwFreeList*(__cdecl *)(RwInt32, RwInt32, RwInt32, RwInt32, RwFreeList*))ADDRESS_BY_VERSION(0x5C1790, 0, 0))(entrySize, entriesPerBlock, alignment, numBlocksToPreallocate, inPlaceSpaceForFreeListStruct);
}

RwBool RwFreeListDestroy(RwFreeList* freelist) {
    return ((RwBool(__cdecl *)(RwFreeList*))ADDRESS_BY_VERSION(0x5C1720, 0, 0))(freelist);
}

RwInt32 RwFreeListPurge(RwFreeList* freelist) {
    return ((RwInt32(__cdecl *)(RwFreeList*))ADDRESS_BY_VERSION(0x5C19F0, 0, 0))(freelist);
}

RwFreeList* RwFreeListForAllUsed(RwFreeList* freelist, RwFreeListCallBack fpCallBack, void* pData) {
    return ((RwFreeList*(__cdecl *)(RwFreeList*, RwFreeListCallBack, void*))ADDRESS_BY_VERSION(0x5C1D40, 0, 0))(freelist, fpCallBack, pData);
}

RwInt32 RwFreeListPurgeAllFreeLists(void) {
    return ((RwInt32(__cdecl *)(void))ADDRESS_BY_VERSION(0x5C1B90, 0, 0))();
}

RwStream* RwStreamOpen(RwStreamType type, RwStreamAccessType accessType, const void* pData) {
    return ((RwStream*(__cdecl *)(RwStreamType, RwStreamAccessType, const void*))ADDRESS_BY_VERSION(0x5A3FE0, 0, 0))(type, accessType, pData);
}

RwBool RwStreamClose(RwStream* stream, void* pData) {
    return ((RwBool(__cdecl *)(RwStream*, void*))ADDRESS_BY_VERSION(0x5A3F10, 0, 0))(stream, pData);
}

RwUInt32 RwStreamRead(RwStream* stream, void* buffer, RwUInt32 length) {
    return ((RwUInt32(__cdecl *)(RwStream*, void*, RwUInt32))ADDRESS_BY_VERSION(0x5A3AD0, 0, 0))(stream, buffer, length);
}

RwStream* RwStreamWrite(RwStream* stream, const void* buffer, RwUInt32 length) {
    return ((RwStream*(__cdecl *)(RwStream*, const void*, RwUInt32))ADDRESS_BY_VERSION(0x5A3C30, 0, 0))(stream, buffer, length);
}

RwStream* RwStreamSkip(RwStream* stream, RwUInt32 offset) {
    return ((RwStream*(__cdecl *)(RwStream*, RwUInt32))ADDRESS_BY_VERSION(0x5A3DF0, 0, 0))(stream, offset);
}

RwInt32 _rwPluginRegistryAddPlugin(RwPluginRegistry* reg, RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwPluginRegistry*, RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5C35C0, 0, 0))(reg, size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 _rwPluginRegistryGetPluginOffset(const RwPluginRegistry* reg, RwUInt32 pluginID) {
    return ((RwInt32(__cdecl *)(const RwPluginRegistry*, RwUInt32))ADDRESS_BY_VERSION(0x5C3590, 0, 0))(reg, pluginID);
}

const RwPluginRegistry* _rwPluginRegistryInitObject(const RwPluginRegistry* reg, void* object) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, void*))ADDRESS_BY_VERSION(0x5C37F0, 0, 0))(reg, object);
}

const RwPluginRegistry* _rwPluginRegistryDeInitObject(const RwPluginRegistry* reg, void* object) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, void*))ADDRESS_BY_VERSION(0x5C3850, 0, 0))(reg, object);
}

const RwPluginRegistry* _rwPluginRegistryCopyObject(const RwPluginRegistry* reg, void* dstObject, const void* srcObject) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, void*, const void*))ADDRESS_BY_VERSION(0x5C3880, 0, 0))(reg, dstObject, srcObject);
}

RwInt32 _rwPluginRegistryAddPlgnStrmlwysCB(RwPluginRegistry* reg, RwUInt32 pluginID, RwPluginDataChunkAlwaysCallBack alwaysCB) {
    return ((RwInt32(__cdecl *)(RwPluginRegistry*, RwUInt32, RwPluginDataChunkAlwaysCallBack))ADDRESS_BY_VERSION(0x5C39C0, 0, 0))(reg, pluginID, alwaysCB);
}

RwInt32 _rwPluginRegistryAddPlgnStrmRightsCB(RwPluginRegistry* reg, RwUInt32 pluginID, RwPluginDataChunkRightsCallBack rightsCB) {
    return ((RwInt32(__cdecl *)(RwPluginRegistry*, RwUInt32, RwPluginDataChunkRightsCallBack))ADDRESS_BY_VERSION(0x5C39F0, 0, 0))(reg, pluginID, rightsCB);
}

const RwPluginRegistry* _rwPluginRegistryReadDataChunks(const RwPluginRegistry* reg, RwStream* stream, void* object) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, RwStream*, void*))ADDRESS_BY_VERSION(0x5C3A20, 0, 0))(reg, stream, object);
}

const RwPluginRegistry* _rwPluginRegistryWriteDataChunks(const RwPluginRegistry* reg, RwStream* stream, const void* object) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, RwStream*, const void*))ADDRESS_BY_VERSION(0x5C3BE0, 0, 0))(reg, stream, object);
}

const RwPluginRegistry* _rwPluginRegistrySkipDataChunks(const RwPluginRegistry* reg, RwStream* stream) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, RwStream*))ADDRESS_BY_VERSION(0x5C3CB0, 0, 0))(reg, stream);
}

RwInt32 _rwPluginRegistryGetSize(const RwPluginRegistry* reg, const void* object) {
    return ((RwInt32(__cdecl *)(const RwPluginRegistry*, const void*))ADDRESS_BY_VERSION(0x5C3BA0, 0, 0))(reg, object);
}

const RwPluginRegistry* _rwPluginRegistryInvokeRights(const RwPluginRegistry* reg, RwUInt32 id, void* obj, RwUInt32 extraData) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, RwUInt32, void*, RwUInt32))ADDRESS_BY_VERSION(0x5C3B50, 0, 0))(reg, id, obj, extraData);
}

RwBool RwMatrixDestroy(RwMatrix* mpMat) {
    return ((RwBool(__cdecl *)(RwMatrix*))ADDRESS_BY_VERSION(0x5A3300, 0, 0))(mpMat);
}

RwMatrix* RwMatrixCreate(void) {
    return ((RwMatrix*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A3330, 0, 0))();
}

RwMatrix* RwMatrixMultiply(RwMatrix* matrixOut, const RwMatrix* MatrixIn1, const RwMatrix* matrixIn2) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwMatrix*, const RwMatrix*))ADDRESS_BY_VERSION(0x5A28F0, 0, 0))(matrixOut, MatrixIn1, matrixIn2);
}

RwMatrix* RwMatrixTransform(RwMatrix* matrix, const RwMatrix* transform, RwOpCombineType combineOp) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwMatrix*, RwOpCombineType))ADDRESS_BY_VERSION(0x5A31C0, 0, 0))(matrix, transform, combineOp);
}

//RwMatrix* RwMatrixOrthoNormalize(RwMatrix* matrixOut, const RwMatrix* matrixIn) {
//    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwMatrix*))ADDRESS_BY_VERSION(0x643830, 0, 0))(matrixOut, matrixIn);
//}

RwMatrix* RwMatrixInvert(RwMatrix* matrixOut, const RwMatrix* matrixIn) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwMatrix*))ADDRESS_BY_VERSION(0x5A2C90, 0, 0))(matrixOut, matrixIn);
}

RwMatrix* RwMatrixScale(RwMatrix* matrix, const RwV3d* scale, RwOpCombineType combineOp) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwV3d*, RwOpCombineType))ADDRESS_BY_VERSION(0x5A2EE0, 0, 0))(matrix, scale, combineOp);
}

RwMatrix* RwMatrixTranslate(RwMatrix* matrix, const RwV3d* translation, RwOpCombineType combineOp) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwV3d*, RwOpCombineType))ADDRESS_BY_VERSION(0x5A3070, 0, 0))(matrix, translation, combineOp);
}

RwMatrix* RwMatrixRotate(RwMatrix* matrix, const RwV3d* axis, RwReal angle, RwOpCombineType combineOp) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwV3d*, RwReal, RwOpCombineType))ADDRESS_BY_VERSION(0x5A2BF0, 0, 0))(matrix, axis, angle, combineOp);
}

RwMatrix* RwMatrixRotateOneMinusCosineSine(RwMatrix* matrix, const RwV3d* unitAxis, RwReal oneMinusCosine, RwReal sine, RwOpCombineType combineOp) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwV3d*, RwReal, RwReal, RwOpCombineType))ADDRESS_BY_VERSION(0x5A2960, 0, 0))(matrix, unitAxis, oneMinusCosine, sine, combineOp);
}

RwMatrix* RwMatrixUpdate(RwMatrix* matrix) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*))ADDRESS_BY_VERSION(0x5A28E0, 0, 0))(matrix);
}

RwMatrix* RwMatrixOptimize(RwMatrix* matrix, const RwMatrixTolerance* tolerance) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwMatrixTolerance*))ADDRESS_BY_VERSION(0x5A2820, 0, 0))(matrix, tolerance);
}

RwReal _rwMatrixDeterminant(const RwMatrix* matrix) {
    return ((RwReal(__cdecl *)(const RwMatrix*))ADDRESS_BY_VERSION(0x5A2520, 0, 0))(matrix);
}

RwReal _rwMatrixNormalError(const RwMatrix* matrix) {
    return ((RwReal(__cdecl *)(const RwMatrix*))ADDRESS_BY_VERSION(0x5A25D0, 0, 0))(matrix);
}

RwReal _rwMatrixOrthogonalError(const RwMatrix* matrix) {
    return ((RwReal(__cdecl *)(const RwMatrix*))ADDRESS_BY_VERSION(0x5A2570, 0, 0))(matrix);
}

RwReal _rwMatrixIdentityError(const RwMatrix* matrix) {
    return ((RwReal(__cdecl *)(const RwMatrix*))ADDRESS_BY_VERSION(0x5A2660, 0, 0))(matrix);
}

//RwReal RwV3dNormalize(RwV3d* out, const RwV3d* in) {
//    return ((RwReal(__cdecl *)(RwV3d*, const RwV3d*))ADDRESS_BY_VERSION(0x646F20, 0, 0))(out, in);
//}

RwReal RwV3dLength(const RwV3d* in) {
    return ((RwReal(__cdecl *)(const RwV3d*))ADDRESS_BY_VERSION(0x5A36A0, 0, 0))(in);
}

RwV3d* RwV3dTransformPoints(RwV3d* pointsOut, const RwV3d* pointsIn, RwInt32 numPoints, const RwMatrix* matrix) {
    return ((RwV3d*(__cdecl *)(RwV3d*, const RwV3d*, RwInt32, const RwMatrix*))ADDRESS_BY_VERSION(0x5A37D0, 0, 0))(pointsOut, pointsIn, numPoints, matrix);
}

RwV3d* RwV3dTransformVectors(RwV3d* vectorsOut, const RwV3d* vectorsIn, RwInt32 numPoints, const RwMatrix* matrix) {
    return ((RwV3d*(__cdecl *)(RwV3d*, const RwV3d*, RwInt32, const RwMatrix*))ADDRESS_BY_VERSION(0x5A37E0, 0, 0))(vectorsOut, vectorsIn, numPoints, matrix);
}

RwReal _rwSqrt(const RwReal num) {
    return ((RwReal(__cdecl *)(const RwReal))ADDRESS_BY_VERSION(0x5A3710, 0, 0))(num);
}

RwReal _rwInvSqrt(const RwReal num) {
    return ((RwReal(__cdecl *)(const RwReal))ADDRESS_BY_VERSION(0x5A3770, 0, 0))(num);
}

RwReal RwIm2DGetNearScreenZ(void) {
    return ((RwReal(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A43A0, 0, 0))();
}

RwReal RwIm2DGetFarScreenZ(void) {
    return ((RwReal(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A43B0, 0, 0))();
}

RwBool RwRenderStateGet(RwRenderState state, void* value) {
    return ((RwBool(__cdecl *)(RwRenderState, void*))ADDRESS_BY_VERSION(0x5A4410, 0x5A46D0, 0))(state, value);
}

RwBool RwRenderStateSet(RwRenderState state, void* value) {
    return ((RwBool(__cdecl *)(RwRenderState, void*))ADDRESS_BY_VERSION(0x5A43C0, 0x5A4680, 0x5A5360))(state, value);
}

RwBool RwIm2DRenderLine(RwIm2DVertex* vertices, RwInt32 numVertices, RwInt32 vert1, RwInt32 vert2) {
    return ((RwBool(__cdecl *)(RwIm2DVertex*, RwInt32, RwInt32, RwInt32))ADDRESS_BY_VERSION(0x5A4420, 0, 0))(vertices, numVertices, vert1, vert2);
}

RwBool RwIm2DRenderPrimitive(RwPrimitiveType primType, RwIm2DVertex* vertices, RwInt32 numVertices) {
    return ((RwBool(__cdecl *)(RwPrimitiveType, RwIm2DVertex*, RwInt32))ADDRESS_BY_VERSION(0x5A4430, 0, 0))(primType, vertices, numVertices);
}

RwBool RwIm2DRenderIndexedPrimitive(RwPrimitiveType primType, RwIm2DVertex* vertices, RwInt32 numVertices, RwImVertexIndex* indices, RwInt32 numIndices) {
    return ((RwBool(__cdecl *)(RwPrimitiveType, RwIm2DVertex*, RwInt32, RwImVertexIndex*, RwInt32))ADDRESS_BY_VERSION(0x5A4440, 0, 0))(primType, vertices, numVertices, indices, numIndices);
}

RwBool RwEngineInit(const RwMemoryFunctions* memFuncs, RwUInt32 initFlags, RwUInt32 resArenaSize) {
    return ((RwBool(__cdecl *)(const RwMemoryFunctions*, RwUInt32, RwUInt32))ADDRESS_BY_VERSION(0x5A12D0, 0, 0))(memFuncs, initFlags, resArenaSize);
}

RwInt32 RwEngineRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor initCB, RwPluginObjectDestructor termCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor))ADDRESS_BY_VERSION(0x5A0DC0, 0, 0))(size, pluginID, initCB, termCB);
}

RwInt32 RwEngineGetPluginOffset(RwUInt32 pluginID) {
    return ((RwInt32(__cdecl *)(RwUInt32))ADDRESS_BY_VERSION(0x5A0DF0, 0, 0))(pluginID);
}

RwBool RwEngineOpen(RwEngineOpenParams* initParams) {
    return ((RwBool(__cdecl *)(RwEngineOpenParams*))ADDRESS_BY_VERSION(0x5A10E0, 0, 0))(initParams);
}

RwBool RwEngineStart(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A0FE0, 0, 0))();
}

RwBool RwEngineStop(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A0F90, 0, 0))();
}

RwBool RwEngineClose(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A1070, 0, 0))();
}

RwBool RwEngineTerm(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A1290, 0, 0))();
}

RwInt32 RwEngineGetNumSubSystems(void) {
    return ((RwInt32(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A0E10, 0, 0))();
}

RwSubSystemInfo* RwEngineGetSubSystemInfo(RwSubSystemInfo* subSystemInfo, RwInt32 subSystemIndex) {
    return ((RwSubSystemInfo*(__cdecl *)(RwSubSystemInfo*, RwInt32))ADDRESS_BY_VERSION(0x5A0E40, 0, 0))(subSystemInfo, subSystemIndex);
}

RwInt32 RwEngineGetCurrentSubSystem(void) {
    return ((RwInt32(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A0E70, 0, 0))();
}

RwBool RwEngineSetSubSystem(RwInt32 subSystemIndex) {
    return ((RwBool(__cdecl *)(RwInt32))ADDRESS_BY_VERSION(0x5A0EA0, 0, 0))(subSystemIndex);
}

RwInt32 RwEngineGetNumVideoModes(void) {
    return ((RwInt32(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A0ED0, 0, 0))();
}

RwVideoMode* RwEngineGetVideoModeInfo(RwVideoMode* modeinfo, RwInt32 modeIndex) {
    return ((RwVideoMode*(__cdecl *)(RwVideoMode*, RwInt32))ADDRESS_BY_VERSION(0x5A0F00, 0, 0))(modeinfo, modeIndex);
}

RwInt32 RwEngineGetCurrentVideoMode(void) {
    return ((RwInt32(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A0F30, 0, 0))();
}

RwBool RwEngineSetVideoMode(RwInt32 modeIndex) {
    return ((RwBool(__cdecl *)(RwInt32))ADDRESS_BY_VERSION(0x5A0F60, 0, 0))(modeIndex);
}

RwFileFunctions* RwOsGetFileInterface(void) {
    return ((RwFileFunctions*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5BF110, 0, 0))();
}

//RwError* RwErrorGet(RwError* code) {
//    return ((RwError*(__cdecl *)(RwError*))ADDRESS_BY_VERSION(0x669B40, 0, 0))(code);
//}

RwError* RwErrorSet(RwError* code) {
    return ((RwError*(__cdecl *)(RwError*))ADDRESS_BY_VERSION(0x5C3910, 0, 0))(code);
}

RwInt32 _rwerror(RwInt32 code, ...) {
    return code;
}

RwBool RwResourcesEmptyArena(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5C3360, 0, 0))();
}

RwResEntry* RwResourcesAllocateResEntry(void* owner, RwResEntry* ownerRef, RwInt32 size, RwResEntryDestroyNotify destroyNotify) {
    return ((RwResEntry*(__cdecl *)(void*, RwResEntry*, RwInt32, RwResEntryDestroyNotify))ADDRESS_BY_VERSION(0x5C3170, 0, 0))(owner, ownerRef, size, destroyNotify);
}

RwBool RwResourcesFreeResEntry(RwResEntry* entry) {
    return ((RwBool(__cdecl *)(RwResEntry*))ADDRESS_BY_VERSION(0x5C3080, 0, 0))(entry);
}

void _rwResourcesPurge(void) {
    ((void(__cdecl *)(void))ADDRESS_BY_VERSION(0x5C30F0, 0, 0))();
}

RwBool RwStreamFindChunk(RwStream* stream, RwUInt32 type, RwUInt32* lengthOut, RwUInt32* versionOut) {
    return ((RwBool(__cdecl *)(RwStream*, RwUInt32, RwUInt32*, RwUInt32*))ADDRESS_BY_VERSION(0x5AA540, 0, 0))(stream, type, lengthOut, versionOut);
}

RwStream* _rwStreamWriteVersionedChunkHeader(RwStream* stream, RwInt32 type, RwInt32 size, RwUInt32 version, RwUInt32 buildNum) {
    return ((RwStream*(__cdecl *)(RwStream*, RwInt32, RwInt32, RwUInt32, RwUInt32))ADDRESS_BY_VERSION(0x5AA4E0, 0, 0))(stream, type, size, version, buildNum);
}

RwStream* RwStreamWriteReal(RwStream* stream, const RwReal* reals, RwUInt32 numBytes) {
    return ((RwStream*(__cdecl *)(RwStream*, const RwReal*, RwUInt32))ADDRESS_BY_VERSION(0x5AA680, 0, 0))(stream, reals, numBytes);
}

RwStream* RwStreamWriteInt32(RwStream* stream, const RwInt32* ints, RwUInt32 numBytes) {
    return ((RwStream*(__cdecl *)(RwStream*, const RwInt32*, RwUInt32))ADDRESS_BY_VERSION(0x5AA720, 0, 0))(stream, ints, numBytes);
}

RwStream* RwStreamReadReal(RwStream* stream, RwReal* reals, RwUInt32 numBytes) {
    return ((RwStream*(__cdecl *)(RwStream*, RwReal*, RwUInt32))ADDRESS_BY_VERSION(0x5AA740, 0, 0))(stream, reals, numBytes);
}

RwStream* RwStreamReadInt32(RwStream* stream, RwInt32* ints, RwUInt32 numBytes) {
    return ((RwStream*(__cdecl *)(RwStream*, RwInt32*, RwUInt32))ADDRESS_BY_VERSION(0x5AA7B0, 0, 0))(stream, ints, numBytes);
}

void* RwMemLittleEndian32(void* mem, RwUInt32 size) {
    return ((void*(__cdecl *)(void*, RwUInt32))ADDRESS_BY_VERSION(0x5AA640, 0, 0))(mem, size);
}

void* RwMemNative32(void* mem, RwUInt32 size) {
    return ((void*(__cdecl *)(void*, RwUInt32))ADDRESS_BY_VERSION(0x5AA650, 0, 0))(mem, size);
}

//void* RwMemRealToFloat32(void* mem, RwUInt32 size) {
//    return ((void*(__cdecl *)(void*, RwUInt32))ADDRESS_BY_VERSION(0x64FBE0, 0, 0))(mem, size);
//}

void* RwMemFloat32ToReal(void* mem, RwUInt32 size) {
    return ((void*(__cdecl *)(void*, RwUInt32))ADDRESS_BY_VERSION(0x5AA660, 0, 0))(mem, size);
}

/* rwcore.h */

RxHeap* RxHeapCreate(RwUInt32 size) {
    return ((RxHeap*(__cdecl *)(RwUInt32))ADDRESS_BY_VERSION(0x5D1750, 0, 0))(size);
}

void RxHeapDestroy(RxHeap* heap) {
    ((void(__cdecl *)(RxHeap*))ADDRESS_BY_VERSION(0x5D16F0, 0, 0))(heap);
}

RwBool _rxHeapReset(RxHeap* heap) {
    return ((RwBool(__cdecl *)(RxHeap*))ADDRESS_BY_VERSION(0x5D1680, 0, 0))(heap);
}

void* RxHeapAlloc(RxHeap* heap, RwUInt32 size) {
    return ((void*(__cdecl *)(RxHeap*, RwUInt32))ADDRESS_BY_VERSION(0x5D1260, 0, 0))(heap, size);
}

void RxHeapFree(RxHeap* heap, void* block) {
    ((void(__cdecl *)(RxHeap*, void*))ADDRESS_BY_VERSION(0x5D1070, 0, 0))(heap, block);
}

RwBool _rxPipelineOpen(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5C27E0, 0, 0))();
}

RwBool _rxPipelineClose(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5C2780, 0, 0))();
}

RxPipeline* RxPipelineCreate(void) {
    return ((RxPipeline*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5C2E00, 0, 0))();
}

void _rxPipelineDestroy(RxPipeline* Pipeline) {
    ((void(__cdecl *)(RxPipeline*))ADDRESS_BY_VERSION(0x5C2E70, 0, 0))(Pipeline);
}

RxHeap* RxHeapGetGlobalHeap(void) {
    return ((RxHeap*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5C2AD0, 0, 0))();
}

RxPipeline* RxPipelineExecute(RxPipeline* pipeline, void* data, RwBool heapReset) {
    return ((RxPipeline*(__cdecl *)(RxPipeline*, void*, RwBool))ADDRESS_BY_VERSION(0x5C2D60, 0, 0))(pipeline, data, heapReset);
}

void _rxPacketDestroy(RxPacket* Packet) {
    ((void(__cdecl *)(RxPacket*))ADDRESS_BY_VERSION(0x5D9810, 0, 0))(Packet);
}

RxPipelineNode* RxPipelineFindNodeByName(RxPipeline* pipeline, const RwChar* name, RxPipelineNode* start, RwInt32* nodeIndex) {
    return ((RxPipelineNode*(__cdecl *)(RxPipeline*, const RwChar*, RxPipelineNode*, RwInt32*))ADDRESS_BY_VERSION(0x5D2B10, 0, 0))(pipeline, name, start, nodeIndex);
}

RxLockedPipe* RxPipelineLock(RxPipeline* pipeline) {
    return ((RxLockedPipe*(__cdecl *)(RxPipeline*))ADDRESS_BY_VERSION(0x5D29F0, 0, 0))(pipeline);
}

RxPipeline* RxLockedPipeUnlock(RxLockedPipe* pipeline) {
    return ((RxPipeline*(__cdecl *)(RxLockedPipe*))ADDRESS_BY_VERSION(0x5D1FA0, 0, 0))(pipeline);
}

RwRaster* RwRasterCreate(RwInt32 width, RwInt32 height, RwInt32 depth, RwInt32 flags) {
    return ((RwRaster*(__cdecl *)(RwInt32, RwInt32, RwInt32, RwInt32))ADDRESS_BY_VERSION(0x5AD930, 0, 0))(width, height, depth, flags);
}

RwBool RwRasterDestroy(RwRaster* raster) {
    return ((RwBool(__cdecl *)(RwRaster*))ADDRESS_BY_VERSION(0x5AD780, 0, 0))(raster);
}

RwInt32 RwRasterGetNumLevels(RwRaster* raster) {
    return ((RwInt32(__cdecl *)(RwRaster*))ADDRESS_BY_VERSION(0x5AD8C0, 0, 0))(raster);
}

RwRaster* RwRasterRenderFast(RwRaster* raster, RwInt32 x, RwInt32 y) {
    return ((RwRaster*(__cdecl *)(RwRaster*, RwInt32, RwInt32))ADDRESS_BY_VERSION(0x5AD710, 0, 0))(raster, x, y);
}

RwRaster* RwRasterRender(RwRaster* raster, RwInt32 x, RwInt32 y) {
    return ((RwRaster*(__cdecl *)(RwRaster*, RwInt32, RwInt32))ADDRESS_BY_VERSION(0x5AD750, 0, 0))(raster, x, y);
}

RwRaster* RwRasterPushContext(RwRaster* raster) {
    return ((RwRaster*(__cdecl *)(RwRaster*))ADDRESS_BY_VERSION(0x5AD7C0, 0, 0))(raster);
}

RwRaster* RwRasterPopContext(void) {
    return ((RwRaster*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5AD870, 0, 0))();
}

RwRaster* RwRasterGetCurrentContext(void) {
    return ((RwRaster*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5AD6D0, 0, 0))();
}

RwRaster* RwRasterShowRaster(RwRaster* raster, void* dev, RwUInt32 flags) {
    return ((RwRaster*(__cdecl *)(RwRaster*, void*, RwUInt32))ADDRESS_BY_VERSION(0x5AD900, 0, 0))(raster, dev, flags);
}

RwUInt8* RwRasterLock(RwRaster* raster, RwUInt8 level, RwInt32 lockMode) {
    return ((RwUInt8*(__cdecl *)(RwRaster*, RwUInt8, RwInt32))ADDRESS_BY_VERSION(0x5AD9D0, 0, 0))(raster, level, lockMode);
}

RwRaster* RwRasterUnlock(RwRaster* raster) {
    return ((RwRaster*(__cdecl *)(RwRaster*))ADDRESS_BY_VERSION(0x5AD6F0, 0, 0))(raster);
}

RwUInt8* RwRasterLockPalette(RwRaster* raster, RwInt32 lockMode) {
    return ((RwUInt8*(__cdecl *)(RwRaster*, RwInt32))ADDRESS_BY_VERSION(0x5AD840, 0, 0))(raster, lockMode);
}

RwInt32 RwRasterRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5AD810, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
}

RxRenderStateVector* RxRenderStateVectorSetDefaultRenderStateVector(RxRenderStateVector* rsvp) {
    return ((RxRenderStateVector*(__cdecl *)(RxRenderStateVector*))ADDRESS_BY_VERSION(0x5D9240, 0, 0))(rsvp);
}

RwImage* RwImageCreate(RwInt32 width, RwInt32 height, RwInt32 depth) {
    return ((RwImage*(__cdecl *)(RwInt32, RwInt32, RwInt32))ADDRESS_BY_VERSION(0x5A9120, 0, 0))(width, height, depth);
}

RwBool RwImageDestroy(RwImage* image) {
    return ((RwBool(__cdecl *)(RwImage*))ADDRESS_BY_VERSION(0x5A9180, 0, 0))(image);
}

RwImage* RwImageAllocatePixels(RwImage* image) {
    return ((RwImage*(__cdecl *)(RwImage*))ADDRESS_BY_VERSION(0x5A91E0, 0, 0))(image);
}

RwImage* RwImageFreePixels(RwImage* image) {
    return ((RwImage*(__cdecl *)(RwImage*))ADDRESS_BY_VERSION(0x5A92A0, 0, 0))(image);
}

RwImage* RwImageCopy(RwImage* destImage, const RwImage* sourceImage) {
    return ((RwImage*(__cdecl *)(RwImage*, const RwImage*))ADDRESS_BY_VERSION(0x5A9F50, 0, 0))(destImage, sourceImage);
}

RwImage* RwImageApplyMask(RwImage* image, const RwImage* mask) {
    return ((RwImage*(__cdecl *)(RwImage*, const RwImage*))ADDRESS_BY_VERSION(0x5A93A0, 0, 0))(image, mask);
}

RwImage* RwImageMakeMask(RwImage* image) {
    return ((RwImage*(__cdecl *)(RwImage*))ADDRESS_BY_VERSION(0x5A92D0, 0, 0))(image);
}

RwImage* RwImageReadMaskedImage(const RwChar* imageName, const RwChar* maskname) {
    return ((RwImage*(__cdecl *)(const RwChar*, const RwChar*))ADDRESS_BY_VERSION(0x5A9C10, 0, 0))(imageName, maskname);
}

RwImage* RwImageRead(const RwChar* imageName) {
    return ((RwImage*(__cdecl *)(const RwChar*))ADDRESS_BY_VERSION(0x5A9810, 0, 0))(imageName);
}

const RwChar* RwImageSetPath(const RwChar* path) {
    return ((const RwChar*(__cdecl *)(const RwChar*))ADDRESS_BY_VERSION(0x5A9750, 0, 0))(path);
}

RwBool RwImageSetGamma(RwReal gammaValue) {
    return ((RwBool(__cdecl *)(RwReal))ADDRESS_BY_VERSION(0x5AA2C0, 0, 0))(gammaValue);
}

RwImage* RwImageGammaCorrect(RwImage* image) {
    return ((RwImage*(__cdecl *)(RwImage*))ADDRESS_BY_VERSION(0x5AA130, 0, 0))(image);
}

const RwChar* RwImageFindFileType(const RwChar* imageName) {
    return ((const RwChar*(__cdecl *)(const RwChar*))ADDRESS_BY_VERSION(0x5A9B40, 0, 0))(imageName);
}

RwBool RwTextureSetMipmapping(RwBool enable) {
    return ((RwBool(__cdecl *)(RwBool))ADDRESS_BY_VERSION(0x5A7130, 0, 0))(enable);
}

RwBool RwTextureGetMipmapping(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A7120, 0, 0))();
}

RwBool RwTextureSetAutoMipmapping(RwBool enable) {
    return ((RwBool(__cdecl *)(RwBool))ADDRESS_BY_VERSION(0x5A7100, 0, 0))(enable);
}

RwBool RwTextureGetAutoMipmapping(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A7150, 0, 0))();
}

RwBool RwTextureRasterGenerateMipmaps(RwRaster* raster, RwImage* image) {
    return ((RwBool(__cdecl *)(RwRaster*, RwImage*))ADDRESS_BY_VERSION(0x5A7780, 0, 0))(raster, image);
}

RwTexture* RwTextureSetName(RwTexture* texture, const RwChar* name) {
    return ((RwTexture*(__cdecl *)(RwTexture*, const RwChar*))ADDRESS_BY_VERSION(0x5A73B0, 0, 0))(texture, name);
}

RwTexture* RwTextureSetMaskName(RwTexture* texture, const RwChar* maskName) {
    return ((RwTexture*(__cdecl *)(RwTexture*, const RwChar*))ADDRESS_BY_VERSION(0x5A7420, 0, 0))(texture, maskName);
}

RwTexDictionary* RwTexDictionaryCreate(void) {
    return ((RwTexDictionary*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A7160, 0, 0))();
}

RwBool RwTexDictionaryDestroy(RwTexDictionary* dict) {
    return ((RwBool(__cdecl *)(RwTexDictionary*))ADDRESS_BY_VERSION(0x5A7200, 0, 0))(dict);
}

RwTexture* RwTextureCreate(RwRaster* raster) {
    return ((RwTexture*(__cdecl *)(RwRaster*))ADDRESS_BY_VERSION(0x5A72D0, 0, 0))(raster);
}

RwBool RwTextureDestroy(RwTexture* texture) {
    return ((RwBool(__cdecl *)(RwTexture*))ADDRESS_BY_VERSION(0x5A7330, 0, 0))(texture);
}

//RwTexture* RwTextureSetRaster(RwTexture* texture, RwRaster* raster) {
//    return ((RwTexture*(__cdecl *)(RwTexture*, RwRaster*))ADDRESS_BY_VERSION(0x64DCC0, 0, 0))(texture, raster);
//}

RwTexture* RwTexDictionaryAddTexture(RwTexDictionary* dict, RwTexture* texture) {
    return ((RwTexture*(__cdecl *)(RwTexDictionary*, RwTexture*))ADDRESS_BY_VERSION(0x5A7490, 0, 0))(dict, texture);
}

RwTexture* RwTexDictionaryFindNamedTexture(RwTexDictionary* dict, const RwChar* name) {
    return ((RwTexture*(__cdecl *)(RwTexDictionary*, const RwChar*))ADDRESS_BY_VERSION(0x5A74D0, 0, 0))(dict, name);
}

RwTexture* RwTextureRead(const RwChar* name, const RwChar* maskName) {
    return ((RwTexture*(__cdecl *)(const RwChar*, const RwChar*))ADDRESS_BY_VERSION(0x5A7580, 0, 0))(name, maskName);
}

RwTexDictionary* RwTexDictionaryGetCurrent(void) {
    return ((RwTexDictionary*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A7570, 0, 0))();
}

RwTexDictionary* RwTexDictionarySetCurrent(RwTexDictionary* dict) {
    return ((RwTexDictionary*(__cdecl *)(RwTexDictionary*))ADDRESS_BY_VERSION(0x5A7550, 0, 0))(dict);
}

const RwTexDictionary* RwTexDictionaryForAllTextures(const RwTexDictionary* dict, RwTextureCallBack fpCallBack, void* pData) {
    return ((const RwTexDictionary*(__cdecl *)(const RwTexDictionary*, RwTextureCallBack, void*))ADDRESS_BY_VERSION(0x5A7290, 0, 0))(dict, fpCallBack, pData);
}

//RwInt32 RwTextureRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
//    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x64E310, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
//}

void* RwIm3DTransform(RwIm3DVertex* pVerts, RwUInt32 numVerts, RwMatrix* ltm, RwUInt32 flags) {
    return ((void*(__cdecl *)(RwIm3DVertex*, RwUInt32, RwMatrix*, RwUInt32))ADDRESS_BY_VERSION(0x5B6720, 0, 0))(pVerts, numVerts, ltm, flags);
}

RwBool RwIm3DEnd(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5B67F0, 0, 0))();
}

RwBool RwIm3DRenderLine(RwInt32 vert1, RwInt32 vert2) {
    return ((RwBool(__cdecl *)(RwInt32, RwInt32))ADDRESS_BY_VERSION(0x5B6980, 0, 0))(vert1, vert2);
}

RwBool RwIm3DRenderIndexedPrimitive(RwPrimitiveType primType, RwImVertexIndex* indices, RwInt32 numIndices) {
    return ((RwBool(__cdecl *)(RwPrimitiveType, RwImVertexIndex*, RwInt32))ADDRESS_BY_VERSION(0x5B6820, 0, 0))(primType, indices, numIndices);
}

RxPipeline* RwIm3DSetTransformPipeline(RxPipeline* pipeline) {
    return ((RxPipeline*(__cdecl *)(RxPipeline*))ADDRESS_BY_VERSION(0x5B6A50, 0, 0))(pipeline);
}

RxPipeline* RwIm3DSetRenderPipeline(RxPipeline* pipeline, RwPrimitiveType primType) {
    return ((RxPipeline*(__cdecl *)(RxPipeline*, RwPrimitiveType))ADDRESS_BY_VERSION(0x5B6AC0, 0, 0))(pipeline, primType);
}

RwBool RwD3D8DeviceSupportsDXTTexture(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5BAEB0, 0, 0))();
}

void* RwD3D8GetCurrentD3DDevice(void) {
    return ((void*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5BA590, 0, 0))();
}

void RwD3D8EngineSetRefreshRate(RwUInt32 refreshRate) {
    ((void(__cdecl *)(RwUInt32))ADDRESS_BY_VERSION(0x5B95D0, 0, 0))(refreshRate);
}

RwBool RwD3D8CameraAttachWindow(void* camera, void* hwnd) {
    return ((RwBool(__cdecl *)(void*, void*))ADDRESS_BY_VERSION(0x5B9640, 0, 0))(camera, hwnd);
}

RwBool RwD3D8SetVertexShader(RwUInt32 handle) {
    return ((RwBool(__cdecl *)(RwUInt32))ADDRESS_BY_VERSION(0x5BAF90, 0, 0))(handle);
}

RwBool RwD3D8SetPixelShader(RwUInt32 handle) {
    return ((RwBool(__cdecl *)(RwUInt32))ADDRESS_BY_VERSION(0x5BAFD0, 0, 0))(handle);
}

RwBool RwD3D8SetStreamSource(RwUInt32 streamNumber, void* streamData, RwUInt32 stride) {
    return ((RwBool(__cdecl *)(RwUInt32, void*, RwUInt32))ADDRESS_BY_VERSION(0x5BB010, 0, 0))(streamNumber, streamData, stride);
}

RwBool RwD3D8SetIndices(void* indexData, RwUInt32 baseVertexIndex) {
    return ((RwBool(__cdecl *)(void*, RwUInt32))ADDRESS_BY_VERSION(0x5BB060, 0, 0))(indexData, baseVertexIndex);
}

RwBool RwD3D8DrawIndexedPrimitive(RwUInt32 primitiveType, RwUInt32 minIndex, RwUInt32 numVertices, RwUInt32 startIndex, RwUInt32 numIndices) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, RwUInt32, RwUInt32, RwUInt32))ADDRESS_BY_VERSION(0x5BB0B0, 0, 0))(primitiveType, minIndex, numVertices, startIndex, numIndices);
}

RwBool RwD3D8DrawPrimitive(RwUInt32 primitiveType, RwUInt32 startVertex, RwUInt32 numVertices) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, RwUInt32))ADDRESS_BY_VERSION(0x5BB140, 0, 0))(primitiveType, startVertex, numVertices);
}

RwBool RwD3D8SetTexture(RwTexture* texture, RwUInt32 stage) {
    return ((RwBool(__cdecl *)(RwTexture*, RwUInt32))ADDRESS_BY_VERSION(0x5B53A0, 0, 0))(texture, stage);
}

RwBool RwD3D8SetRenderState(RwUInt32 state, RwUInt32 value) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32))ADDRESS_BY_VERSION(0x5B3CF0, 0, 0))(state, value);
}

RwBool RwD3D8SetTextureStageState(RwUInt32 stage, RwUInt32 type, RwUInt32 value) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, RwUInt32))ADDRESS_BY_VERSION(0x5B3D60, 0, 0))(stage, type, value);
}

RwBool RwD3D8SetTransform(RwUInt32 state, const void* matrix) {
    return ((RwBool(__cdecl *)(RwUInt32, const void*))ADDRESS_BY_VERSION(0x5BB1D0, 0, 0))(state, matrix);
}

void RwD3D8GetRenderState(RwUInt32 state, void* value) {
    ((void(__cdecl *)(RwUInt32, void*))ADDRESS_BY_VERSION(0x5B3D40, 0, 0))(state, value);
}

void RwD3D8GetTransform(RwUInt32 state, void* matrix) {
    ((void(__cdecl *)(RwUInt32, void*))ADDRESS_BY_VERSION(0x5BB310, 0, 0))(state, matrix);
}

RwBool RwD3D8SetTransformWorld(const RwMatrix* matrix) {
    return ((RwBool(__cdecl *)(const RwMatrix*))ADDRESS_BY_VERSION(0x5BB340, 0, 0))(matrix);
}

RwBool RwD3D8SetSurfaceProperties(const RwRGBA* color, const RwSurfaceProperties* surfaceProps, RwBool modulate) {
    return ((RwBool(__cdecl *)(const RwRGBA*, const RwSurfaceProperties*, RwBool))ADDRESS_BY_VERSION(0x5BB490, 0, 0))(color, surfaceProps, modulate);
}

RwBool RwD3D8SetLight(RwInt32 index, const void* light) {
    return ((RwBool(__cdecl *)(RwInt32, const void*))ADDRESS_BY_VERSION(0x5BB7A0, 0, 0))(index, light);
}

RwBool RwD3D8EnableLight(RwInt32 index, RwBool enable) {
    return ((RwBool(__cdecl *)(RwInt32, RwBool))ADDRESS_BY_VERSION(0x5BB890, 0, 0))(index, enable);
}

RwBool RwD3D8DynamicVertexBufferCreate(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, void*))ADDRESS_BY_VERSION(0x5BB9F0, 0, 0))(fvf, size, vertexBuffer);
}

void RwD3D8DynamicVertexBufferDestroy(void) {
    ((void(__cdecl *)(void))ADDRESS_BY_VERSION(0x5BBAE0, 0, 0))();
}

RwBool RwD3D8DynamicVertexBufferLock(RwUInt32 vertexSize, RwUInt32 numVertex, void* vertexBufferOut, void* vertexDataOut, RwUInt32* baseIndexOut) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, void*, void*, RwUInt32*))ADDRESS_BY_VERSION(0x5BBD30, 0, 0))(vertexSize, numVertex, vertexBufferOut, vertexDataOut, baseIndexOut);
}

RwBool RwD3D8DynamicVertexBufferUnlock(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5BBEB0, 0, 0))();
}

RwBool RwD3D8IndexBufferCreate(RwUInt32 numIndices, void* indexBuffer) {
    return ((RwBool(__cdecl *)(RwUInt32, void*))ADDRESS_BY_VERSION(0x5BBB10, 0, 0))(numIndices, indexBuffer);
}

RwBool RwD3D8CreatePixelShader(const RwUInt32* function, RwUInt32* handle) {
    return ((RwBool(__cdecl *)(const RwUInt32*, RwUInt32*))ADDRESS_BY_VERSION(0x5BBB40, 0, 0))(function, handle);
}

void RwD3D8DeletePixelShader(RwUInt32 handle) {
    ((void(__cdecl *)(RwUInt32))ADDRESS_BY_VERSION(0x5BBB90, 0, 0))(handle);
}

RwBool RwD3D8SetPixelShaderConstant(RwUInt32 registerAddress, const void* constantData, RwUInt32 constantCount) {
    return ((RwBool(__cdecl *)(RwUInt32, const void*, RwUInt32))ADDRESS_BY_VERSION(0x5BBC00, 0, 0))(registerAddress, constantData, constantCount);
}

const void* RwD3D8GetCaps(void) {
    return ((const void*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5BBC30, 0, 0))();
}

RwBool RwD3D8CameraIsSphereFullyInsideFrustum(const void* camera, const void* sphere) {
    return ((RwBool(__cdecl *)(const void*, const void*))ADDRESS_BY_VERSION(0x5BBC40, 0, 0))(camera, sphere);
}

RwBool RwD3D8CameraIsBBoxFullyInsideFrustum(const void* camera, const void* boundingBox) {
    return ((RwBool(__cdecl *)(const void*, const void*))ADDRESS_BY_VERSION(0x5BBCA0, 0, 0))(camera, boundingBox);
}

void _rwD3D8TexDictionaryEnableRasterFormatConversion(RwBool enable) {
    ((void(__cdecl *)(RwBool))ADDRESS_BY_VERSION(0x5BE280, 0, 0))(enable);
}

//RwBool _rwDeviceRegisterPlugin(void) {
//    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x65B5C0, 0, 0))();
//}

RwImage* RwImageResample(RwImage* dstImage, const RwImage* srcImage) {
    return ((RwImage*(__cdecl *)(RwImage*, const RwImage*))ADDRESS_BY_VERSION(0x5C72B0, 0, 0))(dstImage, srcImage);
}

RwImage* RwImageCreateResample(const RwImage* srcImage, RwInt32 width, RwInt32 height) {
    return ((RwImage*(__cdecl *)(const RwImage*, RwInt32, RwInt32))ADDRESS_BY_VERSION(0x5C7B30, 0, 0))(srcImage, width, height);
}

RwImage* RwImageSetFromRaster(RwImage* image, RwRaster* raster) {
    return ((RwImage*(__cdecl *)(RwImage*, RwRaster*))ADDRESS_BY_VERSION(0x5BBF10, 0, 0))(image, raster);
}

RwRaster* RwRasterSetFromImage(RwRaster* raster, RwImage* image) {
    return ((RwRaster*(__cdecl *)(RwRaster*, RwImage*))ADDRESS_BY_VERSION(0x5BBF50, 0, 0))(raster, image);
}

RwImage* RwImageFindRasterFormat(RwImage* ipImage, RwInt32 nRasterType, RwInt32* npWidth, RwInt32* npHeight, RwInt32* npDepth, RwInt32* npFormat) {
    return ((RwImage*(__cdecl *)(RwImage*, RwInt32, RwInt32*, RwInt32*, RwInt32*, RwInt32*))ADDRESS_BY_VERSION(0x5BBF80, 0, 0))(ipImage, nRasterType, npWidth, npHeight, npDepth, npFormat);
}

RwFrame* RwFrameForAllObjects(RwFrame* frame, RwObjectCallBack callBack, void* data) {
    return ((RwFrame*(__cdecl *)(RwFrame*, RwObjectCallBack, void*))ADDRESS_BY_VERSION(0x5A2340, 0, 0))(frame, callBack, data);
}

RwFrame* RwFrameTranslate(RwFrame* frame, const RwV3d* v, RwOpCombineType combine) {
    return ((RwFrame*(__cdecl *)(RwFrame*, const RwV3d*, RwOpCombineType))ADDRESS_BY_VERSION(0x5A2000, 0, 0))(frame, v, combine);
}

RwFrame* RwFrameRotate(RwFrame* frame, const RwV3d* axis, RwReal angle, RwOpCombineType combine) {
    return ((RwFrame*(__cdecl *)(RwFrame*, const RwV3d*, RwReal, RwOpCombineType))ADDRESS_BY_VERSION(0x5A21E0, 0, 0))(frame, axis, angle, combine);
}

RwFrame* RwFrameScale(RwFrame* frame, const RwV3d* v, RwOpCombineType combine) {
    return ((RwFrame*(__cdecl *)(RwFrame*, const RwV3d*, RwOpCombineType))ADDRESS_BY_VERSION(0x5A20A0, 0, 0))(frame, v, combine);
}

RwFrame* RwFrameTransform(RwFrame* frame, const RwMatrix* m, RwOpCombineType combine) {
    return ((RwFrame*(__cdecl *)(RwFrame*, const RwMatrix*, RwOpCombineType))ADDRESS_BY_VERSION(0x5A2140, 0, 0))(frame, m, combine);
}

RwFrame* RwFrameOrthoNormalize(RwFrame* frame) {
    return ((RwFrame*(__cdecl *)(RwFrame*))ADDRESS_BY_VERSION(0x5A2280, 0, 0))(frame);
}

RwBool RwFrameDestroyHierarchy(RwFrame* frame) {
    return ((RwBool(__cdecl *)(RwFrame*))ADDRESS_BY_VERSION(0x5A1BF0, 0, 0))(frame);
}

RwFrame* RwFrameForAllChildren(RwFrame* frame, RwFrameCallBack callBack, void* data) {
    return ((RwFrame*(__cdecl *)(RwFrame*, RwFrameCallBack, void*))ADDRESS_BY_VERSION(0x5A1FC0, 0, 0))(frame, callBack, data);
}

RwFrame* RwFrameRemoveChild(RwFrame* child) {
    return ((RwFrame*(__cdecl *)(RwFrame*))ADDRESS_BY_VERSION(0x5A1ED0, 0, 0))(child);
}

RwFrame* RwFrameAddChild(RwFrame* parent, RwFrame* child) {
    return ((RwFrame*(__cdecl *)(RwFrame*, RwFrame*))ADDRESS_BY_VERSION(0x5A1D00, 0, 0))(parent, child);
}

RwMatrix* RwFrameGetLTM(RwFrame* frame) {
    return ((RwMatrix*(__cdecl *)(RwFrame*))ADDRESS_BY_VERSION(0x5A1CE0, 0, 0))(frame);
}

RwFrame* RwFrameUpdateObjects(RwFrame* frame) {
    return ((RwFrame*(__cdecl *)(RwFrame*))ADDRESS_BY_VERSION(0x5A1C60, 0, 0))(frame);
}

RwFrame* RwFrameCreate(void) {
    return ((RwFrame*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A1A00, 0, 0))();
}

RwBool RwFrameDestroy(RwFrame* frame) {
    return ((RwBool(__cdecl *)(RwFrame*))ADDRESS_BY_VERSION(0x5A1A30, 0, 0))(frame);
}

RwBool RwFrameDirty(const RwFrame* frame) {
    return ((RwBool(__cdecl *)(const RwFrame*))ADDRESS_BY_VERSION(0x5A1930, 0, 0))(frame);
}

RwInt32 RwFrameRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5A2380, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
}

RwFrame* _rwFrameCloneAndLinkClones(RwFrame* root) {
    return ((RwFrame*(__cdecl *)(RwFrame*))ADDRESS_BY_VERSION(0x5A1690, 0, 0))(root);
}

RwFrame* _rwFramePurgeClone(RwFrame* root) {
    return ((RwFrame*(__cdecl *)(RwFrame*))ADDRESS_BY_VERSION(0x5A1880, 0, 0))(root);
}

void _rwObjectHasFrameSetFrame(void* object, RwFrame* frame) {
    ((void(__cdecl *)(void*, RwFrame*))ADDRESS_BY_VERSION(0x5BC950, 0, 0))(object, frame);
}

void _rwObjectHasFrameReleaseFrame(void) {
    ((void(__cdecl *)(void))ADDRESS_BY_VERSION(0x5BC9A0, 0, 0))();
}

//RwInt32 RwTextureRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
//    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))ADDRESS_BY_VERSION(0x650480, 0, 0))(pluginID, readCB, writeCB, getSizeCB);
//}

RwUInt32 RwTextureStreamGetSize(const RwTexture* texture) {
    return ((RwUInt32(__cdecl *)(const RwTexture*))ADDRESS_BY_VERSION(0x5AA800, 0, 0))(texture);
}

RwTexture* RwTextureStreamRead(RwStream* stream) {
    return ((RwTexture*(__cdecl *)(RwStream*))ADDRESS_BY_VERSION(0x5AAA40, 0, 0))(stream);
}

const RwTexture* RwTextureStreamWrite(const RwTexture* texture, RwStream* stream) {
    return ((const RwTexture*(__cdecl *)(const RwTexture*, RwStream*))ADDRESS_BY_VERSION(0x5AA870, 0, 0))(texture, stream);
}

//RwTexDictionary* RwTexDictionaryStreamRead(RwStream* stream) {
//    return ((RwTexDictionary*(__cdecl *)(RwStream*))ADDRESS_BY_VERSION(0x61E710, 0, 0))(stream);
//}

const RwTexDictionary* RwTexDictionaryStreamWrite(const RwTexDictionary* texDict, RwStream* stream) {
    return ((const RwTexDictionary*(__cdecl *)(const RwTexDictionary*, RwStream*))ADDRESS_BY_VERSION(0x5AB020, 0, 0))(texDict, stream);
}

RwInt32 RwFrameRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))ADDRESS_BY_VERSION(0x5BBFF0, 0, 0))(pluginID, readCB, writeCB, getSizeCB);
}

rwFrameList* _rwFrameListDeinitialize(rwFrameList* frameList) {
    return ((rwFrameList*(__cdecl *)(rwFrameList*))ADDRESS_BY_VERSION(0x5BC020, 0, 0))(frameList);
}

rwFrameList* _rwFrameListStreamRead(RwStream* stream, rwFrameList* fl) {
    return ((rwFrameList*(__cdecl *)(RwStream*, rwFrameList*))ADDRESS_BY_VERSION(0x5BC050, 0, 0))(stream, fl);
}

RwBBox* RwBBoxCalculate(RwBBox* boundBox, const RwV3d* verts, RwInt32 numVerts) {
    return ((RwBBox*(__cdecl *)(RwBBox*, const RwV3d*, RwInt32))ADDRESS_BY_VERSION(0x5C5570, 0, 0))(boundBox, verts, numVerts);
}

RwCamera* RwCameraBeginUpdate(RwCamera* camera) {
    return ((RwCamera*(__cdecl *)(RwCamera*))ADDRESS_BY_VERSION(0x5A5030, 0, 0))(camera);
}

RwCamera* RwCameraEndUpdate(RwCamera* camera) {
    return ((RwCamera*(__cdecl *)(RwCamera*))ADDRESS_BY_VERSION(0x5A5020, 0, 0))(camera);
}

RwCamera* RwCameraClear(RwCamera* camera, RwRGBA* colour, RwInt32 clearMode) {
    return ((RwCamera*(__cdecl *)(RwCamera*, RwRGBA*, RwInt32))ADDRESS_BY_VERSION(0x5A51E0, 0, 0))(camera, colour, clearMode);
}

RwCamera* RwCameraShowRaster(RwCamera* camera, void* pDev, RwUInt32 flags) {
    return ((RwCamera*(__cdecl *)(RwCamera*, void*, RwUInt32))ADDRESS_BY_VERSION(0x5A5210, 0, 0))(camera, pDev, flags);
}

RwBool RwCameraDestroy(RwCamera* camera) {
    return ((RwBool(__cdecl *)(RwCamera*))ADDRESS_BY_VERSION(0x5A5320, 0, 0))(camera);
}

RwCamera* RwCameraCreate(void) {
    return ((RwCamera*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5A5360, 0, 0))();
}

RwCamera* RwCameraSetViewOffset(RwCamera* camera, const RwV2d* offset) {
    return ((RwCamera*(__cdecl *)(RwCamera*, const RwV2d*))ADDRESS_BY_VERSION(0x5A5040, 0, 0))(camera, offset);
}

RwCamera* RwCameraSetViewWindow(RwCamera* camera, const RwV2d* viewWindow) {
    return ((RwCamera*(__cdecl *)(RwCamera*, const RwV2d*))ADDRESS_BY_VERSION(0x5A52B0, 0, 0))(camera, viewWindow);
}

RwCamera* RwCameraSetProjection(RwCamera* camera, RwCameraProjection projection) {
    return ((RwCamera*(__cdecl *)(RwCamera*, RwCameraProjection))ADDRESS_BY_VERSION(0x5A5240, 0, 0))(camera, projection);
}

RwCamera* RwCameraSetNearClipPlane(RwCamera* camera, RwReal nearClip) {
    return ((RwCamera*(__cdecl *)(RwCamera*, RwReal))ADDRESS_BY_VERSION(0x5A5070, 0, 0))(camera, nearClip);
}

RwCamera* RwCameraSetFarClipPlane(RwCamera* camera, RwReal farClip) {
    return ((RwCamera*(__cdecl *)(RwCamera*, RwReal))ADDRESS_BY_VERSION(0x5A5140, 0, 0))(camera, farClip);
}

RwInt32 RwCameraRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5A52F0, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
}

RwFrustumTestResult RwCameraFrustumTestSphere(const RwCamera* camera, const RwSphere* sphere) {
    return ((RwFrustumTestResult(__cdecl *)(const RwCamera*, const RwSphere*))ADDRESS_BY_VERSION(0x5A5170, 0, 0))(camera, sphere);
}

RwCamera* RwCameraStreamRead(RwStream* stream) {
    return ((RwCamera*(__cdecl *)(RwStream*))ADDRESS_BY_VERSION(0x5C3D30, 0, 0))(stream);
}

/* rpworld.h */

RxNodeDefinition* RxNodeDefinitionGetD3D8WorldSectorAllInOne(void) {
    return ((RxNodeDefinition*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5DAAC0, 0, 0))();
}

RxNodeDefinition* RxNodeDefinitionGetD3D8AtomicAllInOne(void) {
    return ((RxNodeDefinition*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5DC500, 0, 0))();
}

RwBool _rxD3D8VertexBufferManagerCreate(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer, RwUInt32* baseIndex) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, void*, RwUInt32*))ADDRESS_BY_VERSION(0x5DAC30, 0, 0))(fvf, size, vertexBuffer, baseIndex);
}

void _rxD3D8VertexBufferManagerDestroy(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer, RwUInt32 baseIndex) {
    ((void(__cdecl *)(RwUInt32, RwUInt32, void*, RwUInt32))ADDRESS_BY_VERSION(0x5DAEB0, 0, 0))(fvf, size, vertexBuffer, baseIndex);
}

RpMaterial* RpMaterialCreate(void) {
    return ((RpMaterial*(__cdecl *)(void))ADDRESS_BY_VERSION(0x5ADC30, 0, 0))();
}

RwBool RpMaterialDestroy(RpMaterial* material) {
    return ((RwBool(__cdecl *)(RpMaterial*))ADDRESS_BY_VERSION(0x5ADCB0, 0, 0))(material);
}

RpMaterial* RpMaterialSetTexture(RpMaterial* material, RwTexture* texture) {
    return ((RpMaterial*(__cdecl *)(RpMaterial*, RwTexture*))ADDRESS_BY_VERSION(0x5ADD10, 0, 0))(material, texture);
}

RwInt32 RpMaterialRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5ADD40, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpMaterialRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))ADDRESS_BY_VERSION(0x5ADD70, 0, 0))(pluginID, readCB, writeCB, getSizeCB);
}

RpMaterial* RpMaterialStreamRead(RwStream* stream) {
    return ((RpMaterial*(__cdecl *)(RwStream*))ADDRESS_BY_VERSION(0x5ADDA0, 0, 0))(stream);
}

RpMaterialList* _rpMaterialListInitialize(RpMaterialList* matList) {
    return ((RpMaterialList*(__cdecl *)(RpMaterialList*))ADDRESS_BY_VERSION(0x5C8B70, 0, 0))(matList);
}

RpMaterialList* _rpMaterialListDeinitialize(RpMaterialList* matList) {
    return ((RpMaterialList*(__cdecl *)(RpMaterialList*))ADDRESS_BY_VERSION(0x5C8B10, 0, 0))(matList);
}

RpMaterial* _rpMaterialListGetMaterial(const RpMaterialList* matList, RwInt32 matIndex) {
    return ((RpMaterial*(__cdecl *)(const RpMaterialList*, RwInt32))ADDRESS_BY_VERSION(0x5C8B80, 0, 0))(matList, matIndex);
}

RwInt32 _rpMaterialListAppendMaterial(RpMaterialList* matList, RpMaterial* material) {
    return ((RwInt32(__cdecl *)(RpMaterialList*, RpMaterial*))ADDRESS_BY_VERSION(0x5C8B90, 0, 0))(matList, material);
}

RwInt32 _rpMaterialListFindMaterialIndex(const RpMaterialList* matList, const RpMaterial* material) {
    return ((RwInt32(__cdecl *)(const RpMaterialList*, const RpMaterial*))ADDRESS_BY_VERSION(0x5C8C50, 0, 0))(matList, material);
}

RpMaterialList* _rpMaterialListStreamRead(RwStream* stream, RpMaterialList* matList) {
    return ((RpMaterialList*(__cdecl *)(RwStream*, RpMaterialList*))ADDRESS_BY_VERSION(0x5C8C80, 0, 0))(stream, matList);
}

void* _rpMeshOpen(void* instance, RwInt32 offset, RwInt32 size) {
    return ((void*(__cdecl *)(void*, RwInt32, RwInt32))ADDRESS_BY_VERSION(0x5C9020, 0, 0))(instance, offset, size);
}

void* _rpMeshClose(void* instance, RwInt32 offset, RwInt32 size) {
    return ((void*(__cdecl *)(void*, RwInt32, RwInt32))ADDRESS_BY_VERSION(0x5C8FF0, 0, 0))(instance, offset, size);
}

RpBuildMesh* _rpBuildMeshCreate(RwUInt32 bufferSize) {
    return ((RpBuildMesh*(__cdecl *)(RwUInt32))ADDRESS_BY_VERSION(0x5C9140, 0, 0))(bufferSize);
}

RwBool _rpBuildMeshDestroy(RpBuildMesh* mesh) {
    return ((RwBool(__cdecl *)(RpBuildMesh*))ADDRESS_BY_VERSION(0x5C9220, 0, 0))(mesh);
}

RwBool _rpMeshDestroy(RpMeshHeader* mesh) {
    return ((RwBool(__cdecl *)(RpMeshHeader*))ADDRESS_BY_VERSION(0x5C9260, 0, 0))(mesh);
}

RpBuildMesh* _rpBuildMeshAddTriangle(RpBuildMesh* mesh, RpMaterial* material, RwInt32 vert1, RwInt32 vert2, RwInt32 vert3) {
    return ((RpBuildMesh*(__cdecl *)(RpBuildMesh*, RpMaterial*, RwInt32, RwInt32, RwInt32))ADDRESS_BY_VERSION(0x5C92A0, 0, 0))(mesh, material, vert1, vert2, vert3);
}

RpMeshHeader* _rpMeshHeaderForAllMeshes(RpMeshHeader* meshHeader, RpMeshCallBack fpCallBack, void* pData) {
    return ((RpMeshHeader*(__cdecl *)(RpMeshHeader*, RpMeshCallBack, void*))ADDRESS_BY_VERSION(0x5C9380, 0, 0))(meshHeader, fpCallBack, pData);
}

RwStream* _rpMeshWrite(const RpMeshHeader* meshHeader, const void* object, RwStream* stream, const RpMaterialList* matList) {
    return ((RwStream*(__cdecl *)(const RpMeshHeader*, const void*, RwStream*, const RpMaterialList*))ADDRESS_BY_VERSION(0x5C93C0, 0, 0))(meshHeader, object, stream, matList);
}

RpMeshHeader* _rpMeshRead(RwStream* stream, const void* object, const RpMaterialList* matList) {
    return ((RpMeshHeader*(__cdecl *)(RwStream*, const void*, const RpMaterialList*))ADDRESS_BY_VERSION(0x5C9510, 0, 0))(stream, object, matList);
}

RwInt32 _rpMeshSize(const RpMeshHeader* meshHeader, const void* object) {
    return ((RwInt32(__cdecl *)(const RpMeshHeader*, const void*))ADDRESS_BY_VERSION(0x5C96E0, 0, 0))(meshHeader, object);
}

RpMeshHeader* _rpMeshHeaderCreate(RwUInt32 size) {
    return ((RpMeshHeader*(__cdecl *)(RwUInt32))ADDRESS_BY_VERSION(0x5C8FE0, 0, 0))(size);
}

RwInt32 RpWorldSectorRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5CB2B0, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpWorldSectorRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))ADDRESS_BY_VERSION(0x5CB2E0, 0, 0))(pluginID, readCB, writeCB, getSizeCB);
}

RpMeshHeader* RpBuildMeshGenerateDefaultTriStrip(RpBuildMesh* buildmesh, void* data) {
    return ((RpMeshHeader*(__cdecl *)(RpBuildMesh*, void*))ADDRESS_BY_VERSION(0x5C9730, 0, 0))(buildmesh, data);
}

RpMeshHeader* _rpTriListMeshGenerate(RpBuildMesh* buildMesh, void* data) {
    return ((RpMeshHeader*(__cdecl *)(RpBuildMesh*, void*))ADDRESS_BY_VERSION(0x5CAE10, 0, 0))(buildMesh, data);
}

RpMeshHeader* _rpMeshOptimise(RpBuildMesh* buildmesh, RwUInt32 flags) {
    return ((RpMeshHeader*(__cdecl *)(RpBuildMesh*, RwUInt32))ADDRESS_BY_VERSION(0x5CB230, 0, 0))(buildmesh, flags);
}

RpLight* RpLightCreate(RwInt32 type) {
    return ((RpLight*(__cdecl *)(RwInt32))ADDRESS_BY_VERSION(0x5BC7C0, 0, 0))(type);
}

RwBool RpLightDestroy(RpLight* light) {
    return ((RwBool(__cdecl *)(RpLight*))ADDRESS_BY_VERSION(0x5BC780, 0, 0))(light);
}

RpLight* RpLightSetRadius(RpLight* light, RwReal radius) {
    return ((RpLight*(__cdecl *)(RpLight*, RwReal))ADDRESS_BY_VERSION(0x5BC300, 0, 0))(light, radius);
}

RpLight* RpLightSetColor(RpLight* light, const RwRGBAReal* color) {
    return ((RpLight*(__cdecl *)(RpLight*, const RwRGBAReal*))ADDRESS_BY_VERSION(0x5BC320, 0, 0))(light, color);
}

RwReal RpLightGetConeAngle(const RpLight* light) {
    return ((RwReal(__cdecl *)(const RpLight*))ADDRESS_BY_VERSION(0x5BC370, 0, 0))(light);
}

RpLight* RpLightStreamRead(RwStream* stream) {
    return ((RpLight*(__cdecl *)(RwStream*))ADDRESS_BY_VERSION(0x5BC5E0, 0, 0))(stream);
}

RwInt32 RpLightRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5BC5B0, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
}

RwBool _rwD3D8LightsOpen(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5D9C90, 0, 0))();
}

RwBool _rwD3D8LightsGlobalEnable(RpLightFlag flags) {
    return ((RwBool(__cdecl *)(RpLightFlag))ADDRESS_BY_VERSION(0x5D9F80, 0, 0))(flags);
}

RwBool _rwD3D8LightLocalEnable(RpLight* light) {
    return ((RwBool(__cdecl *)(RpLight*))ADDRESS_BY_VERSION(0x5DA210, 0, 0))(light);
}

void _rwD3D8LightsEnable(RwBool enable, RwUInt32 type) {
    ((void(__cdecl *)(RwBool, RwUInt32))ADDRESS_BY_VERSION(0x5DA450, 0, 0))(enable, type);
}

void _rwD3D8LightsClose(void) {
    ((void(__cdecl *)(void))ADDRESS_BY_VERSION(0x5D9EF0, 0, 0))();
}

const RpMorphTarget* RpMorphTargetCalcBoundingSphere(const RpMorphTarget* morphTarget, RwSphere* boundingSphere) {
    return ((const RpMorphTarget*(__cdecl *)(const RpMorphTarget*, RwSphere*))ADDRESS_BY_VERSION(0x5AC890, 0, 0))(morphTarget, boundingSphere);
}

RwInt32 RpGeometryAddMorphTargets(RpGeometry* geometry, RwInt32 mtcount) {
    return ((RwInt32(__cdecl *)(RpGeometry*, RwInt32))ADDRESS_BY_VERSION(0x5AC9A0, 0, 0))(geometry, mtcount);
}

//RwInt32 RpGeometryAddMorphTarget(RpGeometry* geometry) {
//    return ((RwInt32(__cdecl *)(RpGeometry*))ADDRESS_BY_VERSION(0x64CBF0, 0, 0))(geometry);
//}

const RpGeometry* RpGeometryTriangleSetVertexIndices(const RpGeometry* geometry, RpTriangle* triangle, RwUInt16 vert1, RwUInt16 vert2, RwUInt16 vert3) {
    return ((const RpGeometry*(__cdecl *)(const RpGeometry*, RpTriangle*, RwUInt16, RwUInt16, RwUInt16))ADDRESS_BY_VERSION(0x5ACB60, 0, 0))(geometry, triangle, vert1, vert2, vert3);
}

RpGeometry* RpGeometryTriangleSetMaterial(RpGeometry* geometry, RpTriangle* triangle, RpMaterial* material) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*, RpTriangle*, RpMaterial*))ADDRESS_BY_VERSION(0x5ACB90, 0, 0))(geometry, triangle, material);
}

RpGeometry* RpGeometryForAllMaterials(RpGeometry* geometry, RpMaterialCallBack fpCallBack, void* pData) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*, RpMaterialCallBack, void*))ADDRESS_BY_VERSION(0x5ACBF0, 0, 0))(geometry, fpCallBack, pData);
}

RpGeometry* RpGeometryLock(RpGeometry* geometry, RwInt32 lockMode) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*, RwInt32))ADDRESS_BY_VERSION(0x5ACC30, 0, 0))(geometry, lockMode);
}

RpGeometry* RpGeometryUnlock(RpGeometry* geometry) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*))ADDRESS_BY_VERSION(0x5ACC60, 0, 0))(geometry);
}

RpGeometry* RpGeometryCreate(RwInt32 numVert, RwInt32 numTriangles, RwUInt32 format) {
    return ((RpGeometry*(__cdecl *)(RwInt32, RwInt32, RwUInt32))ADDRESS_BY_VERSION(0x5ACD10, 0, 0))(numVert, numTriangles, format);
}

RwBool RpGeometryDestroy(RpGeometry* geometry) {
    return ((RwBool(__cdecl *)(RpGeometry*))ADDRESS_BY_VERSION(0x5ACF50, 0, 0))(geometry);
}

RwInt32 RpGeometryRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5ACFF0, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpGeometryRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))ADDRESS_BY_VERSION(0x5AD020, 0, 0))(pluginID, readCB, writeCB, getSizeCB);
}

RpGeometry* RpGeometryStreamRead(RwStream* stream) {
    return ((RpGeometry*(__cdecl *)(RwStream*))ADDRESS_BY_VERSION(0x5AD050, 0, 0))(stream);
}

void _rpAtomicResyncInterpolatedSphere(RpAtomic* atomic) {
    ((void(__cdecl *)(RpAtomic*))ADDRESS_BY_VERSION(0x59E6C0, 0, 0))(atomic);
}

const RwSphere* RpAtomicGetWorldBoundingSphere(RpAtomic* atomic) {
    return ((const RwSphere*(__cdecl *)(RpAtomic*))ADDRESS_BY_VERSION(0x59E800, 0, 0))(atomic);
}

RpClump* RpClumpForAllAtomics(RpClump* clump, RpAtomicCallBack callback, void* pData) {
    return ((RpClump*(__cdecl *)(RpClump*, RpAtomicCallBack, void*))ADDRESS_BY_VERSION(0x59EDD0, 0, 0))(clump, callback, pData);
}

RpClump* RpClumpForAllLights(RpClump* clump, RpLightCallBack callback, void* pData) {
    return ((RpClump*(__cdecl *)(RpClump*, RpLightCallBack, void*))ADDRESS_BY_VERSION(0x59EE60, 0, 0))(clump, callback, pData);
}

RpClump* RpClumpForAllCameras(RpClump* clump, RwCameraCallBack callback, void* pData) {
    return ((RpClump*(__cdecl *)(RpClump*, RwCameraCallBack, void*))ADDRESS_BY_VERSION(0x59EE10, 0, 0))(clump, callback, pData);
}

RpAtomic* RpAtomicSetFrame(RpAtomic* atomic, RwFrame* frame) {
    return ((RpAtomic*(__cdecl *)(RpAtomic*, RwFrame*))ADDRESS_BY_VERSION(0x5A0600, 0, 0))(atomic, frame);
}

RpClump* RpClumpRender(RpClump* clump) {
    return ((RpClump*(__cdecl *)(RpClump*))ADDRESS_BY_VERSION(0x59ED80, 0, 0))(clump);
}

RpClump* RpClumpRemoveAtomic(RpClump* clump, RpAtomic* atomic) {
    return ((RpClump*(__cdecl *)(RpClump*, RpAtomic*))ADDRESS_BY_VERSION(0x59F6B0, 0, 0))(clump, atomic);
}

RpClump* RpClumpAddAtomic(RpClump* clump, RpAtomic* atomic) {
    return ((RpClump*(__cdecl *)(RpClump*, RpAtomic*))ADDRESS_BY_VERSION(0x59F680, 0, 0))(clump, atomic);
}

RpClump* RpClumpRemoveLight(RpClump* clump, RpLight* light) {
    return ((RpClump*(__cdecl *)(RpClump*, RpLight*))ADDRESS_BY_VERSION(0x59F6E0, 0, 0))(clump, light);
}

RwBool RpClumpDestroy(RpClump* clump) {
    return ((RwBool(__cdecl *)(RpClump*))ADDRESS_BY_VERSION(0x59F500, 0, 0))(clump);
}

RpClump* RpClumpCreate(void) {
    return ((RpClump*(__cdecl *)(void))ADDRESS_BY_VERSION(0x59F490, 0, 0))();
}

RpClump* RpClumpClone(RpClump* clump) {
    return ((RpClump*(__cdecl *)(RpClump*))ADDRESS_BY_VERSION(0x59F1B0, 0, 0))(clump);
}

RwBool RpAtomicDestroy(RpAtomic* atomic) {
    return ((RwBool(__cdecl *)(RpAtomic*))ADDRESS_BY_VERSION(0x59F020, 0, 0))(atomic);
}

RpAtomic* RpAtomicClone(RpAtomic* atomic) {
    return ((RpAtomic*(__cdecl *)(RpAtomic*))ADDRESS_BY_VERSION(0x59F0A0, 0, 0))(atomic);
}

RpAtomic* RpAtomicCreate(void) {
    return ((RpAtomic*(__cdecl *)(void))ADDRESS_BY_VERSION(0x59EEB0, 0, 0))();
}

RpAtomic* RpAtomicSetGeometry(RpAtomic* atomic, RpGeometry* geometry, RwUInt32 flags) {
    return ((RpAtomic*(__cdecl *)(RpAtomic*, RpGeometry*, RwUInt32))ADDRESS_BY_VERSION(0x59EFA0, 0, 0))(atomic, geometry, flags);
}

RwInt32 RpClumpGetNumAtomics(RpClump* clump) {
    return ((RwInt32(__cdecl *)(RpClump*))ADDRESS_BY_VERSION(0x59ED50, 0, 0))(clump);
}

RpClump* RpClumpStreamRead(RwStream* stream) {
    return ((RpClump*(__cdecl *)(RwStream*))ADDRESS_BY_VERSION(0x59FC50, 0, 0))(stream);
}

RwInt32 RpAtomicRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5A0510, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpClumpRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5A0540, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpAtomicRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))ADDRESS_BY_VERSION(0x5A0570, 0, 0))(pluginID, readCB, writeCB, getSizeCB);
}

RwInt32 RpAtomicSetStreamAlwaysCallBack(RwUInt32 pluginID, RwPluginDataChunkAlwaysCallBack alwaysCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkAlwaysCallBack))ADDRESS_BY_VERSION(0x5A05A0, 0, 0))(pluginID, alwaysCB);
}

RwInt32 RpAtomicSetStreamRightsCallBack(RwUInt32 pluginID, RwPluginDataChunkRightsCallBack rightsCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkRightsCallBack))ADDRESS_BY_VERSION(0x5A05C0, 0, 0))(pluginID, rightsCB);
}

RwInt32 RpAtomicGetPluginOffset(RwUInt32 pluginID) {
    return ((RwInt32(__cdecl *)(RwUInt32))ADDRESS_BY_VERSION(0x5A05E0, 0, 0))(pluginID);
}

RpWorldSector* _rpSectorDefaultRenderCallBack(RpWorldSector* sector) {
    return ((RpWorldSector*(__cdecl *)(RpWorldSector*))ADDRESS_BY_VERSION(0x5AE0B0, 0, 0))(sector);
}

RpWorld* RpWorldUnlock(RpWorld* world) {
    return ((RpWorld*(__cdecl *)(RpWorld*))ADDRESS_BY_VERSION(0x5AE190, 0, 0))(world);
}

RwBool RpWorldPluginAttach(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5AEAA0, 0, 0))();
}

RwBool RpWorldDestroy(RpWorld* world) {
    return ((RwBool(__cdecl *)(RpWorld*))ADDRESS_BY_VERSION(0x5AE340, 0, 0))(world);
}

RpWorld* RpWorldCreate(RwBBox* boundingBox) {
    return ((RpWorld*(__cdecl *)(RwBBox*))ADDRESS_BY_VERSION(0x5AE6A0, 0, 0))(boundingBox);
}

RpWorld* RpWorldSectorGetWorld(const RpWorldSector* sector) {
    return ((RpWorld*(__cdecl *)(const RpWorldSector*))ADDRESS_BY_VERSION(0x5AE2B0, 0, 0))(sector);
}

RwInt32 RpWorldRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))ADDRESS_BY_VERSION(0x5AEA40, 0, 0))(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpWorldRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))ADDRESS_BY_VERSION(0x5AEA70, 0, 0))(pluginID, readCB, writeCB, getSizeCB);
}

void RxD3D8AllInOneSetRenderCallBack(RxPipelineNode* node, RxD3D8AllInOneRenderCallBack callback) {
    ((void(__cdecl *)(RxPipelineNode*, RxD3D8AllInOneRenderCallBack))ADDRESS_BY_VERSION(0x5DFC60, 0, 0))(node, callback);
}

RxPipeline* RpWorldSetDefaultSectorPipeline(RxPipeline* pipeline) {
    return ((RxPipeline*(__cdecl *)(RxPipeline*))ADDRESS_BY_VERSION(0x5CB630, 0, 0))(pipeline);
}

RxPipeline* RpAtomicSetDefaultPipeline(RxPipeline* pipeline) {
    return ((RxPipeline*(__cdecl *)(RxPipeline*))ADDRESS_BY_VERSION(0x5CB670, 0, 0))(pipeline);
}

RpWorld* RpWorldRemoveCamera(RpWorld* world, RwCamera* camera) {
    return ((RpWorld*(__cdecl *)(RpWorld*, RwCamera*))ADDRESS_BY_VERSION(0x5AFBB0, 0, 0))(world, camera);
}

RpWorld* RpWorldAddCamera(RpWorld* world, RwCamera* camera) {
    return ((RpWorld*(__cdecl *)(RpWorld*, RwCamera*))ADDRESS_BY_VERSION(0x5AFB80, 0, 0))(world, camera);
}

RpWorld* RpAtomicGetWorld(const RpAtomic* atomic) {
    return ((RpWorld*(__cdecl *)(const RpAtomic*))ADDRESS_BY_VERSION(0x5AFC10, 0, 0))(atomic);
}

RpWorld* RpWorldAddClump(RpWorld* world, RpClump* clump) {
    return ((RpWorld*(__cdecl *)(RpWorld*, RpClump*))ADDRESS_BY_VERSION(0x5AFC20, 0, 0))(world, clump);
}

RpWorld* RpWorldAddLight(RpWorld* world, RpLight* light) {
    return ((RpWorld*(__cdecl *)(RpWorld*, RpLight*))ADDRESS_BY_VERSION(0x5AFDA0, 0, 0))(world, light);
}

RpWorld* RpWorldRemoveLight(RpWorld* world, RpLight* light) {
    return ((RpWorld*(__cdecl *)(RpWorld*, RpLight*))ADDRESS_BY_VERSION(0x5AFDF0, 0, 0))(world, light);
}

/* rtquat.h */

//RtQuat* RtQuatRotate(RtQuat* quat, const RwV3d* axis, RwReal angle, RwOpCombineType combineOp) {
//    return ((RtQuat*(__cdecl *)(RtQuat*, const RwV3d*, RwReal, RwOpCombineType))ADDRESS_BY_VERSION(0x65ABD0, 0, 0))(quat, axis, angle, combineOp);
//}

/* rtanim.h */

//RwBool RtAnimInitialize(void) {
//    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x64D840, 0, 0))();
//}

//RwBool RtAnimRegisterInterpolationScheme(RtAnimInterpolatorInfo* interpolatorInfo) {
//    return ((RwBool(__cdecl *)(RtAnimInterpolatorInfo*))ADDRESS_BY_VERSION(0x64D8D0, 0, 0))(interpolatorInfo);
//}

//RtAnimAnimation* RtAnimAnimationCreate(RwInt32 typeID, RwInt32 numFrames, RwInt32 flags, RwReal duration) {
//    return ((RtAnimAnimation*(__cdecl *)(RwInt32, RwInt32, RwInt32, RwReal))ADDRESS_BY_VERSION(0x64D970, 0, 0))(typeID, numFrames, flags, duration);
//}

//RtAnimAnimation* RtAnimAnimationDestroy(RtAnimAnimation* animation) {
//    return ((RtAnimAnimation*(__cdecl *)(RtAnimAnimation*))ADDRESS_BY_VERSION(0x64DA20, 0, 0))(animation);
//}

//RtAnimInterpolator* RtAnimInterpolatorCreate(RwInt32 numNodes, RwInt32 maxKeyFrameSize) {
//    return ((RtAnimInterpolator*(__cdecl *)(RwInt32, RwInt32))ADDRESS_BY_VERSION(0x64DA60, 0, 0))(numNodes, maxKeyFrameSize);
//}

//void RtAnimInterpolatorDestroy(RtAnimInterpolator* anim) {
//    ((void(__cdecl *)(RtAnimInterpolator*))ADDRESS_BY_VERSION(0x64DAC0, 0, 0))(anim);
//}

RwBool RtAnimInterpolatorSetCurrentAnim(RtAnimInterpolator* animI, RtAnimAnimation* anim) {
    return ((RwBool(__cdecl *)(RtAnimInterpolator*, RtAnimAnimation*))ADDRESS_BY_VERSION(0x5B1200, 0, 0))(animI, anim);
}

/* rphanim.h */

RpHAnimHierarchy* RpHAnimHierarchyCreate(RwInt32 numNodes, RwUInt32* nodeFlags, RwInt32* nodeIDs, RpHAnimHierarchyFlag flags, RwInt32 maxKeyFrameSize) {
    return ((RpHAnimHierarchy*(__cdecl *)(RwInt32, RwUInt32*, RwInt32*, RpHAnimHierarchyFlag, RwInt32))ADDRESS_BY_VERSION(0x5B10E0, 0, 0))(numNodes, nodeFlags, nodeIDs, flags, maxKeyFrameSize);
}

RpHAnimHierarchy* RpHAnimFrameGetHierarchy(RwFrame* frame) {
    return ((RpHAnimHierarchy*(__cdecl *)(RwFrame*))ADDRESS_BY_VERSION(0x5B11F0, 0, 0))(frame);
}

//RwMatrix* RpHAnimHierarchyGetMatrixArray(RpHAnimHierarchy* hierarchy) {
//    return ((RwMatrix*(__cdecl *)(RpHAnimHierarchy*))ADDRESS_BY_VERSION(0x646370, 0, 0))(hierarchy);
//}

RwBool RpHAnimHierarchyUpdateMatrices(RpHAnimHierarchy* hierarchy) {
    return ((RwBool(__cdecl *)(RpHAnimHierarchy*))ADDRESS_BY_VERSION(0x5B1780, 0, 0))(hierarchy);
}

//RwInt32 RpHAnimIDGetIndex(RpHAnimHierarchy* hierarchy, RwInt32 ID) {
//    return ((RwInt32(__cdecl *)(RpHAnimHierarchy*, RwInt32))ADDRESS_BY_VERSION(0x646390, 0, 0))(hierarchy, ID);
//}

RwBool RpHAnimPluginAttach(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5B1D50, 0, 0))();
}

void RpHAnimKeyFrameApply(void* matrix, void* voidIFrame) {
    ((void(__cdecl *)(void*, void*))ADDRESS_BY_VERSION(0x5CDEE0, 0, 0))(matrix, voidIFrame);
}

void RpHAnimKeyFrameBlend(void* voidOut, void* voidIn1, void* voidIn2, RwReal alpha) {
    ((void(__cdecl *)(void*, void*, void*, RwReal))ADDRESS_BY_VERSION(0x5CE420, 0, 0))(voidOut, voidIn1, voidIn2, alpha);
}

void RpHAnimKeyFrameInterpolate(void* voidOut, void* voidIn1, void* voidIn2, RwReal time) {
    ((void(__cdecl *)(void*, void*, void*, RwReal))ADDRESS_BY_VERSION(0x5CE000, 0, 0))(voidOut, voidIn1, voidIn2, time);
}

void RpHAnimKeyFrameAdd(void* voidOut, void* voidIn1, void* voidIn2) {
    ((void(__cdecl *)(void*, void*, void*))ADDRESS_BY_VERSION(0x5CEAB0, 0, 0))(voidOut, voidIn1, voidIn2);
}

void RpHAnimKeyFrameMulRecip(void* voidFrame, void* voidStart) {
    ((void(__cdecl *)(void*, void*))ADDRESS_BY_VERSION(0x5CE950, 0, 0))(voidFrame, voidStart);
}

RtAnimAnimation* RpHAnimKeyFrameStreamRead(RwStream* stream, RtAnimAnimation* animation) {
    return ((RtAnimAnimation*(__cdecl *)(RwStream*, RtAnimAnimation*))ADDRESS_BY_VERSION(0x5CE820, 0, 0))(stream, animation);
}

RwBool RpHAnimKeyFrameStreamWrite(RtAnimAnimation* animation, RwStream* stream) {
    return ((RwBool(__cdecl *)(RtAnimAnimation*, RwStream*))ADDRESS_BY_VERSION(0x5CE8C0, 0, 0))(animation, stream);
}

RwInt32 RpHAnimKeyFrameStreamGetSize(RtAnimAnimation* animation) {
    return ((RwInt32(__cdecl *)(RtAnimAnimation*))ADDRESS_BY_VERSION(0x5CE930, 0, 0))(animation);
}

/* rpskin.h */

RwBool RpSkinPluginAttach(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5B07D0, 0, 0))();
}

RpAtomic* RpSkinAtomicSetHAnimHierarchy(RpAtomic* atomic, RpHAnimHierarchy* hierarchy) {
    return ((RpAtomic*(__cdecl *)(RpAtomic*, RpHAnimHierarchy*))ADDRESS_BY_VERSION(0x5B1050, 0, 0))(atomic, hierarchy);
}

RpHAnimHierarchy* RpSkinAtomicGetHAnimHierarchy(const RpAtomic* atomic) {
    return ((RpHAnimHierarchy*(__cdecl *)(const RpAtomic*))ADDRESS_BY_VERSION(0x5B1070, 0, 0))(atomic);
}

RpGeometry* RpSkinGeometrySetSkin(RpGeometry* geometry, RpSkin* skin) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*, RpSkin*))ADDRESS_BY_VERSION(0x5B1090, 0, 0))(geometry, skin);
}

RpSkin* RpSkinGeometryGetSkin(RpGeometry* geometry) {
    return ((RpSkin*(__cdecl *)(RpGeometry*))ADDRESS_BY_VERSION(0x5B1080, 0, 0))(geometry);
}

//RwUInt32 RpSkinGetNumBones(RpSkin* skin) {
//    return ((RwUInt32(__cdecl *)(RpSkin*))ADDRESS_BY_VERSION(0x6499C0, 0, 0))(skin);
//}

//const RwMatrixWeights* RpSkinGetVertexBoneWeights(RpSkin* skin) {
//    return ((const RwMatrixWeights*(__cdecl *)(RpSkin*))ADDRESS_BY_VERSION(0x6499D0, 0, 0))(skin);
//}

const RwMatrix* RpSkinGetSkinToBoneMatrices(RpSkin* skin) {
    return ((const RwMatrix*(__cdecl *)(RpSkin*))ADDRESS_BY_VERSION(0x5B10D0, 0, 0))(skin);
}

RpGeometry* _rpSkinInitialize(RpGeometry* geometry) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*))ADDRESS_BY_VERSION(0x5CDC50, 0, 0))(geometry);
}

RpGeometry* _rpSkinDeinitialize(RpGeometry* geometry) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*))ADDRESS_BY_VERSION(0x5CDD30, 0, 0))(geometry);
}

/* rpmatfx.h */

RwBool RpMatFXPluginAttach(void) {
    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x5B2640, 0, 0))();
}

RpAtomic* RpMatFXAtomicEnableEffects(RpAtomic* atomic) {
    return ((RpAtomic*(__cdecl *)(RpAtomic*))ADDRESS_BY_VERSION(0x5B3750, 0, 0))(atomic);
}

RpMaterial* RpMatFXMaterialSetEffects(RpMaterial* material, RpMatFXMaterialFlags flags) {
    return ((RpMaterial*(__cdecl *)(RpMaterial*, RpMatFXMaterialFlags))ADDRESS_BY_VERSION(0x5B3780, 0, 0))(material, flags);
}

RpMaterial* RpMatFXMaterialSetupEnvMap(RpMaterial* material, RwTexture* texture, RwFrame* frame, RwBool useFrameBufferAlpha, RwReal coef) {
    return ((RpMaterial*(__cdecl *)(RpMaterial*, RwTexture*, RwFrame*, RwBool, RwReal))ADDRESS_BY_VERSION(0x5B38D0, 0, 0))(material, texture, frame, useFrameBufferAlpha, coef);
}

//RpMatFXMaterialFlags RpMatFXMaterialGetEffects(const RpMaterial* material) {
//    return ((RpMatFXMaterialFlags(__cdecl *)(const RpMaterial*))ADDRESS_BY_VERSION(0x6572F0, 0, 0))(material);
//}

RpMaterial* RpMatFXMaterialSetBumpMapTexture(RpMaterial* material, RwTexture* texture) {
    return ((RpMaterial*(__cdecl *)(RpMaterial*, RwTexture*))ADDRESS_BY_VERSION(0x5B3A40, 0, 0))(material, texture);
}

//RpMaterial* RpMatFXMaterialSetBumpMapFrame(RpMaterial* material, RwFrame* frame) {
//    return ((RpMaterial*(__cdecl *)(RpMaterial*, RwFrame*))ADDRESS_BY_VERSION(0x6574D0, 0, 0))(material, frame);
//}

//RwTexture* RpMatFXMaterialGetBumpMapBumpedTexture(const RpMaterial* material) {
//    return ((RwTexture*(__cdecl *)(const RpMaterial*))ADDRESS_BY_VERSION(0x657530, 0, 0))(material);
//}

//RwReal RpMatFXMaterialGetEnvMapCoefficient(const RpMaterial* material) {
//    return ((RwReal(__cdecl *)(const RpMaterial*))ADDRESS_BY_VERSION(0x6575A0, 0, 0))(material);
//}

//RpMaterial* RpMatFXMaterialSetDualTexture(RpMaterial* material, RwTexture* texture) {
//    return ((RpMaterial*(__cdecl *)(RpMaterial*, RwTexture*))ADDRESS_BY_VERSION(0x6575F0, 0, 0))(material, texture);
//}

/* rpanisot.h */

//RwInt8 RpAnisotGetMaxSupportedMaxAnisotropy(void) {
//    return ((RwInt8(__cdecl *)(void))ADDRESS_BY_VERSION(0x657660, 0, 0))();
//}

//RwTexture* RpAnisotTextureSetMaxAnisotropy(RwTexture* tex, RwInt8 val) {
//    return ((RwTexture*(__cdecl *)(RwTexture*, RwInt8))ADDRESS_BY_VERSION(0x657670, 0, 0))(tex, val);
//}

//RwInt8 RpAnisotTextureGetMaxAnisotropy(RwTexture* tex) {
//    return ((RwInt8(__cdecl *)(RwTexture*))ADDRESS_BY_VERSION(0x6576A0, 0, 0))(tex);
//}

//RwBool RpAnisotPluginAttach(void) {
//    return ((RwBool(__cdecl *)(void))ADDRESS_BY_VERSION(0x6576C0, 0, 0))();
//}

/* rtbmp.h */

RwImage* RtBMPImageRead(const RwChar* imageName) {
    return ((RwImage*(__cdecl *)(const RwChar*))ADDRESS_BY_VERSION(0x5AFE70, 0, 0))(imageName);
}