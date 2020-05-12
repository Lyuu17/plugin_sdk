/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFileMgr.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE char *CFileMgr::ms_dirName = (char *)GLOBAL_ADDRESS_BY_VERSION(0x713CA8, 0x713CA8, 0x723DE8);
PLUGIN_VARIABLE char *CFileMgr::ms_rootDirName = (char *)GLOBAL_ADDRESS_BY_VERSION(0x5F18F8, 0x5F17F0, 0x5FE7F0);

int addrof(CFileMgr::Initialise) = ADDRESS_BY_VERSION(0x478F80, 0x478F80, 0x478F80);
int gaddrof(CFileMgr::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x478F80, 0x478F80, 0x478F80);

// Converted from cdecl void CFileMgr::Initialise(void) 0x478F80
void CFileMgr::Initialise() {
    plugin::CallDynGlobal(gaddrof(CFileMgr::Initialise));
}

int addrof(CFileMgr::ChangeDir) = ADDRESS_BY_VERSION(0x478FB0, 0x478FB0, 0x478FB0);
int gaddrof(CFileMgr::ChangeDir) = GLOBAL_ADDRESS_BY_VERSION(0x478FB0, 0x478FB0, 0x478FB0);

// Converted from cdecl void CFileMgr::ChangeDir(char const*dir) 0x478FB0
void CFileMgr::ChangeDir(char const* dir) {
    plugin::CallDynGlobal<char const*>(gaddrof(CFileMgr::ChangeDir), dir);
}

int addrof(CFileMgr::SetDir) = ADDRESS_BY_VERSION(0x479020, 0x479020, 0x479020);
int gaddrof(CFileMgr::SetDir) = GLOBAL_ADDRESS_BY_VERSION(0x479020, 0x479020, 0x479020);

// Converted from cdecl void CFileMgr::SetDir(char const*dir) 0x479020
void CFileMgr::SetDir(char const* dir) {
    plugin::CallDynGlobal<char const*>(gaddrof(CFileMgr::SetDir), dir);
}

int addrof(CFileMgr::SetDirMyDocuments) = ADDRESS_BY_VERSION(0x479080, 0x479080, 0x479080);
int gaddrof(CFileMgr::SetDirMyDocuments) = GLOBAL_ADDRESS_BY_VERSION(0x479080, 0x479080, 0x479080);

// Converted from cdecl void CFileMgr::SetDirMyDocuments(void) 0x479080
void CFileMgr::SetDirMyDocuments() {
    plugin::CallDynGlobal(gaddrof(CFileMgr::SetDirMyDocuments));
}

int addrof(CFileMgr::LoadTextFile) = ADDRESS_BY_VERSION(0x479090, 0x479090, 0x479090);
int gaddrof(CFileMgr::LoadTextFile) = GLOBAL_ADDRESS_BY_VERSION(0x479090, 0x479090, 0x479090);

// Converted from cdecl int CFileMgr::LoadTextFile(char const*filepath,uchar *buffer,int size, char const*mode) 0x479090
FILESTREAM CFileMgr::LoadTextFile(char const* filepath, unsigned char* buffer, int size, char const* mode) {
    return plugin::CallAndReturnDynGlobal<FILESTREAM, char const*, unsigned char*, int, char const*>(gaddrof(CFileMgr::LoadTextFile), filepath, buffer, size, mode);
}

int addrof(CFileMgr::OpenFile) = ADDRESS_BY_VERSION(0x479100, 0x479100, 0x479100);
int gaddrof(CFileMgr::OpenFile) = GLOBAL_ADDRESS_BY_VERSION(0x479100, 0x479100, 0x479100);

// Converted from cdecl int CFileMgr::OpenFile(char const*filepath,char const*mode) 0x479100
FILESTREAM CFileMgr::OpenFile(char const* filepath, char const* mode) {
    return plugin::CallAndReturnDynGlobal<FILESTREAM, char const*, char const*>(gaddrof(CFileMgr::OpenFile), filepath, mode);
}

int addrof(CFileMgr::OpenFileForWriting) = ADDRESS_BY_VERSION(0x479120, 0x479120, 0x479120);
int gaddrof(CFileMgr::OpenFileForWriting) = GLOBAL_ADDRESS_BY_VERSION(0x479120, 0x479120, 0x479120);

