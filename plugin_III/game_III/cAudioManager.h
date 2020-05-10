/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

enum eAudioType
{
	AUDIOTYPE_PHYSICAL = 0x0,
	AUDIOTYPE_EXPLOSION = 0x1,
	AUDIOTYPE_FIRE = 0x2,
	AUDIOTYPE_WEATHER = 0x3,
	AUDIOTYPE_CRANE = 0x4,
	AUDIOTYPE_SCRIPTOBJECT = 0x5,
	AUDIOTYPE_BRIDGE = 0x6,
	AUDIOTYPE_COLLISION = 0x7,
	AUDIOTYPE_FRONTEND = 0x8,
	AUDIOTYPE_PROJECTILE = 0x9,
	AUDIOTYPE_GARAGE = 0xA,
	AUDIOTYPE_FIREHYDRANT = 0xB,
	AUDIOTYPE_WATERCANNON = 0xC,
	AUDIOTYPE_POLICERADIO = 0xD,
	MAX_AUDIOTYPES = 0xE,
};

#pragma pack(push, 1)
struct cVehicleParams
{
	unsigned char field_4;
	char _pad[3];
	float m_fDistanceSquared;
	class CVehicle* m_pVehicle;
	class cTransmission* m_pTransmission;
	unsigned int m_nVehicleAudioIndex;
	float m_fSpeed;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct tSound
{
	unsigned int m_AudioEntity;
	unsigned int m_nIndex;
	unsigned int m_nCurSampleIndex;
	unsigned char field_C;
	bool field_D;
	char tmp0[2];
	unsigned int field_10;
	unsigned int m_nSampleFreq;
	unsigned char m_nVolume;
	char tmp1[3];
	float m_fDistance;
	unsigned int field_20;
	int m_nLoopStartOffset;
	int m_nLoopEndOffset;
	unsigned char _oldVolume;
	char tmp2[3];
	float field_30;
	float field_34;
	bool field_38;
	char tmp3[3];
	CVector m_vecPosition;
	bool m_bUseReverb;
	bool field_49;
	bool field_4A;
	unsigned char field_4B;
	int field_4C;
	bool field_50;
	char field_51;
	char tmp6[2];
	int field_54;
	unsigned char field_58;
	char tmp7[3];
};
#pragma pack(pop)

#pragma pack(push, 1)
struct tAudioEntity
{
	eAudioType m_AudioType;
	void* m_Object;
	bool m_bActive;
	unsigned char  m_nStatus;
	unsigned short m_anSfxId[4];
	char _pad0[2];
	float field_14[4];
	unsigned char  field_24;
	char _pad1[3];
};
#pragma pack(pop)

#pragma pack(push, 1)
struct tPedComment
{
	unsigned int m_nSampleIndex;
	int field_4;
	CVector vecPosition;
	float m_fDistance;
	unsigned char m_nVolume;
	unsigned char field_19;
	char _pad0[2];
};
#pragma pack(pop)

#pragma pack(push, 1)
struct cPedComments
{
	tPedComment arr[40];
	unsigned char m_aIndex[40];
	unsigned char field_488[2];
	unsigned char m_nBaseIndex;
	char field_48B;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct cAMCrime
{
	int m_CrimeType;
	CVector m_vecPos;
	short m_nSampleIndex;
	char _pad0[2];
};
#pragma pack(pop)

#pragma pack(push, 1)
struct cPoliceRadioQueue
{
	int aSampleIndeces[60];
	unsigned char field_F0;
	unsigned char  field_F1;
	unsigned char  nSample;
	char _pad0[1];
	cAMCrime aObjects[10];
};
#pragma pack(pop)

#pragma pack(push, 1)
struct cAudioCollision
{
	class CEntity* m_pPhysEntity;
	class CEntity* m_pPhysColling;
	unsigned char m_nSurfaceTypeA;
	unsigned char m_nSurfaceTypeB;
	char _pad0[2];
	float m_fCollisionPower;
	float m_fVelocity;
	CVector m_vecPosition;
	float m_fDistance;
	unsigned int field_24;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct cAudioCollisionManager
{
	cAudioCollision arr1[10];
	cAudioCollision arr2[10];
	unsigned char field_4A9C[10];
	unsigned char field_4AA6;
	char _pad0[1];
	cAudioCollision m_Queue;
};
#pragma pack(pop)

class PLUGIN_API cAudioManager {
public:
	bool m_bInitialised;
	char field_1;
	bool field_2;
	unsigned char m_nActiveSamples;
	char field_4;
	bool m_bReverb;
	char _pad0[2];
	float field_8;
	bool m_bResetTimers;
	char tmp0[3];
	unsigned int _ResetedTimer;
	tSound m_QueueSample;
	unsigned char field_70;
	char tmp1[3];
	tSound m_aSamples[54];
	unsigned char field_13DC[54];
	unsigned char field_1412[2];
	tSound m_aActiveSamples[27];
	tAudioEntity m_aAudioEntities[200];
	int field_1DC8[200];
	int field_4028;
	CVector field_402C[5];
	float field_4068[5];
	int m_aScriptObjectEntityIndex[40];
	int m_nScriptObjectEntityNum;
	cPedComments m_PedComments;
	int m_hFire;
	int m_hWaterCannon;
	int m_hPoliceRadio;
	cPoliceRadioQueue m_PoliceQueue;
	int m_hFrontEnd;
	int m_hCollision;
	cAudioCollisionManager m_CollisionManager;
	int m_hProjectile;
	int m_hBridge;
	CVector m_vecMissionAudioLocation;
	bool field_4AE4;
	char f4AE5[3];
	unsigned int m_nMissionAudioIndex;
	unsigned char m_nMissionAudioLoadingStatus;
	unsigned char _bLowVolume;
	bool field_4AEE;
	char f4AEF[1];
	unsigned int field_4AF0;
	bool field_4AF4;
	char f4AF5[3];
	unsigned int m_aRandomTable[5];
	unsigned char field_4B0C;
	bool m_bUserPause;
	bool m_bOldUserPause;
	char _pad8[1];
	unsigned int m_nJumboVolOffset;

    cAudioManager();
    ~cAudioManager();
    bool UsesSiren(unsigned int index); // see eVehicleIndex
    bool UsesSirenSwitching(unsigned int index); // see eVehicleIndex
    SUPPORTED_10EN_11EN_STEAM float GetDistanceSquared(CVector const& vec);
    SUPPORTED_10EN_11EN_STEAM int CalculateDistance(unsigned char& a1, float a2);
    SUPPORTED_10EN_11EN_STEAM unsigned char ComputeVolume(unsigned char a1, float a2, float a3);
    SUPPORTED_10EN_11EN_STEAM int RandomDisplacement(unsigned int a1);
    SUPPORTED_10EN_11EN_STEAM void ProcessLoopingScriptObject(unsigned char a1);
    SUPPORTED_11EN void AddSampleToRequestedQueue();
};

VALIDATE_SIZE(cAudioManager, 0x4B14);

extern cAudioManager &gAudioManager;

#include "meta/meta.cAudioManager.h"
