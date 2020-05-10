/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMatrix.h"

// Converted from thiscall void CMatrix::Attach(RwMatrixTag *rwMatrix,bool deleteOnDetach) 0x4B8DD0
void CMatrix::Attach(RwMatrixTag* rwMatrix, bool deleteOnDetach) {
    ((void(__thiscall*)(CMatrix*, RwMatrixTag*, bool))ADDRESS_BY_VERSION(0x4B8DD0, 0x4B8EC0, 0x4B8E50))(this, rwMatrix, deleteOnDetach);
}

// Converted from thiscall void CMatrix::AttachRW(RwMatrixTag *rwMatrix,bool deleteOnDetach) 0x4B8E00
void CMatrix::AttachRW(RwMatrixTag* rwMatrix, bool deleteOnDetach) {
    ((void(__thiscall *)(CMatrix*, RwMatrixTag*, bool))ADDRESS_BY_VERSION(0x4B8E00, 0x4B8EF0, 0x4B8E80))(this, rwMatrix, deleteOnDetach);
}

// Converted from thiscall void CMatrix::CMatrix(CMatrix const&src) 0x4B8D70
CMatrix::CMatrix(CMatrix const& src) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))ADDRESS_BY_VERSION(0x4B8D70, 0x4B8E60, 0x4B8DF0))(this, src);
}

// Converted from thiscall void CMatrix::CMatrix(RwMatrixTag *rwMatrix,bool deleteOnDetach) 0x4B8D90
CMatrix::CMatrix(RwMatrixTag* rwMatrix, bool deleteOnDetach) {
    ((void(__thiscall *)(CMatrix*, RwMatrixTag*, bool))ADDRESS_BY_VERSION(0x4B8D90, 0x4B8E80, 0x4B8E10))(this, rwMatrix, deleteOnDetach);
}

// Converted from thiscall void CMatrix::CopyOnlyMatrix(CMatrix const&src) 0x4B8F70
void CMatrix::CopyOnlyMatrix(CMatrix const& src) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))ADDRESS_BY_VERSION(0x4B8F70, 0x4B9060, 0x4B8FF0))(this, src);
}

// Converted from thiscall void CMatrix::Detach(void) 0x4B8E30
void CMatrix::Detach() {
    ((void(__thiscall *)(CMatrix*))ADDRESS_BY_VERSION(0x4B8E30, 0x4B8F20, 0x4B8EB0))(this);
}

// Converted from thiscall void CMatrix::Reorthogonalise(void) 0x4B9A80
void CMatrix::Reorthogonalise() {
    ((void(__thiscall *)(CMatrix*))ADDRESS_BY_VERSION(0x4B9A80, 0x4B9B70, 0x4B9B00))(this);
}

// Converted from thiscall void CMatrix::ResetOrientation(void) 0x4B9070
void CMatrix::ResetOrientation() {
    ((void(__thiscall *)(CMatrix*))ADDRESS_BY_VERSION(0x4B9070, 0x4B9160, 0x4B90F0))(this);
}

// Converted from thiscall void CMatrix::Rotate(float x,float y,float z) 0x4B9770
void CMatrix::Rotate(float x, float y, float z) {
    ((void(__thiscall *)(CMatrix*, float, float, float))ADDRESS_BY_VERSION(0x4B9770, 0x4B9860, 0x4B97F0))(this, x, y, z);
}

// Converted from thiscall void CMatrix::RotateX(float angle) 0x4B9510
void CMatrix::RotateX(float angle) {
    ((void(__thiscall *)(CMatrix*, float))ADDRESS_BY_VERSION(0x4B9510, 0x4B9600, 0x4B96C0))(this, angle);
}

// Converted from thiscall void CMatrix::RotateZ(float angle) 0x4B9640
void CMatrix::RotateZ(float angle) {
    ((void(__thiscall *)(CMatrix*, float))ADDRESS_BY_VERSION(0x4B9640, 0x4B9730, 0x4B93F0))(this, angle);
}

// Converted from thiscall void CMatrix::SetRotate(float x,float y,float z) 0x4B93A0
void CMatrix::SetRotate(float x, float y, float z) {
    ((void(__thiscall *)(CMatrix*, float, float, float))ADDRESS_BY_VERSION(0x4B93A0, 0x4B9490, 0x4B9420))(this, x, y, z);
}