// Converted from cdecl int CFileMgr::OpenFileForWriting(char const*filepath) 0x479120
FILESTREAM CFileMgr::OpenFileForWriting(char const* filepath) {
    return plugin::CallAndReturnDynGlobal<FILESTREAM, char const*>(gaddrof(CFileMgr::OpenFileForWriting), filepath);
}

int addrof(CFileMgr::Read) = ADDRESS_BY_VERSION(0x479140, 0x479140, 0x479140);
int gaddrof(CFileMgr::Read) = GLOBAL_ADDRESS_BY_VERSION(0x479140, 0x479140, 0x479140);

// Converted from cdecl int CFileMgr::Read(int fileHandle,char *buffer,int size) 0x479140
int CFileMgr::Read(FILESTREAM fileHandle, char* buffer, int size) {
    return plugin::CallAndReturnDynGlobal<int, FILESTREAM, char*, int>(gaddrof(CFileMgr::Read), fileHandle, buffer, size);
}

int addrof(CFileMgr::Write) = ADDRESS_BY_VERSION(0x479160, 0x479160, 0x479160);
int gaddrof(CFileMgr::Write) = GLOBAL_ADDRESS_BY_VERSION(0x479160, 0x479160, 0x479160);

// Converted from cdecl int CFileMgr::Write(int fileHandle,char *buffer,int size) 0x479160
int CFileMgr::Write(FILESTREAM fileHandle, char* buffer, int size) {
    return plugin::CallAndReturnDynGlobal<int, FILESTREAM, char*, int>(gaddrof(CFileMgr::Write), fileHandle, buffer, size);
}

int addrof(CFileMgr::Seek) = ADDRESS_BY_VERSION(0x479180, 0x479180, 0x479180);
int gaddrof(CFileMgr::Seek) = GLOBAL_ADDRESS_BY_VERSION(0x479180, 0x479180, 0x479180);

// Converted from cdecl bool CFileMgr::Seek(int fileHandle,int offset,int origin) 0x479180
bool CFileMgr::Seek(FILESTREAM fileHandle, int offset, int origin) {
    return plugin::CallAndReturnDynGlobal<int, FILESTREAM, int>(gaddrof(CFileMgr::Seek), fileHandle, offset, origin);
}

int addrof(CFileMgr::ReadLine) = ADDRESS_BY_VERSION(0x4791D0, 0x4791D0, 0x4791D0);
int gaddrof(CFileMgr::ReadLine) = GLOBAL_ADDRESS_BY_VERSION(0x4791D0, 0x4791D0, 0x4791D0);

// Converted from cdecl bool CFileMgr::ReadLine(int fileHandle,char *buffer,int maxSize) 0x4791D0
bool CFileMgr::ReadLine(FILESTREAM fileHandle, char* buffer, int maxSize) {
    return plugin::CallAndReturnDynGlobal<bool, FILESTREAM, char*, int>(gaddrof(CFileMgr::ReadLine), fileHandle, buffer, maxSize);
}

int addrof(CFileMgr::CloseFile) = ADDRESS_BY_VERSION(0x479200, 0x479200, 0x479200);
int gaddrof(CFileMgr::CloseFile) = GLOBAL_ADDRESS_BY_VERSION(0x479200, 0x479200, 0x479200);

// Converted from cdecl int CFileMgr::CloseFile(int fileHandle) 0x479200
int CFileMgr::CloseFile(FILESTREAM fileHandle) {
    return plugin::CallAndReturnDynGlobal<int, FILESTREAM>(gaddrof(CFileMgr::CloseFile), fileHandle);
}

int addrof(CFileMgr::GetErrorReadWrite) = ADDRESS_BY_VERSION(0x479210, 0x479210, 0x479210);
int gaddrof(CFileMgr::GetErrorReadWrite) = GLOBAL_ADDRESS_BY_VERSION(0x479210, 0x479210, 0x479210);

// Converted from cdecl int CFileMgr::GetErrorReadWrite(int fileHandle) 0x479210
int CFileMgr::GetErrorReadWrite(FILESTREAM fileHandle) {
    return plugin::CallAndReturnDynGlobal<int, FILESTREAM>(gaddrof(CFileMgr::GetErrorReadWrite), fileHandle);
}
