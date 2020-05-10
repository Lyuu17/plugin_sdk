/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "cPoliceRadio.h"
#include "CVector.h"

#define NUM_SOUNDS_SAMPLES_BANKS 2
#define NUM_SOUNDS_SAMPLES_SLOTS 27
#define NUM_SCRIPT_MAX_ENTITIES 40
#define NUM_AUDIOENTITIES 200
#define NUM_AUDIO_REFLECTIONS 5

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

struct tSound
{
	unsigned int m_AudioEntity;
	unsigned int m_nIndex;
	unsigned int m_nCurSampleIndex;
	unsigned char field_C;
	char field_D;
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
	char field_38;
	char tmp3[3];
	CVector m_vecPosition;
	bool m_bUseReverb;
	char field_49;
	char field_4A;
	unsigned char field_4B;
	int field_4C;
	char field_50;
	char field_51;
	char tmp6[2];
	int field_54;
	unsigned char field_58;
	char tmp7[3];
};

static_assert(sizeof(tSound) == 92, "tSound: error");

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

static_assert(sizeof(tAudioEntity) == 40, "tAudioEntity: error");

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

static_assert(sizeof(tPedComment) == 28, "tPedComment: error");

struct cPedComments
{
	tPedComment arr[40];
	unsigned char m_aIndex[40];
	unsigned char field_488[2];
	unsigned char m_nBaseIndex;
	char field_48B;
};

static_assert(sizeof(cPedComments) == 1164, "cPedComments: error");

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

static_assert(sizeof(tPedComment) == 28, "tPedComment: error");

struct cAudioCollisionManager
{
	cAudioCollision arr1[10];
	cAudioCollision arr2[10];
	unsigned char field_4A9C[10];
	unsigned char field_4AA6;
	char _pad0[1];
	cAudioCollision m_Queue;
};

static_assert(sizeof(cPedComments) == 1164, "cPedComments: error");

class cMissionAudio
{
public:
	CVector m_vecPos;
	bool m_bPredefinedProperties;
	int m_nSampleIndex;
	unsigned char m_nLoadingStatus;
	unsigned char m_nPlayStatus;
	unsigned char field_22; // todo find a name
	int m_nMissionAudioCounter;
	bool m_bIsPlayed;
};

static_assert(sizeof(cMissionAudio) == 32, "cMissionAudio: error");

class cAudioScriptObjectManager
{
public:
	int m_anScriptObjectEntityIndices[NUM_SCRIPT_MAX_ENTITIES];
	int m_nScriptObjectEntityTotal;

	cAudioScriptObjectManager() { m_nScriptObjectEntityTotal = 0; }
	~cAudioScriptObjectManager() { m_nScriptObjectEntityTotal = 0; }
};

class PLUGIN_API cAudioManager {
public:
	bool m_bInitialised;
	char field_1; // unused
	bool m_bFifthFrameFlag;
	unsigned char m_nActiveSamples;
	char field_4; // unused
	bool m_bDynamicAcousticModelingStatus;
	float m_fSpeedOfSound;
	bool m_bTimerJustReset;
	unsigned int m_nTimer;
	tSound m_sQueueSample;
	unsigned char m_nActiveSampleQueue;
	tSound m_asSamples[NUM_SOUNDS_SAMPLES_BANKS][NUM_SOUNDS_SAMPLES_SLOTS];
	unsigned char m_abSampleQueueIndexTable[NUM_SOUNDS_SAMPLES_BANKS][NUM_SOUNDS_SAMPLES_SLOTS];
	unsigned char m_SampleRequestQueuesStatus[NUM_SOUNDS_SAMPLES_BANKS];
	tSound m_asActiveSamples[NUM_SOUNDS_SAMPLES_SLOTS];
	tAudioEntity m_asAudioEntities[NUM_AUDIOENTITIES];
	int m_anAudioEntityIndices[NUM_AUDIOENTITIES];
	int m_nAudioEntitiesTotal;
	CVector m_avecReflectionsPos[NUM_AUDIO_REFLECTIONS];
	float m_afReflectionsDistances[NUM_AUDIO_REFLECTIONS];
	cAudioScriptObjectManager m_sAudioScriptObjectManager;
	cPedComments m_sPedComments;
	int m_nFireAudioEntity;
	int m_nWaterCannonEntity;
	int m_nPoliceChannelEntity;
	cPoliceRadioQueue m_sPoliceRadioQueue;
	int m_nFrontEndEntity;
	int m_nCollisionEntity;
	cAudioCollisionManager m_sCollisionManager;
	int m_nProjectileEntity;
	int m_nBridgeEntity;
	cMissionAudio m_sMissionAudio;
	int m_anRandomTable[5];
	unsigned char m_nTimeSpent;
	bool m_bUserPause;
	bool m_bPreviousUserPause;
	int m_FrameCounter;

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

//VALIDATE_SIZE(cAudioManager, 0x4B14);

extern cAudioManager &gAudioManager;

#include "meta/meta.cAudioManager.h"