// Converted from thiscall void CMatrix::SetRotateX(float angle) 0x4B9310
void CMatrix::SetRotateX(float angle) {
    ((void(__thiscall *)(CMatrix*, float))ADDRESS_BY_VERSION(0x4B9310, 0x4B9400, 0x4B9390))(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateXOnly(float angle) 0x4B9160
void CMatrix::SetRotateXOnly(float angle) {
    ((void(__thiscall *)(CMatrix*, float))ADDRESS_BY_VERSION(0x4B9160, 0x4B9250, 0x4B91E0))(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateY(float angle) 0x4B9340
void CMatrix::SetRotateY(float angle) {
    ((void(__thiscall *)(CMatrix*, float))ADDRESS_BY_VERSION(0x4B9340, 0x4B9430, 0x4B93C0))(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateYOnly(float angle) 0x4B91F0
void CMatrix::SetRotateYOnly(float angle) {
    ((void(__thiscall *)(CMatrix*, float))ADDRESS_BY_VERSION(0x4B91F0, 0x4B92E0, 0x4B9270))(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateZ(float angle) 0x4B9370
void CMatrix::SetRotateZ(float angle) {
    ((void(__thiscall *)(CMatrix*, float))ADDRESS_BY_VERSION(0x4B9370, 0x4B9460, 0x4B93F0))(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateZOnly(float angle) 0x4B9280
void CMatrix::SetRotateZOnly(float angle) {
    ((void(__thiscall *)(CMatrix*, float))ADDRESS_BY_VERSION(0x4B9280, 0x4B9370, 0x4B9300))(this, angle);
}

// Converted from thiscall void CMatrix::SetScale(float factor) 0x4B90B0
void CMatrix::SetScale(float factor) {
    ((void(__thiscall *)(CMatrix*, float))ADDRESS_BY_VERSION(0x4B90B0, 0x4B91A0, 0x4B9130))(this, factor);
}

// Converted from thiscall void CMatrix::SetTranslate(float x,float y,float z) 0x4B9100
void CMatrix::SetTranslate(float x, float y, float z) {
    ((void(__thiscall *)(CMatrix*, float, float, float))ADDRESS_BY_VERSION(0x4B9100, 0x4B91F0, 0x4B9180))(this, x, y, z);
}

// Converted from thiscall void CMatrix::SetUnity(void) 0x4B9010
void CMatrix::SetUnity() {
    ((void(__thiscall *)(CMatrix*))ADDRESS_BY_VERSION(0x4B9010, 0x4B9100, 0x4B9090))(this);
}

// Converted from thiscall void CMatrix::Update(void) 0x4B8E50
void CMatrix::Update() {
    ((void(__thiscall *)(CMatrix*))ADDRESS_BY_VERSION(0x4B8E50, 0x4B8F40, 0x4B8ED0))(this);
}

// Converted from thiscall void CMatrix::UpdateRW(void) 0x4B8EC0
void CMatrix::UpdateRW() {
    ((void(__thiscall *)(CMatrix*))ADDRESS_BY_VERSION(0x4B8EC0, 0x4B8FB0, 0x4B8F40))(this);
}

// Converted from thiscall void CMatrix::operator+=(CMatrix const&right) 0x4B8F90
void CMatrix::operator+=(CMatrix const& right) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))ADDRESS_BY_VERSION(0x4B8F90, 0x4B9080, 0x4B9010))(this, right);
}

// Converted from thiscall void CMatrix::operator=(CMatrix const&right) 0x4B8F40
void CMatrix::operator=(CMatrix const& right) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))ADDRESS_BY_VERSION(0x4B8F40, 0x4B9030, 0x4B8FC0))(this, right);
}

// Converted from thiscall void CMatrix::~CMatrix() 0x4B8DB0
CMatrix::~CMatrix() {
    ((void(__thiscall *)(CMatrix*))ADDRESS_BY_VERSION(0x4B8DB0, 0x4B8EA0, 0x4B8E30))(this);
}

// Converted from cdecl CMatrix operator*(CMatrix const&a,CMatrix const&b) 0x4B9D60
CMatrix operator*(CMatrix const& a, CMatrix const& b) {
    CMatrix result;
    ((void(__cdecl *)(CMatrix*, CMatrix const&, CMatrix const&))ADDRESS_BY_VERSION(0x4B9D60, 0x4B9DE0, 0x4B9DE0))(&result, a, b);
    return result;
}

// Converted from cdecl void Invert(CMatrix const&in,CMatrix&out) 0x4B9C30
void Invert(CMatrix const& in, CMatrix&out) {
    ((void(__cdecl *)(CMatrix const&, CMatrix&out))ADDRESS_BY_VERSION(0x4B9C30, 0x4B9D20, 0x4B9CB0))(in, out);
}

// Converted from cdecl CMatrix Invert(CMatrix const&in) 0x4B9BF0
CMatrix Invert(CMatrix const& in) {
    CMatrix result;
    ((void(__cdecl *)(CMatrix*, CMatrix const&))ADDRESS_BY_VERSION(0x4B9BF0, 0x4B9CE0, 0x4B9C70))(&result, in);
    return result;
}

// Converted from cdecl CVector operator*(CMatrix const&m,CVector const&v) 0x4BA4D0
CVector operator*(CMatrix const& m, CVector const& v) {
    CVector result;
    ((void(__cdecl *)(CVector*, CMatrix const&, CVector const&))ADDRESS_BY_VERSION(0x4BA4D0, 0x4BA5C0, 0x4BA550))(&result, m, v);
    return result;
}

// Converted from cdecl CVector Multiply3x3(CVector const&v,CMatrix const&m) 0x4BA450
CVector Multiply3x3(CVector const& v, CMatrix const& m) {
    CVector result;
    ((void(__cdecl *)(CVector*, CVector const&, CMatrix const&))ADDRESS_BY_VERSION(0x4BA450, 0x4BA540, 0x4BA4D0))(&result, v, m);
    return result;
}

// Converted from cdecl CVector Multiply3x3(CMatrix const&m,CVector const&v) 0x4BA3D0
CVector Multiply3x3(CMatrix const& m, CVector const& v) {
    CVector result;
    ((void(__cdecl *)(CVector*, CMatrix const&, CVector const&))ADDRESS_BY_VERSION(0x4BA3D0, 0x4BA4C0, 0x4BA450))(&result, m, v);
    return result;
}

void CMatrix::SetOrientation(float x, float y, float z)
{
    CVector currPos = this->pos;
    CMatrix::SetRotate(x, y, z);
    this->pos = currPos;
}