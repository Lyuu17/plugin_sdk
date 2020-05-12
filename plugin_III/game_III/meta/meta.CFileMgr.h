/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CFileMgr::Initialise)
	static int address;
	static int global_address;
	static const int id = 0x478F80;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x478F80, 0x478F80, 0x478F80>;
	using refs_t = RefList<>;
	using def_t = void();
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFileMgr::ChangeDir)
	static int address;
	static int global_address;
	static const int id = 0x478FB0;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x478FB0, 0x478FB0, 0x478FB0>;
	using refs_t = RefList<>;
	using def_t = void(char const*);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<char const*>, 0>;
META_END

META_BEGIN(CFileMgr::SetDir)
	static int address;
	static int global_address;
	static const int id = 0x479020;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x479020, 0x479020, 0x479020>;
	using refs_t = RefList<>;
	using def_t = void(char const*);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<char const*>, 0>;
META_END

META_BEGIN(CFileMgr::SetDirMyDocuments)
	static int address;
	static int global_address;
	static const int id = 0x479080;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x479080, 0x479080, 0x479080>;
	using refs_t = RefList<>;
	using def_t = void();
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CFileMgr::LoadTextFile)
	static int address;
	static int global_address;
	static const int id = 0x479090;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x479090, 0x479090, 0x479090>;
	using refs_t = RefList<>;
	using def_t = FILESTREAM(char const*, unsigned char*, int, char const*);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<char const*, unsigned char*, int, char const*>, 0, 1, 2, 3>;
META_END

META_BEGIN(CFileMgr::OpenFile)
	static int address;
	static int global_address;
	static const int id = 0x479100;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x479100, 0x479100, 0x479100>;
	using refs_t = RefList<>;
	using def_t = FILESTREAM(char const*, char const *);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<char const*, char const*>, 0, 1>;
META_END

META_BEGIN(CFileMgr::OpenFileForWriting)
	static int address;
	static int global_address;
	static const int id = 0x479120;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x479120, 0x479120, 0x479120>;
	using refs_t = RefList<>;
	using def_t = FILESTREAM(char const*);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<char const*>, 0>;
META_END

META_BEGIN(CFileMgr::Read)
	static int address;
	static int global_address;
	static const int id = 0x479140;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x479140, 0x479140, 0x479140>;
	using refs_t = RefList<>;
	using def_t = int(FILESTREAM, char*, int);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<FILESTREAM, char*, int>, 0, 1, 2>;
META_END

META_BEGIN(CFileMgr::Write)
	static int address;
	static int global_address;
	static const int id = 0x479160;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x479160, 0x479160, 0x479160>;
	using refs_t = RefList<>;
	using def_t = int(FILESTREAM, char*, int);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<FILESTREAM, char*, int>, 0, 1, 2>;
META_END

META_BEGIN(CFileMgr::Seek)
	static int address;
	static int global_address;
	static const int id = 0x479180;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x479180, 0x479180, 0x479180>;
	using refs_t = RefList<>;
	using def_t = bool(FILESTREAM, int, int);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<FILESTREAM, int, int>, 0, 1, 2>;
META_END

META_BEGIN(CFileMgr::ReadLine)
	static int address;
	static int global_address;
	static const int id = 0x4791D0;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x4791D0, 0x4791D0, 0x4791D0>;
	using refs_t = RefList<>;
	using def_t = bool(FILESTREAM, char*, int);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<FILESTREAM, char*, int>, 0, 1, 2>;
META_END

META_BEGIN(CFileMgr::CloseFile)
	static int address;
	static int global_address;
	static const int id = 0x479200;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x479200, 0x479200, 0x479200>;
	using refs_t = RefList<>;
	using def_t = int(FILESTREAM);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<FILESTREAM>, 0>;
META_END

META_BEGIN(CFileMgr::GetErrorReadWrite)
	static int address;
	static int global_address;
	static const int id = 0x479210;
	static const bool is_virtual = false;
	static const int vtable_index = -1;
	using mv_addresses_t = MvAddresses<0x479210, 0x479210, 0x479210>;
	using refs_t = RefList<>;
	using def_t = int(FILESTREAM);
	static const int cb_priority = PRIORITY_BEFORE; 
	using calling_convention_t = CallingConventions::Cdecl;
	using args_t = ArgPick<ArgTypes<FILESTREAM>, 0>;
META_END

}
