/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "RenderWare.h"

class CMatrix {
public:
    // RwV3d-like:
    CVector      right;
    unsigned int flags;
    CVector      up;
    unsigned int pad1;
    CVector      at;
    unsigned int pad2;
    CVector      pos;
    unsigned int pad3;

    RwMatrix *m_pAttachMatrix;
    unsigned int m_bOwnsAttachedMatrix; // do we need to delete attaching matrix at detaching

    inline CMatrix() {
        this->m_pAttachMatrix = 0;
        this->m_bOwnsAttachedMatrix = 0;
    }

    CMatrix(plugin::dummy_func_t) {}

    SUPPORTED_10EN_11EN_STEAM void Attach(RwMatrixTag* rwMatrix, bool deleteOnDetach);
    SUPPORTED_10EN_11EN_STEAM void AttachRW(RwMatrixTag* rwMatrix, bool deleteOnDetach);
    SUPPORTED_10EN_11EN_STEAM CMatrix(CMatrix const& src);
    SUPPORTED_10EN_11EN_STEAM CMatrix(RwMatrixTag* rwMatrix, bool deleteOnDetach);
    SUPPORTED_10EN_11EN_STEAM void CopyOnlyMatrix(CMatrix const& src);
    SUPPORTED_10EN_11EN_STEAM void Detach();
    SUPPORTED_10EN_11EN_STEAM void Reorthogonalise();
    SUPPORTED_10EN_11EN_STEAM void SetOrientation(float x,float y,float z);
    SUPPORTED_10EN_11EN_STEAM void ResetOrientation();
    SUPPORTED_10EN_11EN_STEAM void Rotate(float x, float y, float z);
    SUPPORTED_10EN_11EN_STEAM void RotateX(float angle);
    SUPPORTED_10EN_11EN_STEAM void RotateZ(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotate(float x, float y, float z);
    SUPPORTED_10EN_11EN_STEAM void SetRotateX(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotateXOnly(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotateY(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotateYOnly(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotateZ(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotateZOnly(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetScale(float factor);
    SUPPORTED_10EN_11EN_STEAM void SetTranslate(float x, float y, float z);
    SUPPORTED_10EN_11EN_STEAM void SetUnity();
    SUPPORTED_10EN_11EN_STEAM void Update();
    SUPPORTED_10EN_11EN_STEAM void UpdateRW();
    SUPPORTED_10EN_11EN_STEAM void operator+=(CMatrix const& right);
    SUPPORTED_10EN_11EN_STEAM void operator=(CMatrix const& right);
    ~CMatrix();
};

VALIDATE_SIZE(CMatrix, 0x48);

SUPPORTED_10EN_11EN_STEAM void Invert(CMatrix const& in, CMatrix&out);
SUPPORTED_10EN_11EN_STEAM CMatrix Invert(CMatrix const& in);
SUPPORTED_10EN_11EN_STEAM CMatrix operator*(CMatrix const& a, CMatrix const& b);
SUPPORTED_10EN_11EN_STEAM CVector operator*(CMatrix const& m, CVector const& v);
SUPPORTED_10EN_11EN_STEAM CVector Multiply3x3(CVector const& v, CMatrix const& m);
SUPPORTED_10EN_11EN_STEAM CVector Multiply3x3(CMatrix const& m, CVector const& v);
