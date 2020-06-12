
#ifndef __GAMETYPEINFO_H__
#define __GAMETYPEINFO_H__

/*
===================================================================================

	This file has been generated with the Type Info Generator v1.0 (c) 2004 id Software

	1176 constants
	123 enums
	509 classes/structs/unions
	36 templates
	6 max inheritance level for 'idPlayer'

===================================================================================
*/

typedef struct {
	const char * name;
	const char * type;
	const char * value;
} constantInfo_t;

typedef struct {
	const char * name;
	int value;
} enumValueInfo_t;

typedef struct {
	const char * typeName;
	const enumValueInfo_t * values;
} enumTypeInfo_t;

typedef struct {
	const char * type;
	const char * name;
	int offset;
	int size;
} classVariableInfo_t;

typedef struct {
	const char * typeName;
	const char * superType;
	int size;
	const classVariableInfo_t * variables;
} classTypeInfo_t;

static constantInfo_t constantInfo[] = {
	{ "int", "CPUID_NONE", "0" },
	{ "int", "CPUID_UNSUPPORTED", "1" },
	{ "int", "CPUID_GENERIC", "2" },
	{ "int", "CPUID_INTEL", "4" },
	{ "int", "CPUID_AMD", "8" },
	{ "int", "CPUID_MMX", "16" },
	{ "int", "CPUID_3DNOW", "32" },
	{ "int", "CPUID_SSE", "64" },
	{ "int", "CPUID_SSE2", "128" },
	{ "int", "CPUID_SSE3", "256" },
	{ "int", "CPUID_ALTIVEC", "512" },
	{ "int", "CPUID_HTT", "4096" },
	{ "int", "CPUID_CMOV", "8192" },
	{ "int", "CPUID_FTZ", "16384" },
	{ "int", "CPUID_DAZ", "32768" },
	{ "int", "FPU_EXCEPTION_INVALID_OPERATION", "1" },
	{ "int", "FPU_EXCEPTION_DENORMALIZED_OPERAND", "2" },
	{ "int", "FPU_EXCEPTION_DIVIDE_BY_ZERO", "4" },
	{ "int", "FPU_EXCEPTION_NUMERIC_OVERFLOW", "8" },
	{ "int", "FPU_EXCEPTION_NUMERIC_UNDERFLOW", "16" },
	{ "int", "FPU_EXCEPTION_INEXACT_RESULT", "32" },
	{ "int", "FPU_PRECISION_SINGLE", "0" },
	{ "int", "FPU_PRECISION_DOUBLE", "1" },
	{ "int", "FPU_PRECISION_DOUBLE_EXTENDED", "2" },
	{ "int", "FPU_ROUNDING_TO_NEAREST", "0" },
	{ "int", "FPU_ROUNDING_DOWN", "1" },
	{ "int", "FPU_ROUNDING_UP", "2" },
	{ "int", "FPU_ROUNDING_TO_ZERO", "3" },
	{ "int", "AXIS_LEFT_X", "0" },
	{ "int", "AXIS_LEFT_Y", "1" },
	{ "int", "AXIS_RIGHT_X", "2" },
	{ "int", "AXIS_RIGHT_Y", "3" },
	{ "int", "AXIS_LEFT_TRIG", "4" },
	{ "int", "AXIS_RIGHT_TRIG", "5" },
	{ "int", "MAX_JOYSTICK_AXIS", "6" },
	{ "int", "SE_NONE", "0" },
	{ "int", "SE_KEY", "1" },
	{ "int", "SE_CHAR", "2" },
	{ "int", "SE_MOUSE", "3" },
	{ "int", "SE_JOYSTICK", "4" },
	{ "int", "SE_CONSOLE", "5" },
	{ "int", "M_ACTION1", "0" },
	{ "int", "M_ACTION2", "1" },
	{ "int", "M_ACTION3", "2" },
	{ "int", "M_ACTION4", "3" },
	{ "int", "M_ACTION5", "4" },
	{ "int", "M_ACTION6", "5" },
	{ "int", "M_ACTION7", "6" },
	{ "int", "M_ACTION8", "7" },
	{ "int", "M_DELTAX", "8" },
	{ "int", "M_DELTAY", "9" },
	{ "int", "M_DELTAZ", "10" },
	{ "int", "J_ACTION1", "0" },
	{ "int", "J_ACTION2", "1" },
	{ "int", "J_ACTION3", "2" },
	{ "int", "J_ACTION4", "3" },
	{ "int", "J_ACTION5", "4" },
	{ "int", "J_ACTION6", "5" },
	{ "int", "J_ACTION7", "6" },
	{ "int", "J_ACTION8", "7" },
	{ "int", "J_ACTION9", "8" },
	{ "int", "J_ACTION10", "9" },
	{ "int", "J_ACTION11", "10" },
	{ "int", "J_ACTION12", "11" },
	{ "int", "J_ACTION13", "12" },
	{ "int", "J_ACTION14", "13" },
	{ "int", "J_ACTION15", "14" },
	{ "int", "J_ACTION16", "15" },
	{ "int", "J_ACTION17", "16" },
	{ "int", "J_ACTION18", "17" },
	{ "int", "J_ACTION19", "18" },
	{ "int", "J_ACTION20", "19" },
	{ "int", "J_ACTION21", "20" },
	{ "int", "J_ACTION22", "21" },
	{ "int", "J_ACTION23", "22" },
	{ "int", "J_ACTION24", "23" },
	{ "int", "J_ACTION25", "24" },
	{ "int", "J_ACTION26", "25" },
	{ "int", "J_ACTION27", "26" },
	{ "int", "J_ACTION28", "27" },
	{ "int", "J_ACTION29", "28" },
	{ "int", "J_ACTION30", "29" },
	{ "int", "J_ACTION31", "30" },
	{ "int", "J_ACTION32", "31" },
	{ "int", "J_ACTION_MAX", "31" },
	{ "int", "J_AXIS_MIN", "32" },
	{ "int", "J_AXIS_LEFT_X", "32" },
	{ "int", "J_AXIS_LEFT_Y", "33" },
	{ "int", "J_AXIS_RIGHT_X", "34" },
	{ "int", "J_AXIS_RIGHT_Y", "35" },
	{ "int", "J_AXIS_LEFT_TRIG", "36" },
	{ "int", "J_AXIS_RIGHT_TRIG", "37" },
	{ "int", "J_AXIS_MAX", "37" },
	{ "int", "J_DPAD_UP", "38" },
	{ "int", "J_DPAD_DOWN", "39" },
	{ "int", "J_DPAD_LEFT", "40" },
	{ "int", "J_DPAD_RIGHT", "41" },
	{ "int", "MAX_JOY_EVENT", "42" },
	{ "int", "NA_BAD", "0" },
	{ "int", "NA_LOOPBACK", "1" },
	{ "int", "NA_BROADCAST", "2" },
	{ "int", "NA_IP", "3" },
	{ "int", "THREAD_NORMAL", "0" },
	{ "int", "THREAD_ABOVE_NORMAL", "1" },
	{ "int", "THREAD_HIGHEST", "2" },
	{ "const int", "MAX_THREADS", "10" },
	{ "const int", "MAX_CRITICAL_SECTIONS", "4" },
	{ "int", "CRITICAL_SECTION_ZERO", "0" },
	{ "int", "CRITICAL_SECTION_ONE", "1" },
	{ "int", "CRITICAL_SECTION_TWO", "2" },
	{ "int", "CRITICAL_SECTION_THREE", "3" },
	{ "const int", "MAX_TRIGGER_EVENTS", "4" },
	{ "int", "TRIGGER_EVENT_ZERO", "0" },
	{ "int", "TRIGGER_EVENT_ONE", "1" },
	{ "int", "TRIGGER_EVENT_TWO", "2" },
	{ "int", "TRIGGER_EVENT_THREE", "3" },
	{ "const int", "MIXBUFFER_SAMPLES", "4096" },
	{ "int", "SPEAKER_LEFT", "0" },
	{ "int", "SPEAKER_RIGHT", "1" },
	{ "int", "SPEAKER_CENTER", "2" },
	{ "int", "SPEAKER_LFE", "3" },
	{ "int", "SPEAKER_BACKLEFT", "4" },
	{ "int", "SPEAKER_BACKRIGHT", "5" },
	{ "int", "idMath::LOOKUP_BITS", "8" },
	{ "int", "idMath::EXP_POS", "23" },
	{ "int", "idMath::EXP_BIAS", "127" },
	{ "int", "idMath::LOOKUP_POS", "15" },
	{ "int", "idMath::SEED_POS", "15" },
	{ "int", "idMath::SQRT_TABLE_SIZE", "512" },
	{ "int", "idMath::LOOKUP_MASK", "511" },
	{ "static const int", "idRandom::MAX_RAND", "0x7fff" },
	{ "static const int", "idRandom2::MAX_RAND", "0x7fff" },
	{ "static const unsigned long", "idRandom2::IEEE_ONE", "0x3f800000" },
	{ "static const unsigned long", "idRandom2::IEEE_MASK", "0x007fffff" },
	{ "int", "EXTRAPOLATION_NONE", "1" },
	{ "int", "EXTRAPOLATION_LINEAR", "2" },
	{ "int", "EXTRAPOLATION_ACCELLINEAR", "4" },
	{ "int", "EXTRAPOLATION_DECELLINEAR", "8" },
	{ "int", "EXTRAPOLATION_ACCELSINE", "16" },
	{ "int", "EXTRAPOLATION_DECELSINE", "32" },
	{ "int", "EXTRAPOLATION_NOSTOP", "64" },
	{ "int", "idCurve_Spline< class type >::BT_FREE", "0" },
	{ "int", "idCurve_Spline< class type >::BT_CLAMPED", "1" },
	{ "int", "idCurve_Spline< class type >::BT_CLOSED", "2" },
	{ "int", "TRM_INVALID", "0" },
	{ "int", "TRM_BOX", "1" },
	{ "int", "TRM_OCTAHEDRON", "2" },
	{ "int", "TRM_DODECAHEDRON", "3" },
	{ "int", "TRM_CYLINDER", "4" },
	{ "int", "TRM_CONE", "5" },
	{ "int", "TRM_BONE", "6" },
	{ "int", "TRM_POLYGON", "7" },
	{ "int", "TRM_POLYGONVOLUME", "8" },
	{ "int", "TRM_CUSTOM", "9" },
	{ "const int", "C_COLOR_ESCAPE", "^" },
	{ "const int", "C_COLOR_DEFAULT", "0" },
	{ "const int", "C_COLOR_RED", "1" },
	{ "const int", "C_COLOR_GREEN", "2" },
	{ "const int", "C_COLOR_YELLOW", "3" },
	{ "const int", "C_COLOR_BLUE", "4" },
	{ "const int", "C_COLOR_CYAN", "5" },
	{ "const int", "C_COLOR_MAGENTA", "6" },
	{ "const int", "C_COLOR_WHITE", "7" },
	{ "const int", "C_COLOR_GRAY", "8" },
	{ "const int", "C_COLOR_BLACK", "9" },
	{ "const int", "STR_ALLOC_BASE", "20" },
	{ "const int", "STR_ALLOC_GRAN", "32" },
	{ "int", "MEASURE_SIZE", "0" },
	{ "int", "MEASURE_BANDWIDTH", "1" },
	{ "int", "LEXFL_NOERRORS", "1" },
	{ "int", "LEXFL_NOWARNINGS", "2" },
	{ "int", "LEXFL_NOFATALERRORS", "4" },
	{ "int", "LEXFL_NOSTRINGCONCAT", "8" },
	{ "int", "LEXFL_NOSTRINGESCAPECHARS", "16" },
	{ "int", "LEXFL_NODOLLARPRECOMPILE", "32" },
	{ "int", "LEXFL_NOBASEINCLUDES", "64" },
	{ "int", "LEXFL_ALLOWPATHNAMES", "128" },
	{ "int", "LEXFL_ALLOWNUMBERNAMES", "256" },
	{ "int", "LEXFL_ALLOWIPADDRESSES", "512" },
	{ "int", "LEXFL_ALLOWFLOATEXCEPTIONS", "1024" },
	{ "int", "LEXFL_ALLOWMULTICHARLITERALS", "2048" },
	{ "int", "LEXFL_ALLOWBACKSLASHSTRINGCONCAT", "4096" },
	{ "int", "LEXFL_ONLYSTRINGS", "8192" },
	{ "static const int", "idCmdArgs::MAX_COMMAND_ARGS", "64" },
	{ "static const int", "idCmdArgs::MAX_COMMAND_STRING", "2*1024" },
	{ "const int", "OLD_MAP_VERSION", "1" },
	{ "const int", "CURRENT_MAP_VERSION", "2" },
	{ "const int", "DEFAULT_CURVE_SUBDIVISION", "4" },
	{ "const float", "DEFAULT_CURVE_MAX_ERROR", "4.0" },
	{ "const float", "DEFAULT_CURVE_MAX_ERROR_CD", "24.0" },
	{ "const float", "DEFAULT_CURVE_MAX_LENGTH", "-1.0" },
	{ "const float", "DEFAULT_CURVE_MAX_LENGTH_CD", "-1.0" },
	{ "int", "idMapPrimitive::TYPE_INVALID", "-1" },
	{ "int", "idMapPrimitive::TYPE_BRUSH", "0" },
	{ "int", "idMapPrimitive::TYPE_PATCH", "1" },
	{ "int", "idTimer::TS_STARTED", "0" },
	{ "int", "idTimer::TS_STOPPED", "1" },
	{ "const int", "BUILD_NUMBER", "1304" },
	{ "int", "CMD_FL_ALL", "-1" },
	{ "int", "CMD_FL_CHEAT", "1" },
	{ "int", "CMD_FL_SYSTEM", "2" },
	{ "int", "CMD_FL_RENDERER", "4" },
	{ "int", "CMD_FL_SOUND", "8" },
	{ "int", "CMD_FL_GAME", "16" },
	{ "int", "CMD_FL_TOOL", "32" },
	{ "int", "CMD_EXEC_NOW", "0" },
	{ "int", "CMD_EXEC_INSERT", "1" },
	{ "int", "CMD_EXEC_APPEND", "2" },
	{ "int", "CVAR_ALL", "-1" },
	{ "int", "CVAR_BOOL", "1" },
	{ "int", "CVAR_INTEGER", "2" },
	{ "int", "CVAR_FLOAT", "4" },
	{ "int", "CVAR_SYSTEM", "8" },
	{ "int", "CVAR_RENDERER", "16" },
	{ "int", "CVAR_SOUND", "32" },
	{ "int", "CVAR_GUI", "64" },
	{ "int", "CVAR_GAME", "128" },
	{ "int", "CVAR_TOOL", "256" },
	{ "int", "CVAR_USERINFO", "512" },
	{ "int", "CVAR_SERVERINFO", "1024" },
	{ "int", "CVAR_NETWORKSYNC", "2048" },
	{ "int", "CVAR_STATIC", "4096" },
	{ "int", "CVAR_CHEAT", "8192" },
	{ "int", "CVAR_NOCHEAT", "16384" },
	{ "int", "CVAR_INIT", "32768" },
	{ "int", "CVAR_ROM", "65536" },
	{ "int", "CVAR_ARCHIVE", "131072" },
	{ "int", "CVAR_MODIFIED", "262144" },
	{ "int", "EDITOR_NONE", "0" },
	{ "int", "EDITOR_RADIANT", "2" },
	{ "int", "EDITOR_GUI", "4" },
	{ "int", "EDITOR_DEBUGGER", "8" },
	{ "int", "EDITOR_SCRIPT", "16" },
	{ "int", "EDITOR_LIGHT", "32" },
	{ "int", "EDITOR_SOUND", "64" },
	{ "int", "EDITOR_DECL", "128" },
	{ "int", "EDITOR_AF", "256" },
	{ "int", "EDITOR_PARTICLE", "512" },
	{ "int", "EDITOR_PDA", "1024" },
	{ "int", "EDITOR_AAS", "2048" },
	{ "int", "EDITOR_MATERIAL", "4096" },
	{ "int", "FS_SEEK_CUR", "0" },
	{ "int", "FS_SEEK_END", "1" },
	{ "int", "FS_SEEK_SET", "2" },
	{ "static const time_t", "FILE_NOT_FOUND_TIMESTAMP", "0xFFFFFFFF" },
	{ "static const int", "MAX_PURE_PAKS", "128" },
	{ "static const int", "MAX_OSPATH", "256" },
	{ "int", "FS_READ", "0" },
	{ "int", "FS_WRITE", "1" },
	{ "int", "FS_APPEND", "2" },
	{ "int", "PURE_OK", "0" },
	{ "int", "PURE_RESTART", "1" },
	{ "int", "PURE_MISSING", "2" },
	{ "int", "PURE_NODLL", "3" },
	{ "int", "DLTYPE_URL", "0" },
	{ "int", "DLTYPE_FILE", "1" },
	{ "int", "DL_WAIT", "0" },
	{ "int", "DL_INPROGRESS", "1" },
	{ "int", "DL_DONE", "2" },
	{ "int", "DL_ABORTING", "3" },
	{ "int", "DL_FAILED", "4" },
	{ "int", "FILE_EXEC", "0" },
	{ "int", "FILE_OPEN", "1" },
	{ "int", "FIND_NO", "0" },
	{ "int", "FIND_YES", "1" },
	{ "int", "FIND_ADDON", "2" },
	{ "const int", "USERCMD_HZ", "60" },
	{ "const int", "USERCMD_MSEC", "1000/60" },
	{ "const int", "BUTTON_ATTACK", "(1<<(0))" },
	{ "const int", "BUTTON_RUN", "(1<<(1))" },
	{ "const int", "BUTTON_ZOOM", "(1<<(2))" },
	{ "const int", "BUTTON_SCORES", "(1<<(3))" },
	{ "const int", "BUTTON_MLOOK", "(1<<(4))" },
	{ "const int", "BUTTON_PICKER", "(1<<(5))" },
	{ "const int", "BUTTON_ROTATE", "(1<<(6))" },
	{ "const int", "BUTTON_7", "(1<<(7))" },
	{ "const int", "IMPULSE_0", "0" },
	{ "const int", "IMPULSE_1", "1" },
	{ "const int", "IMPULSE_2", "2" },
	{ "const int", "IMPULSE_3", "3" },
	{ "const int", "IMPULSE_4", "4" },
	{ "const int", "IMPULSE_5", "5" },
	{ "const int", "IMPULSE_6", "6" },
	{ "const int", "IMPULSE_7", "7" },
	{ "const int", "IMPULSE_8", "8" },
	{ "const int", "IMPULSE_9", "9" },
	{ "const int", "IMPULSE_10", "10" },
	{ "const int", "IMPULSE_11", "11" },
	{ "const int", "IMPULSE_12", "12" },
	{ "const int", "IMPULSE_13", "13" },
	{ "const int", "IMPULSE_14", "14" },
	{ "const int", "IMPULSE_15", "15" },
	{ "const int", "IMPULSE_16", "16" },
	{ "const int", "IMPULSE_17", "17" },
	{ "const int", "IMPULSE_18", "18" },
	{ "const int", "IMPULSE_19", "19" },
	{ "const int", "IMPULSE_20", "20" },
	{ "const int", "IMPULSE_21", "21" },
	{ "const int", "IMPULSE_22", "22" },
	{ "const int", "IMPULSE_23", "23" },
	{ "const int", "IMPULSE_24", "24" },
	{ "const int", "IMPULSE_25", "25" },
	{ "const int", "IMPULSE_26", "26" },
	{ "const int", "IMPULSE_27", "27" },
	{ "const int", "IMPULSE_28", "28" },
	{ "const int", "IMPULSE_29", "29" },
	{ "const int", "IMPULSE_40", "40" },
	{ "const int", "IMPULSE_41", "41" },
	{ "const int", "IMPULSE_42", "42" },
	{ "const int", "IMPULSE_43", "43" },
	{ "const int", "IMPULSE_44", "44" },
	{ "const int", "IMPULSE_45", "45" },
	{ "const int", "IMPULSE_46", "46" },
	{ "const int", "UCF_IMPULSE_SEQUENCE", "0x0001" },
	{ "int", "INHIBIT_SESSION", "0" },
	{ "int", "INHIBIT_ASYNC", "1" },
	{ "const int", "MAX_BUFFERED_USERCMD", "64" },
	{ "int", "DECL_TABLE", "0" },
	{ "int", "DECL_MATERIAL", "1" },
	{ "int", "DECL_SKIN", "2" },
	{ "int", "DECL_SOUND", "3" },
	{ "int", "DECL_ENTITYDEF", "4" },
	{ "int", "DECL_MODELDEF", "5" },
	{ "int", "DECL_FX", "6" },
	{ "int", "DECL_PARTICLE", "7" },
	{ "int", "DECL_AF", "8" },
	{ "int", "DECL_PDA", "9" },
	{ "int", "DECL_VIDEO", "10" },
	{ "int", "DECL_AUDIO", "11" },
	{ "int", "DECL_EMAIL", "12" },
	{ "int", "DECL_MODELEXPORT", "13" },
	{ "int", "DECL_MAPDEF", "14" },
	{ "int", "DECL_MAX_TYPES", "32" },
	{ "int", "DS_UNPARSED", "0" },
	{ "int", "DS_DEFAULTED", "1" },
	{ "int", "DS_PARSED", "2" },
	{ "const int", "DECL_LEXER_FLAGS", "8|16|128|2048|4096|4" },
	{ "int", "FX_LIGHT", "0" },
	{ "int", "FX_PARTICLE", "1" },
	{ "int", "FX_DECAL", "2" },
	{ "int", "FX_MODEL", "3" },
	{ "int", "FX_SOUND", "4" },
	{ "int", "FX_SHAKE", "5" },
	{ "int", "FX_ATTACHLIGHT", "6" },
	{ "int", "FX_ATTACHENTITY", "7" },
	{ "int", "FX_LAUNCH", "8" },
	{ "int", "FX_SHOCKWAVE", "9" },
	{ "int", "PDIST_RECT", "0" },
	{ "int", "PDIST_CYLINDER", "1" },
	{ "int", "PDIST_SPHERE", "2" },
	{ "int", "PDIR_CONE", "0" },
	{ "int", "PDIR_OUTWARD", "1" },
	{ "int", "PPATH_STANDARD", "0" },
	{ "int", "PPATH_HELIX", "1" },
	{ "int", "PPATH_FLIES", "2" },
	{ "int", "PPATH_ORBIT", "3" },
	{ "int", "PPATH_DRIP", "4" },
	{ "int", "POR_VIEW", "0" },
	{ "int", "POR_AIMED", "1" },
	{ "int", "POR_X", "2" },
	{ "int", "POR_Y", "3" },
	{ "int", "POR_Z", "4" },
	{ "int", "DECLAF_CONSTRAINT_INVALID", "0" },
	{ "int", "DECLAF_CONSTRAINT_FIXED", "1" },
	{ "int", "DECLAF_CONSTRAINT_BALLANDSOCKETJOINT", "2" },
	{ "int", "DECLAF_CONSTRAINT_UNIVERSALJOINT", "3" },
	{ "int", "DECLAF_CONSTRAINT_HINGE", "4" },
	{ "int", "DECLAF_CONSTRAINT_SLIDER", "5" },
	{ "int", "DECLAF_CONSTRAINT_SPRING", "6" },
	{ "int", "DECLAF_JOINTMOD_AXIS", "0" },
	{ "int", "DECLAF_JOINTMOD_ORIGIN", "1" },
	{ "int", "DECLAF_JOINTMOD_BOTH", "2" },
	{ "int", "idAFVector::VEC_COORDS", "0" },
	{ "int", "idAFVector::VEC_JOINT", "1" },
	{ "int", "idAFVector::VEC_BONECENTER", "2" },
	{ "int", "idAFVector::VEC_BONEDIR", "3" },
	{ "int", "idDeclAF_Constraint::LIMIT_NONE", "-1" },
	{ "int", "idDeclAF_Constraint::LIMIT_CONE", "0" },
	{ "int", "idDeclAF_Constraint::LIMIT_PYRAMID", "1" },
	{ "const int", "MAX_EXPRESSION_OPS", "4096" },
	{ "const int", "MAX_EXPRESSION_REGISTERS", "4096" },
	{ "int", "FMV_IDLE", "0" },
	{ "int", "FMV_PLAY", "1" },
	{ "int", "FMV_EOF", "2" },
	{ "int", "FMV_ID_BLT", "3" },
	{ "int", "FMV_ID_IDLE", "4" },
	{ "int", "FMV_LOOPED", "5" },
	{ "int", "FMV_ID_WAIT", "6" },
	{ "int", "TF_LINEAR", "0" },
	{ "int", "TF_NEAREST", "1" },
	{ "int", "TF_DEFAULT", "2" },
	{ "int", "TR_REPEAT", "0" },
	{ "int", "TR_CLAMP", "1" },
	{ "int", "TR_CLAMP_TO_BORDER", "2" },
	{ "int", "TR_CLAMP_TO_ZERO", "3" },
	{ "int", "TR_CLAMP_TO_ZERO_ALPHA", "4" },
	{ "int", "DFRM_NONE", "0" },
	{ "int", "DFRM_SPRITE", "1" },
	{ "int", "DFRM_TUBE", "2" },
	{ "int", "DFRM_FLARE", "3" },
	{ "int", "DFRM_EXPAND", "4" },
	{ "int", "DFRM_MOVE", "5" },
	{ "int", "DFRM_EYEBALL", "6" },
	{ "int", "DFRM_PARTICLE", "7" },
	{ "int", "DFRM_PARTICLE2", "8" },
	{ "int", "DFRM_TURB", "9" },
	{ "int", "DI_STATIC", "0" },
	{ "int", "DI_SCRATCH", "1" },
	{ "int", "DI_CUBE_RENDER", "2" },
	{ "int", "DI_MIRROR_RENDER", "3" },
	{ "int", "DI_XRAY_RENDER", "4" },
	{ "int", "DI_REMOTE_RENDER", "5" },
	{ "int", "OP_TYPE_ADD", "0" },
	{ "int", "OP_TYPE_SUBTRACT", "1" },
	{ "int", "OP_TYPE_MULTIPLY", "2" },
	{ "int", "OP_TYPE_DIVIDE", "3" },
	{ "int", "OP_TYPE_MOD", "4" },
	{ "int", "OP_TYPE_TABLE", "5" },
	{ "int", "OP_TYPE_GT", "6" },
	{ "int", "OP_TYPE_GE", "7" },
	{ "int", "OP_TYPE_LT", "8" },
	{ "int", "OP_TYPE_LE", "9" },
	{ "int", "OP_TYPE_EQ", "10" },
	{ "int", "OP_TYPE_NE", "11" },
	{ "int", "OP_TYPE_AND", "12" },
	{ "int", "OP_TYPE_OR", "13" },
	{ "int", "OP_TYPE_SOUND", "14" },
	{ "int", "EXP_REG_TIME", "0" },
	{ "int", "EXP_REG_PARM0", "1" },
	{ "int", "EXP_REG_PARM1", "2" },
	{ "int", "EXP_REG_PARM2", "3" },
	{ "int", "EXP_REG_PARM3", "4" },
	{ "int", "EXP_REG_PARM4", "5" },
	{ "int", "EXP_REG_PARM5", "6" },
	{ "int", "EXP_REG_PARM6", "7" },
	{ "int", "EXP_REG_PARM7", "8" },
	{ "int", "EXP_REG_PARM8", "9" },
	{ "int", "EXP_REG_PARM9", "10" },
	{ "int", "EXP_REG_PARM10", "11" },
	{ "int", "EXP_REG_PARM11", "12" },
	{ "int", "EXP_REG_GLOBAL0", "13" },
	{ "int", "EXP_REG_GLOBAL1", "14" },
	{ "int", "EXP_REG_GLOBAL2", "15" },
	{ "int", "EXP_REG_GLOBAL3", "16" },
	{ "int", "EXP_REG_GLOBAL4", "17" },
	{ "int", "EXP_REG_GLOBAL5", "18" },
	{ "int", "EXP_REG_GLOBAL6", "19" },
	{ "int", "EXP_REG_GLOBAL7", "20" },
	{ "int", "EXP_REG_NUM_PREDEFINED", "21" },
	{ "int", "TG_EXPLICIT", "0" },
	{ "int", "TG_DIFFUSE_CUBE", "1" },
	{ "int", "TG_REFLECT_CUBE", "2" },
	{ "int", "TG_SKYBOX_CUBE", "3" },
	{ "int", "TG_WOBBLESKY_CUBE", "4" },
	{ "int", "TG_SCREEN", "5" },
	{ "int", "TG_SCREEN2", "6" },
	{ "int", "TG_GLASSWARP", "7" },
	{ "int", "SL_AMBIENT", "0" },
	{ "int", "SL_BUMP", "1" },
	{ "int", "SL_DIFFUSE", "2" },
	{ "int", "SL_SPECULAR", "3" },
	{ "int", "SVC_IGNORE", "0" },
	{ "int", "SVC_MODULATE", "1" },
	{ "int", "SVC_INVERSE_MODULATE", "2" },
	{ "static const int", "MAX_FRAGMENT_IMAGES", "8" },
	{ "static const int", "MAX_VERTEX_PARMS", "4" },
	{ "int", "MC_BAD", "0" },
	{ "int", "MC_OPAQUE", "1" },
	{ "int", "MC_PERFORATED", "2" },
	{ "int", "MC_TRANSLUCENT", "3" },
	{ "int", "SS_SUBVIEW", "-3" },
	{ "int", "SS_GUI", "-2" },
	{ "int", "SS_BAD", "-1" },
	{ "int", "SS_OPAQUE", "0" },
	{ "int", "SS_PORTAL_SKY", "1" },
	{ "int", "SS_DECAL", "2" },
	{ "int", "SS_FAR", "3" },
	{ "int", "SS_MEDIUM", "4" },
	{ "int", "SS_CLOSE", "5" },
	{ "int", "SS_ALMOST_NEAREST", "6" },
	{ "int", "SS_NEAREST", "7" },
	{ "int", "SS_POST_PROCESS", "100" },
	{ "int", "CT_FRONT_SIDED", "0" },
	{ "int", "CT_BACK_SIDED", "1" },
	{ "int", "CT_TWO_SIDED", "2" },
	{ "const int", "MAX_SHADER_STAGES", "256" },
	{ "const int", "MAX_TEXGEN_REGISTERS", "4" },
	{ "const int", "MAX_ENTITY_SHADER_PARMS", "12" },
	{ "int", "MF_DEFAULTED", "1" },
	{ "int", "MF_POLYGONOFFSET", "2" },
	{ "int", "MF_NOSHADOWS", "4" },
	{ "int", "MF_FORCESHADOWS", "8" },
	{ "int", "MF_NOSELFSHADOW", "16" },
	{ "int", "MF_NOPORTALFOG", "32" },
	{ "int", "MF_EDITOR_VISIBLE", "64" },
	{ "int", "CONTENTS_SOLID", "1" },
	{ "int", "CONTENTS_OPAQUE", "2" },
	{ "int", "CONTENTS_WATER", "4" },
	{ "int", "CONTENTS_PLAYERCLIP", "8" },
	{ "int", "CONTENTS_MONSTERCLIP", "16" },
	{ "int", "CONTENTS_MOVEABLECLIP", "32" },
	{ "int", "CONTENTS_IKCLIP", "64" },
	{ "int", "CONTENTS_BLOOD", "128" },
	{ "int", "CONTENTS_BODY", "256" },
	{ "int", "CONTENTS_PROJECTILE", "512" },
	{ "int", "CONTENTS_CORPSE", "1024" },
	{ "int", "CONTENTS_RENDERMODEL", "2048" },
	{ "int", "CONTENTS_TRIGGER", "4096" },
	{ "int", "CONTENTS_AAS_SOLID", "8192" },
	{ "int", "CONTENTS_AAS_OBSTACLE", "16384" },
	{ "int", "CONTENTS_FLASHLIGHT_TRIGGER", "32768" },
	{ "int", "CONTENTS_AREAPORTAL", "1048576" },
	{ "int", "CONTENTS_NOCSG", "2097152" },
	{ "int", "CONTENTS_REMOVE_UTIL", "-3145729" },
	{ "const int", "NUM_SURFACE_BITS", "4" },
	{ "const int", "MAX_SURFACE_TYPES", "1<<4" },
	{ "int", "SURFTYPE_NONE", "0" },
	{ "int", "SURFTYPE_METAL", "1" },
	{ "int", "SURFTYPE_STONE", "2" },
	{ "int", "SURFTYPE_FLESH", "3" },
	{ "int", "SURFTYPE_WOOD", "4" },
	{ "int", "SURFTYPE_CARDBOARD", "5" },
	{ "int", "SURFTYPE_LIQUID", "6" },
	{ "int", "SURFTYPE_GLASS", "7" },
	{ "int", "SURFTYPE_PLASTIC", "8" },
	{ "int", "SURFTYPE_RICOCHET", "9" },
	{ "int", "SURFTYPE_10", "10" },
	{ "int", "SURFTYPE_11", "11" },
	{ "int", "SURFTYPE_12", "12" },
	{ "int", "SURFTYPE_13", "13" },
	{ "int", "SURFTYPE_14", "14" },
	{ "int", "SURFTYPE_15", "15" },
	{ "int", "SURF_TYPE_BIT0", "1" },
	{ "int", "SURF_TYPE_BIT1", "2" },
	{ "int", "SURF_TYPE_BIT2", "4" },
	{ "int", "SURF_TYPE_BIT3", "8" },
	{ "int", "SURF_TYPE_MASK", "15" },
	{ "int", "SURF_NODAMAGE", "16" },
	{ "int", "SURF_SLICK", "32" },
	{ "int", "SURF_COLLISION", "64" },
	{ "int", "SURF_LADDER", "128" },
	{ "int", "SURF_NOIMPACT", "256" },
	{ "int", "SURF_NOSTEPS", "512" },
	{ "int", "SURF_DISCRETE", "1024" },
	{ "int", "SURF_NOFRAGMENT", "2048" },
	{ "int", "SURF_NULLNORMAL", "4096" },
	{ "const int", "SHADOW_CAP_INFINITE", "64" },
	{ "int", "DM_STATIC", "0" },
	{ "int", "DM_CACHED", "1" },
	{ "int", "DM_CONTINUOUS", "2" },
	{ "int", "INVALID_JOINT", "-1" },
	{ "const int", "GLYPH_START", "0" },
	{ "const int", "GLYPH_END", "255" },
	{ "const int", "GLYPH_CHARSTART", "32" },
	{ "const int", "GLYPH_CHAREND", "127" },
	{ "const int", "GLYPHS_PER_FONT", "255-0+1" },
	{ "const int", "SMALLCHAR_WIDTH", "8" },
	{ "const int", "SMALLCHAR_HEIGHT", "16" },
	{ "const int", "BIGCHAR_WIDTH", "16" },
	{ "const int", "BIGCHAR_HEIGHT", "16" },
	{ "const int", "SCREEN_WIDTH", "640" },
	{ "const int", "SCREEN_HEIGHT", "480" },
	{ "const int", "MAX_GLOBAL_SHADER_PARMS", "12" },
	{ "const int", "SHADERPARM_RED", "0" },
	{ "const int", "SHADERPARM_GREEN", "1" },
	{ "const int", "SHADERPARM_BLUE", "2" },
	{ "const int", "SHADERPARM_ALPHA", "3" },
	{ "const int", "SHADERPARM_TIMESCALE", "3" },
	{ "const int", "SHADERPARM_TIMEOFFSET", "4" },
	{ "const int", "SHADERPARM_DIVERSITY", "5" },
	{ "const int", "SHADERPARM_MODE", "7" },
	{ "const int", "SHADERPARM_TIME_OF_DEATH", "7" },
	{ "const int", "SHADERPARM_MD5_SKINSCALE", "8" },
	{ "const int", "SHADERPARM_MD3_FRAME", "8" },
	{ "const int", "SHADERPARM_MD3_LASTFRAME", "9" },
	{ "const int", "SHADERPARM_MD3_BACKLERP", "10" },
	{ "const int", "SHADERPARM_BEAM_END_X", "8" },
	{ "const int", "SHADERPARM_BEAM_END_Y", "9" },
	{ "const int", "SHADERPARM_BEAM_END_Z", "10" },
	{ "const int", "SHADERPARM_BEAM_WIDTH", "11" },
	{ "const int", "SHADERPARM_SPRITE_WIDTH", "8" },
	{ "const int", "SHADERPARM_SPRITE_HEIGHT", "9" },
	{ "const int", "SHADERPARM_PARTICLE_STOPTIME", "8" },
	{ "const int", "MAX_RENDERENTITY_GUI", "3" },
	{ "static const int", "NUM_PORTAL_ATTRIBUTES", "3" },
	{ "int", "PS_BLOCK_NONE", "0" },
	{ "int", "PS_BLOCK_VIEW", "1" },
	{ "int", "PS_BLOCK_LOCATION", "2" },
	{ "int", "PS_BLOCK_AIR", "4" },
	{ "int", "PS_BLOCK_ALL", "7" },
	{ "const float", "DOOM_TO_METERS", "0.0254" },
	{ "const float", "METERS_TO_DOOM", "(1.0/0)" },
	{ "static const int", "SSF_PRIVATE_SOUND", "(1<<(0))" },
	{ "static const int", "SSF_ANTI_PRIVATE_SOUND", "(1<<(1))" },
	{ "static const int", "SSF_NO_OCCLUSION", "(1<<(2))" },
	{ "static const int", "SSF_GLOBAL", "(1<<(3))" },
	{ "static const int", "SSF_OMNIDIRECTIONAL", "(1<<(4))" },
	{ "static const int", "SSF_LOOPING", "(1<<(5))" },
	{ "static const int", "SSF_PLAY_ONCE", "(1<<(6))" },
	{ "static const int", "SSF_UNCLAMPED", "(1<<(7))" },
	{ "static const int", "SSF_NO_FLICKER", "(1<<(8))" },
	{ "static const int", "SSF_NO_DUPS", "(1<<(9))" },
	{ "const int", "SOUND_MAX_LIST_WAVS", "32" },
	{ "const int", "SOUND_MAX_CLASSES", "4" },
	{ "static const int", "SCHANNEL_ANY", "0" },
	{ "static const int", "SCHANNEL_ONE", "1" },
	{ "int", "CONTACT_NONE", "0" },
	{ "int", "CONTACT_EDGE", "1" },
	{ "int", "CONTACT_MODELVERTEX", "2" },
	{ "int", "CONTACT_TRMVERTEX", "3" },
	{ "int", "ALLOW_YES", "0" },
	{ "int", "ALLOW_BADPASS", "1" },
	{ "int", "ALLOW_NOTYET", "2" },
	{ "int", "ALLOW_NO", "3" },
	{ "int", "ESC_IGNORE", "0" },
	{ "int", "ESC_MAIN", "1" },
	{ "int", "ESC_GUI", "2" },
	{ "int", "TEST_PARTICLE_MODEL", "0" },
	{ "int", "TEST_PARTICLE_IMPACT", "1" },
	{ "int", "TEST_PARTICLE_MUZZLE", "2" },
	{ "int", "TEST_PARTICLE_FLIGHT", "3" },
	{ "int", "TEST_PARTICLE_SELECTED", "4" },
	{ "const int", "GAME_API_VERSION", "8" },
	{ "const int", "INITIAL_RELEASE_BUILD_NUMBER", "1262" },
	{ "int", "ev_error", "-1" },
	{ "int", "ev_void", "0" },
	{ "int", "ev_scriptevent", "1" },
	{ "int", "ev_namespace", "2" },
	{ "int", "ev_string", "3" },
	{ "int", "ev_float", "4" },
	{ "int", "ev_vector", "5" },
	{ "int", "ev_entity", "6" },
	{ "int", "ev_field", "7" },
	{ "int", "ev_function", "8" },
	{ "int", "ev_virtualfunction", "9" },
	{ "int", "ev_pointer", "10" },
	{ "int", "ev_object", "11" },
	{ "int", "ev_jumpoffset", "12" },
	{ "int", "ev_argsize", "13" },
	{ "int", "ev_boolean", "14" },
	{ "int", "idVarDef::uninitialized", "0" },
	{ "int", "idVarDef::initializedVariable", "1" },
	{ "int", "idVarDef::initializedConstant", "2" },
	{ "int", "idVarDef::stackVariable", "3" },
	{ "const int", "ANIM_NumAnimChannels", "5" },
	{ "const int", "ANIM_MaxAnimsPerChannel", "3" },
	{ "const int", "ANIM_MaxSyncedAnims", "3" },
	{ "const int", "ANIMCHANNEL_ALL", "0" },
	{ "const int", "ANIMCHANNEL_TORSO", "1" },
	{ "const int", "ANIMCHANNEL_LEGS", "2" },
	{ "const int", "ANIMCHANNEL_HEAD", "3" },
	{ "const int", "ANIMCHANNEL_EYELIDS", "4" },
	{ "int", "JOINTMOD_NONE", "0" },
	{ "int", "JOINTMOD_LOCAL", "1" },
	{ "int", "JOINTMOD_LOCAL_OVERRIDE", "2" },
	{ "int", "JOINTMOD_WORLD", "3" },
	{ "int", "JOINTMOD_WORLD_OVERRIDE", "4" },
	{ "int", "FC_SCRIPTFUNCTION", "0" },
	{ "int", "FC_SCRIPTFUNCTIONOBJECT", "1" },
	{ "int", "FC_EVENTFUNCTION", "2" },
	{ "int", "FC_SOUND", "3" },
	{ "int", "FC_SOUND_VOICE", "4" },
	{ "int", "FC_SOUND_VOICE2", "5" },
	{ "int", "FC_SOUND_BODY", "6" },
	{ "int", "FC_SOUND_BODY2", "7" },
	{ "int", "FC_SOUND_BODY3", "8" },
	{ "int", "FC_SOUND_WEAPON", "9" },
	{ "int", "FC_SOUND_ITEM", "10" },
	{ "int", "FC_SOUND_GLOBAL", "11" },
	{ "int", "FC_SOUND_CHATTER", "12" },
	{ "int", "FC_SKIN", "13" },
	{ "int", "FC_TRIGGER", "14" },
	{ "int", "FC_TRIGGER_SMOKE_PARTICLE", "15" },
	{ "int", "FC_MELEE", "16" },
	{ "int", "FC_DIRECTDAMAGE", "17" },
	{ "int", "FC_BEGINATTACK", "18" },
	{ "int", "FC_ENDATTACK", "19" },
	{ "int", "FC_MUZZLEFLASH", "20" },
	{ "int", "FC_CREATEMISSILE", "21" },
	{ "int", "FC_LAUNCHMISSILE", "22" },
	{ "int", "FC_FIREMISSILEATTARGET", "23" },
	{ "int", "FC_FOOTSTEP", "24" },
	{ "int", "FC_LEFTFOOT", "25" },
	{ "int", "FC_RIGHTFOOT", "26" },
	{ "int", "FC_ENABLE_EYE_FOCUS", "27" },
	{ "int", "FC_DISABLE_EYE_FOCUS", "28" },
	{ "int", "FC_FX", "29" },
	{ "int", "FC_DISABLE_GRAVITY", "30" },
	{ "int", "FC_ENABLE_GRAVITY", "31" },
	{ "int", "FC_JUMP", "32" },
	{ "int", "FC_ENABLE_CLIP", "33" },
	{ "int", "FC_DISABLE_CLIP", "34" },
	{ "int", "FC_ENABLE_WALK_IK", "35" },
	{ "int", "FC_DISABLE_WALK_IK", "36" },
	{ "int", "FC_ENABLE_LEG_IK", "37" },
	{ "int", "FC_DISABLE_LEG_IK", "38" },
	{ "int", "FC_RECORDDEMO", "39" },
	{ "int", "FC_AVIGAME", "40" },
	{ "int", "AF_JOINTMOD_AXIS", "0" },
	{ "int", "AF_JOINTMOD_ORIGIN", "1" },
	{ "int", "AF_JOINTMOD_BOTH", "2" },
	{ "int", "PATHTYPE_WALK", "0" },
	{ "int", "PATHTYPE_WALKOFFLEDGE", "1" },
	{ "int", "PATHTYPE_BARRIERJUMP", "2" },
	{ "int", "PATHTYPE_JUMP", "3" },
	{ "int", "PVS_NORMAL", "0" },
	{ "int", "PVS_ALL_PORTALS_OPEN", "1" },
	{ "int", "PVS_CONNECTED_AREAS", "2" },
	{ "int", "GAME_SP", "0" },
	{ "int", "GAME_DM", "1" },
	{ "int", "GAME_TOURNEY", "2" },
	{ "int", "GAME_TDM", "3" },
	{ "int", "GAME_LASTMAN", "4" },
	{ "int", "PLAYER_VOTE_NONE", "0" },
	{ "int", "PLAYER_VOTE_NO", "1" },
	{ "int", "PLAYER_VOTE_YES", "2" },
	{ "int", "PLAYER_VOTE_WAIT", "3" },
	{ "const int", "NUM_CHAT_NOTIFY", "5" },
	{ "const int", "CHAT_FADE_TIME", "400" },
	{ "const int", "FRAGLIMIT_DELAY", "2000" },
	{ "const int", "MP_PLAYER_MINFRAGS", "-100" },
	{ "const int", "MP_PLAYER_MAXFRAGS", "100" },
	{ "const int", "MP_PLAYER_MAXWINS", "100" },
	{ "const int", "MP_PLAYER_MAXPING", "999" },
	{ "int", "SND_YOUWIN", "0" },
	{ "int", "SND_YOULOSE", "1" },
	{ "int", "SND_FIGHT", "2" },
	{ "int", "SND_VOTE", "3" },
	{ "int", "SND_VOTE_PASSED", "4" },
	{ "int", "SND_VOTE_FAILED", "5" },
	{ "int", "SND_THREE", "6" },
	{ "int", "SND_TWO", "7" },
	{ "int", "SND_ONE", "8" },
	{ "int", "SND_SUDDENDEATH", "9" },
	{ "int", "SND_COUNT", "10" },
	{ "int", "idMultiplayerGame::INACTIVE", "0" },
	{ "int", "idMultiplayerGame::WARMUP", "1" },
	{ "int", "idMultiplayerGame::COUNTDOWN", "2" },
	{ "int", "idMultiplayerGame::GAMEON", "3" },
	{ "int", "idMultiplayerGame::SUDDENDEATH", "4" },
	{ "int", "idMultiplayerGame::GAMEREVIEW", "5" },
	{ "int", "idMultiplayerGame::NEXTGAME", "6" },
	{ "int", "idMultiplayerGame::STATE_COUNT", "7" },
	{ "int", "idMultiplayerGame::MSG_SUICIDE", "0" },
	{ "int", "idMultiplayerGame::MSG_KILLED", "1" },
	{ "int", "idMultiplayerGame::MSG_KILLEDTEAM", "2" },
	{ "int", "idMultiplayerGame::MSG_DIED", "3" },
	{ "int", "idMultiplayerGame::MSG_VOTE", "4" },
	{ "int", "idMultiplayerGame::MSG_VOTEPASSED", "5" },
	{ "int", "idMultiplayerGame::MSG_VOTEFAILED", "6" },
	{ "int", "idMultiplayerGame::MSG_SUDDENDEATH", "7" },
	{ "int", "idMultiplayerGame::MSG_FORCEREADY", "8" },
	{ "int", "idMultiplayerGame::MSG_JOINEDSPEC", "9" },
	{ "int", "idMultiplayerGame::MSG_TIMELIMIT", "10" },
	{ "int", "idMultiplayerGame::MSG_FRAGLIMIT", "11" },
	{ "int", "idMultiplayerGame::MSG_TELEFRAGGED", "12" },
	{ "int", "idMultiplayerGame::MSG_JOINTEAM", "13" },
	{ "int", "idMultiplayerGame::MSG_HOLYSHIT", "14" },
	{ "int", "idMultiplayerGame::MSG_COUNT", "15" },
	{ "int", "idMultiplayerGame::VOTE_RESTART", "0" },
	{ "int", "idMultiplayerGame::VOTE_TIMELIMIT", "1" },
	{ "int", "idMultiplayerGame::VOTE_FRAGLIMIT", "2" },
	{ "int", "idMultiplayerGame::VOTE_GAMETYPE", "3" },
	{ "int", "idMultiplayerGame::VOTE_KICK", "4" },
	{ "int", "idMultiplayerGame::VOTE_MAP", "5" },
	{ "int", "idMultiplayerGame::VOTE_SPECTATORS", "6" },
	{ "int", "idMultiplayerGame::VOTE_NEXTMAP", "7" },
	{ "int", "idMultiplayerGame::VOTE_COUNT", "8" },
	{ "int", "idMultiplayerGame::VOTE_NONE", "9" },
	{ "int", "idMultiplayerGame::VOTE_UPDATE", "0" },
	{ "int", "idMultiplayerGame::VOTE_FAILED", "1" },
	{ "int", "idMultiplayerGame::VOTE_PASSED", "2" },
	{ "int", "idMultiplayerGame::VOTE_ABORTED", "3" },
	{ "int", "idMultiplayerGame::VOTE_RESET", "4" },
	{ "const int", "MAX_GAME_MESSAGE_SIZE", "8192" },
	{ "const int", "MAX_ENTITY_STATE_SIZE", "512" },
	{ "const int", "ENTITY_PVS_SIZE", "(((1<<12)+31)>>5)" },
	{ "const int", "NUM_RENDER_PORTAL_BITS", "0(7)" },
	{ "const int", "MAX_EVENT_PARAM_SIZE", "128" },
	{ "int", "GAME_RELIABLE_MESSAGE_INIT_DECL_REMAP", "0" },
	{ "int", "GAME_RELIABLE_MESSAGE_REMAP_DECL", "1" },
	{ "int", "GAME_RELIABLE_MESSAGE_SPAWN_PLAYER", "2" },
	{ "int", "GAME_RELIABLE_MESSAGE_DELETE_ENT", "3" },
	{ "int", "GAME_RELIABLE_MESSAGE_CHAT", "4" },
	{ "int", "GAME_RELIABLE_MESSAGE_TCHAT", "5" },
	{ "int", "GAME_RELIABLE_MESSAGE_SOUND_EVENT", "6" },
	{ "int", "GAME_RELIABLE_MESSAGE_SOUND_INDEX", "7" },
	{ "int", "GAME_RELIABLE_MESSAGE_DB", "8" },
	{ "int", "GAME_RELIABLE_MESSAGE_KILL", "9" },
	{ "int", "GAME_RELIABLE_MESSAGE_DROPWEAPON", "10" },
	{ "int", "GAME_RELIABLE_MESSAGE_RESTART", "11" },
	{ "int", "GAME_RELIABLE_MESSAGE_SERVERINFO", "12" },
	{ "int", "GAME_RELIABLE_MESSAGE_TOURNEYLINE", "13" },
	{ "int", "GAME_RELIABLE_MESSAGE_CALLVOTE", "14" },
	{ "int", "GAME_RELIABLE_MESSAGE_CASTVOTE", "15" },
	{ "int", "GAME_RELIABLE_MESSAGE_STARTVOTE", "16" },
	{ "int", "GAME_RELIABLE_MESSAGE_UPDATEVOTE", "17" },
	{ "int", "GAME_RELIABLE_MESSAGE_PORTALSTATES", "18" },
	{ "int", "GAME_RELIABLE_MESSAGE_PORTAL", "19" },
	{ "int", "GAME_RELIABLE_MESSAGE_VCHAT", "20" },
	{ "int", "GAME_RELIABLE_MESSAGE_STARTSTATE", "21" },
	{ "int", "GAME_RELIABLE_MESSAGE_MENU", "22" },
	{ "int", "GAME_RELIABLE_MESSAGE_WARMUPTIME", "23" },
	{ "int", "GAME_RELIABLE_MESSAGE_EVENT", "24" },
	{ "int", "GAMESTATE_UNINITIALIZED", "0" },
	{ "int", "GAMESTATE_NOMAP", "1" },
	{ "int", "GAMESTATE_STARTUP", "2" },
	{ "int", "GAMESTATE_ACTIVE", "3" },
	{ "int", "GAMESTATE_SHUTDOWN", "4" },
	{ "int", "idEventQueue::OUTOFORDER_IGNORE", "0" },
	{ "int", "idEventQueue::OUTOFORDER_DROP", "1" },
	{ "int", "idEventQueue::OUTOFORDER_SORT", "2" },
	{ "static const int", "idGameLocal::msec", "16" },
	{ "const static int", "idGameLocal::INITIAL_SPAWN_COUNT", "1" },
	{ "int", "SND_CHANNEL_ANY", "0" },
	{ "int", "SND_CHANNEL_VOICE", "1" },
	{ "int", "SND_CHANNEL_VOICE2", "2" },
	{ "int", "SND_CHANNEL_BODY", "3" },
	{ "int", "SND_CHANNEL_BODY2", "4" },
	{ "int", "SND_CHANNEL_BODY3", "5" },
	{ "int", "SND_CHANNEL_WEAPON", "6" },
	{ "int", "SND_CHANNEL_ITEM", "7" },
	{ "int", "SND_CHANNEL_HEART", "8" },
	{ "int", "SND_CHANNEL_PDA", "9" },
	{ "int", "SND_CHANNEL_DEMONIC", "10" },
	{ "int", "SND_CHANNEL_RADIO", "11" },
	{ "int", "SND_CHANNEL_AMBIENT", "12" },
	{ "int", "SND_CHANNEL_DAMAGE", "13" },
	{ "const float", "DEFAULT_GRAVITY", "1066.0" },
	{ "const int", "CINEMATIC_SKIP_DELAY", "(0((2.0)*0))" },
	{ "int", "FORCEFIELD_UNIFORM", "0" },
	{ "int", "FORCEFIELD_EXPLOSION", "1" },
	{ "int", "FORCEFIELD_IMPLOSION", "2" },
	{ "int", "FORCEFIELD_APPLY_FORCE", "0" },
	{ "int", "FORCEFIELD_APPLY_VELOCITY", "1" },
	{ "int", "FORCEFIELD_APPLY_IMPULSE", "2" },
	{ "int", "MM_OK", "0" },
	{ "int", "MM_SLIDING", "1" },
	{ "int", "MM_BLOCKED", "2" },
	{ "int", "MM_STEPPED", "3" },
	{ "int", "MM_FALLING", "4" },
	{ "int", "PM_NORMAL", "0" },
	{ "int", "PM_DEAD", "1" },
	{ "int", "PM_SPECTATOR", "2" },
	{ "int", "PM_FREEZE", "3" },
	{ "int", "PM_NOCLIP", "4" },
	{ "int", "WATERLEVEL_NONE", "0" },
	{ "int", "WATERLEVEL_FEET", "1" },
	{ "int", "WATERLEVEL_WAIST", "2" },
	{ "int", "WATERLEVEL_HEAD", "3" },
	{ "int", "CONSTRAINT_INVALID", "0" },
	{ "int", "CONSTRAINT_FIXED", "1" },
	{ "int", "CONSTRAINT_BALLANDSOCKETJOINT", "2" },
	{ "int", "CONSTRAINT_UNIVERSALJOINT", "3" },
	{ "int", "CONSTRAINT_HINGE", "4" },
	{ "int", "CONSTRAINT_HINGESTEERING", "5" },
	{ "int", "CONSTRAINT_SLIDER", "6" },
	{ "int", "CONSTRAINT_CYLINDRICALJOINT", "7" },
	{ "int", "CONSTRAINT_LINE", "8" },
	{ "int", "CONSTRAINT_PLANE", "9" },
	{ "int", "CONSTRAINT_SPRING", "10" },
	{ "int", "CONSTRAINT_CONTACT", "11" },
	{ "int", "CONSTRAINT_FRICTION", "12" },
	{ "int", "CONSTRAINT_CONELIMIT", "13" },
	{ "int", "CONSTRAINT_PYRAMIDLIMIT", "14" },
	{ "int", "CONSTRAINT_SUSPENSION", "15" },
	{ "static const int", "idSmokeParticles::MAX_SMOKE_PARTICLES", "10000" },
	{ "static const int", "DELAY_DORMANT_TIME", "3000" },
	{ "int", "TH_ALL", "-1" },
	{ "int", "TH_THINK", "1" },
	{ "int", "TH_PHYSICS", "2" },
	{ "int", "TH_ANIMATE", "4" },
	{ "int", "TH_UPDATEVISUALS", "8" },
	{ "int", "TH_UPDATEPARTICLES", "16" },
	{ "int", "SIG_TOUCH", "0" },
	{ "int", "SIG_USE", "1" },
	{ "int", "SIG_TRIGGER", "2" },
	{ "int", "SIG_REMOVED", "3" },
	{ "int", "SIG_DAMAGE", "4" },
	{ "int", "SIG_BLOCKED", "5" },
	{ "int", "SIG_MOVER_POS1", "6" },
	{ "int", "SIG_MOVER_POS2", "7" },
	{ "int", "SIG_MOVER_1TO2", "8" },
	{ "int", "SIG_MOVER_2TO1", "9" },
	{ "int", "NUM_SIGNALS", "10" },
	{ "static const int", "idEntity::MAX_PVS_AREAS", "4" },
	{ "int", "idEntity::EVENT_STARTSOUNDSHADER", "0" },
	{ "int", "idEntity::EVENT_STOPSOUNDSHADER", "1" },
	{ "int", "idEntity::EVENT_MAXEVENTS", "2" },
	{ "int", "idAnimatedEntity::EVENT_ADD_DAMAGE_EFFECT", "2" },
	{ "int", "idAnimatedEntity::EVENT_MAXEVENTS", "3" },
	{ "static const int", "idIK_Walk::MAX_LEGS", "8" },
	{ "static const int", "idIK_Reach::MAX_ARMS", "2" },
	{ "const int", "GIB_DELAY", "200" },
	{ "int", "idPlayerStart::EVENT_TELEPORTPLAYER", "2" },
	{ "int", "idPlayerStart::EVENT_MAXEVENTS", "3" },
	{ "int", "idProjectile::EVENT_DAMAGE_EFFECT", "2" },
	{ "int", "idProjectile::EVENT_MAXEVENTS", "3" },
	{ "int", "idProjectile::SPAWNED", "0" },
	{ "int", "idProjectile::CREATED", "1" },
	{ "int", "idProjectile::LAUNCHED", "2" },
	{ "int", "idProjectile::FIZZLED", "3" },
	{ "int", "idProjectile::EXPLODED", "4" },
	{ "int", "WP_READY", "0" },
	{ "int", "WP_OUTOFAMMO", "1" },
	{ "int", "WP_RELOAD", "2" },
	{ "int", "WP_HOLSTERED", "3" },
	{ "int", "WP_RISING", "4" },
	{ "int", "WP_LOWERING", "5" },
	{ "static const int", "AMMO_NUMTYPES", "16" },
	{ "static const int", "LIGHTID_WORLD_MUZZLE_FLASH", "1" },
	{ "static const int", "LIGHTID_VIEW_MUZZLE_FLASH", "100" },
	{ "int", "idWeapon::EVENT_RELOAD", "2" },
	{ "int", "idWeapon::EVENT_ENDRELOAD", "3" },
	{ "int", "idWeapon::EVENT_CHANGESKIN", "4" },
	{ "int", "idWeapon::EVENT_MAXEVENTS", "5" },
	{ "int", "idLight::EVENT_BECOMEBROKEN", "2" },
	{ "int", "idLight::EVENT_MAXEVENTS", "3" },
	{ "int", "idItem::EVENT_PICKUP", "2" },
	{ "int", "idItem::EVENT_RESPAWN", "3" },
	{ "int", "idItem::EVENT_RESPAWNFX", "4" },
	{ "int", "idItem::EVENT_MAXEVENTS", "5" },
	{ "int", "ICON_LAG", "0" },
	{ "int", "ICON_CHAT", "1" },
	{ "int", "ICON_NONE", "2" },
	{ "const float", "THIRD_PERSON_FOCUS_DISTANCE", "512.0" },
	{ "const int", "LAND_DEFLECT_TIME", "150" },
	{ "const int", "LAND_RETURN_TIME", "300" },
	{ "const int", "FOCUS_TIME", "300" },
	{ "const int", "FOCUS_GUI_TIME", "500" },
	{ "const int", "MAX_WEAPONS", "16" },
	{ "const int", "DEAD_HEARTRATE", "0" },
	{ "const int", "LOWHEALTH_HEARTRATE_ADJ", "20" },
	{ "const int", "DYING_HEARTRATE", "30" },
	{ "const int", "BASE_HEARTRATE", "70" },
	{ "const int", "ZEROSTAMINA_HEARTRATE", "115" },
	{ "const int", "MAX_HEARTRATE", "130" },
	{ "const int", "ZERO_VOLUME", "-40" },
	{ "const int", "DMG_VOLUME", "5" },
	{ "const int", "DEATH_VOLUME", "15" },
	{ "const int", "SAVING_THROW_TIME", "5000" },
	{ "const int", "ASYNC_PLAYER_INV_AMMO_BITS", "0(999)" },
	{ "const int", "ASYNC_PLAYER_INV_CLIP_BITS", "-7" },
	{ "int", "BERSERK", "0" },
	{ "int", "INVISIBILITY", "1" },
	{ "int", "MEGAHEALTH", "2" },
	{ "int", "ADRENALINE", "3" },
	{ "int", "MAX_POWERUPS", "4" },
	{ "int", "SPEED", "0" },
	{ "int", "PROJECTILE_DAMAGE", "1" },
	{ "int", "MELEE_DAMAGE", "2" },
	{ "int", "MELEE_DISTANCE", "3" },
	{ "int", "INFLUENCE_NONE", "0" },
	{ "int", "INFLUENCE_LEVEL1", "1" },
	{ "int", "INFLUENCE_LEVEL2", "2" },
	{ "int", "INFLUENCE_LEVEL3", "3" },
	{ "int", "idPlayer::EVENT_IMPULSE", "2" },
	{ "int", "idPlayer::EVENT_EXIT_TELEPORTER", "3" },
	{ "int", "idPlayer::EVENT_ABORT_TELEPORTER", "4" },
	{ "int", "idPlayer::EVENT_POWERUP", "5" },
	{ "int", "idPlayer::EVENT_SPECTATE", "6" },
	{ "int", "idPlayer::EVENT_MAXEVENTS", "7" },
	{ "static const int", "idPlayer::NUM_LOGGED_VIEW_ANGLES", "64" },
	{ "static const int", "idPlayer::NUM_LOGGED_ACCELS", "16" },
	{ "int", "idMover::ACCELERATION_STAGE", "0" },
	{ "int", "idMover::LINEAR_STAGE", "1" },
	{ "int", "idMover::DECELERATION_STAGE", "2" },
	{ "int", "idMover::FINISHED_STAGE", "3" },
	{ "int", "idMover::MOVER_NONE", "0" },
	{ "int", "idMover::MOVER_ROTATING", "1" },
	{ "int", "idMover::MOVER_MOVING", "2" },
	{ "int", "idMover::MOVER_SPLINE", "3" },
	{ "int", "idMover::DIR_UP", "-1" },
	{ "int", "idMover::DIR_DOWN", "-2" },
	{ "int", "idMover::DIR_LEFT", "-3" },
	{ "int", "idMover::DIR_RIGHT", "-4" },
	{ "int", "idMover::DIR_FORWARD", "-5" },
	{ "int", "idMover::DIR_BACK", "-6" },
	{ "int", "idMover::DIR_REL_UP", "-7" },
	{ "int", "idMover::DIR_REL_DOWN", "-8" },
	{ "int", "idMover::DIR_REL_LEFT", "-9" },
	{ "int", "idMover::DIR_REL_RIGHT", "-10" },
	{ "int", "idMover::DIR_REL_FORWARD", "-11" },
	{ "int", "idMover::DIR_REL_BACK", "-12" },
	{ "int", "idElevator::INIT", "0" },
	{ "int", "idElevator::IDLE", "1" },
	{ "int", "idElevator::WAITING_ON_DOORS", "2" },
	{ "int", "MOVER_POS1", "0" },
	{ "int", "MOVER_POS2", "1" },
	{ "int", "MOVER_1TO2", "2" },
	{ "int", "MOVER_2TO1", "3" },
	{ "int", "idExplodingBarrel::EVENT_EXPLODE", "2" },
	{ "int", "idExplodingBarrel::EVENT_MAXEVENTS", "3" },
	{ "int", "idExplodingBarrel::NORMAL", "0" },
	{ "int", "idExplodingBarrel::BURNING", "1" },
	{ "int", "idExplodingBarrel::BURNEXPIRED", "2" },
	{ "int", "idExplodingBarrel::EXPLODING", "3" },
	{ "int", "idSecurityCamera::SCANNING", "0" },
	{ "int", "idSecurityCamera::LOSINGINTEREST", "1" },
	{ "int", "idSecurityCamera::ALERT", "2" },
	{ "int", "idSecurityCamera::ACTIVATED", "3" },
	{ "int", "idBrittleFracture::EVENT_PROJECT_DECAL", "2" },
	{ "int", "idBrittleFracture::EVENT_SHATTER", "3" },
	{ "int", "idBrittleFracture::EVENT_MAXEVENTS", "4" },
	{ "const float", "SQUARE_ROOT_OF_2", "1.414213562" },
	{ "const float", "AI_TURN_PREDICTION", "0.2" },
	{ "const float", "AI_TURN_SCALE", "60.0" },
	{ "const float", "AI_SEEK_PREDICTION", "0.3" },
	{ "const float", "AI_FLY_DAMPENING", "0.15" },
	{ "const float", "AI_HEARING_RANGE", "2048.0" },
	{ "const int", "DEFAULT_FLY_OFFSET", "68" },
	{ "int", "MOVETYPE_DEAD", "0" },
	{ "int", "MOVETYPE_ANIM", "1" },
	{ "int", "MOVETYPE_SLIDE", "2" },
	{ "int", "MOVETYPE_FLY", "3" },
	{ "int", "MOVETYPE_STATIC", "4" },
	{ "int", "NUM_MOVETYPES", "5" },
	{ "int", "MOVE_NONE", "0" },
	{ "int", "MOVE_FACE_ENEMY", "1" },
	{ "int", "MOVE_FACE_ENTITY", "2" },
	{ "int", "NUM_NONMOVING_COMMANDS", "3" },
	{ "int", "MOVE_TO_ENEMY", "3" },
	{ "int", "MOVE_TO_ENEMYHEIGHT", "4" },
	{ "int", "MOVE_TO_ENTITY", "5" },
	{ "int", "MOVE_OUT_OF_RANGE", "6" },
	{ "int", "MOVE_TO_ATTACK_POSITION", "7" },
	{ "int", "MOVE_TO_COVER", "8" },
	{ "int", "MOVE_TO_POSITION", "9" },
	{ "int", "MOVE_TO_POSITION_DIRECT", "10" },
	{ "int", "MOVE_SLIDE_TO_POSITION", "11" },
	{ "int", "MOVE_WANDER", "12" },
	{ "int", "NUM_MOVE_COMMANDS", "13" },
	{ "int", "TALK_NEVER", "0" },
	{ "int", "TALK_DEAD", "1" },
	{ "int", "TALK_OK", "2" },
	{ "int", "TALK_BUSY", "3" },
	{ "int", "NUM_TALK_STATES", "4" },
	{ "int", "MOVE_STATUS_DONE", "0" },
	{ "int", "MOVE_STATUS_MOVING", "1" },
	{ "int", "MOVE_STATUS_WAITING", "2" },
	{ "int", "MOVE_STATUS_DEST_NOT_FOUND", "3" },
	{ "int", "MOVE_STATUS_DEST_UNREACHABLE", "4" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_WALL", "5" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_OBJECT", "6" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_ENEMY", "7" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_MONSTER", "8" },
	{ "int", "SE_BLOCKED", "1" },
	{ "int", "SE_ENTER_LEDGE_AREA", "2" },
	{ "int", "SE_ENTER_OBSTACLE", "4" },
	{ "int", "SE_FALL", "8" },
	{ "int", "SE_LAND", "16" },
	{ "const char * const", "RESULT_STRING", "<RESULT>" },
	{ "int", "OP_RETURN", "0" },
	{ "int", "OP_UINC_F", "1" },
	{ "int", "OP_UINCP_F", "2" },
	{ "int", "OP_UDEC_F", "3" },
	{ "int", "OP_UDECP_F", "4" },
	{ "int", "OP_COMP_F", "5" },
	{ "int", "OP_MUL_F", "6" },
	{ "int", "OP_MUL_V", "7" },
	{ "int", "OP_MUL_FV", "8" },
	{ "int", "OP_MUL_VF", "9" },
	{ "int", "OP_DIV_F", "10" },
	{ "int", "OP_MOD_F", "11" },
	{ "int", "OP_ADD_F", "12" },
	{ "int", "OP_ADD_V", "13" },
	{ "int", "OP_ADD_S", "14" },
	{ "int", "OP_ADD_FS", "15" },
	{ "int", "OP_ADD_SF", "16" },
	{ "int", "OP_ADD_VS", "17" },
	{ "int", "OP_ADD_SV", "18" },
	{ "int", "OP_SUB_F", "19" },
	{ "int", "OP_SUB_V", "20" },
	{ "int", "OP_EQ_F", "21" },
	{ "int", "OP_EQ_V", "22" },
	{ "int", "OP_EQ_S", "23" },
	{ "int", "OP_EQ_E", "24" },
	{ "int", "OP_EQ_EO", "25" },
	{ "int", "OP_EQ_OE", "26" },
	{ "int", "OP_EQ_OO", "27" },
	{ "int", "OP_NE_F", "28" },
	{ "int", "OP_NE_V", "29" },
	{ "int", "OP_NE_S", "30" },
	{ "int", "OP_NE_E", "31" },
	{ "int", "OP_NE_EO", "32" },
	{ "int", "OP_NE_OE", "33" },
	{ "int", "OP_NE_OO", "34" },
	{ "int", "OP_LE", "35" },
	{ "int", "OP_GE", "36" },
	{ "int", "OP_LT", "37" },
	{ "int", "OP_GT", "38" },
	{ "int", "OP_INDIRECT_F", "39" },
	{ "int", "OP_INDIRECT_V", "40" },
	{ "int", "OP_INDIRECT_S", "41" },
	{ "int", "OP_INDIRECT_ENT", "42" },
	{ "int", "OP_INDIRECT_BOOL", "43" },
	{ "int", "OP_INDIRECT_OBJ", "44" },
	{ "int", "OP_ADDRESS", "45" },
	{ "int", "OP_EVENTCALL", "46" },
	{ "int", "OP_OBJECTCALL", "47" },
	{ "int", "OP_SYSCALL", "48" },
	{ "int", "OP_STORE_F", "49" },
	{ "int", "OP_STORE_V", "50" },
	{ "int", "OP_STORE_S", "51" },
	{ "int", "OP_STORE_ENT", "52" },
	{ "int", "OP_STORE_BOOL", "53" },
	{ "int", "OP_STORE_OBJENT", "54" },
	{ "int", "OP_STORE_OBJ", "55" },
	{ "int", "OP_STORE_ENTOBJ", "56" },
	{ "int", "OP_STORE_FTOS", "57" },
	{ "int", "OP_STORE_BTOS", "58" },
	{ "int", "OP_STORE_VTOS", "59" },
	{ "int", "OP_STORE_FTOBOOL", "60" },
	{ "int", "OP_STORE_BOOLTOF", "61" },
	{ "int", "OP_STOREP_F", "62" },
	{ "int", "OP_STOREP_V", "63" },
	{ "int", "OP_STOREP_S", "64" },
	{ "int", "OP_STOREP_ENT", "65" },
	{ "int", "OP_STOREP_FLD", "66" },
	{ "int", "OP_STOREP_BOOL", "67" },
	{ "int", "OP_STOREP_OBJ", "68" },
	{ "int", "OP_STOREP_OBJENT", "69" },
	{ "int", "OP_STOREP_FTOS", "70" },
	{ "int", "OP_STOREP_BTOS", "71" },
	{ "int", "OP_STOREP_VTOS", "72" },
	{ "int", "OP_STOREP_FTOBOOL", "73" },
	{ "int", "OP_STOREP_BOOLTOF", "74" },
	{ "int", "OP_UMUL_F", "75" },
	{ "int", "OP_UMUL_V", "76" },
	{ "int", "OP_UDIV_F", "77" },
	{ "int", "OP_UDIV_V", "78" },
	{ "int", "OP_UMOD_F", "79" },
	{ "int", "OP_UADD_F", "80" },
	{ "int", "OP_UADD_V", "81" },
	{ "int", "OP_USUB_F", "82" },
	{ "int", "OP_USUB_V", "83" },
	{ "int", "OP_UAND_F", "84" },
	{ "int", "OP_UOR_F", "85" },
	{ "int", "OP_NOT_BOOL", "86" },
	{ "int", "OP_NOT_F", "87" },
	{ "int", "OP_NOT_V", "88" },
	{ "int", "OP_NOT_S", "89" },
	{ "int", "OP_NOT_ENT", "90" },
	{ "int", "OP_NEG_F", "91" },
	{ "int", "OP_NEG_V", "92" },
	{ "int", "OP_INT_F", "93" },
	{ "int", "OP_IF", "94" },
	{ "int", "OP_IFNOT", "95" },
	{ "int", "OP_CALL", "96" },
	{ "int", "OP_THREAD", "97" },
	{ "int", "OP_OBJTHREAD", "98" },
	{ "int", "OP_PUSH_F", "99" },
	{ "int", "OP_PUSH_V", "100" },
	{ "int", "OP_PUSH_S", "101" },
	{ "int", "OP_PUSH_ENT", "102" },
	{ "int", "OP_PUSH_OBJ", "103" },
	{ "int", "OP_PUSH_OBJENT", "104" },
	{ "int", "OP_PUSH_FTOS", "105" },
	{ "int", "OP_PUSH_BTOF", "106" },
	{ "int", "OP_PUSH_FTOB", "107" },
	{ "int", "OP_PUSH_VTOS", "108" },
	{ "int", "OP_PUSH_BTOS", "109" },
	{ "int", "OP_GOTO", "110" },
	{ "int", "OP_AND", "111" },
	{ "int", "OP_AND_BOOLF", "112" },
	{ "int", "OP_AND_FBOOL", "113" },
	{ "int", "OP_AND_BOOLBOOL", "114" },
	{ "int", "OP_OR", "115" },
	{ "int", "OP_OR_BOOLF", "116" },
	{ "int", "OP_OR_FBOOL", "117" },
	{ "int", "OP_OR_BOOLBOOL", "118" },
	{ "int", "OP_BITAND", "119" },
	{ "int", "OP_BITOR", "120" },
	{ "int", "OP_BREAK", "121" },
	{ "int", "OP_CONTINUE", "122" },
	{ "int", "NUM_OPCODES", "123" },
	{ NULL, NULL, NULL }
};

static enumValueInfo_t cpuid_t_typeInfo[] = {
	{ "CPUID_NONE", 0 },
	{ "CPUID_UNSUPPORTED", 1 },
	{ "CPUID_GENERIC", 2 },
	{ "CPUID_INTEL", 4 },
	{ "CPUID_AMD", 8 },
	{ "CPUID_MMX", 16 },
	{ "CPUID_3DNOW", 32 },
	{ "CPUID_SSE", 64 },
	{ "CPUID_SSE2", 128 },
	{ "CPUID_SSE3", 256 },
	{ "CPUID_ALTIVEC", 512 },
	{ "CPUID_HTT", 4096 },
	{ "CPUID_CMOV", 8192 },
	{ "CPUID_FTZ", 16384 },
	{ "CPUID_DAZ", 32768 },
	{ NULL, 0 }
};

static enumValueInfo_t fpuExceptions_t_typeInfo[] = {
	{ "FPU_EXCEPTION_INVALID_OPERATION", 1 },
	{ "FPU_EXCEPTION_DENORMALIZED_OPERAND", 2 },
	{ "FPU_EXCEPTION_DIVIDE_BY_ZERO", 4 },
	{ "FPU_EXCEPTION_NUMERIC_OVERFLOW", 8 },
	{ "FPU_EXCEPTION_NUMERIC_UNDERFLOW", 16 },
	{ "FPU_EXCEPTION_INEXACT_RESULT", 32 },
	{ NULL, 0 }
};

static enumValueInfo_t fpuPrecision_t_typeInfo[] = {
	{ "FPU_PRECISION_SINGLE", 0 },
	{ "FPU_PRECISION_DOUBLE", 1 },
	{ "FPU_PRECISION_DOUBLE_EXTENDED", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t fpuRounding_t_typeInfo[] = {
	{ "FPU_ROUNDING_TO_NEAREST", 0 },
	{ "FPU_ROUNDING_DOWN", 1 },
	{ "FPU_ROUNDING_UP", 2 },
	{ "FPU_ROUNDING_TO_ZERO", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t joystickAxis_t_typeInfo[] = {
	{ "AXIS_LEFT_X", 0 },
	{ "AXIS_LEFT_Y", 1 },
	{ "AXIS_RIGHT_X", 2 },
	{ "AXIS_RIGHT_Y", 3 },
	{ "AXIS_LEFT_TRIG", 4 },
	{ "AXIS_RIGHT_TRIG", 5 },
	{ "MAX_JOYSTICK_AXIS", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t sysEventType_t_typeInfo[] = {
	{ "SE_NONE", 0 },
	{ "SE_KEY", 1 },
	{ "SE_CHAR", 2 },
	{ "SE_MOUSE", 3 },
	{ "SE_JOYSTICK", 4 },
	{ "SE_CONSOLE", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t sys_mEvents_typeInfo[] = {
	{ "M_ACTION1", 0 },
	{ "M_ACTION2", 1 },
	{ "M_ACTION3", 2 },
	{ "M_ACTION4", 3 },
	{ "M_ACTION5", 4 },
	{ "M_ACTION6", 5 },
	{ "M_ACTION7", 6 },
	{ "M_ACTION8", 7 },
	{ "M_DELTAX", 8 },
	{ "M_DELTAY", 9 },
	{ "M_DELTAZ", 10 },
	{ NULL, 0 }
};

static enumValueInfo_t sys_jEvents_typeInfo[] = {
	{ "J_ACTION1", 0 },
	{ "J_ACTION2", 1 },
	{ "J_ACTION3", 2 },
	{ "J_ACTION4", 3 },
	{ "J_ACTION5", 4 },
	{ "J_ACTION6", 5 },
	{ "J_ACTION7", 6 },
	{ "J_ACTION8", 7 },
	{ "J_ACTION9", 8 },
	{ "J_ACTION10", 9 },
	{ "J_ACTION11", 10 },
	{ "J_ACTION12", 11 },
	{ "J_ACTION13", 12 },
	{ "J_ACTION14", 13 },
	{ "J_ACTION15", 14 },
	{ "J_ACTION16", 15 },
	{ "J_ACTION17", 16 },
	{ "J_ACTION18", 17 },
	{ "J_ACTION19", 18 },
	{ "J_ACTION20", 19 },
	{ "J_ACTION21", 20 },
	{ "J_ACTION22", 21 },
	{ "J_ACTION23", 22 },
	{ "J_ACTION24", 23 },
	{ "J_ACTION25", 24 },
	{ "J_ACTION26", 25 },
	{ "J_ACTION27", 26 },
	{ "J_ACTION28", 27 },
	{ "J_ACTION29", 28 },
	{ "J_ACTION30", 29 },
	{ "J_ACTION31", 30 },
	{ "J_ACTION32", 31 },
	{ "J_ACTION_MAX", 31 },
	{ "J_AXIS_MIN", 32 },
	{ "J_AXIS_LEFT_X", 32 },
	{ "J_AXIS_LEFT_Y", 33 },
	{ "J_AXIS_RIGHT_X", 34 },
	{ "J_AXIS_RIGHT_Y", 35 },
	{ "J_AXIS_LEFT_TRIG", 36 },
	{ "J_AXIS_RIGHT_TRIG", 37 },
	{ "J_AXIS_MAX", 37 },
	{ "J_DPAD_UP", 38 },
	{ "J_DPAD_DOWN", 39 },
	{ "J_DPAD_LEFT", 40 },
	{ "J_DPAD_RIGHT", 41 },
	{ "MAX_JOY_EVENT", 42 },
	{ NULL, 0 }
};

static enumValueInfo_t netadrtype_t_typeInfo[] = {
	{ "NA_BAD", 0 },
	{ "NA_LOOPBACK", 1 },
	{ "NA_BROADCAST", 2 },
	{ "NA_IP", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t xthreadPriority_typeInfo[] = {
	{ "THREAD_NORMAL", 0 },
	{ "THREAD_ABOVE_NORMAL", 1 },
	{ "THREAD_HIGHEST", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_10_typeInfo[] = {
	{ "CRITICAL_SECTION_ZERO", 0 },
	{ "CRITICAL_SECTION_ONE", 1 },
	{ "CRITICAL_SECTION_TWO", 2 },
	{ "CRITICAL_SECTION_THREE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_11_typeInfo[] = {
	{ "TRIGGER_EVENT_ZERO", 0 },
	{ "TRIGGER_EVENT_ONE", 1 },
	{ "TRIGGER_EVENT_TWO", 2 },
	{ "TRIGGER_EVENT_THREE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t speakerLabel_typeInfo[] = {
	{ "SPEAKER_LEFT", 0 },
	{ "SPEAKER_RIGHT", 1 },
	{ "SPEAKER_CENTER", 2 },
	{ "SPEAKER_LFE", 3 },
	{ "SPEAKER_BACKLEFT", 4 },
	{ "SPEAKER_BACKRIGHT", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t idMath_enum_13_typeInfo[] = {
	{ "LOOKUP_BITS", 8 },
	{ "EXP_POS", 23 },
	{ "EXP_BIAS", 127 },
	{ "LOOKUP_POS", 15 },
	{ "SEED_POS", 15 },
	{ "SQRT_TABLE_SIZE", 512 },
	{ "LOOKUP_MASK", 511 },
	{ NULL, 0 }
};

static enumValueInfo_t extrapolation_t_typeInfo[] = {
	{ "EXTRAPOLATION_NONE", 1 },
	{ "EXTRAPOLATION_LINEAR", 2 },
	{ "EXTRAPOLATION_ACCELLINEAR", 4 },
	{ "EXTRAPOLATION_DECELLINEAR", 8 },
	{ "EXTRAPOLATION_ACCELSINE", 16 },
	{ "EXTRAPOLATION_DECELSINE", 32 },
	{ "EXTRAPOLATION_NOSTOP", 64 },
	{ NULL, 0 }
};

static enumValueInfo_t idCurve_Spline_class_type__boundary_t_typeInfo[] = {
//	{ "BT_FREE", 0 },
//	{ "BT_CLAMPED", 1 },
//	{ "BT_CLOSED", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t traceModel_t_typeInfo[] = {
	{ "TRM_INVALID", 0 },
	{ "TRM_BOX", 1 },
	{ "TRM_OCTAHEDRON", 2 },
	{ "TRM_DODECAHEDRON", 3 },
	{ "TRM_CYLINDER", 4 },
	{ "TRM_CONE", 5 },
	{ "TRM_BONE", 6 },
	{ "TRM_POLYGON", 7 },
	{ "TRM_POLYGONVOLUME", 8 },
	{ "TRM_CUSTOM", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t Measure_t_typeInfo[] = {
	{ "MEASURE_SIZE", 0 },
	{ "MEASURE_BANDWIDTH", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t lexerFlags_t_typeInfo[] = {
	{ "LEXFL_NOERRORS", 1 },
	{ "LEXFL_NOWARNINGS", 2 },
	{ "LEXFL_NOFATALERRORS", 4 },
	{ "LEXFL_NOSTRINGCONCAT", 8 },
	{ "LEXFL_NOSTRINGESCAPECHARS", 16 },
	{ "LEXFL_NODOLLARPRECOMPILE", 32 },
	{ "LEXFL_NOBASEINCLUDES", 64 },
	{ "LEXFL_ALLOWPATHNAMES", 128 },
	{ "LEXFL_ALLOWNUMBERNAMES", 256 },
	{ "LEXFL_ALLOWIPADDRESSES", 512 },
	{ "LEXFL_ALLOWFLOATEXCEPTIONS", 1024 },
	{ "LEXFL_ALLOWMULTICHARLITERALS", 2048 },
	{ "LEXFL_ALLOWBACKSLASHSTRINGCONCAT", 4096 },
	{ "LEXFL_ONLYSTRINGS", 8192 },
	{ NULL, 0 }
};

static enumValueInfo_t idMapPrimitive_enum_19_typeInfo[] = {
	{ "TYPE_INVALID", -1 },
	{ "TYPE_BRUSH", 0 },
	{ "TYPE_PATCH", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t idTimer_enum_20_typeInfo[] = {
	{ "TS_STARTED", 0 },
	{ "TS_STOPPED", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t cmdFlags_t_typeInfo[] = {
	{ "CMD_FL_ALL", -1 },
	{ "CMD_FL_CHEAT", 1 },
	{ "CMD_FL_SYSTEM", 2 },
	{ "CMD_FL_RENDERER", 4 },
	{ "CMD_FL_SOUND", 8 },
	{ "CMD_FL_GAME", 16 },
	{ "CMD_FL_TOOL", 32 },
	{ NULL, 0 }
};

static enumValueInfo_t cmdExecution_t_typeInfo[] = {
	{ "CMD_EXEC_NOW", 0 },
	{ "CMD_EXEC_INSERT", 1 },
	{ "CMD_EXEC_APPEND", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t cvarFlags_t_typeInfo[] = {
	{ "CVAR_ALL", -1 },
	{ "CVAR_BOOL", 1 },
	{ "CVAR_INTEGER", 2 },
	{ "CVAR_FLOAT", 4 },
	{ "CVAR_SYSTEM", 8 },
	{ "CVAR_RENDERER", 16 },
	{ "CVAR_SOUND", 32 },
	{ "CVAR_GUI", 64 },
	{ "CVAR_GAME", 128 },
	{ "CVAR_TOOL", 256 },
	{ "CVAR_USERINFO", 512 },
	{ "CVAR_SERVERINFO", 1024 },
	{ "CVAR_NETWORKSYNC", 2048 },
	{ "CVAR_STATIC", 4096 },
	{ "CVAR_CHEAT", 8192 },
	{ "CVAR_NOCHEAT", 16384 },
	{ "CVAR_INIT", 32768 },
	{ "CVAR_ROM", 65536 },
	{ "CVAR_ARCHIVE", 131072 },
	{ "CVAR_MODIFIED", 262144 },
	{ NULL, 0 }
};

static enumValueInfo_t toolFlag_t_typeInfo[] = {
	{ "EDITOR_NONE", 0 },
	{ "EDITOR_RADIANT", 2 },
	{ "EDITOR_GUI", 4 },
	{ "EDITOR_DEBUGGER", 8 },
	{ "EDITOR_SCRIPT", 16 },
	{ "EDITOR_LIGHT", 32 },
	{ "EDITOR_SOUND", 64 },
	{ "EDITOR_DECL", 128 },
	{ "EDITOR_AF", 256 },
	{ "EDITOR_PARTICLE", 512 },
	{ "EDITOR_PDA", 1024 },
	{ "EDITOR_AAS", 2048 },
	{ "EDITOR_MATERIAL", 4096 },
	{ NULL, 0 }
};

static enumValueInfo_t fsOrigin_t_typeInfo[] = {
	{ "FS_SEEK_CUR", 0 },
	{ "FS_SEEK_END", 1 },
	{ "FS_SEEK_SET", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t fsMode_t_typeInfo[] = {
	{ "FS_READ", 0 },
	{ "FS_WRITE", 1 },
	{ "FS_APPEND", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t fsPureReply_t_typeInfo[] = {
	{ "PURE_OK", 0 },
	{ "PURE_RESTART", 1 },
	{ "PURE_MISSING", 2 },
	{ "PURE_NODLL", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t dlType_t_typeInfo[] = {
	{ "DLTYPE_URL", 0 },
	{ "DLTYPE_FILE", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t dlStatus_t_typeInfo[] = {
	{ "DL_WAIT", 0 },
	{ "DL_INPROGRESS", 1 },
	{ "DL_DONE", 2 },
	{ "DL_ABORTING", 3 },
	{ "DL_FAILED", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t dlMime_t_typeInfo[] = {
	{ "FILE_EXEC", 0 },
	{ "FILE_OPEN", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t findFile_t_typeInfo[] = {
	{ "FIND_NO", 0 },
	{ "FIND_YES", 1 },
	{ "FIND_ADDON", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t inhibit_t_typeInfo[] = {
	{ "INHIBIT_SESSION", 0 },
	{ "INHIBIT_ASYNC", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t declType_t_typeInfo[] = {
	{ "DECL_TABLE", 0 },
	{ "DECL_MATERIAL", 1 },
	{ "DECL_SKIN", 2 },
	{ "DECL_SOUND", 3 },
	{ "DECL_ENTITYDEF", 4 },
	{ "DECL_MODELDEF", 5 },
	{ "DECL_FX", 6 },
	{ "DECL_PARTICLE", 7 },
	{ "DECL_AF", 8 },
	{ "DECL_PDA", 9 },
	{ "DECL_VIDEO", 10 },
	{ "DECL_AUDIO", 11 },
	{ "DECL_EMAIL", 12 },
	{ "DECL_MODELEXPORT", 13 },
	{ "DECL_MAPDEF", 14 },
	{ "DECL_MAX_TYPES", 32 },
	{ NULL, 0 }
};

static enumValueInfo_t declState_t_typeInfo[] = {
	{ "DS_UNPARSED", 0 },
	{ "DS_DEFAULTED", 1 },
	{ "DS_PARSED", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_35_typeInfo[] = {
	{ "FX_LIGHT", 0 },
	{ "FX_PARTICLE", 1 },
	{ "FX_DECAL", 2 },
	{ "FX_MODEL", 3 },
	{ "FX_SOUND", 4 },
	{ "FX_SHAKE", 5 },
	{ "FX_ATTACHLIGHT", 6 },
	{ "FX_ATTACHENTITY", 7 },
	{ "FX_LAUNCH", 8 },
	{ "FX_SHOCKWAVE", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t prtDistribution_t_typeInfo[] = {
	{ "PDIST_RECT", 0 },
	{ "PDIST_CYLINDER", 1 },
	{ "PDIST_SPHERE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t prtDirection_t_typeInfo[] = {
	{ "PDIR_CONE", 0 },
	{ "PDIR_OUTWARD", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t prtCustomPth_t_typeInfo[] = {
	{ "PPATH_STANDARD", 0 },
	{ "PPATH_HELIX", 1 },
	{ "PPATH_FLIES", 2 },
	{ "PPATH_ORBIT", 3 },
	{ "PPATH_DRIP", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t prtOrientation_t_typeInfo[] = {
	{ "POR_VIEW", 0 },
	{ "POR_AIMED", 1 },
	{ "POR_X", 2 },
	{ "POR_Y", 3 },
	{ "POR_Z", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t declAFConstraintType_t_typeInfo[] = {
	{ "DECLAF_CONSTRAINT_INVALID", 0 },
	{ "DECLAF_CONSTRAINT_FIXED", 1 },
	{ "DECLAF_CONSTRAINT_BALLANDSOCKETJOINT", 2 },
	{ "DECLAF_CONSTRAINT_UNIVERSALJOINT", 3 },
	{ "DECLAF_CONSTRAINT_HINGE", 4 },
	{ "DECLAF_CONSTRAINT_SLIDER", 5 },
	{ "DECLAF_CONSTRAINT_SPRING", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t declAFJointMod_t_typeInfo[] = {
	{ "DECLAF_JOINTMOD_AXIS", 0 },
	{ "DECLAF_JOINTMOD_ORIGIN", 1 },
	{ "DECLAF_JOINTMOD_BOTH", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t idAFVector_enum_42_typeInfo[] = {
	{ "VEC_COORDS", 0 },
	{ "VEC_JOINT", 1 },
	{ "VEC_BONECENTER", 2 },
	{ "VEC_BONEDIR", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idDeclAF_Constraint_enum_43_typeInfo[] = {
	{ "LIMIT_NONE", -1 },
	{ "LIMIT_CONE", 0 },
	{ "LIMIT_PYRAMID", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t cinStatus_t_typeInfo[] = {
	{ "FMV_IDLE", 0 },
	{ "FMV_PLAY", 1 },
	{ "FMV_EOF", 2 },
	{ "FMV_ID_BLT", 3 },
	{ "FMV_ID_IDLE", 4 },
	{ "FMV_LOOPED", 5 },
	{ "FMV_ID_WAIT", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t textureFilter_t_typeInfo[] = {
	{ "TF_LINEAR", 0 },
	{ "TF_NEAREST", 1 },
	{ "TF_DEFAULT", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t textureRepeat_t_typeInfo[] = {
	{ "TR_REPEAT", 0 },
	{ "TR_CLAMP", 1 },
	{ "TR_CLAMP_TO_BORDER", 2 },
	{ "TR_CLAMP_TO_ZERO", 3 },
	{ "TR_CLAMP_TO_ZERO_ALPHA", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t deform_t_typeInfo[] = {
	{ "DFRM_NONE", 0 },
	{ "DFRM_SPRITE", 1 },
	{ "DFRM_TUBE", 2 },
	{ "DFRM_FLARE", 3 },
	{ "DFRM_EXPAND", 4 },
	{ "DFRM_MOVE", 5 },
	{ "DFRM_EYEBALL", 6 },
	{ "DFRM_PARTICLE", 7 },
	{ "DFRM_PARTICLE2", 8 },
	{ "DFRM_TURB", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t dynamicidImage_t_typeInfo[] = {
	{ "DI_STATIC", 0 },
	{ "DI_SCRATCH", 1 },
	{ "DI_CUBE_RENDER", 2 },
	{ "DI_MIRROR_RENDER", 3 },
	{ "DI_XRAY_RENDER", 4 },
	{ "DI_REMOTE_RENDER", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t expOpType_t_typeInfo[] = {
	{ "OP_TYPE_ADD", 0 },
	{ "OP_TYPE_SUBTRACT", 1 },
	{ "OP_TYPE_MULTIPLY", 2 },
	{ "OP_TYPE_DIVIDE", 3 },
	{ "OP_TYPE_MOD", 4 },
	{ "OP_TYPE_TABLE", 5 },
	{ "OP_TYPE_GT", 6 },
	{ "OP_TYPE_GE", 7 },
	{ "OP_TYPE_LT", 8 },
	{ "OP_TYPE_LE", 9 },
	{ "OP_TYPE_EQ", 10 },
	{ "OP_TYPE_NE", 11 },
	{ "OP_TYPE_AND", 12 },
	{ "OP_TYPE_OR", 13 },
	{ "OP_TYPE_SOUND", 14 },
	{ NULL, 0 }
};

static enumValueInfo_t expRegister_t_typeInfo[] = {
	{ "EXP_REG_TIME", 0 },
	{ "EXP_REG_PARM0", 1 },
	{ "EXP_REG_PARM1", 2 },
	{ "EXP_REG_PARM2", 3 },
	{ "EXP_REG_PARM3", 4 },
	{ "EXP_REG_PARM4", 5 },
	{ "EXP_REG_PARM5", 6 },
	{ "EXP_REG_PARM6", 7 },
	{ "EXP_REG_PARM7", 8 },
	{ "EXP_REG_PARM8", 9 },
	{ "EXP_REG_PARM9", 10 },
	{ "EXP_REG_PARM10", 11 },
	{ "EXP_REG_PARM11", 12 },
	{ "EXP_REG_GLOBAL0", 13 },
	{ "EXP_REG_GLOBAL1", 14 },
	{ "EXP_REG_GLOBAL2", 15 },
	{ "EXP_REG_GLOBAL3", 16 },
	{ "EXP_REG_GLOBAL4", 17 },
	{ "EXP_REG_GLOBAL5", 18 },
	{ "EXP_REG_GLOBAL6", 19 },
	{ "EXP_REG_GLOBAL7", 20 },
	{ "EXP_REG_NUM_PREDEFINED", 21 },
	{ NULL, 0 }
};

static enumValueInfo_t texgen_t_typeInfo[] = {
	{ "TG_EXPLICIT", 0 },
	{ "TG_DIFFUSE_CUBE", 1 },
	{ "TG_REFLECT_CUBE", 2 },
	{ "TG_SKYBOX_CUBE", 3 },
	{ "TG_WOBBLESKY_CUBE", 4 },
	{ "TG_SCREEN", 5 },
	{ "TG_SCREEN2", 6 },
	{ "TG_GLASSWARP", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t stageLighting_t_typeInfo[] = {
	{ "SL_AMBIENT", 0 },
	{ "SL_BUMP", 1 },
	{ "SL_DIFFUSE", 2 },
	{ "SL_SPECULAR", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t stageVertexColor_t_typeInfo[] = {
	{ "SVC_IGNORE", 0 },
	{ "SVC_MODULATE", 1 },
	{ "SVC_INVERSE_MODULATE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t materialCoverage_t_typeInfo[] = {
	{ "MC_BAD", 0 },
	{ "MC_OPAQUE", 1 },
	{ "MC_PERFORATED", 2 },
	{ "MC_TRANSLUCENT", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t materialSort_t_typeInfo[] = {
	{ "SS_SUBVIEW", -3 },
	{ "SS_GUI", -2 },
	{ "SS_BAD", -1 },
	{ "SS_OPAQUE", 0 },
	{ "SS_PORTAL_SKY", 1 },
	{ "SS_DECAL", 2 },
	{ "SS_FAR", 3 },
	{ "SS_MEDIUM", 4 },
	{ "SS_CLOSE", 5 },
	{ "SS_ALMOST_NEAREST", 6 },
	{ "SS_NEAREST", 7 },
	{ "SS_POST_PROCESS", 100 },
	{ NULL, 0 }
};

static enumValueInfo_t cullType_t_typeInfo[] = {
	{ "CT_FRONT_SIDED", 0 },
	{ "CT_BACK_SIDED", 1 },
	{ "CT_TWO_SIDED", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t materialFlags_t_typeInfo[] = {
	{ "MF_DEFAULTED", 1 },
	{ "MF_POLYGONOFFSET", 2 },
	{ "MF_NOSHADOWS", 4 },
	{ "MF_FORCESHADOWS", 8 },
	{ "MF_NOSELFSHADOW", 16 },
	{ "MF_NOPORTALFOG", 32 },
	{ "MF_EDITOR_VISIBLE", 64 },
	{ NULL, 0 }
};

static enumValueInfo_t contentsFlags_t_typeInfo[] = {
	{ "CONTENTS_SOLID", 1 },
	{ "CONTENTS_OPAQUE", 2 },
	{ "CONTENTS_WATER", 4 },
	{ "CONTENTS_PLAYERCLIP", 8 },
	{ "CONTENTS_MONSTERCLIP", 16 },
	{ "CONTENTS_MOVEABLECLIP", 32 },
	{ "CONTENTS_IKCLIP", 64 },
	{ "CONTENTS_BLOOD", 128 },
	{ "CONTENTS_BODY", 256 },
	{ "CONTENTS_PROJECTILE", 512 },
	{ "CONTENTS_CORPSE", 1024 },
	{ "CONTENTS_RENDERMODEL", 2048 },
	{ "CONTENTS_TRIGGER", 4096 },
	{ "CONTENTS_AAS_SOLID", 8192 },
	{ "CONTENTS_AAS_OBSTACLE", 16384 },
	{ "CONTENTS_FLASHLIGHT_TRIGGER", 32768 },
	{ "CONTENTS_AREAPORTAL", 1048576 },
	{ "CONTENTS_NOCSG", 2097152 },
	{ "CONTENTS_REMOVE_UTIL", -3145729 },
	{ NULL, 0 }
};

static enumValueInfo_t surfTypes_t_typeInfo[] = {
	{ "SURFTYPE_NONE", 0 },
	{ "SURFTYPE_METAL", 1 },
	{ "SURFTYPE_STONE", 2 },
	{ "SURFTYPE_FLESH", 3 },
	{ "SURFTYPE_WOOD", 4 },
	{ "SURFTYPE_CARDBOARD", 5 },
	{ "SURFTYPE_LIQUID", 6 },
	{ "SURFTYPE_GLASS", 7 },
	{ "SURFTYPE_PLASTIC", 8 },
	{ "SURFTYPE_RICOCHET", 9 },
	{ "SURFTYPE_10", 10 },
	{ "SURFTYPE_11", 11 },
	{ "SURFTYPE_12", 12 },
	{ "SURFTYPE_13", 13 },
	{ "SURFTYPE_14", 14 },
	{ "SURFTYPE_15", 15 },
	{ NULL, 0 }
};

static enumValueInfo_t surfaceFlags_t_typeInfo[] = {
	{ "SURF_TYPE_BIT0", 1 },
	{ "SURF_TYPE_BIT1", 2 },
	{ "SURF_TYPE_BIT2", 4 },
	{ "SURF_TYPE_BIT3", 8 },
	{ "SURF_TYPE_MASK", 15 },
	{ "SURF_NODAMAGE", 16 },
	{ "SURF_SLICK", 32 },
	{ "SURF_COLLISION", 64 },
	{ "SURF_LADDER", 128 },
	{ "SURF_NOIMPACT", 256 },
	{ "SURF_NOSTEPS", 512 },
	{ "SURF_DISCRETE", 1024 },
	{ "SURF_NOFRAGMENT", 2048 },
	{ "SURF_NULLNORMAL", 4096 },
	{ NULL, 0 }
};

static enumValueInfo_t dynamicModel_t_typeInfo[] = {
	{ "DM_STATIC", 0 },
	{ "DM_CACHED", 1 },
	{ "DM_CONTINUOUS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t jointHandle_t_typeInfo[] = {
	{ "INVALID_JOINT", -1 },
	{ NULL, 0 }
};

static enumValueInfo_t portalConnection_t_typeInfo[] = {
	{ "PS_BLOCK_NONE", 0 },
	{ "PS_BLOCK_VIEW", 1 },
	{ "PS_BLOCK_LOCATION", 2 },
	{ "PS_BLOCK_AIR", 4 },
	{ "PS_BLOCK_ALL", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t contactType_t_typeInfo[] = {
	{ "CONTACT_NONE", 0 },
	{ "CONTACT_EDGE", 1 },
	{ "CONTACT_MODELVERTEX", 2 },
	{ "CONTACT_TRMVERTEX", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t allowReply_t_typeInfo[] = {
	{ "ALLOW_YES", 0 },
	{ "ALLOW_BADPASS", 1 },
	{ "ALLOW_NOTYET", 2 },
	{ "ALLOW_NO", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t escReply_t_typeInfo[] = {
	{ "ESC_IGNORE", 0 },
	{ "ESC_MAIN", 1 },
	{ "ESC_GUI", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_67_typeInfo[] = {
	{ "TEST_PARTICLE_MODEL", 0 },
	{ "TEST_PARTICLE_IMPACT", 1 },
	{ "TEST_PARTICLE_MUZZLE", 2 },
	{ "TEST_PARTICLE_FLIGHT", 3 },
	{ "TEST_PARTICLE_SELECTED", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t etype_t_typeInfo[] = {
	{ "ev_error", -1 },
	{ "ev_void", 0 },
	{ "ev_scriptevent", 1 },
	{ "ev_namespace", 2 },
	{ "ev_string", 3 },
	{ "ev_float", 4 },
	{ "ev_vector", 5 },
	{ "ev_entity", 6 },
	{ "ev_field", 7 },
	{ "ev_function", 8 },
	{ "ev_virtualfunction", 9 },
	{ "ev_pointer", 10 },
	{ "ev_object", 11 },
	{ "ev_jumpoffset", 12 },
	{ "ev_argsize", 13 },
	{ "ev_boolean", 14 },
	{ NULL, 0 }
};

static enumValueInfo_t idVarDef_initialized_t_typeInfo[] = {
	{ "uninitialized", 0 },
	{ "initializedVariable", 1 },
	{ "initializedConstant", 2 },
	{ "stackVariable", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t jointModTransform_t_typeInfo[] = {
	{ "JOINTMOD_NONE", 0 },
	{ "JOINTMOD_LOCAL", 1 },
	{ "JOINTMOD_LOCAL_OVERRIDE", 2 },
	{ "JOINTMOD_WORLD", 3 },
	{ "JOINTMOD_WORLD_OVERRIDE", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t frameCommandType_t_typeInfo[] = {
	{ "FC_SCRIPTFUNCTION", 0 },
	{ "FC_SCRIPTFUNCTIONOBJECT", 1 },
	{ "FC_EVENTFUNCTION", 2 },
	{ "FC_SOUND", 3 },
	{ "FC_SOUND_VOICE", 4 },
	{ "FC_SOUND_VOICE2", 5 },
	{ "FC_SOUND_BODY", 6 },
	{ "FC_SOUND_BODY2", 7 },
	{ "FC_SOUND_BODY3", 8 },
	{ "FC_SOUND_WEAPON", 9 },
	{ "FC_SOUND_ITEM", 10 },
	{ "FC_SOUND_GLOBAL", 11 },
	{ "FC_SOUND_CHATTER", 12 },
	{ "FC_SKIN", 13 },
	{ "FC_TRIGGER", 14 },
	{ "FC_TRIGGER_SMOKE_PARTICLE", 15 },
	{ "FC_MELEE", 16 },
	{ "FC_DIRECTDAMAGE", 17 },
	{ "FC_BEGINATTACK", 18 },
	{ "FC_ENDATTACK", 19 },
	{ "FC_MUZZLEFLASH", 20 },
	{ "FC_CREATEMISSILE", 21 },
	{ "FC_LAUNCHMISSILE", 22 },
	{ "FC_FIREMISSILEATTARGET", 23 },
	{ "FC_FOOTSTEP", 24 },
	{ "FC_LEFTFOOT", 25 },
	{ "FC_RIGHTFOOT", 26 },
	{ "FC_ENABLE_EYE_FOCUS", 27 },
	{ "FC_DISABLE_EYE_FOCUS", 28 },
	{ "FC_FX", 29 },
	{ "FC_DISABLE_GRAVITY", 30 },
	{ "FC_ENABLE_GRAVITY", 31 },
	{ "FC_JUMP", 32 },
	{ "FC_ENABLE_CLIP", 33 },
	{ "FC_DISABLE_CLIP", 34 },
	{ "FC_ENABLE_WALK_IK", 35 },
	{ "FC_DISABLE_WALK_IK", 36 },
	{ "FC_ENABLE_LEG_IK", 37 },
	{ "FC_DISABLE_LEG_IK", 38 },
	{ "FC_RECORDDEMO", 39 },
	{ "FC_AVIGAME", 40 },
	{ NULL, 0 }
};

static enumValueInfo_t AFJointModType_t_typeInfo[] = {
	{ "AF_JOINTMOD_AXIS", 0 },
	{ "AF_JOINTMOD_ORIGIN", 1 },
	{ "AF_JOINTMOD_BOTH", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_73_typeInfo[] = {
	{ "PATHTYPE_WALK", 0 },
	{ "PATHTYPE_WALKOFFLEDGE", 1 },
	{ "PATHTYPE_BARRIERJUMP", 2 },
	{ "PATHTYPE_JUMP", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t pvsType_t_typeInfo[] = {
	{ "PVS_NORMAL", 0 },
	{ "PVS_ALL_PORTALS_OPEN", 1 },
	{ "PVS_CONNECTED_AREAS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t gameType_t_typeInfo[] = {
	{ "GAME_SP", 0 },
	{ "GAME_DM", 1 },
	{ "GAME_TOURNEY", 2 },
	{ "GAME_TDM", 3 },
	{ "GAME_LASTMAN", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t playerVote_t_typeInfo[] = {
	{ "PLAYER_VOTE_NONE", 0 },
	{ "PLAYER_VOTE_NO", 1 },
	{ "PLAYER_VOTE_YES", 2 },
	{ "PLAYER_VOTE_WAIT", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t snd_evt_t_typeInfo[] = {
	{ "SND_YOUWIN", 0 },
	{ "SND_YOULOSE", 1 },
	{ "SND_FIGHT", 2 },
	{ "SND_VOTE", 3 },
	{ "SND_VOTE_PASSED", 4 },
	{ "SND_VOTE_FAILED", 5 },
	{ "SND_THREE", 6 },
	{ "SND_TWO", 7 },
	{ "SND_ONE", 8 },
	{ "SND_SUDDENDEATH", 9 },
	{ "SND_COUNT", 10 },
	{ NULL, 0 }
};

static enumValueInfo_t idMultiplayerGame_gameState_t_typeInfo[] = {
	{ "INACTIVE", 0 },
	{ "WARMUP", 1 },
	{ "COUNTDOWN", 2 },
	{ "GAMEON", 3 },
	{ "SUDDENDEATH", 4 },
	{ "GAMEREVIEW", 5 },
	{ "NEXTGAME", 6 },
	{ "STATE_COUNT", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t idMultiplayerGame_msg_evt_t_typeInfo[] = {
	{ "MSG_SUICIDE", 0 },
	{ "MSG_KILLED", 1 },
	{ "MSG_KILLEDTEAM", 2 },
	{ "MSG_DIED", 3 },
	{ "MSG_VOTE", 4 },
	{ "MSG_VOTEPASSED", 5 },
	{ "MSG_VOTEFAILED", 6 },
	{ "MSG_SUDDENDEATH", 7 },
	{ "MSG_FORCEREADY", 8 },
	{ "MSG_JOINEDSPEC", 9 },
	{ "MSG_TIMELIMIT", 10 },
	{ "MSG_FRAGLIMIT", 11 },
	{ "MSG_TELEFRAGGED", 12 },
	{ "MSG_JOINTEAM", 13 },
	{ "MSG_HOLYSHIT", 14 },
	{ "MSG_COUNT", 15 },
	{ NULL, 0 }
};

static enumValueInfo_t idMultiplayerGame_vote_flags_t_typeInfo[] = {
	{ "VOTE_RESTART", 0 },
	{ "VOTE_TIMELIMIT", 1 },
	{ "VOTE_FRAGLIMIT", 2 },
	{ "VOTE_GAMETYPE", 3 },
	{ "VOTE_KICK", 4 },
	{ "VOTE_MAP", 5 },
	{ "VOTE_SPECTATORS", 6 },
	{ "VOTE_NEXTMAP", 7 },
	{ "VOTE_COUNT", 8 },
	{ "VOTE_NONE", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t idMultiplayerGame_vote_result_t_typeInfo[] = {
	{ "VOTE_UPDATE", 0 },
	{ "VOTE_FAILED", 1 },
	{ "VOTE_PASSED", 2 },
	{ "VOTE_ABORTED", 3 },
	{ "VOTE_RESET", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_82_typeInfo[] = {
	{ "GAME_RELIABLE_MESSAGE_INIT_DECL_REMAP", 0 },
	{ "GAME_RELIABLE_MESSAGE_REMAP_DECL", 1 },
	{ "GAME_RELIABLE_MESSAGE_SPAWN_PLAYER", 2 },
	{ "GAME_RELIABLE_MESSAGE_DELETE_ENT", 3 },
	{ "GAME_RELIABLE_MESSAGE_CHAT", 4 },
	{ "GAME_RELIABLE_MESSAGE_TCHAT", 5 },
	{ "GAME_RELIABLE_MESSAGE_SOUND_EVENT", 6 },
	{ "GAME_RELIABLE_MESSAGE_SOUND_INDEX", 7 },
	{ "GAME_RELIABLE_MESSAGE_DB", 8 },
	{ "GAME_RELIABLE_MESSAGE_KILL", 9 },
	{ "GAME_RELIABLE_MESSAGE_DROPWEAPON", 10 },
	{ "GAME_RELIABLE_MESSAGE_RESTART", 11 },
	{ "GAME_RELIABLE_MESSAGE_SERVERINFO", 12 },
	{ "GAME_RELIABLE_MESSAGE_TOURNEYLINE", 13 },
	{ "GAME_RELIABLE_MESSAGE_CALLVOTE", 14 },
	{ "GAME_RELIABLE_MESSAGE_CASTVOTE", 15 },
	{ "GAME_RELIABLE_MESSAGE_STARTVOTE", 16 },
	{ "GAME_RELIABLE_MESSAGE_UPDATEVOTE", 17 },
	{ "GAME_RELIABLE_MESSAGE_PORTALSTATES", 18 },
	{ "GAME_RELIABLE_MESSAGE_PORTAL", 19 },
	{ "GAME_RELIABLE_MESSAGE_VCHAT", 20 },
	{ "GAME_RELIABLE_MESSAGE_STARTSTATE", 21 },
	{ "GAME_RELIABLE_MESSAGE_MENU", 22 },
	{ "GAME_RELIABLE_MESSAGE_WARMUPTIME", 23 },
	{ "GAME_RELIABLE_MESSAGE_EVENT", 24 },
	{ NULL, 0 }
};

static enumValueInfo_t gameState_t_typeInfo[] = {
	{ "GAMESTATE_UNINITIALIZED", 0 },
	{ "GAMESTATE_NOMAP", 1 },
	{ "GAMESTATE_STARTUP", 2 },
	{ "GAMESTATE_ACTIVE", 3 },
	{ "GAMESTATE_SHUTDOWN", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t idEventQueue_outOfOrderBehaviour_t_typeInfo[] = {
	{ "OUTOFORDER_IGNORE", 0 },
	{ "OUTOFORDER_DROP", 1 },
	{ "OUTOFORDER_SORT", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t gameSoundChannel_t_typeInfo[] = {
	{ "SND_CHANNEL_ANY", 0 },
	{ "SND_CHANNEL_VOICE", 1 },
	{ "SND_CHANNEL_VOICE2", 2 },
	{ "SND_CHANNEL_BODY", 3 },
	{ "SND_CHANNEL_BODY2", 4 },
	{ "SND_CHANNEL_BODY3", 5 },
	{ "SND_CHANNEL_WEAPON", 6 },
	{ "SND_CHANNEL_ITEM", 7 },
	{ "SND_CHANNEL_HEART", 8 },
	{ "SND_CHANNEL_PDA", 9 },
	{ "SND_CHANNEL_DEMONIC", 10 },
	{ "SND_CHANNEL_RADIO", 11 },
	{ "SND_CHANNEL_AMBIENT", 12 },
	{ "SND_CHANNEL_DAMAGE", 13 },
	{ NULL, 0 }
};

static enumValueInfo_t forceFieldType_typeInfo[] = {
	{ "FORCEFIELD_UNIFORM", 0 },
	{ "FORCEFIELD_EXPLOSION", 1 },
	{ "FORCEFIELD_IMPLOSION", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t forceFieldApplyType_typeInfo[] = {
	{ "FORCEFIELD_APPLY_FORCE", 0 },
	{ "FORCEFIELD_APPLY_VELOCITY", 1 },
	{ "FORCEFIELD_APPLY_IMPULSE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t monsterMoveResult_t_typeInfo[] = {
	{ "MM_OK", 0 },
	{ "MM_SLIDING", 1 },
	{ "MM_BLOCKED", 2 },
	{ "MM_STEPPED", 3 },
	{ "MM_FALLING", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t pmtype_t_typeInfo[] = {
	{ "PM_NORMAL", 0 },
	{ "PM_DEAD", 1 },
	{ "PM_SPECTATOR", 2 },
	{ "PM_FREEZE", 3 },
	{ "PM_NOCLIP", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t waterLevel_t_typeInfo[] = {
	{ "WATERLEVEL_NONE", 0 },
	{ "WATERLEVEL_FEET", 1 },
	{ "WATERLEVEL_WAIST", 2 },
	{ "WATERLEVEL_HEAD", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t constraintType_t_typeInfo[] = {
	{ "CONSTRAINT_INVALID", 0 },
	{ "CONSTRAINT_FIXED", 1 },
	{ "CONSTRAINT_BALLANDSOCKETJOINT", 2 },
	{ "CONSTRAINT_UNIVERSALJOINT", 3 },
	{ "CONSTRAINT_HINGE", 4 },
	{ "CONSTRAINT_HINGESTEERING", 5 },
	{ "CONSTRAINT_SLIDER", 6 },
	{ "CONSTRAINT_CYLINDRICALJOINT", 7 },
	{ "CONSTRAINT_LINE", 8 },
	{ "CONSTRAINT_PLANE", 9 },
	{ "CONSTRAINT_SPRING", 10 },
	{ "CONSTRAINT_CONTACT", 11 },
	{ "CONSTRAINT_FRICTION", 12 },
	{ "CONSTRAINT_CONELIMIT", 13 },
	{ "CONSTRAINT_PYRAMIDLIMIT", 14 },
	{ "CONSTRAINT_SUSPENSION", 15 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_92_typeInfo[] = {
	{ "TH_ALL", -1 },
	{ "TH_THINK", 1 },
	{ "TH_PHYSICS", 2 },
	{ "TH_ANIMATE", 4 },
	{ "TH_UPDATEVISUALS", 8 },
	{ "TH_UPDATEPARTICLES", 16 },
	{ NULL, 0 }
};

static enumValueInfo_t signalNum_t_typeInfo[] = {
	{ "SIG_TOUCH", 0 },
	{ "SIG_USE", 1 },
	{ "SIG_TRIGGER", 2 },
	{ "SIG_REMOVED", 3 },
	{ "SIG_DAMAGE", 4 },
	{ "SIG_BLOCKED", 5 },
	{ "SIG_MOVER_POS1", 6 },
	{ "SIG_MOVER_POS2", 7 },
	{ "SIG_MOVER_1TO2", 8 },
	{ "SIG_MOVER_2TO1", 9 },
	{ "NUM_SIGNALS", 10 },
	{ NULL, 0 }
};

static enumValueInfo_t idEntity_enum_94_typeInfo[] = {
	{ "EVENT_STARTSOUNDSHADER", 0 },
	{ "EVENT_STOPSOUNDSHADER", 1 },
	{ "EVENT_MAXEVENTS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t idAnimatedEntity_enum_95_typeInfo[] = {
	{ "EVENT_ADD_DAMAGE_EFFECT", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idPlayerStart_enum_96_typeInfo[] = {
	{ "EVENT_TELEPORTPLAYER", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idProjectile_enum_97_typeInfo[] = {
	{ "EVENT_DAMAGE_EFFECT", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idProjectile_projectileState_t_typeInfo[] = {
	{ "SPAWNED", 0 },
	{ "CREATED", 1 },
	{ "LAUNCHED", 2 },
	{ "FIZZLED", 3 },
	{ "EXPLODED", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t weaponStatus_t_typeInfo[] = {
	{ "WP_READY", 0 },
	{ "WP_OUTOFAMMO", 1 },
	{ "WP_RELOAD", 2 },
	{ "WP_HOLSTERED", 3 },
	{ "WP_RISING", 4 },
	{ "WP_LOWERING", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t idWeapon_enum_100_typeInfo[] = {
	{ "EVENT_RELOAD", 2 },
	{ "EVENT_ENDRELOAD", 3 },
	{ "EVENT_CHANGESKIN", 4 },
	{ "EVENT_MAXEVENTS", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t idLight_enum_101_typeInfo[] = {
	{ "EVENT_BECOMEBROKEN", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idItem_enum_102_typeInfo[] = {
	{ "EVENT_PICKUP", 2 },
	{ "EVENT_RESPAWN", 3 },
	{ "EVENT_RESPAWNFX", 4 },
	{ "EVENT_MAXEVENTS", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t playerIconType_t_typeInfo[] = {
	{ "ICON_LAG", 0 },
	{ "ICON_CHAT", 1 },
	{ "ICON_NONE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_104_typeInfo[] = {
	{ "BERSERK", 0 },
	{ "INVISIBILITY", 1 },
	{ "MEGAHEALTH", 2 },
	{ "ADRENALINE", 3 },
	{ "MAX_POWERUPS", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_105_typeInfo[] = {
	{ "SPEED", 0 },
	{ "PROJECTILE_DAMAGE", 1 },
	{ "MELEE_DAMAGE", 2 },
	{ "MELEE_DISTANCE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_106_typeInfo[] = {
	{ "INFLUENCE_NONE", 0 },
	{ "INFLUENCE_LEVEL1", 1 },
	{ "INFLUENCE_LEVEL2", 2 },
	{ "INFLUENCE_LEVEL3", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idPlayer_enum_107_typeInfo[] = {
	{ "EVENT_IMPULSE", 2 },
	{ "EVENT_EXIT_TELEPORTER", 3 },
	{ "EVENT_ABORT_TELEPORTER", 4 },
	{ "EVENT_POWERUP", 5 },
	{ "EVENT_SPECTATE", 6 },
	{ "EVENT_MAXEVENTS", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t idMover_moveStage_t_typeInfo[] = {
	{ "ACCELERATION_STAGE", 0 },
	{ "LINEAR_STAGE", 1 },
	{ "DECELERATION_STAGE", 2 },
	{ "FINISHED_STAGE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idMover_moverCommand_t_typeInfo[] = {
	{ "MOVER_NONE", 0 },
	{ "MOVER_ROTATING", 1 },
	{ "MOVER_MOVING", 2 },
	{ "MOVER_SPLINE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idMover_moverDir_t_typeInfo[] = {
	{ "DIR_UP", -1 },
	{ "DIR_DOWN", -2 },
	{ "DIR_LEFT", -3 },
	{ "DIR_RIGHT", -4 },
	{ "DIR_FORWARD", -5 },
	{ "DIR_BACK", -6 },
	{ "DIR_REL_UP", -7 },
	{ "DIR_REL_DOWN", -8 },
	{ "DIR_REL_LEFT", -9 },
	{ "DIR_REL_RIGHT", -10 },
	{ "DIR_REL_FORWARD", -11 },
	{ "DIR_REL_BACK", -12 },
	{ NULL, 0 }
};

static enumValueInfo_t idElevator_elevatorState_t_typeInfo[] = {
	{ "INIT", 0 },
	{ "IDLE", 1 },
	{ "WAITING_ON_DOORS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t moverState_t_typeInfo[] = {
	{ "MOVER_POS1", 0 },
	{ "MOVER_POS2", 1 },
	{ "MOVER_1TO2", 2 },
	{ "MOVER_2TO1", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idExplodingBarrel_enum_113_typeInfo[] = {
	{ "EVENT_EXPLODE", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idExplodingBarrel_explode_state_t_typeInfo[] = {
	{ "NORMAL", 0 },
	{ "BURNING", 1 },
	{ "BURNEXPIRED", 2 },
	{ "EXPLODING", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idSecurityCamera_enum_115_typeInfo[] = {
	{ "SCANNING", 0 },
	{ "LOSINGINTEREST", 1 },
	{ "ALERT", 2 },
	{ "ACTIVATED", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idBrittleFracture_enum_116_typeInfo[] = {
	{ "EVENT_PROJECT_DECAL", 2 },
	{ "EVENT_SHATTER", 3 },
	{ "EVENT_MAXEVENTS", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t moveType_t_typeInfo[] = {
	{ "MOVETYPE_DEAD", 0 },
	{ "MOVETYPE_ANIM", 1 },
	{ "MOVETYPE_SLIDE", 2 },
	{ "MOVETYPE_FLY", 3 },
	{ "MOVETYPE_STATIC", 4 },
	{ "NUM_MOVETYPES", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t moveCommand_t_typeInfo[] = {
	{ "MOVE_NONE", 0 },
	{ "MOVE_FACE_ENEMY", 1 },
	{ "MOVE_FACE_ENTITY", 2 },
	{ "NUM_NONMOVING_COMMANDS", 3 },
	{ "MOVE_TO_ENEMY", 3 },
	{ "MOVE_TO_ENEMYHEIGHT", 4 },
	{ "MOVE_TO_ENTITY", 5 },
	{ "MOVE_OUT_OF_RANGE", 6 },
	{ "MOVE_TO_ATTACK_POSITION", 7 },
	{ "MOVE_TO_COVER", 8 },
	{ "MOVE_TO_POSITION", 9 },
	{ "MOVE_TO_POSITION_DIRECT", 10 },
	{ "MOVE_SLIDE_TO_POSITION", 11 },
	{ "MOVE_WANDER", 12 },
	{ "NUM_MOVE_COMMANDS", 13 },
	{ NULL, 0 }
};

static enumValueInfo_t talkState_t_typeInfo[] = {
	{ "TALK_NEVER", 0 },
	{ "TALK_DEAD", 1 },
	{ "TALK_OK", 2 },
	{ "TALK_BUSY", 3 },
	{ "NUM_TALK_STATES", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t moveStatus_t_typeInfo[] = {
	{ "MOVE_STATUS_DONE", 0 },
	{ "MOVE_STATUS_MOVING", 1 },
	{ "MOVE_STATUS_WAITING", 2 },
	{ "MOVE_STATUS_DEST_NOT_FOUND", 3 },
	{ "MOVE_STATUS_DEST_UNREACHABLE", 4 },
	{ "MOVE_STATUS_BLOCKED_BY_WALL", 5 },
	{ "MOVE_STATUS_BLOCKED_BY_OBJECT", 6 },
	{ "MOVE_STATUS_BLOCKED_BY_ENEMY", 7 },
	{ "MOVE_STATUS_BLOCKED_BY_MONSTER", 8 },
	{ NULL, 0 }
};

static enumValueInfo_t stopEvent_t_typeInfo[] = {
	{ "SE_BLOCKED", 1 },
	{ "SE_ENTER_LEDGE_AREA", 2 },
	{ "SE_ENTER_OBSTACLE", 4 },
	{ "SE_FALL", 8 },
	{ "SE_LAND", 16 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_122_typeInfo[] = {
	{ "OP_RETURN", 0 },
	{ "OP_UINC_F", 1 },
	{ "OP_UINCP_F", 2 },
	{ "OP_UDEC_F", 3 },
	{ "OP_UDECP_F", 4 },
	{ "OP_COMP_F", 5 },
	{ "OP_MUL_F", 6 },
	{ "OP_MUL_V", 7 },
	{ "OP_MUL_FV", 8 },
	{ "OP_MUL_VF", 9 },
	{ "OP_DIV_F", 10 },
	{ "OP_MOD_F", 11 },
	{ "OP_ADD_F", 12 },
	{ "OP_ADD_V", 13 },
	{ "OP_ADD_S", 14 },
	{ "OP_ADD_FS", 15 },
	{ "OP_ADD_SF", 16 },
	{ "OP_ADD_VS", 17 },
	{ "OP_ADD_SV", 18 },
	{ "OP_SUB_F", 19 },
	{ "OP_SUB_V", 20 },
	{ "OP_EQ_F", 21 },
	{ "OP_EQ_V", 22 },
	{ "OP_EQ_S", 23 },
	{ "OP_EQ_E", 24 },
	{ "OP_EQ_EO", 25 },
	{ "OP_EQ_OE", 26 },
	{ "OP_EQ_OO", 27 },
	{ "OP_NE_F", 28 },
	{ "OP_NE_V", 29 },
	{ "OP_NE_S", 30 },
	{ "OP_NE_E", 31 },
	{ "OP_NE_EO", 32 },
	{ "OP_NE_OE", 33 },
	{ "OP_NE_OO", 34 },
	{ "OP_LE", 35 },
	{ "OP_GE", 36 },
	{ "OP_LT", 37 },
	{ "OP_GT", 38 },
	{ "OP_INDIRECT_F", 39 },
	{ "OP_INDIRECT_V", 40 },
	{ "OP_INDIRECT_S", 41 },
	{ "OP_INDIRECT_ENT", 42 },
	{ "OP_INDIRECT_BOOL", 43 },
	{ "OP_INDIRECT_OBJ", 44 },
	{ "OP_ADDRESS", 45 },
	{ "OP_EVENTCALL", 46 },
	{ "OP_OBJECTCALL", 47 },
	{ "OP_SYSCALL", 48 },
	{ "OP_STORE_F", 49 },
	{ "OP_STORE_V", 50 },
	{ "OP_STORE_S", 51 },
	{ "OP_STORE_ENT", 52 },
	{ "OP_STORE_BOOL", 53 },
	{ "OP_STORE_OBJENT", 54 },
	{ "OP_STORE_OBJ", 55 },
	{ "OP_STORE_ENTOBJ", 56 },
	{ "OP_STORE_FTOS", 57 },
	{ "OP_STORE_BTOS", 58 },
	{ "OP_STORE_VTOS", 59 },
	{ "OP_STORE_FTOBOOL", 60 },
	{ "OP_STORE_BOOLTOF", 61 },
	{ "OP_STOREP_F", 62 },
	{ "OP_STOREP_V", 63 },
	{ "OP_STOREP_S", 64 },
	{ "OP_STOREP_ENT", 65 },
	{ "OP_STOREP_FLD", 66 },
	{ "OP_STOREP_BOOL", 67 },
	{ "OP_STOREP_OBJ", 68 },
	{ "OP_STOREP_OBJENT", 69 },
	{ "OP_STOREP_FTOS", 70 },
	{ "OP_STOREP_BTOS", 71 },
	{ "OP_STOREP_VTOS", 72 },
	{ "OP_STOREP_FTOBOOL", 73 },
	{ "OP_STOREP_BOOLTOF", 74 },
	{ "OP_UMUL_F", 75 },
	{ "OP_UMUL_V", 76 },
	{ "OP_UDIV_F", 77 },
	{ "OP_UDIV_V", 78 },
	{ "OP_UMOD_F", 79 },
	{ "OP_UADD_F", 80 },
	{ "OP_UADD_V", 81 },
	{ "OP_USUB_F", 82 },
	{ "OP_USUB_V", 83 },
	{ "OP_UAND_F", 84 },
	{ "OP_UOR_F", 85 },
	{ "OP_NOT_BOOL", 86 },
	{ "OP_NOT_F", 87 },
	{ "OP_NOT_V", 88 },
	{ "OP_NOT_S", 89 },
	{ "OP_NOT_ENT", 90 },
	{ "OP_NEG_F", 91 },
	{ "OP_NEG_V", 92 },
	{ "OP_INT_F", 93 },
	{ "OP_IF", 94 },
	{ "OP_IFNOT", 95 },
	{ "OP_CALL", 96 },
	{ "OP_THREAD", 97 },
	{ "OP_OBJTHREAD", 98 },
	{ "OP_PUSH_F", 99 },
	{ "OP_PUSH_V", 100 },
	{ "OP_PUSH_S", 101 },
	{ "OP_PUSH_ENT", 102 },
	{ "OP_PUSH_OBJ", 103 },
	{ "OP_PUSH_OBJENT", 104 },
	{ "OP_PUSH_FTOS", 105 },
	{ "OP_PUSH_BTOF", 106 },
	{ "OP_PUSH_FTOB", 107 },
	{ "OP_PUSH_VTOS", 108 },
	{ "OP_PUSH_BTOS", 109 },
	{ "OP_GOTO", 110 },
	{ "OP_AND", 111 },
	{ "OP_AND_BOOLF", 112 },
	{ "OP_AND_FBOOL", 113 },
	{ "OP_AND_BOOLBOOL", 114 },
	{ "OP_OR", 115 },
	{ "OP_OR_BOOLF", 116 },
	{ "OP_OR_FBOOL", 117 },
	{ "OP_OR_BOOLBOOL", 118 },
	{ "OP_BITAND", 119 },
	{ "OP_BITOR", 120 },
	{ "OP_BREAK", 121 },
	{ "OP_CONTINUE", 122 },
	{ "NUM_OPCODES", 123 },
	{ NULL, 0 }
};

static enumTypeInfo_t enumTypeInfo[] = {
	{ "cpuid_t", cpuid_t_typeInfo },
	{ "fpuExceptions_t", fpuExceptions_t_typeInfo },
	{ "fpuPrecision_t", fpuPrecision_t_typeInfo },
	{ "fpuRounding_t", fpuRounding_t_typeInfo },
	{ "joystickAxis_t", joystickAxis_t_typeInfo },
	{ "sysEventType_t", sysEventType_t_typeInfo },
	{ "sys_mEvents", sys_mEvents_typeInfo },
	{ "sys_jEvents", sys_jEvents_typeInfo },
	{ "netadrtype_t", netadrtype_t_typeInfo },
	{ "xthreadPriority", xthreadPriority_typeInfo },
	{ "enum_10", enum_10_typeInfo },
	{ "enum_11", enum_11_typeInfo },
	{ "speakerLabel", speakerLabel_typeInfo },
	{ "idMath::enum_13", idMath_enum_13_typeInfo },
	{ "extrapolation_t", extrapolation_t_typeInfo },
//	{ "idCurve_Spline< class type >::boundary_t", idCurve_Spline_class_type__boundary_t_typeInfo },
	{ "traceModel_t", traceModel_t_typeInfo },
	{ "Measure_t", Measure_t_typeInfo },
	{ "lexerFlags_t", lexerFlags_t_typeInfo },
	{ "idMapPrimitive::enum_19", idMapPrimitive_enum_19_typeInfo },
	{ "idTimer::enum_20", idTimer_enum_20_typeInfo },
	{ "cmdFlags_t", cmdFlags_t_typeInfo },
	{ "cmdExecution_t", cmdExecution_t_typeInfo },
	{ "cvarFlags_t", cvarFlags_t_typeInfo },
	{ "toolFlag_t", toolFlag_t_typeInfo },
	{ "fsOrigin_t", fsOrigin_t_typeInfo },
	{ "fsMode_t", fsMode_t_typeInfo },
	{ "fsPureReply_t", fsPureReply_t_typeInfo },
	{ "dlType_t", dlType_t_typeInfo },
	{ "dlStatus_t", dlStatus_t_typeInfo },
	{ "dlMime_t", dlMime_t_typeInfo },
	{ "findFile_t", findFile_t_typeInfo },
	{ "inhibit_t", inhibit_t_typeInfo },
	{ "declType_t", declType_t_typeInfo },
	{ "declState_t", declState_t_typeInfo },
	{ "enum_35", enum_35_typeInfo },
	{ "prtDistribution_t", prtDistribution_t_typeInfo },
	{ "prtDirection_t", prtDirection_t_typeInfo },
	{ "prtCustomPth_t", prtCustomPth_t_typeInfo },
	{ "prtOrientation_t", prtOrientation_t_typeInfo },
	{ "declAFConstraintType_t", declAFConstraintType_t_typeInfo },
	{ "declAFJointMod_t", declAFJointMod_t_typeInfo },
	{ "idAFVector::enum_42", idAFVector_enum_42_typeInfo },
	{ "idDeclAF_Constraint::enum_43", idDeclAF_Constraint_enum_43_typeInfo },
	{ "cinStatus_t", cinStatus_t_typeInfo },
	{ "textureFilter_t", textureFilter_t_typeInfo },
	{ "textureRepeat_t", textureRepeat_t_typeInfo },
	{ "deform_t", deform_t_typeInfo },
	{ "dynamicidImage_t", dynamicidImage_t_typeInfo },
	{ "expOpType_t", expOpType_t_typeInfo },
	{ "expRegister_t", expRegister_t_typeInfo },
	{ "texgen_t", texgen_t_typeInfo },
	{ "stageLighting_t", stageLighting_t_typeInfo },
	{ "stageVertexColor_t", stageVertexColor_t_typeInfo },
	{ "materialCoverage_t", materialCoverage_t_typeInfo },
	{ "materialSort_t", materialSort_t_typeInfo },
	{ "cullType_t", cullType_t_typeInfo },
	{ "materialFlags_t", materialFlags_t_typeInfo },
	{ "contentsFlags_t", contentsFlags_t_typeInfo },
	{ "surfTypes_t", surfTypes_t_typeInfo },
	{ "surfaceFlags_t", surfaceFlags_t_typeInfo },
	{ "dynamicModel_t", dynamicModel_t_typeInfo },
	{ "jointHandle_t", jointHandle_t_typeInfo },
	{ "portalConnection_t", portalConnection_t_typeInfo },
	{ "contactType_t", contactType_t_typeInfo },
	{ "allowReply_t", allowReply_t_typeInfo },
	{ "escReply_t", escReply_t_typeInfo },
	{ "enum_67", enum_67_typeInfo },
	{ "etype_t", etype_t_typeInfo },
	{ "idVarDef::initialized_t", idVarDef_initialized_t_typeInfo },
	{ "jointModTransform_t", jointModTransform_t_typeInfo },
	{ "frameCommandType_t", frameCommandType_t_typeInfo },
	{ "AFJointModType_t", AFJointModType_t_typeInfo },
	{ "enum_73", enum_73_typeInfo },
	{ "pvsType_t", pvsType_t_typeInfo },
	{ "gameType_t", gameType_t_typeInfo },
	{ "playerVote_t", playerVote_t_typeInfo },
	{ "snd_evt_t", snd_evt_t_typeInfo },
	{ "idMultiplayerGame::gameState_t", idMultiplayerGame_gameState_t_typeInfo },
	{ "idMultiplayerGame::msg_evt_t", idMultiplayerGame_msg_evt_t_typeInfo },
	{ "idMultiplayerGame::vote_flags_t", idMultiplayerGame_vote_flags_t_typeInfo },
	{ "idMultiplayerGame::vote_result_t", idMultiplayerGame_vote_result_t_typeInfo },
	{ "enum_82", enum_82_typeInfo },
	{ "gameState_t", gameState_t_typeInfo },
	{ "idEventQueue::outOfOrderBehaviour_t", idEventQueue_outOfOrderBehaviour_t_typeInfo },
	{ "gameSoundChannel_t", gameSoundChannel_t_typeInfo },
	{ "forceFieldType", forceFieldType_typeInfo },
	{ "forceFieldApplyType", forceFieldApplyType_typeInfo },
	{ "monsterMoveResult_t", monsterMoveResult_t_typeInfo },
	{ "pmtype_t", pmtype_t_typeInfo },
	{ "waterLevel_t", waterLevel_t_typeInfo },
	{ "constraintType_t", constraintType_t_typeInfo },
	{ "enum_92", enum_92_typeInfo },
	{ "signalNum_t", signalNum_t_typeInfo },
	{ "idEntity::enum_94", idEntity_enum_94_typeInfo },
	{ "idAnimatedEntity::enum_95", idAnimatedEntity_enum_95_typeInfo },
	{ "idPlayerStart::enum_96", idPlayerStart_enum_96_typeInfo },
	{ "idProjectile::enum_97", idProjectile_enum_97_typeInfo },
	{ "idProjectile::projectileState_t", idProjectile_projectileState_t_typeInfo },
	{ "weaponStatus_t", weaponStatus_t_typeInfo },
	{ "idWeapon::enum_100", idWeapon_enum_100_typeInfo },
	{ "idLight::enum_101", idLight_enum_101_typeInfo },
	{ "idItem::enum_102", idItem_enum_102_typeInfo },
	{ "playerIconType_t", playerIconType_t_typeInfo },
	{ "enum_104", enum_104_typeInfo },
	{ "enum_105", enum_105_typeInfo },
	{ "enum_106", enum_106_typeInfo },
	{ "idPlayer::enum_107", idPlayer_enum_107_typeInfo },
	{ "idMover::moveStage_t", idMover_moveStage_t_typeInfo },
	{ "idMover::moverCommand_t", idMover_moverCommand_t_typeInfo },
	{ "idMover::moverDir_t", idMover_moverDir_t_typeInfo },
	{ "idElevator::elevatorState_t", idElevator_elevatorState_t_typeInfo },
	{ "moverState_t", moverState_t_typeInfo },
	{ "idExplodingBarrel::enum_113", idExplodingBarrel_enum_113_typeInfo },
	{ "idExplodingBarrel::explode_state_t", idExplodingBarrel_explode_state_t_typeInfo },
	{ "idSecurityCamera::enum_115", idSecurityCamera_enum_115_typeInfo },
	{ "idBrittleFracture::enum_116", idBrittleFracture_enum_116_typeInfo },
	{ "moveType_t", moveType_t_typeInfo },
	{ "moveCommand_t", moveCommand_t_typeInfo },
	{ "talkState_t", talkState_t_typeInfo },
	{ "moveStatus_t", moveStatus_t_typeInfo },
	{ "stopEvent_t", stopEvent_t_typeInfo },
	{ "enum_122", enum_122_typeInfo },
	{ NULL, NULL }
};

static classVariableInfo_t sysEvent_t_typeInfo[] = {
	{ "sysEventType_t", "evType", (int)(&((sysEvent_t *)0)->evType), sizeof( ((sysEvent_t *)0)->evType ) },
	{ "int", "evValue", (int)(&((sysEvent_t *)0)->evValue), sizeof( ((sysEvent_t *)0)->evValue ) },
	{ "int", "evValue2", (int)(&((sysEvent_t *)0)->evValue2), sizeof( ((sysEvent_t *)0)->evValue2 ) },
	{ "int", "evPtrLength", (int)(&((sysEvent_t *)0)->evPtrLength), sizeof( ((sysEvent_t *)0)->evPtrLength ) },
	{ "void *", "evPtr", (int)(&((sysEvent_t *)0)->evPtr), sizeof( ((sysEvent_t *)0)->evPtr ) },
	{ NULL, 0 }
};

static classVariableInfo_t sysMemoryStats_t_typeInfo[] = {
	{ "int", "memoryLoad", (int)(&((sysMemoryStats_t *)0)->memoryLoad), sizeof( ((sysMemoryStats_t *)0)->memoryLoad ) },
	{ "int", "totalPhysical", (int)(&((sysMemoryStats_t *)0)->totalPhysical), sizeof( ((sysMemoryStats_t *)0)->totalPhysical ) },
	{ "int", "availPhysical", (int)(&((sysMemoryStats_t *)0)->availPhysical), sizeof( ((sysMemoryStats_t *)0)->availPhysical ) },
	{ "int", "totalPageFile", (int)(&((sysMemoryStats_t *)0)->totalPageFile), sizeof( ((sysMemoryStats_t *)0)->totalPageFile ) },
	{ "int", "availPageFile", (int)(&((sysMemoryStats_t *)0)->availPageFile), sizeof( ((sysMemoryStats_t *)0)->availPageFile ) },
	{ "int", "totalVirtual", (int)(&((sysMemoryStats_t *)0)->totalVirtual), sizeof( ((sysMemoryStats_t *)0)->totalVirtual ) },
	{ "int", "availVirtual", (int)(&((sysMemoryStats_t *)0)->availVirtual), sizeof( ((sysMemoryStats_t *)0)->availVirtual ) },
	{ "int", "availExtendedVirtual", (int)(&((sysMemoryStats_t *)0)->availExtendedVirtual), sizeof( ((sysMemoryStats_t *)0)->availExtendedVirtual ) },
	{ NULL, 0 }
};

static classVariableInfo_t netadr_t_typeInfo[] = {
	{ "netadrtype_t", "type", (int)(&((netadr_t *)0)->type), sizeof( ((netadr_t *)0)->type ) },
	{ "unsigned char[4]", "ip", (int)(&((netadr_t *)0)->ip), sizeof( ((netadr_t *)0)->ip ) },
	{ "unsigned short", "port", (int)(&((netadr_t *)0)->port), sizeof( ((netadr_t *)0)->port ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPort_typeInfo[] = {
	{ "int", "packetsRead", (int)(&((idPort *)0)->packetsRead), sizeof( ((idPort *)0)->packetsRead ) },
	{ "int", "bytesRead", (int)(&((idPort *)0)->bytesRead), sizeof( ((idPort *)0)->bytesRead ) },
	{ "int", "packetsWritten", (int)(&((idPort *)0)->packetsWritten), sizeof( ((idPort *)0)->packetsWritten ) },
	{ "int", "bytesWritten", (int)(&((idPort *)0)->bytesWritten), sizeof( ((idPort *)0)->bytesWritten ) },
	{ "netadr_t", "bound_to", (int)(&((idPort *)0)->bound_to), sizeof( ((idPort *)0)->bound_to ) },
	{ "int", "netSocket", (int)(&((idPort *)0)->netSocket), sizeof( ((idPort *)0)->netSocket ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTCP_typeInfo[] = {
	{ "netadr_t", "address", (int)(&((idTCP *)0)->address), sizeof( ((idTCP *)0)->address ) },
	{ "int", "fd", (int)(&((idTCP *)0)->fd), sizeof( ((idTCP *)0)->fd ) },
	{ NULL, 0 }
};

static classVariableInfo_t xthreadInfo_typeInfo[] = {
	{ "const char *", "name", (int)(&((xthreadInfo *)0)->name), sizeof( ((xthreadInfo *)0)->name ) },
	{ "int", "threadHandle", (int)(&((xthreadInfo *)0)->threadHandle), sizeof( ((xthreadInfo *)0)->threadHandle ) },
	{ "unsigned long", "threadId", (int)(&((xthreadInfo *)0)->threadId), sizeof( ((xthreadInfo *)0)->threadId ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSys_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idLib_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idException_typeInfo[] = {
	{ "char[1024]", "error", (int)(&((idException *)0)->error), sizeof( ((idException *)0)->error ) },
	{ NULL, 0 }
};

static classVariableInfo_t memoryStats_t_typeInfo[] = {
	{ "int", "num", (int)(&((memoryStats_t *)0)->num), sizeof( ((memoryStats_t *)0)->num ) },
	{ "int", "minSize", (int)(&((memoryStats_t *)0)->minSize), sizeof( ((memoryStats_t *)0)->minSize ) },
	{ "int", "maxSize", (int)(&((memoryStats_t *)0)->maxSize), sizeof( ((memoryStats_t *)0)->maxSize ) },
	{ "int", "totalSize", (int)(&((memoryStats_t *)0)->totalSize), sizeof( ((memoryStats_t *)0)->totalSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBlockAlloc_class_type_int_blockSize__element_t_typeInfo[] = {
//	{ "element_s *", "next", (int)(&((idBlockAlloc< class type , int blockSize >::element_t *)0)->next), sizeof( ((idBlockAlloc< class type , int blockSize >::element_t *)0)->next ) },
//	{ "type", "t", (int)(&((idBlockAlloc< class type , int blockSize >::element_t *)0)->t), sizeof( ((idBlockAlloc< class type , int blockSize >::element_t *)0)->t ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBlockAlloc_class_type_int_blockSize__block_t_typeInfo[] = {
//	{ "element_t[1]", "elements", (int)(&((idBlockAlloc< class type , int blockSize >::block_t *)0)->elements), sizeof( ((idBlockAlloc< class type , int blockSize >::block_t *)0)->elements ) },
//	{ "block_s *", "next", (int)(&((idBlockAlloc< class type , int blockSize >::block_t *)0)->next), sizeof( ((idBlockAlloc< class type , int blockSize >::block_t *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBlockAlloc_class_type_int_blockSize__typeInfo[] = {
//	{ "block_t *", "blocks", (int)(&((idBlockAlloc< class type , int blockSize > *)0)->blocks), sizeof( ((idBlockAlloc< class type , int blockSize > *)0)->blocks ) },
//	{ "element_t *", "free", (int)(&((idBlockAlloc< class type , int blockSize > *)0)->free), sizeof( ((idBlockAlloc< class type , int blockSize > *)0)->free ) },
//	{ "int", "total", (int)(&((idBlockAlloc< class type , int blockSize > *)0)->total), sizeof( ((idBlockAlloc< class type , int blockSize > *)0)->total ) },
//	{ "int", "active", (int)(&((idBlockAlloc< class type , int blockSize > *)0)->active), sizeof( ((idBlockAlloc< class type , int blockSize > *)0)->active ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDynamicAlloc_class_type_int_baseBlockSize_int_minBlockSize__typeInfo[] = {
//	{ "int", "numUsedBlocks", (int)(&((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numUsedBlocks), sizeof( ((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numUsedBlocks ) },
//	{ "int", "usedBlockMemory", (int)(&((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->usedBlockMemory), sizeof( ((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->usedBlockMemory ) },
//	{ "int", "numAllocs", (int)(&((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numAllocs), sizeof( ((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numAllocs ) },
//	{ "int", "numResizes", (int)(&((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numResizes), sizeof( ((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numResizes ) },
//	{ "int", "numFrees", (int)(&((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFrees), sizeof( ((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFrees ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBTreeNode_class_objType_class_keyType__typeInfo[] = {
//	{ "keyType", "key", (int)(&((idBTreeNode< class objType , class keyType > *)0)->key), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->key ) },
//	{ "objType *", "object", (int)(&((idBTreeNode< class objType , class keyType > *)0)->object), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->object ) },
//	{ "idBTreeNode *", "parent", (int)(&((idBTreeNode< class objType , class keyType > *)0)->parent), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->parent ) },
//	{ "idBTreeNode *", "next", (int)(&((idBTreeNode< class objType , class keyType > *)0)->next), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->next ) },
//	{ "idBTreeNode *", "prev", (int)(&((idBTreeNode< class objType , class keyType > *)0)->prev), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->prev ) },
//	{ "int", "numChildren", (int)(&((idBTreeNode< class objType , class keyType > *)0)->numChildren), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->numChildren ) },
//	{ "idBTreeNode *", "firstChild", (int)(&((idBTreeNode< class objType , class keyType > *)0)->firstChild), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->firstChild ) },
//	{ "idBTreeNode *", "lastChild", (int)(&((idBTreeNode< class objType , class keyType > *)0)->lastChild), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->lastChild ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBTree_class_objType_class_keyType_int_maxChildrenPerNode__typeInfo[] = {
//	{ "idBTreeNode < objType , keyType > *", "root", (int)(&((idBTree< class objType , class keyType , int maxChildrenPerNode > *)0)->root), sizeof( ((idBTree< class objType , class keyType , int maxChildrenPerNode > *)0)->root ) },
//	{ "idBlockAlloc < idBTreeNode < objType , keyType > , 128 >", "nodeAllocator", (int)(&((idBTree< class objType , class keyType , int maxChildrenPerNode > *)0)->nodeAllocator), sizeof( ((idBTree< class objType , class keyType , int maxChildrenPerNode > *)0)->nodeAllocator ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDynamicBlock_class_type__typeInfo[] = {
//	{ "int", "size", (int)(&((idDynamicBlock< class type > *)0)->size), sizeof( ((idDynamicBlock< class type > *)0)->size ) },
//	{ "idDynamicBlock < type > *", "prev", (int)(&((idDynamicBlock< class type > *)0)->prev), sizeof( ((idDynamicBlock< class type > *)0)->prev ) },
//	{ "idDynamicBlock < type > *", "next", (int)(&((idDynamicBlock< class type > *)0)->next), sizeof( ((idDynamicBlock< class type > *)0)->next ) },
//	{ "idBTreeNode < idDynamicBlock < type > , int > *", "node", (int)(&((idDynamicBlock< class type > *)0)->node), sizeof( ((idDynamicBlock< class type > *)0)->node ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDynamicBlockAlloc_class_type_int_baseBlockSize_int_minBlockSize__typeInfo[] = {
//	{ "idDynamicBlock < type > *", "firstBlock", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->firstBlock), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->firstBlock ) },
//	{ "idDynamicBlock < type > *", "lastBlock", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->lastBlock), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->lastBlock ) },
//	{ "idBTree < idDynamicBlock < type > , int , 4 >", "freeTree", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->freeTree), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->freeTree ) },
//	{ "bool", "allowAllocs", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->allowAllocs), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->allowAllocs ) },
//	{ "bool", "lockMemory", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->lockMemory), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->lockMemory ) },
//	{ "int", "numBaseBlocks", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numBaseBlocks), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numBaseBlocks ) },
//	{ "int", "baseBlockMemory", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->baseBlockMemory), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->baseBlockMemory ) },
//	{ "int", "numUsedBlocks", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numUsedBlocks), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numUsedBlocks ) },
//	{ "int", "usedBlockMemory", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->usedBlockMemory), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->usedBlockMemory ) },
//	{ "int", "numFreeBlocks", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFreeBlocks), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFreeBlocks ) },
//	{ "int", "freeBlockMemory", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->freeBlockMemory), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->freeBlockMemory ) },
//	{ "int", "numAllocs", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numAllocs), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numAllocs ) },
//	{ "int", "numResizes", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numResizes), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numResizes ) },
//	{ "int", "numFrees", (int)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFrees), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFrees ) },
	{ NULL, 0 }
};

static classVariableInfo_t idList_class_type__typeInfo[] = {
//	{ "int", "num", (int)(&((idList< class type > *)0)->num), sizeof( ((idList< class type > *)0)->num ) },
//	{ "int", "size", (int)(&((idList< class type > *)0)->size), sizeof( ((idList< class type > *)0)->size ) },
//	{ "int", "granularity", (int)(&((idList< class type > *)0)->granularity), sizeof( ((idList< class type > *)0)->granularity ) },
//	{ "type *", "list", (int)(&((idList< class type > *)0)->list), sizeof( ((idList< class type > *)0)->list ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSIMD_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSIMDProcessor_typeInfo[] = {
	{ "cpuid_t", "cpuid", (int)(&((idSIMDProcessor *)0)->cpuid), sizeof( ((idSIMDProcessor *)0)->cpuid ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMath__flint_typeInfo[] = {
	{ "dword", "i", (int)(&((idMath::_flint *)0)->i), sizeof( ((idMath::_flint *)0)->i ) },
	{ "float", "f", (int)(&((idMath::_flint *)0)->f), sizeof( ((idMath::_flint *)0)->f ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMath_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idRandom_typeInfo[] = {
	{ "int", "seed", (int)(&((idRandom *)0)->seed), sizeof( ((idRandom *)0)->seed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRandom2_typeInfo[] = {
	{ "unsigned long", "seed", (int)(&((idRandom2 *)0)->seed), sizeof( ((idRandom2 *)0)->seed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idComplex_typeInfo[] = {
	{ "float", "r", (int)(&((idComplex *)0)->r), sizeof( ((idComplex *)0)->r ) },
	{ "float", "i", (int)(&((idComplex *)0)->i), sizeof( ((idComplex *)0)->i ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec2_typeInfo[] = {
	{ "float", "x", (int)(&((idVec2 *)0)->x), sizeof( ((idVec2 *)0)->x ) },
	{ "float", "y", (int)(&((idVec2 *)0)->y), sizeof( ((idVec2 *)0)->y ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec3_typeInfo[] = {
	{ "float", "x", (int)(&((idVec3 *)0)->x), sizeof( ((idVec3 *)0)->x ) },
	{ "float", "y", (int)(&((idVec3 *)0)->y), sizeof( ((idVec3 *)0)->y ) },
	{ "float", "z", (int)(&((idVec3 *)0)->z), sizeof( ((idVec3 *)0)->z ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec4_typeInfo[] = {
	{ "float", "x", (int)(&((idVec4 *)0)->x), sizeof( ((idVec4 *)0)->x ) },
	{ "float", "y", (int)(&((idVec4 *)0)->y), sizeof( ((idVec4 *)0)->y ) },
	{ "float", "z", (int)(&((idVec4 *)0)->z), sizeof( ((idVec4 *)0)->z ) },
	{ "float", "w", (int)(&((idVec4 *)0)->w), sizeof( ((idVec4 *)0)->w ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec5_typeInfo[] = {
	{ "float", "x", (int)(&((idVec5 *)0)->x), sizeof( ((idVec5 *)0)->x ) },
	{ "float", "y", (int)(&((idVec5 *)0)->y), sizeof( ((idVec5 *)0)->y ) },
	{ "float", "z", (int)(&((idVec5 *)0)->z), sizeof( ((idVec5 *)0)->z ) },
	{ "float", "s", (int)(&((idVec5 *)0)->s), sizeof( ((idVec5 *)0)->s ) },
	{ "float", "t", (int)(&((idVec5 *)0)->t), sizeof( ((idVec5 *)0)->t ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec6_typeInfo[] = {
	{ "float[6]", "p", (int)(&((idVec6 *)0)->p), sizeof( ((idVec6 *)0)->p ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVecX_typeInfo[] = {
	{ "int", "size", (int)(&((idVecX *)0)->size), sizeof( ((idVecX *)0)->size ) },
	{ "int", "alloced", (int)(&((idVecX *)0)->alloced), sizeof( ((idVecX *)0)->alloced ) },
	{ "float *", "p", (int)(&((idVecX *)0)->p), sizeof( ((idVecX *)0)->p ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPolar3_typeInfo[] = {
	{ "float", "radius", (int)(&((idPolar3 *)0)->radius), sizeof( ((idPolar3 *)0)->radius ) },
	{ "float", "theta", (int)(&((idPolar3 *)0)->theta), sizeof( ((idPolar3 *)0)->theta ) },
	{ "float", "phi", (int)(&((idPolar3 *)0)->phi), sizeof( ((idPolar3 *)0)->phi ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMat2_typeInfo[] = {
	{ "idVec2[2]", "mat", (int)(&((idMat2 *)0)->mat), sizeof( ((idMat2 *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMat3_typeInfo[] = {
	{ "idVec3[3]", "mat", (int)(&((idMat3 *)0)->mat), sizeof( ((idMat3 *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMat4_typeInfo[] = {
	{ "idVec4[4]", "mat", (int)(&((idMat4 *)0)->mat), sizeof( ((idMat4 *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMat5_typeInfo[] = {
	{ "idVec5[5]", "mat", (int)(&((idMat5 *)0)->mat), sizeof( ((idMat5 *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMat6_typeInfo[] = {
	{ "idVec6[6]", "mat", (int)(&((idMat6 *)0)->mat), sizeof( ((idMat6 *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMatX_typeInfo[] = {
	{ "int", "numRows", (int)(&((idMatX *)0)->numRows), sizeof( ((idMatX *)0)->numRows ) },
	{ "int", "numColumns", (int)(&((idMatX *)0)->numColumns), sizeof( ((idMatX *)0)->numColumns ) },
	{ "int", "alloced", (int)(&((idMatX *)0)->alloced), sizeof( ((idMatX *)0)->alloced ) },
	{ "float *", "mat", (int)(&((idMatX *)0)->mat), sizeof( ((idMatX *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAngles_typeInfo[] = {
	{ "float", "pitch", (int)(&((idAngles *)0)->pitch), sizeof( ((idAngles *)0)->pitch ) },
	{ "float", "yaw", (int)(&((idAngles *)0)->yaw), sizeof( ((idAngles *)0)->yaw ) },
	{ "float", "roll", (int)(&((idAngles *)0)->roll), sizeof( ((idAngles *)0)->roll ) },
	{ NULL, 0 }
};

static classVariableInfo_t idQuat_typeInfo[] = {
	{ "float", "x", (int)(&((idQuat *)0)->x), sizeof( ((idQuat *)0)->x ) },
	{ "float", "y", (int)(&((idQuat *)0)->y), sizeof( ((idQuat *)0)->y ) },
	{ "float", "z", (int)(&((idQuat *)0)->z), sizeof( ((idQuat *)0)->z ) },
	{ "float", "w", (int)(&((idQuat *)0)->w), sizeof( ((idQuat *)0)->w ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCQuat_typeInfo[] = {
	{ "float", "x", (int)(&((idCQuat *)0)->x), sizeof( ((idCQuat *)0)->x ) },
	{ "float", "y", (int)(&((idCQuat *)0)->y), sizeof( ((idCQuat *)0)->y ) },
	{ "float", "z", (int)(&((idCQuat *)0)->z), sizeof( ((idCQuat *)0)->z ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRotation_typeInfo[] = {
	{ "idVec3", "origin", (int)(&((idRotation *)0)->origin), sizeof( ((idRotation *)0)->origin ) },
	{ "idVec3", "vec", (int)(&((idRotation *)0)->vec), sizeof( ((idRotation *)0)->vec ) },
	{ "float", "angle", (int)(&((idRotation *)0)->angle), sizeof( ((idRotation *)0)->angle ) },
	{ "mutable idMat3", "axis", (int)(&((idRotation *)0)->axis), sizeof( ((idRotation *)0)->axis ) },
	{ "mutable bool", "axisValid", (int)(&((idRotation *)0)->axisValid), sizeof( ((idRotation *)0)->axisValid ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlane_typeInfo[] = {
	{ "float", "a", (int)(&((idPlane *)0)->a), sizeof( ((idPlane *)0)->a ) },
	{ "float", "b", (int)(&((idPlane *)0)->b), sizeof( ((idPlane *)0)->b ) },
	{ "float", "c", (int)(&((idPlane *)0)->c), sizeof( ((idPlane *)0)->c ) },
	{ "float", "d", (int)(&((idPlane *)0)->d), sizeof( ((idPlane *)0)->d ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPluecker_typeInfo[] = {
	{ "float[6]", "p", (int)(&((idPluecker *)0)->p), sizeof( ((idPluecker *)0)->p ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPolynomial_typeInfo[] = {
	{ "int", "degree", (int)(&((idPolynomial *)0)->degree), sizeof( ((idPolynomial *)0)->degree ) },
	{ "int", "allocated", (int)(&((idPolynomial *)0)->allocated), sizeof( ((idPolynomial *)0)->allocated ) },
	{ "float *", "coefficient", (int)(&((idPolynomial *)0)->coefficient), sizeof( ((idPolynomial *)0)->coefficient ) },
	{ NULL, 0 }
};

static classVariableInfo_t idExtrapolate_class_type__typeInfo[] = {
//	{ "extrapolation_t", "extrapolationType", (int)(&((idExtrapolate< class type > *)0)->extrapolationType), sizeof( ((idExtrapolate< class type > *)0)->extrapolationType ) },
//	{ "float", "startTime", (int)(&((idExtrapolate< class type > *)0)->startTime), sizeof( ((idExtrapolate< class type > *)0)->startTime ) },
//	{ "float", "duration", (int)(&((idExtrapolate< class type > *)0)->duration), sizeof( ((idExtrapolate< class type > *)0)->duration ) },
//	{ "type", "startValue", (int)(&((idExtrapolate< class type > *)0)->startValue), sizeof( ((idExtrapolate< class type > *)0)->startValue ) },
//	{ "type", "baseSpeed", (int)(&((idExtrapolate< class type > *)0)->baseSpeed), sizeof( ((idExtrapolate< class type > *)0)->baseSpeed ) },
//	{ "type", "speed", (int)(&((idExtrapolate< class type > *)0)->speed), sizeof( ((idExtrapolate< class type > *)0)->speed ) },
//	{ "mutable float", "currentTime", (int)(&((idExtrapolate< class type > *)0)->currentTime), sizeof( ((idExtrapolate< class type > *)0)->currentTime ) },
//	{ "mutable type", "currentValue", (int)(&((idExtrapolate< class type > *)0)->currentValue), sizeof( ((idExtrapolate< class type > *)0)->currentValue ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInterpolate_class_type__typeInfo[] = {
//	{ "float", "startTime", (int)(&((idInterpolate< class type > *)0)->startTime), sizeof( ((idInterpolate< class type > *)0)->startTime ) },
//	{ "float", "duration", (int)(&((idInterpolate< class type > *)0)->duration), sizeof( ((idInterpolate< class type > *)0)->duration ) },
//	{ "type", "startValue", (int)(&((idInterpolate< class type > *)0)->startValue), sizeof( ((idInterpolate< class type > *)0)->startValue ) },
//	{ "type", "endValue", (int)(&((idInterpolate< class type > *)0)->endValue), sizeof( ((idInterpolate< class type > *)0)->endValue ) },
//	{ "mutable float", "currentTime", (int)(&((idInterpolate< class type > *)0)->currentTime), sizeof( ((idInterpolate< class type > *)0)->currentTime ) },
//	{ "mutable type", "currentValue", (int)(&((idInterpolate< class type > *)0)->currentValue), sizeof( ((idInterpolate< class type > *)0)->currentValue ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInterpolateAccelDecelLinear_class_type__typeInfo[] = {
//	{ "float", "startTime", (int)(&((idInterpolateAccelDecelLinear< class type > *)0)->startTime), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->startTime ) },
//	{ "float", "accelTime", (int)(&((idInterpolateAccelDecelLinear< class type > *)0)->accelTime), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->accelTime ) },
//	{ "float", "linearTime", (int)(&((idInterpolateAccelDecelLinear< class type > *)0)->linearTime), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->linearTime ) },
//	{ "float", "decelTime", (int)(&((idInterpolateAccelDecelLinear< class type > *)0)->decelTime), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->decelTime ) },
//	{ "type", "startValue", (int)(&((idInterpolateAccelDecelLinear< class type > *)0)->startValue), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->startValue ) },
//	{ "type", "endValue", (int)(&((idInterpolateAccelDecelLinear< class type > *)0)->endValue), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->endValue ) },
//	{ "mutable idExtrapolate < type >", "extrapolate", (int)(&((idInterpolateAccelDecelLinear< class type > *)0)->extrapolate), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->extrapolate ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInterpolateAccelDecelSine_class_type__typeInfo[] = {
//	{ "float", "startTime", (int)(&((idInterpolateAccelDecelSine< class type > *)0)->startTime), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->startTime ) },
//	{ "float", "accelTime", (int)(&((idInterpolateAccelDecelSine< class type > *)0)->accelTime), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->accelTime ) },
//	{ "float", "linearTime", (int)(&((idInterpolateAccelDecelSine< class type > *)0)->linearTime), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->linearTime ) },
//	{ "float", "decelTime", (int)(&((idInterpolateAccelDecelSine< class type > *)0)->decelTime), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->decelTime ) },
//	{ "type", "startValue", (int)(&((idInterpolateAccelDecelSine< class type > *)0)->startValue), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->startValue ) },
//	{ "type", "endValue", (int)(&((idInterpolateAccelDecelSine< class type > *)0)->endValue), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->endValue ) },
//	{ "mutable idExtrapolate < type >", "extrapolate", (int)(&((idInterpolateAccelDecelSine< class type > *)0)->extrapolate), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->extrapolate ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_class_type__typeInfo[] = {
//	{ "idList < float >", "times", (int)(&((idCurve< class type > *)0)->times), sizeof( ((idCurve< class type > *)0)->times ) },
//	{ "idList < type >", "values", (int)(&((idCurve< class type > *)0)->values), sizeof( ((idCurve< class type > *)0)->values ) },
//	{ "mutable int", "currentIndex", (int)(&((idCurve< class type > *)0)->currentIndex), sizeof( ((idCurve< class type > *)0)->currentIndex ) },
//	{ "mutable bool", "changed", (int)(&((idCurve< class type > *)0)->changed), sizeof( ((idCurve< class type > *)0)->changed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_Bezier_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_QuadraticBezier_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_CubicBezier_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_Spline_class_type__typeInfo[] = {
//	{ "boundary_t", "boundaryType", (int)(&((idCurve_Spline< class type > *)0)->boundaryType), sizeof( ((idCurve_Spline< class type > *)0)->boundaryType ) },
//	{ "float", "closeTime", (int)(&((idCurve_Spline< class type > *)0)->closeTime), sizeof( ((idCurve_Spline< class type > *)0)->closeTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_NaturalCubicSpline_class_type__typeInfo[] = {
//	{ "mutable idList < type >", "b", (int)(&((idCurve_NaturalCubicSpline< class type > *)0)->b), sizeof( ((idCurve_NaturalCubicSpline< class type > *)0)->b ) },
//	{ "mutable idList < type >", "c", (int)(&((idCurve_NaturalCubicSpline< class type > *)0)->c), sizeof( ((idCurve_NaturalCubicSpline< class type > *)0)->c ) },
//	{ "mutable idList < type >", "d", (int)(&((idCurve_NaturalCubicSpline< class type > *)0)->d), sizeof( ((idCurve_NaturalCubicSpline< class type > *)0)->d ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_CatmullRomSpline_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_KochanekBartelsSpline_class_type__typeInfo[] = {
//	{ "idList < float >", "tension", (int)(&((idCurve_KochanekBartelsSpline< class type > *)0)->tension), sizeof( ((idCurve_KochanekBartelsSpline< class type > *)0)->tension ) },
//	{ "idList < float >", "continuity", (int)(&((idCurve_KochanekBartelsSpline< class type > *)0)->continuity), sizeof( ((idCurve_KochanekBartelsSpline< class type > *)0)->continuity ) },
//	{ "idList < float >", "bias", (int)(&((idCurve_KochanekBartelsSpline< class type > *)0)->bias), sizeof( ((idCurve_KochanekBartelsSpline< class type > *)0)->bias ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_BSpline_class_type__typeInfo[] = {
//	{ "int", "order", (int)(&((idCurve_BSpline< class type > *)0)->order), sizeof( ((idCurve_BSpline< class type > *)0)->order ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_UniformCubicBSpline_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_NonUniformBSpline_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_NURBS_class_type__typeInfo[] = {
//	{ "idList < float >", "weights", (int)(&((idCurve_NURBS< class type > *)0)->weights), sizeof( ((idCurve_NURBS< class type > *)0)->weights ) },
	{ NULL, 0 }
};

static classVariableInfo_t idODE_typeInfo[] = {
	{ "int", "dimension", (int)(&((idODE *)0)->dimension), sizeof( ((idODE *)0)->dimension ) },
	{ "deriveFunction_t", "derive", (int)(&((idODE *)0)->derive), sizeof( ((idODE *)0)->derive ) },
	{ "const void *", "userData", (int)(&((idODE *)0)->userData), sizeof( ((idODE *)0)->userData ) },
	{ NULL, 0 }
};

static classVariableInfo_t idODE_Euler_typeInfo[] = {
	{ "float *", "derivatives", (int)(&((idODE_Euler *)0)->derivatives), sizeof( ((idODE_Euler *)0)->derivatives ) },
	{ NULL, 0 }
};

static classVariableInfo_t idODE_Midpoint_typeInfo[] = {
	{ "float *", "tmpState", (int)(&((idODE_Midpoint *)0)->tmpState), sizeof( ((idODE_Midpoint *)0)->tmpState ) },
	{ "float *", "derivatives", (int)(&((idODE_Midpoint *)0)->derivatives), sizeof( ((idODE_Midpoint *)0)->derivatives ) },
	{ NULL, 0 }
};

static classVariableInfo_t idODE_RK4_typeInfo[] = {
	{ "float *", "tmpState", (int)(&((idODE_RK4 *)0)->tmpState), sizeof( ((idODE_RK4 *)0)->tmpState ) },
	{ "float *", "d1", (int)(&((idODE_RK4 *)0)->d1), sizeof( ((idODE_RK4 *)0)->d1 ) },
	{ "float *", "d2", (int)(&((idODE_RK4 *)0)->d2), sizeof( ((idODE_RK4 *)0)->d2 ) },
	{ "float *", "d3", (int)(&((idODE_RK4 *)0)->d3), sizeof( ((idODE_RK4 *)0)->d3 ) },
	{ "float *", "d4", (int)(&((idODE_RK4 *)0)->d4), sizeof( ((idODE_RK4 *)0)->d4 ) },
	{ NULL, 0 }
};

static classVariableInfo_t idODE_RK4Adaptive_typeInfo[] = {
	{ "float", "maxError", (int)(&((idODE_RK4Adaptive *)0)->maxError), sizeof( ((idODE_RK4Adaptive *)0)->maxError ) },
	{ "float *", "tmpState", (int)(&((idODE_RK4Adaptive *)0)->tmpState), sizeof( ((idODE_RK4Adaptive *)0)->tmpState ) },
	{ "float *", "d1", (int)(&((idODE_RK4Adaptive *)0)->d1), sizeof( ((idODE_RK4Adaptive *)0)->d1 ) },
	{ "float *", "d1half", (int)(&((idODE_RK4Adaptive *)0)->d1half), sizeof( ((idODE_RK4Adaptive *)0)->d1half ) },
	{ "float *", "d2", (int)(&((idODE_RK4Adaptive *)0)->d2), sizeof( ((idODE_RK4Adaptive *)0)->d2 ) },
	{ "float *", "d3", (int)(&((idODE_RK4Adaptive *)0)->d3), sizeof( ((idODE_RK4Adaptive *)0)->d3 ) },
	{ "float *", "d4", (int)(&((idODE_RK4Adaptive *)0)->d4), sizeof( ((idODE_RK4Adaptive *)0)->d4 ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLCP_typeInfo[] = {
	{ "int", "maxIterations", (int)(&((idLCP *)0)->maxIterations), sizeof( ((idLCP *)0)->maxIterations ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSphere_typeInfo[] = {
	{ "idVec3", "origin", (int)(&((idSphere *)0)->origin), sizeof( ((idSphere *)0)->origin ) },
	{ "float", "radius", (int)(&((idSphere *)0)->radius), sizeof( ((idSphere *)0)->radius ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBounds_typeInfo[] = {
	{ "idVec3[2]", "b", (int)(&((idBounds *)0)->b), sizeof( ((idBounds *)0)->b ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBox_typeInfo[] = {
	{ "idVec3", "center", (int)(&((idBox *)0)->center), sizeof( ((idBox *)0)->center ) },
	{ "idVec3", "extents", (int)(&((idBox *)0)->extents), sizeof( ((idBox *)0)->extents ) },
	{ "idMat3", "axis", (int)(&((idBox *)0)->axis), sizeof( ((idBox *)0)->axis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFrustum_typeInfo[] = {
	{ "idVec3", "origin", (int)(&((idFrustum *)0)->origin), sizeof( ((idFrustum *)0)->origin ) },
	{ "idMat3", "axis", (int)(&((idFrustum *)0)->axis), sizeof( ((idFrustum *)0)->axis ) },
	{ "float", "dNear", (int)(&((idFrustum *)0)->dNear), sizeof( ((idFrustum *)0)->dNear ) },
	{ "float", "dFar", (int)(&((idFrustum *)0)->dFar), sizeof( ((idFrustum *)0)->dFar ) },
	{ "float", "dLeft", (int)(&((idFrustum *)0)->dLeft), sizeof( ((idFrustum *)0)->dLeft ) },
	{ "float", "dUp", (int)(&((idFrustum *)0)->dUp), sizeof( ((idFrustum *)0)->dUp ) },
	{ "float", "invFar", (int)(&((idFrustum *)0)->invFar), sizeof( ((idFrustum *)0)->invFar ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDrawVert_typeInfo[] = {
	{ "idVec3", "xyz", (int)(&((idDrawVert *)0)->xyz), sizeof( ((idDrawVert *)0)->xyz ) },
	{ "idVec2", "st", (int)(&((idDrawVert *)0)->st), sizeof( ((idDrawVert *)0)->st ) },
	{ "idVec3", "normal", (int)(&((idDrawVert *)0)->normal), sizeof( ((idDrawVert *)0)->normal ) },
	{ "idVec3[2]", "tangents", (int)(&((idDrawVert *)0)->tangents), sizeof( ((idDrawVert *)0)->tangents ) },
	{ "byte[4]", "color", (int)(&((idDrawVert *)0)->color), sizeof( ((idDrawVert *)0)->color ) },
	{ NULL, 0 }
};

static classVariableInfo_t idJointQuat_typeInfo[] = {
	{ "idQuat", "q", (int)(&((idJointQuat *)0)->q), sizeof( ((idJointQuat *)0)->q ) },
	{ "idVec3", "t", (int)(&((idJointQuat *)0)->t), sizeof( ((idJointQuat *)0)->t ) },
	{ NULL, 0 }
};

static classVariableInfo_t idJointMat_typeInfo[] = {
	{ "float[12]", "mat", (int)(&((idJointMat *)0)->mat), sizeof( ((idJointMat *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idWinding_typeInfo[] = {
	{ "int", "numPoints", (int)(&((idWinding *)0)->numPoints), sizeof( ((idWinding *)0)->numPoints ) },
	{ "idVec5 *", "p", (int)(&((idWinding *)0)->p), sizeof( ((idWinding *)0)->p ) },
	{ "int", "allocedSize", (int)(&((idWinding *)0)->allocedSize), sizeof( ((idWinding *)0)->allocedSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFixedWinding_typeInfo[] = {
	{ "idVec5[64]", "data", (int)(&((idFixedWinding *)0)->data), sizeof( ((idFixedWinding *)0)->data ) },
	{ NULL, 0 }
};

static classVariableInfo_t idWinding2D_typeInfo[] = {
	{ "int", "numPoints", (int)(&((idWinding2D *)0)->numPoints), sizeof( ((idWinding2D *)0)->numPoints ) },
	{ "idVec2[16]", "p", (int)(&((idWinding2D *)0)->p), sizeof( ((idWinding2D *)0)->p ) },
	{ NULL, 0 }
};

static classVariableInfo_t surfaceEdge_t_typeInfo[] = {
	{ "int[2]", "verts", (int)(&((surfaceEdge_t *)0)->verts), sizeof( ((surfaceEdge_t *)0)->verts ) },
	{ "int[2]", "tris", (int)(&((surfaceEdge_t *)0)->tris), sizeof( ((surfaceEdge_t *)0)->tris ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSurface_typeInfo[] = {
	{ "idList < idDrawVert >", "verts", (int)(&((idSurface *)0)->verts), sizeof( ((idSurface *)0)->verts ) },
	{ "idList < int >", "indexes", (int)(&((idSurface *)0)->indexes), sizeof( ((idSurface *)0)->indexes ) },
	{ "idList < surfaceEdge_t >", "edges", (int)(&((idSurface *)0)->edges), sizeof( ((idSurface *)0)->edges ) },
	{ "idList < int >", "edgeIndexes", (int)(&((idSurface *)0)->edgeIndexes), sizeof( ((idSurface *)0)->edgeIndexes ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSurface_Patch_typeInfo[] = {
	{ "int", "width", (int)(&((idSurface_Patch *)0)->width), sizeof( ((idSurface_Patch *)0)->width ) },
	{ "int", "height", (int)(&((idSurface_Patch *)0)->height), sizeof( ((idSurface_Patch *)0)->height ) },
	{ "int", "maxWidth", (int)(&((idSurface_Patch *)0)->maxWidth), sizeof( ((idSurface_Patch *)0)->maxWidth ) },
	{ "int", "maxHeight", (int)(&((idSurface_Patch *)0)->maxHeight), sizeof( ((idSurface_Patch *)0)->maxHeight ) },
	{ "bool", "expanded", (int)(&((idSurface_Patch *)0)->expanded), sizeof( ((idSurface_Patch *)0)->expanded ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSurface_Polytope_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSurface_SweptSpline_typeInfo[] = {
	{ "idCurve_Spline < idVec4 > *", "spline", (int)(&((idSurface_SweptSpline *)0)->spline), sizeof( ((idSurface_SweptSpline *)0)->spline ) },
	{ "idCurve_Spline < idVec4 > *", "sweptSpline", (int)(&((idSurface_SweptSpline *)0)->sweptSpline), sizeof( ((idSurface_SweptSpline *)0)->sweptSpline ) },
	{ NULL, 0 }
};

static classVariableInfo_t traceModelEdge_t_typeInfo[] = {
	{ "int[2]", "v", (int)(&((traceModelEdge_t *)0)->v), sizeof( ((traceModelEdge_t *)0)->v ) },
	{ "idVec3", "normal", (int)(&((traceModelEdge_t *)0)->normal), sizeof( ((traceModelEdge_t *)0)->normal ) },
	{ NULL, 0 }
};

static classVariableInfo_t traceModelPoly_t_typeInfo[] = {
	{ "idVec3", "normal", (int)(&((traceModelPoly_t *)0)->normal), sizeof( ((traceModelPoly_t *)0)->normal ) },
	{ "float", "dist", (int)(&((traceModelPoly_t *)0)->dist), sizeof( ((traceModelPoly_t *)0)->dist ) },
	{ "idBounds", "bounds", (int)(&((traceModelPoly_t *)0)->bounds), sizeof( ((traceModelPoly_t *)0)->bounds ) },
	{ "int", "numEdges", (int)(&((traceModelPoly_t *)0)->numEdges), sizeof( ((traceModelPoly_t *)0)->numEdges ) },
	{ "int[16]", "edges", (int)(&((traceModelPoly_t *)0)->edges), sizeof( ((traceModelPoly_t *)0)->edges ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTraceModel_typeInfo[] = {
	{ "traceModel_t", "type", (int)(&((idTraceModel *)0)->type), sizeof( ((idTraceModel *)0)->type ) },
	{ "int", "numVerts", (int)(&((idTraceModel *)0)->numVerts), sizeof( ((idTraceModel *)0)->numVerts ) },
	{ "traceModelVert_t[32]", "verts", (int)(&((idTraceModel *)0)->verts), sizeof( ((idTraceModel *)0)->verts ) },
	{ "int", "numEdges", (int)(&((idTraceModel *)0)->numEdges), sizeof( ((idTraceModel *)0)->numEdges ) },
	{ "traceModelEdge_t[33]", "edges", (int)(&((idTraceModel *)0)->edges), sizeof( ((idTraceModel *)0)->edges ) },
	{ "int", "numPolys", (int)(&((idTraceModel *)0)->numPolys), sizeof( ((idTraceModel *)0)->numPolys ) },
	{ "traceModelPoly_t[16]", "polys", (int)(&((idTraceModel *)0)->polys), sizeof( ((idTraceModel *)0)->polys ) },
	{ "idVec3", "offset", (int)(&((idTraceModel *)0)->offset), sizeof( ((idTraceModel *)0)->offset ) },
	{ "idBounds", "bounds", (int)(&((idTraceModel *)0)->bounds), sizeof( ((idTraceModel *)0)->bounds ) },
	{ "bool", "isConvex", (int)(&((idTraceModel *)0)->isConvex), sizeof( ((idTraceModel *)0)->isConvex ) },
	{ NULL, 0 }
};

static classVariableInfo_t idStr_typeInfo[] = {
	{ "int", "len", (int)(&((idStr *)0)->len), sizeof( ((idStr *)0)->len ) },
	{ "char *", "data", (int)(&((idStr *)0)->data), sizeof( ((idStr *)0)->data ) },
	{ "int", "alloced", (int)(&((idStr *)0)->alloced), sizeof( ((idStr *)0)->alloced ) },
	{ "char[20]", "baseBuffer", (int)(&((idStr *)0)->baseBuffer), sizeof( ((idStr *)0)->baseBuffer ) },
	{ NULL, 0 }
};

static classVariableInfo_t idToken_typeInfo[] = {
	{ "int", "type", (int)(&((idToken *)0)->type), sizeof( ((idToken *)0)->type ) },
	{ "int", "subtype", (int)(&((idToken *)0)->subtype), sizeof( ((idToken *)0)->subtype ) },
	{ "int", "line", (int)(&((idToken *)0)->line), sizeof( ((idToken *)0)->line ) },
	{ "int", "linesCrossed", (int)(&((idToken *)0)->linesCrossed), sizeof( ((idToken *)0)->linesCrossed ) },
	{ "int", "flags", (int)(&((idToken *)0)->flags), sizeof( ((idToken *)0)->flags ) },
	{ "unsigned long", "intvalue", (int)(&((idToken *)0)->intvalue), sizeof( ((idToken *)0)->intvalue ) },
	{ "double", "floatvalue", (int)(&((idToken *)0)->floatvalue), sizeof( ((idToken *)0)->floatvalue ) },
	{ "const char *", "whiteSpaceStart_p", (int)(&((idToken *)0)->whiteSpaceStart_p), sizeof( ((idToken *)0)->whiteSpaceStart_p ) },
	{ "const char *", "whiteSpaceEnd_p", (int)(&((idToken *)0)->whiteSpaceEnd_p), sizeof( ((idToken *)0)->whiteSpaceEnd_p ) },
	{ "idToken *", "next", (int)(&((idToken *)0)->next), sizeof( ((idToken *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t punctuation_t_typeInfo[] = {
	{ "char *", "p", (int)(&((punctuation_t *)0)->p), sizeof( ((punctuation_t *)0)->p ) },
	{ "int", "n", (int)(&((punctuation_t *)0)->n), sizeof( ((punctuation_t *)0)->n ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLexer_typeInfo[] = {
	{ "int", "loaded", (int)(&((idLexer *)0)->loaded), sizeof( ((idLexer *)0)->loaded ) },
	{ "idStr", "filename", (int)(&((idLexer *)0)->filename), sizeof( ((idLexer *)0)->filename ) },
	{ "int", "allocated", (int)(&((idLexer *)0)->allocated), sizeof( ((idLexer *)0)->allocated ) },
	{ "const char *", "buffer", (int)(&((idLexer *)0)->buffer), sizeof( ((idLexer *)0)->buffer ) },
	{ "const char *", "script_p", (int)(&((idLexer *)0)->script_p), sizeof( ((idLexer *)0)->script_p ) },
	{ "const char *", "end_p", (int)(&((idLexer *)0)->end_p), sizeof( ((idLexer *)0)->end_p ) },
	{ "const char *", "lastScript_p", (int)(&((idLexer *)0)->lastScript_p), sizeof( ((idLexer *)0)->lastScript_p ) },
	{ "const char *", "whiteSpaceStart_p", (int)(&((idLexer *)0)->whiteSpaceStart_p), sizeof( ((idLexer *)0)->whiteSpaceStart_p ) },
	{ "const char *", "whiteSpaceEnd_p", (int)(&((idLexer *)0)->whiteSpaceEnd_p), sizeof( ((idLexer *)0)->whiteSpaceEnd_p ) },
	{ "time_t", "fileTime", (int)(&((idLexer *)0)->fileTime), sizeof( ((idLexer *)0)->fileTime ) },
	{ "int", "length", (int)(&((idLexer *)0)->length), sizeof( ((idLexer *)0)->length ) },
	{ "int", "line", (int)(&((idLexer *)0)->line), sizeof( ((idLexer *)0)->line ) },
	{ "int", "lastline", (int)(&((idLexer *)0)->lastline), sizeof( ((idLexer *)0)->lastline ) },
	{ "int", "tokenavailable", (int)(&((idLexer *)0)->tokenavailable), sizeof( ((idLexer *)0)->tokenavailable ) },
	{ "int", "flags", (int)(&((idLexer *)0)->flags), sizeof( ((idLexer *)0)->flags ) },
	{ "const punctuation_t *", "punctuations", (int)(&((idLexer *)0)->punctuations), sizeof( ((idLexer *)0)->punctuations ) },
	{ "int *", "punctuationtable", (int)(&((idLexer *)0)->punctuationtable), sizeof( ((idLexer *)0)->punctuationtable ) },
	{ "int *", "nextpunctuation", (int)(&((idLexer *)0)->nextpunctuation), sizeof( ((idLexer *)0)->nextpunctuation ) },
	{ "idToken", "token", (int)(&((idLexer *)0)->token), sizeof( ((idLexer *)0)->token ) },
	{ "idLexer *", "next", (int)(&((idLexer *)0)->next), sizeof( ((idLexer *)0)->next ) },
	{ "bool", "hadError", (int)(&((idLexer *)0)->hadError), sizeof( ((idLexer *)0)->hadError ) },
	{ NULL, 0 }
};

static classVariableInfo_t define_t_typeInfo[] = {
	{ "char *", "name", (int)(&((define_t *)0)->name), sizeof( ((define_t *)0)->name ) },
	{ "int", "flags", (int)(&((define_t *)0)->flags), sizeof( ((define_t *)0)->flags ) },
	{ "int", "builtin", (int)(&((define_t *)0)->builtin), sizeof( ((define_t *)0)->builtin ) },
	{ "int", "numparms", (int)(&((define_t *)0)->numparms), sizeof( ((define_t *)0)->numparms ) },
	{ "idToken *", "parms", (int)(&((define_t *)0)->parms), sizeof( ((define_t *)0)->parms ) },
	{ "idToken *", "tokens", (int)(&((define_t *)0)->tokens), sizeof( ((define_t *)0)->tokens ) },
	{ "define_s *", "next", (int)(&((define_t *)0)->next), sizeof( ((define_t *)0)->next ) },
	{ "define_s *", "hashnext", (int)(&((define_t *)0)->hashnext), sizeof( ((define_t *)0)->hashnext ) },
	{ NULL, 0 }
};

static classVariableInfo_t indent_t_typeInfo[] = {
	{ "int", "type", (int)(&((indent_t *)0)->type), sizeof( ((indent_t *)0)->type ) },
	{ "int", "skip", (int)(&((indent_t *)0)->skip), sizeof( ((indent_t *)0)->skip ) },
	{ "idLexer *", "script", (int)(&((indent_t *)0)->script), sizeof( ((indent_t *)0)->script ) },
	{ "indent_s *", "next", (int)(&((indent_t *)0)->next), sizeof( ((indent_t *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idParser_typeInfo[] = {
	{ "int", "loaded", (int)(&((idParser *)0)->loaded), sizeof( ((idParser *)0)->loaded ) },
	{ "idStr", "filename", (int)(&((idParser *)0)->filename), sizeof( ((idParser *)0)->filename ) },
	{ "idStr", "includepath", (int)(&((idParser *)0)->includepath), sizeof( ((idParser *)0)->includepath ) },
	{ "bool", "OSPath", (int)(&((idParser *)0)->OSPath), sizeof( ((idParser *)0)->OSPath ) },
	{ "const punctuation_t *", "punctuations", (int)(&((idParser *)0)->punctuations), sizeof( ((idParser *)0)->punctuations ) },
	{ "int", "flags", (int)(&((idParser *)0)->flags), sizeof( ((idParser *)0)->flags ) },
	{ "idLexer *", "scriptstack", (int)(&((idParser *)0)->scriptstack), sizeof( ((idParser *)0)->scriptstack ) },
	{ "idToken *", "tokens", (int)(&((idParser *)0)->tokens), sizeof( ((idParser *)0)->tokens ) },
	{ "define_t *", "defines", (int)(&((idParser *)0)->defines), sizeof( ((idParser *)0)->defines ) },
	{ "define_t * *", "definehash", (int)(&((idParser *)0)->definehash), sizeof( ((idParser *)0)->definehash ) },
	{ "indent_t *", "indentstack", (int)(&((idParser *)0)->indentstack), sizeof( ((idParser *)0)->indentstack ) },
	{ "int", "skip", (int)(&((idParser *)0)->skip), sizeof( ((idParser *)0)->skip ) },
	{ "const char *", "marker_p", (int)(&((idParser *)0)->marker_p), sizeof( ((idParser *)0)->marker_p ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBase64_typeInfo[] = {
	{ "byte *", "data", (int)(&((idBase64 *)0)->data), sizeof( ((idBase64 *)0)->data ) },
	{ "int", "len", (int)(&((idBase64 *)0)->len), sizeof( ((idBase64 *)0)->len ) },
	{ "int", "alloced", (int)(&((idBase64 *)0)->alloced), sizeof( ((idBase64 *)0)->alloced ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCmdArgs_typeInfo[] = {
	{ "int", "argc", (int)(&((idCmdArgs *)0)->argc), sizeof( ((idCmdArgs *)0)->argc ) },
	{ "char *[64]", "argv", (int)(&((idCmdArgs *)0)->argv), sizeof( ((idCmdArgs *)0)->argv ) },
	{ "char[2048]", "tokenized", (int)(&((idCmdArgs *)0)->tokenized), sizeof( ((idCmdArgs *)0)->tokenized ) },
	{ NULL, 0 }
};

static classVariableInfo_t idHashIndex_typeInfo[] = {
	{ "int", "hashSize", (int)(&((idHashIndex *)0)->hashSize), sizeof( ((idHashIndex *)0)->hashSize ) },
	{ "int *", "hash", (int)(&((idHashIndex *)0)->hash), sizeof( ((idHashIndex *)0)->hash ) },
	{ "int", "indexSize", (int)(&((idHashIndex *)0)->indexSize), sizeof( ((idHashIndex *)0)->indexSize ) },
	{ "int *", "indexChain", (int)(&((idHashIndex *)0)->indexChain), sizeof( ((idHashIndex *)0)->indexChain ) },
	{ "int", "granularity", (int)(&((idHashIndex *)0)->granularity), sizeof( ((idHashIndex *)0)->granularity ) },
	{ "int", "hashMask", (int)(&((idHashIndex *)0)->hashMask), sizeof( ((idHashIndex *)0)->hashMask ) },
	{ "int", "lookupMask", (int)(&((idHashIndex *)0)->lookupMask), sizeof( ((idHashIndex *)0)->lookupMask ) },
	{ NULL, 0 }
};

static classVariableInfo_t idHashTable_class_Type__hashnode_s_typeInfo[] = {
//	{ "idStr", "key", (int)(&((idHashTable< class Type >::hashnode_s *)0)->key), sizeof( ((idHashTable< class Type >::hashnode_s *)0)->key ) },
//	{ "Type", "value", (int)(&((idHashTable< class Type >::hashnode_s *)0)->value), sizeof( ((idHashTable< class Type >::hashnode_s *)0)->value ) },
//	{ "hashnode_s *", "next", (int)(&((idHashTable< class Type >::hashnode_s *)0)->next), sizeof( ((idHashTable< class Type >::hashnode_s *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idHashTable_class_Type__typeInfo[] = {
//	{ "hashnode_s * *", "heads", (int)(&((idHashTable< class Type > *)0)->heads), sizeof( ((idHashTable< class Type > *)0)->heads ) },
//	{ "int", "tablesize", (int)(&((idHashTable< class Type > *)0)->tablesize), sizeof( ((idHashTable< class Type > *)0)->tablesize ) },
//	{ "int", "numentries", (int)(&((idHashTable< class Type > *)0)->numentries), sizeof( ((idHashTable< class Type > *)0)->numentries ) },
//	{ "int", "tablesizemask", (int)(&((idHashTable< class Type > *)0)->tablesizemask), sizeof( ((idHashTable< class Type > *)0)->tablesizemask ) },
	{ NULL, 0 }
};

static classVariableInfo_t idStaticList_class_type_int_size__typeInfo[] = {
//	{ "int", "num", (int)(&((idStaticList< class type , int size > *)0)->num), sizeof( ((idStaticList< class type , int size > *)0)->num ) },
//	{ "type[1]", "list", (int)(&((idStaticList< class type , int size > *)0)->list), sizeof( ((idStaticList< class type , int size > *)0)->list ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLinkList_class_type__typeInfo[] = {
//	{ "idLinkList *", "head", (int)(&((idLinkList< class type > *)0)->head), sizeof( ((idLinkList< class type > *)0)->head ) },
//	{ "idLinkList *", "next", (int)(&((idLinkList< class type > *)0)->next), sizeof( ((idLinkList< class type > *)0)->next ) },
//	{ "idLinkList *", "prev", (int)(&((idLinkList< class type > *)0)->prev), sizeof( ((idLinkList< class type > *)0)->prev ) },
//	{ "type *", "owner", (int)(&((idLinkList< class type > *)0)->owner), sizeof( ((idLinkList< class type > *)0)->owner ) },
	{ NULL, 0 }
};

static classVariableInfo_t idHierarchy_class_type__typeInfo[] = {
//	{ "idHierarchy *", "parent", (int)(&((idHierarchy< class type > *)0)->parent), sizeof( ((idHierarchy< class type > *)0)->parent ) },
//	{ "idHierarchy *", "sibling", (int)(&((idHierarchy< class type > *)0)->sibling), sizeof( ((idHierarchy< class type > *)0)->sibling ) },
//	{ "idHierarchy *", "child", (int)(&((idHierarchy< class type > *)0)->child), sizeof( ((idHierarchy< class type > *)0)->child ) },
//	{ "type *", "owner", (int)(&((idHierarchy< class type > *)0)->owner), sizeof( ((idHierarchy< class type > *)0)->owner ) },
	{ NULL, 0 }
};

static classVariableInfo_t idQueueTemplate_class_type_int_nextOffset__typeInfo[] = {
//	{ "type *", "first", (int)(&((idQueueTemplate< class type , int nextOffset > *)0)->first), sizeof( ((idQueueTemplate< class type , int nextOffset > *)0)->first ) },
//	{ "type *", "last", (int)(&((idQueueTemplate< class type , int nextOffset > *)0)->last), sizeof( ((idQueueTemplate< class type , int nextOffset > *)0)->last ) },
	{ NULL, 0 }
};

static classVariableInfo_t idStackTemplate_class_type_int_nextOffset__typeInfo[] = {
//	{ "type *", "top", (int)(&((idStackTemplate< class type , int nextOffset > *)0)->top), sizeof( ((idStackTemplate< class type , int nextOffset > *)0)->top ) },
//	{ "type *", "bottom", (int)(&((idStackTemplate< class type , int nextOffset > *)0)->bottom), sizeof( ((idStackTemplate< class type , int nextOffset > *)0)->bottom ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPoolStr_typeInfo[] = {
	{ "idStrPool *", "pool", (int)(&((idPoolStr *)0)->pool), sizeof( ((idPoolStr *)0)->pool ) },
	{ "mutable int", "numUsers", (int)(&((idPoolStr *)0)->numUsers), sizeof( ((idPoolStr *)0)->numUsers ) },
	{ NULL, 0 }
};

static classVariableInfo_t idStrPool_typeInfo[] = {
	{ "bool", "caseSensitive", (int)(&((idStrPool *)0)->caseSensitive), sizeof( ((idStrPool *)0)->caseSensitive ) },
	{ "idList < idPoolStr * >", "pool", (int)(&((idStrPool *)0)->pool), sizeof( ((idStrPool *)0)->pool ) },
	{ "idHashIndex", "poolHash", (int)(&((idStrPool *)0)->poolHash), sizeof( ((idStrPool *)0)->poolHash ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVectorSet_class_type_int_dimension__typeInfo[] = {
//	{ "idHashIndex", "hash", (int)(&((idVectorSet< class type , int dimension > *)0)->hash), sizeof( ((idVectorSet< class type , int dimension > *)0)->hash ) },
//	{ "type", "mins", (int)(&((idVectorSet< class type , int dimension > *)0)->mins), sizeof( ((idVectorSet< class type , int dimension > *)0)->mins ) },
//	{ "type", "maxs", (int)(&((idVectorSet< class type , int dimension > *)0)->maxs), sizeof( ((idVectorSet< class type , int dimension > *)0)->maxs ) },
//	{ "int", "boxHashSize", (int)(&((idVectorSet< class type , int dimension > *)0)->boxHashSize), sizeof( ((idVectorSet< class type , int dimension > *)0)->boxHashSize ) },
//	{ "float[1]", "boxInvSize", (int)(&((idVectorSet< class type , int dimension > *)0)->boxInvSize), sizeof( ((idVectorSet< class type , int dimension > *)0)->boxInvSize ) },
//	{ "float[1]", "boxHalfSize", (int)(&((idVectorSet< class type , int dimension > *)0)->boxHalfSize), sizeof( ((idVectorSet< class type , int dimension > *)0)->boxHalfSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVectorSubset_class_type_int_dimension__typeInfo[] = {
//	{ "idHashIndex", "hash", (int)(&((idVectorSubset< class type , int dimension > *)0)->hash), sizeof( ((idVectorSubset< class type , int dimension > *)0)->hash ) },
//	{ "type", "mins", (int)(&((idVectorSubset< class type , int dimension > *)0)->mins), sizeof( ((idVectorSubset< class type , int dimension > *)0)->mins ) },
//	{ "type", "maxs", (int)(&((idVectorSubset< class type , int dimension > *)0)->maxs), sizeof( ((idVectorSubset< class type , int dimension > *)0)->maxs ) },
//	{ "int", "boxHashSize", (int)(&((idVectorSubset< class type , int dimension > *)0)->boxHashSize), sizeof( ((idVectorSubset< class type , int dimension > *)0)->boxHashSize ) },
//	{ "float[1]", "boxInvSize", (int)(&((idVectorSubset< class type , int dimension > *)0)->boxInvSize), sizeof( ((idVectorSubset< class type , int dimension > *)0)->boxInvSize ) },
//	{ "float[1]", "boxHalfSize", (int)(&((idVectorSubset< class type , int dimension > *)0)->boxHalfSize), sizeof( ((idVectorSubset< class type , int dimension > *)0)->boxHalfSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlaneSet_typeInfo[] = {
	{ "idHashIndex", "hash", (int)(&((idPlaneSet *)0)->hash), sizeof( ((idPlaneSet *)0)->hash ) },
	{ NULL, 0 }
};

static classVariableInfo_t idKeyValue_typeInfo[] = {
	{ "const idPoolStr *", "key", (int)(&((idKeyValue *)0)->key), sizeof( ((idKeyValue *)0)->key ) },
	{ "const idPoolStr *", "value", (int)(&((idKeyValue *)0)->value), sizeof( ((idKeyValue *)0)->value ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDict_typeInfo[] = {
	{ "idList < idKeyValue >", "args", (int)(&((idDict *)0)->args), sizeof( ((idDict *)0)->args ) },
	{ "idHashIndex", "argHash", (int)(&((idDict *)0)->argHash), sizeof( ((idDict *)0)->argHash ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLangKeyValue_typeInfo[] = {
	{ "idStr", "key", (int)(&((idLangKeyValue *)0)->key), sizeof( ((idLangKeyValue *)0)->key ) },
	{ "idStr", "value", (int)(&((idLangKeyValue *)0)->value), sizeof( ((idLangKeyValue *)0)->value ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLangDict_typeInfo[] = {
	{ "idList < idLangKeyValue >", "args", (int)(&((idLangDict *)0)->args), sizeof( ((idLangDict *)0)->args ) },
	{ "idHashIndex", "hash", (int)(&((idLangDict *)0)->hash), sizeof( ((idLangDict *)0)->hash ) },
	{ "int", "baseID", (int)(&((idLangDict *)0)->baseID), sizeof( ((idLangDict *)0)->baseID ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBitMsg_typeInfo[] = {
	{ "byte *", "writeData", (int)(&((idBitMsg *)0)->writeData), sizeof( ((idBitMsg *)0)->writeData ) },
	{ "const byte *", "readData", (int)(&((idBitMsg *)0)->readData), sizeof( ((idBitMsg *)0)->readData ) },
	{ "int", "maxSize", (int)(&((idBitMsg *)0)->maxSize), sizeof( ((idBitMsg *)0)->maxSize ) },
	{ "int", "curSize", (int)(&((idBitMsg *)0)->curSize), sizeof( ((idBitMsg *)0)->curSize ) },
	{ "int", "writeBit", (int)(&((idBitMsg *)0)->writeBit), sizeof( ((idBitMsg *)0)->writeBit ) },
	{ "mutable int", "readCount", (int)(&((idBitMsg *)0)->readCount), sizeof( ((idBitMsg *)0)->readCount ) },
	{ "mutable int", "readBit", (int)(&((idBitMsg *)0)->readBit), sizeof( ((idBitMsg *)0)->readBit ) },
	{ "bool", "allowOverflow", (int)(&((idBitMsg *)0)->allowOverflow), sizeof( ((idBitMsg *)0)->allowOverflow ) },
	{ "bool", "overflowed", (int)(&((idBitMsg *)0)->overflowed), sizeof( ((idBitMsg *)0)->overflowed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBitMsgDelta_typeInfo[] = {
	{ "const idBitMsg *", "base", (int)(&((idBitMsgDelta *)0)->base), sizeof( ((idBitMsgDelta *)0)->base ) },
	{ "idBitMsg *", "newBase", (int)(&((idBitMsgDelta *)0)->newBase), sizeof( ((idBitMsgDelta *)0)->newBase ) },
	{ "idBitMsg *", "writeDelta", (int)(&((idBitMsgDelta *)0)->writeDelta), sizeof( ((idBitMsgDelta *)0)->writeDelta ) },
	{ "const idBitMsg *", "readDelta", (int)(&((idBitMsgDelta *)0)->readDelta), sizeof( ((idBitMsgDelta *)0)->readDelta ) },
	{ "mutable bool", "changed", (int)(&((idBitMsgDelta *)0)->changed), sizeof( ((idBitMsgDelta *)0)->changed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapPrimitive_typeInfo[] = {
	{ "idDict", "epairs", (int)(&((idMapPrimitive *)0)->epairs), sizeof( ((idMapPrimitive *)0)->epairs ) },
	{ "int", "type", (int)(&((idMapPrimitive *)0)->type), sizeof( ((idMapPrimitive *)0)->type ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapBrushSide_typeInfo[] = {
	{ "idStr", "material", (int)(&((idMapBrushSide *)0)->material), sizeof( ((idMapBrushSide *)0)->material ) },
	{ "idPlane", "plane", (int)(&((idMapBrushSide *)0)->plane), sizeof( ((idMapBrushSide *)0)->plane ) },
	{ "idVec3[2]", "texMat", (int)(&((idMapBrushSide *)0)->texMat), sizeof( ((idMapBrushSide *)0)->texMat ) },
	{ "idVec3", "origin", (int)(&((idMapBrushSide *)0)->origin), sizeof( ((idMapBrushSide *)0)->origin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapBrush_typeInfo[] = {
	{ "int", "numSides", (int)(&((idMapBrush *)0)->numSides), sizeof( ((idMapBrush *)0)->numSides ) },
	{ "idList < idMapBrushSide * >", "sides", (int)(&((idMapBrush *)0)->sides), sizeof( ((idMapBrush *)0)->sides ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapPatch_typeInfo[] = {
	{ "idStr", "material", (int)(&((idMapPatch *)0)->material), sizeof( ((idMapPatch *)0)->material ) },
	{ "int", "horzSubdivisions", (int)(&((idMapPatch *)0)->horzSubdivisions), sizeof( ((idMapPatch *)0)->horzSubdivisions ) },
	{ "int", "vertSubdivisions", (int)(&((idMapPatch *)0)->vertSubdivisions), sizeof( ((idMapPatch *)0)->vertSubdivisions ) },
	{ "bool", "explicitSubdivisions", (int)(&((idMapPatch *)0)->explicitSubdivisions), sizeof( ((idMapPatch *)0)->explicitSubdivisions ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapEntity_typeInfo[] = {
	{ "idDict", "epairs", (int)(&((idMapEntity *)0)->epairs), sizeof( ((idMapEntity *)0)->epairs ) },
	{ "idList < idMapPrimitive * >", "primitives", (int)(&((idMapEntity *)0)->primitives), sizeof( ((idMapEntity *)0)->primitives ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapFile_typeInfo[] = {
	{ "float", "version", (int)(&((idMapFile *)0)->version), sizeof( ((idMapFile *)0)->version ) },
	{ "time_t", "fileTime", (int)(&((idMapFile *)0)->fileTime), sizeof( ((idMapFile *)0)->fileTime ) },
	{ "unsigned int", "geometryCRC", (int)(&((idMapFile *)0)->geometryCRC), sizeof( ((idMapFile *)0)->geometryCRC ) },
	{ "idList < idMapEntity * >", "entities", (int)(&((idMapFile *)0)->entities), sizeof( ((idMapFile *)0)->entities ) },
	{ "idStr", "name", (int)(&((idMapFile *)0)->name), sizeof( ((idMapFile *)0)->name ) },
	{ "bool", "hasPrimitiveData", (int)(&((idMapFile *)0)->hasPrimitiveData), sizeof( ((idMapFile *)0)->hasPrimitiveData ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTimer_typeInfo[] = {
	{ "idTimer::enum_20", "state", (int)(&((idTimer *)0)->state), sizeof( ((idTimer *)0)->state ) },
	{ "double", "start", (int)(&((idTimer *)0)->start), sizeof( ((idTimer *)0)->start ) },
	{ "double", "clockTicks", (int)(&((idTimer *)0)->clockTicks), sizeof( ((idTimer *)0)->clockTicks ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTimerReport_typeInfo[] = {
	{ "idList < idTimer * >", "timers", (int)(&((idTimerReport *)0)->timers), sizeof( ((idTimerReport *)0)->timers ) },
	{ "idStrList", "names", (int)(&((idTimerReport *)0)->names), sizeof( ((idTimerReport *)0)->names ) },
	{ "idStr", "reportName", (int)(&((idTimerReport *)0)->reportName), sizeof( ((idTimerReport *)0)->reportName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCmdSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCVar_typeInfo[] = {
	{ "const char *", "name", (int)(&((idCVar *)0)->name), sizeof( ((idCVar *)0)->name ) },
	{ "const char *", "value", (int)(&((idCVar *)0)->value), sizeof( ((idCVar *)0)->value ) },
	{ "const char *", "description", (int)(&((idCVar *)0)->description), sizeof( ((idCVar *)0)->description ) },
	{ "int", "flags", (int)(&((idCVar *)0)->flags), sizeof( ((idCVar *)0)->flags ) },
	{ "float", "valueMin", (int)(&((idCVar *)0)->valueMin), sizeof( ((idCVar *)0)->valueMin ) },
	{ "float", "valueMax", (int)(&((idCVar *)0)->valueMax), sizeof( ((idCVar *)0)->valueMax ) },
	{ "const char * *", "valueStrings", (int)(&((idCVar *)0)->valueStrings), sizeof( ((idCVar *)0)->valueStrings ) },
	{ "argCompletion_t", "valueCompletion", (int)(&((idCVar *)0)->valueCompletion), sizeof( ((idCVar *)0)->valueCompletion ) },
	{ "int", "integerValue", (int)(&((idCVar *)0)->integerValue), sizeof( ((idCVar *)0)->integerValue ) },
	{ "float", "floatValue", (int)(&((idCVar *)0)->floatValue), sizeof( ((idCVar *)0)->floatValue ) },
	{ "idCVar *", "internalVar", (int)(&((idCVar *)0)->internalVar), sizeof( ((idCVar *)0)->internalVar ) },
	{ "idCVar *", "next", (int)(&((idCVar *)0)->next), sizeof( ((idCVar *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCVarSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t MemInfo_t_typeInfo[] = {
	{ "idStr", "filebase", (int)(&((MemInfo_t *)0)->filebase), sizeof( ((MemInfo_t *)0)->filebase ) },
	{ "int", "total", (int)(&((MemInfo_t *)0)->total), sizeof( ((MemInfo_t *)0)->total ) },
	{ "int", "assetTotals", (int)(&((MemInfo_t *)0)->assetTotals), sizeof( ((MemInfo_t *)0)->assetTotals ) },
	{ "int", "memoryManagerTotal", (int)(&((MemInfo_t *)0)->memoryManagerTotal), sizeof( ((MemInfo_t *)0)->memoryManagerTotal ) },
	{ "int", "gameSubsystemTotal", (int)(&((MemInfo_t *)0)->gameSubsystemTotal), sizeof( ((MemInfo_t *)0)->gameSubsystemTotal ) },
	{ "int", "renderSubsystemTotal", (int)(&((MemInfo_t *)0)->renderSubsystemTotal), sizeof( ((MemInfo_t *)0)->renderSubsystemTotal ) },
	{ "int", "imageAssetsTotal", (int)(&((MemInfo_t *)0)->imageAssetsTotal), sizeof( ((MemInfo_t *)0)->imageAssetsTotal ) },
	{ "int", "modelAssetsTotal", (int)(&((MemInfo_t *)0)->modelAssetsTotal), sizeof( ((MemInfo_t *)0)->modelAssetsTotal ) },
	{ "int", "soundAssetsTotal", (int)(&((MemInfo_t *)0)->soundAssetsTotal), sizeof( ((MemInfo_t *)0)->soundAssetsTotal ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCommon_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idFile_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idFile_Memory_typeInfo[] = {
	{ "idStr", "name", (int)(&((idFile_Memory *)0)->name), sizeof( ((idFile_Memory *)0)->name ) },
	{ "int", "mode", (int)(&((idFile_Memory *)0)->mode), sizeof( ((idFile_Memory *)0)->mode ) },
	{ "int", "maxSize", (int)(&((idFile_Memory *)0)->maxSize), sizeof( ((idFile_Memory *)0)->maxSize ) },
	{ "int", "fileSize", (int)(&((idFile_Memory *)0)->fileSize), sizeof( ((idFile_Memory *)0)->fileSize ) },
	{ "int", "allocated", (int)(&((idFile_Memory *)0)->allocated), sizeof( ((idFile_Memory *)0)->allocated ) },
	{ "int", "granularity", (int)(&((idFile_Memory *)0)->granularity), sizeof( ((idFile_Memory *)0)->granularity ) },
	{ "char *", "filePtr", (int)(&((idFile_Memory *)0)->filePtr), sizeof( ((idFile_Memory *)0)->filePtr ) },
	{ "char *", "curPtr", (int)(&((idFile_Memory *)0)->curPtr), sizeof( ((idFile_Memory *)0)->curPtr ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFile_BitMsg_typeInfo[] = {
	{ "idStr", "name", (int)(&((idFile_BitMsg *)0)->name), sizeof( ((idFile_BitMsg *)0)->name ) },
	{ "int", "mode", (int)(&((idFile_BitMsg *)0)->mode), sizeof( ((idFile_BitMsg *)0)->mode ) },
	{ "idBitMsg *", "msg", (int)(&((idFile_BitMsg *)0)->msg), sizeof( ((idFile_BitMsg *)0)->msg ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFile_Permanent_typeInfo[] = {
	{ "idStr", "name", (int)(&((idFile_Permanent *)0)->name), sizeof( ((idFile_Permanent *)0)->name ) },
	{ "idStr", "fullPath", (int)(&((idFile_Permanent *)0)->fullPath), sizeof( ((idFile_Permanent *)0)->fullPath ) },
	{ "int", "mode", (int)(&((idFile_Permanent *)0)->mode), sizeof( ((idFile_Permanent *)0)->mode ) },
	{ "int", "fileSize", (int)(&((idFile_Permanent *)0)->fileSize), sizeof( ((idFile_Permanent *)0)->fileSize ) },
	{ "FILE *", "o", (int)(&((idFile_Permanent *)0)->o), sizeof( ((idFile_Permanent *)0)->o ) },
	{ "bool", "handleSync", (int)(&((idFile_Permanent *)0)->handleSync), sizeof( ((idFile_Permanent *)0)->handleSync ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFile_InZip_typeInfo[] = {
	{ "idStr", "name", (int)(&((idFile_InZip *)0)->name), sizeof( ((idFile_InZip *)0)->name ) },
	{ "idStr", "fullPath", (int)(&((idFile_InZip *)0)->fullPath), sizeof( ((idFile_InZip *)0)->fullPath ) },
	{ "int", "zipFilePos", (int)(&((idFile_InZip *)0)->zipFilePos), sizeof( ((idFile_InZip *)0)->zipFilePos ) },
	{ "int", "fileSize", (int)(&((idFile_InZip *)0)->fileSize), sizeof( ((idFile_InZip *)0)->fileSize ) },
	{ "void *", "z", (int)(&((idFile_InZip *)0)->z), sizeof( ((idFile_InZip *)0)->z ) },
	{ NULL, 0 }
};

static classVariableInfo_t urlDownload_t_typeInfo[] = {
	{ "idStr", "url", (int)(&((urlDownload_t *)0)->url), sizeof( ((urlDownload_t *)0)->url ) },
	{ "char[1024]", "dlerror", (int)(&((urlDownload_t *)0)->dlerror), sizeof( ((urlDownload_t *)0)->dlerror ) },
	{ "int", "dltotal", (int)(&((urlDownload_t *)0)->dltotal), sizeof( ((urlDownload_t *)0)->dltotal ) },
	{ "int", "dlnow", (int)(&((urlDownload_t *)0)->dlnow), sizeof( ((urlDownload_t *)0)->dlnow ) },
	{ "int", "dlstatus", (int)(&((urlDownload_t *)0)->dlstatus), sizeof( ((urlDownload_t *)0)->dlstatus ) },
	{ "dlStatus_t", "status", (int)(&((urlDownload_t *)0)->status), sizeof( ((urlDownload_t *)0)->status ) },
	{ NULL, 0 }
};

static classVariableInfo_t fileDownload_t_typeInfo[] = {
	{ "int", "position", (int)(&((fileDownload_t *)0)->position), sizeof( ((fileDownload_t *)0)->position ) },
	{ "int", "length", (int)(&((fileDownload_t *)0)->length), sizeof( ((fileDownload_t *)0)->length ) },
	{ "void *", "buffer", (int)(&((fileDownload_t *)0)->buffer), sizeof( ((fileDownload_t *)0)->buffer ) },
	{ NULL, 0 }
};

static classVariableInfo_t backgroundDownload_t_typeInfo[] = {
	{ "backgroundDownload_s *", "next", (int)(&((backgroundDownload_t *)0)->next), sizeof( ((backgroundDownload_t *)0)->next ) },
	{ "dlType_t", "opcode", (int)(&((backgroundDownload_t *)0)->opcode), sizeof( ((backgroundDownload_t *)0)->opcode ) },
	{ "idFile *", "f", (int)(&((backgroundDownload_t *)0)->f), sizeof( ((backgroundDownload_t *)0)->f ) },
	{ "fileDownload_t", "file", (int)(&((backgroundDownload_t *)0)->file), sizeof( ((backgroundDownload_t *)0)->file ) },
	{ "urlDownload_t", "url", (int)(&((backgroundDownload_t *)0)->url), sizeof( ((backgroundDownload_t *)0)->url ) },
	{ "volatile bool", "completed", (int)(&((backgroundDownload_t *)0)->completed), sizeof( ((backgroundDownload_t *)0)->completed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFileList_typeInfo[] = {
	{ "idStr", "basePath", (int)(&((idFileList *)0)->basePath), sizeof( ((idFileList *)0)->basePath ) },
	{ "idStrList", "list", (int)(&((idFileList *)0)->list), sizeof( ((idFileList *)0)->list ) },
	{ NULL, 0 }
};

static classVariableInfo_t idModList_typeInfo[] = {
	{ "idStrList", "mods", (int)(&((idModList *)0)->mods), sizeof( ((idModList *)0)->mods ) },
	{ "idStrList", "descriptions", (int)(&((idModList *)0)->descriptions), sizeof( ((idModList *)0)->descriptions ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFileSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t usercmd_t_typeInfo[] = {
	{ "int", "gameFrame", (int)(&((usercmd_t *)0)->gameFrame), sizeof( ((usercmd_t *)0)->gameFrame ) },
	{ "int", "gameTime", (int)(&((usercmd_t *)0)->gameTime), sizeof( ((usercmd_t *)0)->gameTime ) },
	{ "int", "duplicateCount", (int)(&((usercmd_t *)0)->duplicateCount), sizeof( ((usercmd_t *)0)->duplicateCount ) },
	{ "byte", "buttons", (int)(&((usercmd_t *)0)->buttons), sizeof( ((usercmd_t *)0)->buttons ) },
	{ "signed char", "forwardmove", (int)(&((usercmd_t *)0)->forwardmove), sizeof( ((usercmd_t *)0)->forwardmove ) },
	{ "signed char", "rightmove", (int)(&((usercmd_t *)0)->rightmove), sizeof( ((usercmd_t *)0)->rightmove ) },
	{ "signed char", "upmove", (int)(&((usercmd_t *)0)->upmove), sizeof( ((usercmd_t *)0)->upmove ) },
	{ "short[3]", "angles", (int)(&((usercmd_t *)0)->angles), sizeof( ((usercmd_t *)0)->angles ) },
	{ "short", "mx", (int)(&((usercmd_t *)0)->mx), sizeof( ((usercmd_t *)0)->mx ) },
	{ "short", "my", (int)(&((usercmd_t *)0)->my), sizeof( ((usercmd_t *)0)->my ) },
	{ "signed char", "impulse", (int)(&((usercmd_t *)0)->impulse), sizeof( ((usercmd_t *)0)->impulse ) },
	{ "byte", "flags", (int)(&((usercmd_t *)0)->flags), sizeof( ((usercmd_t *)0)->flags ) },
	{ "int", "sequence", (int)(&((usercmd_t *)0)->sequence), sizeof( ((usercmd_t *)0)->sequence ) },
	{ NULL, 0 }
};

static classVariableInfo_t idUsercmdGen_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idDeclBase_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idDecl_typeInfo[] = {
	{ "idDeclBase *", "base", (int)(&((idDecl *)0)->base), sizeof( ((idDecl *)0)->base ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idDeclTable_typeInfo[] = {
	{ "bool", "clamp", (int)(&((idDeclTable *)0)->clamp), sizeof( ((idDeclTable *)0)->clamp ) },
	{ "bool", "snap", (int)(&((idDeclTable *)0)->snap), sizeof( ((idDeclTable *)0)->snap ) },
	{ "idList < float >", "values", (int)(&((idDeclTable *)0)->values), sizeof( ((idDeclTable *)0)->values ) },
	{ NULL, 0 }
};

static classVariableInfo_t skinMapping_t_typeInfo[] = {
	{ "const idMaterial *", "from", (int)(&((skinMapping_t *)0)->from), sizeof( ((skinMapping_t *)0)->from ) },
	{ "const idMaterial *", "to", (int)(&((skinMapping_t *)0)->to), sizeof( ((skinMapping_t *)0)->to ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclSkin_typeInfo[] = {
	{ "idList < skinMapping_t >", "mappings", (int)(&((idDeclSkin *)0)->mappings), sizeof( ((idDeclSkin *)0)->mappings ) },
	{ "idStrList", "associatedModels", (int)(&((idDeclSkin *)0)->associatedModels), sizeof( ((idDeclSkin *)0)->associatedModels ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclEntityDef_typeInfo[] = {
	{ "idDict", "dict", (int)(&((idDeclEntityDef *)0)->dict), sizeof( ((idDeclEntityDef *)0)->dict ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFXSingleAction_typeInfo[] = {
	{ "int", "type", (int)(&((idFXSingleAction *)0)->type), sizeof( ((idFXSingleAction *)0)->type ) },
	{ "int", "sibling", (int)(&((idFXSingleAction *)0)->sibling), sizeof( ((idFXSingleAction *)0)->sibling ) },
	{ "idStr", "data", (int)(&((idFXSingleAction *)0)->data), sizeof( ((idFXSingleAction *)0)->data ) },
	{ "idStr", "name", (int)(&((idFXSingleAction *)0)->name), sizeof( ((idFXSingleAction *)0)->name ) },
	{ "idStr", "fire", (int)(&((idFXSingleAction *)0)->fire), sizeof( ((idFXSingleAction *)0)->fire ) },
	{ "float", "delay", (int)(&((idFXSingleAction *)0)->delay), sizeof( ((idFXSingleAction *)0)->delay ) },
	{ "float", "duration", (int)(&((idFXSingleAction *)0)->duration), sizeof( ((idFXSingleAction *)0)->duration ) },
	{ "float", "restart", (int)(&((idFXSingleAction *)0)->restart), sizeof( ((idFXSingleAction *)0)->restart ) },
	{ "float", "size", (int)(&((idFXSingleAction *)0)->size), sizeof( ((idFXSingleAction *)0)->size ) },
	{ "float", "fadeInTime", (int)(&((idFXSingleAction *)0)->fadeInTime), sizeof( ((idFXSingleAction *)0)->fadeInTime ) },
	{ "float", "fadeOutTime", (int)(&((idFXSingleAction *)0)->fadeOutTime), sizeof( ((idFXSingleAction *)0)->fadeOutTime ) },
	{ "float", "shakeTime", (int)(&((idFXSingleAction *)0)->shakeTime), sizeof( ((idFXSingleAction *)0)->shakeTime ) },
	{ "float", "shakeAmplitude", (int)(&((idFXSingleAction *)0)->shakeAmplitude), sizeof( ((idFXSingleAction *)0)->shakeAmplitude ) },
	{ "float", "shakeDistance", (int)(&((idFXSingleAction *)0)->shakeDistance), sizeof( ((idFXSingleAction *)0)->shakeDistance ) },
	{ "float", "shakeImpulse", (int)(&((idFXSingleAction *)0)->shakeImpulse), sizeof( ((idFXSingleAction *)0)->shakeImpulse ) },
	{ "float", "lightRadius", (int)(&((idFXSingleAction *)0)->lightRadius), sizeof( ((idFXSingleAction *)0)->lightRadius ) },
	{ "float", "rotate", (int)(&((idFXSingleAction *)0)->rotate), sizeof( ((idFXSingleAction *)0)->rotate ) },
	{ "float", "random1", (int)(&((idFXSingleAction *)0)->random1), sizeof( ((idFXSingleAction *)0)->random1 ) },
	{ "float", "random2", (int)(&((idFXSingleAction *)0)->random2), sizeof( ((idFXSingleAction *)0)->random2 ) },
	{ "idVec3", "lightColor", (int)(&((idFXSingleAction *)0)->lightColor), sizeof( ((idFXSingleAction *)0)->lightColor ) },
	{ "idVec3", "offset", (int)(&((idFXSingleAction *)0)->offset), sizeof( ((idFXSingleAction *)0)->offset ) },
	{ "idMat3", "axis", (int)(&((idFXSingleAction *)0)->axis), sizeof( ((idFXSingleAction *)0)->axis ) },
	{ "bool", "soundStarted", (int)(&((idFXSingleAction *)0)->soundStarted), sizeof( ((idFXSingleAction *)0)->soundStarted ) },
	{ "bool", "shakeStarted", (int)(&((idFXSingleAction *)0)->shakeStarted), sizeof( ((idFXSingleAction *)0)->shakeStarted ) },
	{ "bool", "shakeFalloff", (int)(&((idFXSingleAction *)0)->shakeFalloff), sizeof( ((idFXSingleAction *)0)->shakeFalloff ) },
	{ "bool", "shakeIgnoreMaster", (int)(&((idFXSingleAction *)0)->shakeIgnoreMaster), sizeof( ((idFXSingleAction *)0)->shakeIgnoreMaster ) },
	{ "bool", "bindParticles", (int)(&((idFXSingleAction *)0)->bindParticles), sizeof( ((idFXSingleAction *)0)->bindParticles ) },
	{ "bool", "explicitAxis", (int)(&((idFXSingleAction *)0)->explicitAxis), sizeof( ((idFXSingleAction *)0)->explicitAxis ) },
	{ "bool", "noshadows", (int)(&((idFXSingleAction *)0)->noshadows), sizeof( ((idFXSingleAction *)0)->noshadows ) },
	{ "bool", "particleTrackVelocity", (int)(&((idFXSingleAction *)0)->particleTrackVelocity), sizeof( ((idFXSingleAction *)0)->particleTrackVelocity ) },
	{ "bool", "trackOrigin", (int)(&((idFXSingleAction *)0)->trackOrigin), sizeof( ((idFXSingleAction *)0)->trackOrigin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclFX_typeInfo[] = {
	{ "idList < idFXSingleAction >", "events", (int)(&((idDeclFX *)0)->events), sizeof( ((idDeclFX *)0)->events ) },
	{ "idStr", "joint", (int)(&((idDeclFX *)0)->joint), sizeof( ((idDeclFX *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idParticleParm_typeInfo[] = {
	{ "const idDeclTable *", "table", (int)(&((idParticleParm *)0)->table), sizeof( ((idParticleParm *)0)->table ) },
	{ "float", "from", (int)(&((idParticleParm *)0)->from), sizeof( ((idParticleParm *)0)->from ) },
	{ "float", "to", (int)(&((idParticleParm *)0)->to), sizeof( ((idParticleParm *)0)->to ) },
	{ NULL, 0 }
};

static classVariableInfo_t particleGen_t_typeInfo[] = {
	{ "const renderEntity_t *", "renderEnt", (int)(&((particleGen_t *)0)->renderEnt), sizeof( ((particleGen_t *)0)->renderEnt ) },
	{ "const renderView_t *", "renderView", (int)(&((particleGen_t *)0)->renderView), sizeof( ((particleGen_t *)0)->renderView ) },
	{ "int", "index", (int)(&((particleGen_t *)0)->index), sizeof( ((particleGen_t *)0)->index ) },
	{ "float", "frac", (int)(&((particleGen_t *)0)->frac), sizeof( ((particleGen_t *)0)->frac ) },
	{ "idRandom", "random", (int)(&((particleGen_t *)0)->random), sizeof( ((particleGen_t *)0)->random ) },
	{ "idVec3", "origin", (int)(&((particleGen_t *)0)->origin), sizeof( ((particleGen_t *)0)->origin ) },
	{ "idMat3", "axis", (int)(&((particleGen_t *)0)->axis), sizeof( ((particleGen_t *)0)->axis ) },
	{ "float", "age", (int)(&((particleGen_t *)0)->age), sizeof( ((particleGen_t *)0)->age ) },
	{ "idRandom", "originalRandom", (int)(&((particleGen_t *)0)->originalRandom), sizeof( ((particleGen_t *)0)->originalRandom ) },
	{ "float", "animationFrameFrac", (int)(&((particleGen_t *)0)->animationFrameFrac), sizeof( ((particleGen_t *)0)->animationFrameFrac ) },
	{ NULL, 0 }
};

static classVariableInfo_t idParticleStage_typeInfo[] = {
	{ "const idMaterial *", "material", (int)(&((idParticleStage *)0)->material), sizeof( ((idParticleStage *)0)->material ) },
	{ "int", "totalParticles", (int)(&((idParticleStage *)0)->totalParticles), sizeof( ((idParticleStage *)0)->totalParticles ) },
	{ "float", "cycles", (int)(&((idParticleStage *)0)->cycles), sizeof( ((idParticleStage *)0)->cycles ) },
	{ "int", "cycleMsec", (int)(&((idParticleStage *)0)->cycleMsec), sizeof( ((idParticleStage *)0)->cycleMsec ) },
	{ "float", "spawnBunching", (int)(&((idParticleStage *)0)->spawnBunching), sizeof( ((idParticleStage *)0)->spawnBunching ) },
	{ "float", "particleLife", (int)(&((idParticleStage *)0)->particleLife), sizeof( ((idParticleStage *)0)->particleLife ) },
	{ "float", "timeOffset", (int)(&((idParticleStage *)0)->timeOffset), sizeof( ((idParticleStage *)0)->timeOffset ) },
	{ "float", "deadTime", (int)(&((idParticleStage *)0)->deadTime), sizeof( ((idParticleStage *)0)->deadTime ) },
	{ "prtDistribution_t", "distributionType", (int)(&((idParticleStage *)0)->distributionType), sizeof( ((idParticleStage *)0)->distributionType ) },
	{ "float[4]", "distributionParms", (int)(&((idParticleStage *)0)->distributionParms), sizeof( ((idParticleStage *)0)->distributionParms ) },
	{ "prtDirection_t", "directionType", (int)(&((idParticleStage *)0)->directionType), sizeof( ((idParticleStage *)0)->directionType ) },
	{ "float[4]", "directionParms", (int)(&((idParticleStage *)0)->directionParms), sizeof( ((idParticleStage *)0)->directionParms ) },
	{ "idParticleParm", "speed", (int)(&((idParticleStage *)0)->speed), sizeof( ((idParticleStage *)0)->speed ) },
	{ "float", "gravity", (int)(&((idParticleStage *)0)->gravity), sizeof( ((idParticleStage *)0)->gravity ) },
	{ "bool", "worldGravity", (int)(&((idParticleStage *)0)->worldGravity), sizeof( ((idParticleStage *)0)->worldGravity ) },
	{ "bool", "randomDistribution", (int)(&((idParticleStage *)0)->randomDistribution), sizeof( ((idParticleStage *)0)->randomDistribution ) },
	{ "bool", "entityColor", (int)(&((idParticleStage *)0)->entityColor), sizeof( ((idParticleStage *)0)->entityColor ) },
	{ "prtCustomPth_t", "customPathType", (int)(&((idParticleStage *)0)->customPathType), sizeof( ((idParticleStage *)0)->customPathType ) },
	{ "float[8]", "customPathParms", (int)(&((idParticleStage *)0)->customPathParms), sizeof( ((idParticleStage *)0)->customPathParms ) },
	{ "idVec3", "offset", (int)(&((idParticleStage *)0)->offset), sizeof( ((idParticleStage *)0)->offset ) },
	{ "int", "animationFrames", (int)(&((idParticleStage *)0)->animationFrames), sizeof( ((idParticleStage *)0)->animationFrames ) },
	{ "float", "animationRate", (int)(&((idParticleStage *)0)->animationRate), sizeof( ((idParticleStage *)0)->animationRate ) },
	{ "float", "initialAngle", (int)(&((idParticleStage *)0)->initialAngle), sizeof( ((idParticleStage *)0)->initialAngle ) },
	{ "idParticleParm", "rotationSpeed", (int)(&((idParticleStage *)0)->rotationSpeed), sizeof( ((idParticleStage *)0)->rotationSpeed ) },
	{ "prtOrientation_t", "orientation", (int)(&((idParticleStage *)0)->orientation), sizeof( ((idParticleStage *)0)->orientation ) },
	{ "float[4]", "orientationParms", (int)(&((idParticleStage *)0)->orientationParms), sizeof( ((idParticleStage *)0)->orientationParms ) },
	{ "idParticleParm", "size", (int)(&((idParticleStage *)0)->size), sizeof( ((idParticleStage *)0)->size ) },
	{ "idParticleParm", "aspect", (int)(&((idParticleStage *)0)->aspect), sizeof( ((idParticleStage *)0)->aspect ) },
	{ "idVec4", "color", (int)(&((idParticleStage *)0)->color), sizeof( ((idParticleStage *)0)->color ) },
	{ "idVec4", "fadeColor", (int)(&((idParticleStage *)0)->fadeColor), sizeof( ((idParticleStage *)0)->fadeColor ) },
	{ "float", "fadeInFraction", (int)(&((idParticleStage *)0)->fadeInFraction), sizeof( ((idParticleStage *)0)->fadeInFraction ) },
	{ "float", "fadeOutFraction", (int)(&((idParticleStage *)0)->fadeOutFraction), sizeof( ((idParticleStage *)0)->fadeOutFraction ) },
	{ "float", "fadeIndexFraction", (int)(&((idParticleStage *)0)->fadeIndexFraction), sizeof( ((idParticleStage *)0)->fadeIndexFraction ) },
	{ "bool", "hidden", (int)(&((idParticleStage *)0)->hidden), sizeof( ((idParticleStage *)0)->hidden ) },
	{ "float", "boundsExpansion", (int)(&((idParticleStage *)0)->boundsExpansion), sizeof( ((idParticleStage *)0)->boundsExpansion ) },
	{ "idBounds", "bounds", (int)(&((idParticleStage *)0)->bounds), sizeof( ((idParticleStage *)0)->bounds ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclParticle_typeInfo[] = {
	{ "idList < idParticleStage * >", "stages", (int)(&((idDeclParticle *)0)->stages), sizeof( ((idDeclParticle *)0)->stages ) },
	{ "idBounds", "bounds", (int)(&((idDeclParticle *)0)->bounds), sizeof( ((idDeclParticle *)0)->bounds ) },
	{ "float", "depthHack", (int)(&((idDeclParticle *)0)->depthHack), sizeof( ((idDeclParticle *)0)->depthHack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFVector_typeInfo[] = {
	{ "idAFVector::enum_42", "type", (int)(&((idAFVector *)0)->type), sizeof( ((idAFVector *)0)->type ) },
	{ "idStr", "joint1", (int)(&((idAFVector *)0)->joint1), sizeof( ((idAFVector *)0)->joint1 ) },
	{ "idStr", "joint2", (int)(&((idAFVector *)0)->joint2), sizeof( ((idAFVector *)0)->joint2 ) },
	{ "mutable idVec3", "vec", (int)(&((idAFVector *)0)->vec), sizeof( ((idAFVector *)0)->vec ) },
	{ "bool", "negate", (int)(&((idAFVector *)0)->negate), sizeof( ((idAFVector *)0)->negate ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclAF_Body_typeInfo[] = {
	{ "idStr", "name", (int)(&((idDeclAF_Body *)0)->name), sizeof( ((idDeclAF_Body *)0)->name ) },
	{ "idStr", "jointName", (int)(&((idDeclAF_Body *)0)->jointName), sizeof( ((idDeclAF_Body *)0)->jointName ) },
	{ "declAFJointMod_t", "jointMod", (int)(&((idDeclAF_Body *)0)->jointMod), sizeof( ((idDeclAF_Body *)0)->jointMod ) },
	{ "int", "modelType", (int)(&((idDeclAF_Body *)0)->modelType), sizeof( ((idDeclAF_Body *)0)->modelType ) },
	{ "idAFVector", "v1", (int)(&((idDeclAF_Body *)0)->v1), sizeof( ((idDeclAF_Body *)0)->v1 ) },
	{ "idAFVector", "v2", (int)(&((idDeclAF_Body *)0)->v2), sizeof( ((idDeclAF_Body *)0)->v2 ) },
	{ "int", "numSides", (int)(&((idDeclAF_Body *)0)->numSides), sizeof( ((idDeclAF_Body *)0)->numSides ) },
	{ "float", "width", (int)(&((idDeclAF_Body *)0)->width), sizeof( ((idDeclAF_Body *)0)->width ) },
	{ "float", "density", (int)(&((idDeclAF_Body *)0)->density), sizeof( ((idDeclAF_Body *)0)->density ) },
	{ "idAFVector", "origin", (int)(&((idDeclAF_Body *)0)->origin), sizeof( ((idDeclAF_Body *)0)->origin ) },
	{ "idAngles", "angles", (int)(&((idDeclAF_Body *)0)->angles), sizeof( ((idDeclAF_Body *)0)->angles ) },
	{ "int", "contents", (int)(&((idDeclAF_Body *)0)->contents), sizeof( ((idDeclAF_Body *)0)->contents ) },
	{ "int", "clipMask", (int)(&((idDeclAF_Body *)0)->clipMask), sizeof( ((idDeclAF_Body *)0)->clipMask ) },
	{ "bool", "selfCollision", (int)(&((idDeclAF_Body *)0)->selfCollision), sizeof( ((idDeclAF_Body *)0)->selfCollision ) },
	{ "idMat3", "inertiaScale", (int)(&((idDeclAF_Body *)0)->inertiaScale), sizeof( ((idDeclAF_Body *)0)->inertiaScale ) },
	{ "float", "linearFriction", (int)(&((idDeclAF_Body *)0)->linearFriction), sizeof( ((idDeclAF_Body *)0)->linearFriction ) },
	{ "float", "angularFriction", (int)(&((idDeclAF_Body *)0)->angularFriction), sizeof( ((idDeclAF_Body *)0)->angularFriction ) },
	{ "float", "contactFriction", (int)(&((idDeclAF_Body *)0)->contactFriction), sizeof( ((idDeclAF_Body *)0)->contactFriction ) },
	{ "idStr", "containedJoints", (int)(&((idDeclAF_Body *)0)->containedJoints), sizeof( ((idDeclAF_Body *)0)->containedJoints ) },
	{ "idAFVector", "frictionDirection", (int)(&((idDeclAF_Body *)0)->frictionDirection), sizeof( ((idDeclAF_Body *)0)->frictionDirection ) },
	{ "idAFVector", "contactMotorDirection", (int)(&((idDeclAF_Body *)0)->contactMotorDirection), sizeof( ((idDeclAF_Body *)0)->contactMotorDirection ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclAF_Constraint_typeInfo[] = {
	{ "idStr", "name", (int)(&((idDeclAF_Constraint *)0)->name), sizeof( ((idDeclAF_Constraint *)0)->name ) },
	{ "idStr", "body1", (int)(&((idDeclAF_Constraint *)0)->body1), sizeof( ((idDeclAF_Constraint *)0)->body1 ) },
	{ "idStr", "body2", (int)(&((idDeclAF_Constraint *)0)->body2), sizeof( ((idDeclAF_Constraint *)0)->body2 ) },
	{ "declAFConstraintType_t", "type", (int)(&((idDeclAF_Constraint *)0)->type), sizeof( ((idDeclAF_Constraint *)0)->type ) },
	{ "float", "friction", (int)(&((idDeclAF_Constraint *)0)->friction), sizeof( ((idDeclAF_Constraint *)0)->friction ) },
	{ "float", "stretch", (int)(&((idDeclAF_Constraint *)0)->stretch), sizeof( ((idDeclAF_Constraint *)0)->stretch ) },
	{ "float", "compress", (int)(&((idDeclAF_Constraint *)0)->compress), sizeof( ((idDeclAF_Constraint *)0)->compress ) },
	{ "float", "damping", (int)(&((idDeclAF_Constraint *)0)->damping), sizeof( ((idDeclAF_Constraint *)0)->damping ) },
	{ "float", "restLength", (int)(&((idDeclAF_Constraint *)0)->restLength), sizeof( ((idDeclAF_Constraint *)0)->restLength ) },
	{ "float", "minLength", (int)(&((idDeclAF_Constraint *)0)->minLength), sizeof( ((idDeclAF_Constraint *)0)->minLength ) },
	{ "float", "maxLength", (int)(&((idDeclAF_Constraint *)0)->maxLength), sizeof( ((idDeclAF_Constraint *)0)->maxLength ) },
	{ "idAFVector", "anchor", (int)(&((idDeclAF_Constraint *)0)->anchor), sizeof( ((idDeclAF_Constraint *)0)->anchor ) },
	{ "idAFVector", "anchor2", (int)(&((idDeclAF_Constraint *)0)->anchor2), sizeof( ((idDeclAF_Constraint *)0)->anchor2 ) },
	{ "idAFVector[2]", "shaft", (int)(&((idDeclAF_Constraint *)0)->shaft), sizeof( ((idDeclAF_Constraint *)0)->shaft ) },
	{ "idAFVector", "axis", (int)(&((idDeclAF_Constraint *)0)->axis), sizeof( ((idDeclAF_Constraint *)0)->axis ) },
	{ "idDeclAF_Constraint::enum_43", "limit", (int)(&((idDeclAF_Constraint *)0)->limit), sizeof( ((idDeclAF_Constraint *)0)->limit ) },
	{ "idAFVector", "limitAxis", (int)(&((idDeclAF_Constraint *)0)->limitAxis), sizeof( ((idDeclAF_Constraint *)0)->limitAxis ) },
	{ "float[3]", "limitAngles", (int)(&((idDeclAF_Constraint *)0)->limitAngles), sizeof( ((idDeclAF_Constraint *)0)->limitAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclAF_typeInfo[] = {
	{ "bool", "modified", (int)(&((idDeclAF *)0)->modified), sizeof( ((idDeclAF *)0)->modified ) },
	{ "idStr", "model", (int)(&((idDeclAF *)0)->model), sizeof( ((idDeclAF *)0)->model ) },
	{ "idStr", "skin", (int)(&((idDeclAF *)0)->skin), sizeof( ((idDeclAF *)0)->skin ) },
	{ "float", "defaultLinearFriction", (int)(&((idDeclAF *)0)->defaultLinearFriction), sizeof( ((idDeclAF *)0)->defaultLinearFriction ) },
	{ "float", "defaultAngularFriction", (int)(&((idDeclAF *)0)->defaultAngularFriction), sizeof( ((idDeclAF *)0)->defaultAngularFriction ) },
	{ "float", "defaultContactFriction", (int)(&((idDeclAF *)0)->defaultContactFriction), sizeof( ((idDeclAF *)0)->defaultContactFriction ) },
	{ "float", "defaultConstraintFriction", (int)(&((idDeclAF *)0)->defaultConstraintFriction), sizeof( ((idDeclAF *)0)->defaultConstraintFriction ) },
	{ "float", "totalMass", (int)(&((idDeclAF *)0)->totalMass), sizeof( ((idDeclAF *)0)->totalMass ) },
	{ "idVec2", "suspendVelocity", (int)(&((idDeclAF *)0)->suspendVelocity), sizeof( ((idDeclAF *)0)->suspendVelocity ) },
	{ "idVec2", "suspendAcceleration", (int)(&((idDeclAF *)0)->suspendAcceleration), sizeof( ((idDeclAF *)0)->suspendAcceleration ) },
	{ "float", "noMoveTime", (int)(&((idDeclAF *)0)->noMoveTime), sizeof( ((idDeclAF *)0)->noMoveTime ) },
	{ "float", "noMoveTranslation", (int)(&((idDeclAF *)0)->noMoveTranslation), sizeof( ((idDeclAF *)0)->noMoveTranslation ) },
	{ "float", "noMoveRotation", (int)(&((idDeclAF *)0)->noMoveRotation), sizeof( ((idDeclAF *)0)->noMoveRotation ) },
	{ "float", "minMoveTime", (int)(&((idDeclAF *)0)->minMoveTime), sizeof( ((idDeclAF *)0)->minMoveTime ) },
	{ "float", "maxMoveTime", (int)(&((idDeclAF *)0)->maxMoveTime), sizeof( ((idDeclAF *)0)->maxMoveTime ) },
	{ "int", "contents", (int)(&((idDeclAF *)0)->contents), sizeof( ((idDeclAF *)0)->contents ) },
	{ "int", "clipMask", (int)(&((idDeclAF *)0)->clipMask), sizeof( ((idDeclAF *)0)->clipMask ) },
	{ "bool", "selfCollision", (int)(&((idDeclAF *)0)->selfCollision), sizeof( ((idDeclAF *)0)->selfCollision ) },
	{ "idList < idDeclAF_Body * >", "bodies", (int)(&((idDeclAF *)0)->bodies), sizeof( ((idDeclAF *)0)->bodies ) },
	{ "idList < idDeclAF_Constraint * >", "constraints", (int)(&((idDeclAF *)0)->constraints), sizeof( ((idDeclAF *)0)->constraints ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclEmail_typeInfo[] = {
	{ "idStr", "text", (int)(&((idDeclEmail *)0)->text), sizeof( ((idDeclEmail *)0)->text ) },
	{ "idStr", "subject", (int)(&((idDeclEmail *)0)->subject), sizeof( ((idDeclEmail *)0)->subject ) },
	{ "idStr", "date", (int)(&((idDeclEmail *)0)->date), sizeof( ((idDeclEmail *)0)->date ) },
	{ "idStr", "to", (int)(&((idDeclEmail *)0)->to), sizeof( ((idDeclEmail *)0)->to ) },
	{ "idStr", "from", (int)(&((idDeclEmail *)0)->from), sizeof( ((idDeclEmail *)0)->from ) },
	{ "idStr", "image", (int)(&((idDeclEmail *)0)->image), sizeof( ((idDeclEmail *)0)->image ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclVideo_typeInfo[] = {
	{ "idStr", "preview", (int)(&((idDeclVideo *)0)->preview), sizeof( ((idDeclVideo *)0)->preview ) },
	{ "idStr", "video", (int)(&((idDeclVideo *)0)->video), sizeof( ((idDeclVideo *)0)->video ) },
	{ "idStr", "videoName", (int)(&((idDeclVideo *)0)->videoName), sizeof( ((idDeclVideo *)0)->videoName ) },
	{ "idStr", "info", (int)(&((idDeclVideo *)0)->info), sizeof( ((idDeclVideo *)0)->info ) },
	{ "idStr", "audio", (int)(&((idDeclVideo *)0)->audio), sizeof( ((idDeclVideo *)0)->audio ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclAudio_typeInfo[] = {
	{ "idStr", "audio", (int)(&((idDeclAudio *)0)->audio), sizeof( ((idDeclAudio *)0)->audio ) },
	{ "idStr", "audioName", (int)(&((idDeclAudio *)0)->audioName), sizeof( ((idDeclAudio *)0)->audioName ) },
	{ "idStr", "info", (int)(&((idDeclAudio *)0)->info), sizeof( ((idDeclAudio *)0)->info ) },
	{ "idStr", "preview", (int)(&((idDeclAudio *)0)->preview), sizeof( ((idDeclAudio *)0)->preview ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclPDA_typeInfo[] = {
	{ "mutable idStrList", "videos", (int)(&((idDeclPDA *)0)->videos), sizeof( ((idDeclPDA *)0)->videos ) },
	{ "mutable idStrList", "audios", (int)(&((idDeclPDA *)0)->audios), sizeof( ((idDeclPDA *)0)->audios ) },
	{ "mutable idStrList", "emails", (int)(&((idDeclPDA *)0)->emails), sizeof( ((idDeclPDA *)0)->emails ) },
	{ "idStr", "pdaName", (int)(&((idDeclPDA *)0)->pdaName), sizeof( ((idDeclPDA *)0)->pdaName ) },
	{ "idStr", "fullName", (int)(&((idDeclPDA *)0)->fullName), sizeof( ((idDeclPDA *)0)->fullName ) },
	{ "idStr", "icon", (int)(&((idDeclPDA *)0)->icon), sizeof( ((idDeclPDA *)0)->icon ) },
	{ "idStr", "id", (int)(&((idDeclPDA *)0)->id), sizeof( ((idDeclPDA *)0)->id ) },
	{ "idStr", "post", (int)(&((idDeclPDA *)0)->post), sizeof( ((idDeclPDA *)0)->post ) },
	{ "idStr", "title", (int)(&((idDeclPDA *)0)->title), sizeof( ((idDeclPDA *)0)->title ) },
	{ "mutable idStr", "security", (int)(&((idDeclPDA *)0)->security), sizeof( ((idDeclPDA *)0)->security ) },
	{ "mutable int", "originalEmails", (int)(&((idDeclPDA *)0)->originalEmails), sizeof( ((idDeclPDA *)0)->originalEmails ) },
	{ "mutable int", "originalVideos", (int)(&((idDeclPDA *)0)->originalVideos), sizeof( ((idDeclPDA *)0)->originalVideos ) },
	{ NULL, 0 }
};

static classVariableInfo_t cinData_t_typeInfo[] = {
	{ "int", "imageWidth", (int)(&((cinData_t *)0)->imageWidth), sizeof( ((cinData_t *)0)->imageWidth ) },
	{ "int", "imageHeight", (int)(&((cinData_t *)0)->imageHeight), sizeof( ((cinData_t *)0)->imageHeight ) },
	{ "const byte *", "image", (int)(&((cinData_t *)0)->image), sizeof( ((cinData_t *)0)->image ) },
	{ "int", "status", (int)(&((cinData_t *)0)->status), sizeof( ((cinData_t *)0)->status ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCinematic_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSndWindow_typeInfo[] = {
	{ "bool", "showWaveform", (int)(&((idSndWindow *)0)->showWaveform), sizeof( ((idSndWindow *)0)->showWaveform ) },
	{ NULL, 0 }
};

static classVariableInfo_t decalInfo_t_typeInfo[] = {
	{ "int", "stayTime", (int)(&((decalInfo_t *)0)->stayTime), sizeof( ((decalInfo_t *)0)->stayTime ) },
	{ "int", "fadeTime", (int)(&((decalInfo_t *)0)->fadeTime), sizeof( ((decalInfo_t *)0)->fadeTime ) },
	{ "float[4]", "start", (int)(&((decalInfo_t *)0)->start), sizeof( ((decalInfo_t *)0)->start ) },
	{ "float[4]", "end", (int)(&((decalInfo_t *)0)->end), sizeof( ((decalInfo_t *)0)->end ) },
	{ NULL, 0 }
};

static classVariableInfo_t expOp_t_typeInfo[] = {
	{ "expOpType_t", "opType", (int)(&((expOp_t *)0)->opType), sizeof( ((expOp_t *)0)->opType ) },
	{ "int", "a", (int)(&((expOp_t *)0)->a), sizeof( ((expOp_t *)0)->a ) },
	{ "int", "b", (int)(&((expOp_t *)0)->b), sizeof( ((expOp_t *)0)->b ) },
	{ "int", "c", (int)(&((expOp_t *)0)->c), sizeof( ((expOp_t *)0)->c ) },
	{ NULL, 0 }
};

static classVariableInfo_t colorStage_t_typeInfo[] = {
	{ "int[4]", "registers", (int)(&((colorStage_t *)0)->registers), sizeof( ((colorStage_t *)0)->registers ) },
	{ NULL, 0 }
};

static classVariableInfo_t textureStage_t_typeInfo[] = {
	{ "idCinematic *", "cinematic", (int)(&((textureStage_t *)0)->cinematic), sizeof( ((textureStage_t *)0)->cinematic ) },
	{ "idImage *", "image", (int)(&((textureStage_t *)0)->image), sizeof( ((textureStage_t *)0)->image ) },
	{ "texgen_t", "texgen", (int)(&((textureStage_t *)0)->texgen), sizeof( ((textureStage_t *)0)->texgen ) },
	{ "bool", "hasMatrix", (int)(&((textureStage_t *)0)->hasMatrix), sizeof( ((textureStage_t *)0)->hasMatrix ) },
	{ "int[6]", "matrix", (int)(&((textureStage_t *)0)->matrix), sizeof( ((textureStage_t *)0)->matrix ) },
	{ "dynamicidImage_t", "dynamic", (int)(&((textureStage_t *)0)->dynamic), sizeof( ((textureStage_t *)0)->dynamic ) },
	{ "int", "width", (int)(&((textureStage_t *)0)->width), sizeof( ((textureStage_t *)0)->width ) },
	{ "int", "height", (int)(&((textureStage_t *)0)->height), sizeof( ((textureStage_t *)0)->height ) },
	{ "int", "dynamicFrameCount", (int)(&((textureStage_t *)0)->dynamicFrameCount), sizeof( ((textureStage_t *)0)->dynamicFrameCount ) },
	{ NULL, 0 }
};

static classVariableInfo_t newShaderStage_t_typeInfo[] = {
	{ "int", "vertexProgram", (int)(&((newShaderStage_t *)0)->vertexProgram), sizeof( ((newShaderStage_t *)0)->vertexProgram ) },
	{ "int", "numVertexParms", (int)(&((newShaderStage_t *)0)->numVertexParms), sizeof( ((newShaderStage_t *)0)->numVertexParms ) },
	{ "int[16]", "vertexParms", (int)(&((newShaderStage_t *)0)->vertexParms), sizeof( ((newShaderStage_t *)0)->vertexParms ) },
	{ "int", "fragmentProgram", (int)(&((newShaderStage_t *)0)->fragmentProgram), sizeof( ((newShaderStage_t *)0)->fragmentProgram ) },
	{ "int", "numFragmentProgramImages", (int)(&((newShaderStage_t *)0)->numFragmentProgramImages), sizeof( ((newShaderStage_t *)0)->numFragmentProgramImages ) },
	{ "idImage *[8]", "fragmentProgramImages", (int)(&((newShaderStage_t *)0)->fragmentProgramImages), sizeof( ((newShaderStage_t *)0)->fragmentProgramImages ) },
	{ "idMegaTexture *", "megaTexture", (int)(&((newShaderStage_t *)0)->megaTexture), sizeof( ((newShaderStage_t *)0)->megaTexture ) },
	{ NULL, 0 }
};

static classVariableInfo_t shaderStage_t_typeInfo[] = {
	{ "int", "conditionRegister", (int)(&((shaderStage_t *)0)->conditionRegister), sizeof( ((shaderStage_t *)0)->conditionRegister ) },
	{ "stageLighting_t", "lighting", (int)(&((shaderStage_t *)0)->lighting), sizeof( ((shaderStage_t *)0)->lighting ) },
	{ "int", "drawStateBits", (int)(&((shaderStage_t *)0)->drawStateBits), sizeof( ((shaderStage_t *)0)->drawStateBits ) },
	{ "colorStage_t", "color", (int)(&((shaderStage_t *)0)->color), sizeof( ((shaderStage_t *)0)->color ) },
	{ "bool", "hasAlphaTest", (int)(&((shaderStage_t *)0)->hasAlphaTest), sizeof( ((shaderStage_t *)0)->hasAlphaTest ) },
	{ "int", "alphaTestRegister", (int)(&((shaderStage_t *)0)->alphaTestRegister), sizeof( ((shaderStage_t *)0)->alphaTestRegister ) },
	{ "textureStage_t", "texture", (int)(&((shaderStage_t *)0)->texture), sizeof( ((shaderStage_t *)0)->texture ) },
	{ "stageVertexColor_t", "vertexColor", (int)(&((shaderStage_t *)0)->vertexColor), sizeof( ((shaderStage_t *)0)->vertexColor ) },
	{ "bool", "ignoreAlphaTest", (int)(&((shaderStage_t *)0)->ignoreAlphaTest), sizeof( ((shaderStage_t *)0)->ignoreAlphaTest ) },
	{ "float", "privatePolygonOffset", (int)(&((shaderStage_t *)0)->privatePolygonOffset), sizeof( ((shaderStage_t *)0)->privatePolygonOffset ) },
	{ "newShaderStage_t *", "newStage", (int)(&((shaderStage_t *)0)->newStage), sizeof( ((shaderStage_t *)0)->newStage ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMaterial_typeInfo[] = {
	{ "idStr", "desc", (int)(&((idMaterial *)0)->desc), sizeof( ((idMaterial *)0)->desc ) },
	{ "idStr", "renderBump", (int)(&((idMaterial *)0)->renderBump), sizeof( ((idMaterial *)0)->renderBump ) },
	{ "idImage *", "lightFalloffImage", (int)(&((idMaterial *)0)->lightFalloffImage), sizeof( ((idMaterial *)0)->lightFalloffImage ) },
	{ "int", "entityGui", (int)(&((idMaterial *)0)->entityGui), sizeof( ((idMaterial *)0)->entityGui ) },
	{ "mutable idUserInterface *", "gui", (int)(&((idMaterial *)0)->gui), sizeof( ((idMaterial *)0)->gui ) },
	{ "bool", "noFog", (int)(&((idMaterial *)0)->noFog), sizeof( ((idMaterial *)0)->noFog ) },
	{ "int", "spectrum", (int)(&((idMaterial *)0)->spectrum), sizeof( ((idMaterial *)0)->spectrum ) },
	{ "float", "polygonOffset", (int)(&((idMaterial *)0)->polygonOffset), sizeof( ((idMaterial *)0)->polygonOffset ) },
	{ "int", "contentFlags", (int)(&((idMaterial *)0)->contentFlags), sizeof( ((idMaterial *)0)->contentFlags ) },
	{ "int", "surfaceFlags", (int)(&((idMaterial *)0)->surfaceFlags), sizeof( ((idMaterial *)0)->surfaceFlags ) },
	{ "mutable int", "materialFlags", (int)(&((idMaterial *)0)->materialFlags), sizeof( ((idMaterial *)0)->materialFlags ) },
	{ "decalInfo_t", "decalInfo", (int)(&((idMaterial *)0)->decalInfo), sizeof( ((idMaterial *)0)->decalInfo ) },
	{ "mutable float", "sort", (int)(&((idMaterial *)0)->sort), sizeof( ((idMaterial *)0)->sort ) },
	{ "deform_t", "deform", (int)(&((idMaterial *)0)->deform), sizeof( ((idMaterial *)0)->deform ) },
	{ "int[4]", "deformRegisters", (int)(&((idMaterial *)0)->deformRegisters), sizeof( ((idMaterial *)0)->deformRegisters ) },
	{ "const idDecl *", "deformDecl", (int)(&((idMaterial *)0)->deformDecl), sizeof( ((idMaterial *)0)->deformDecl ) },
	{ "int[4]", "texGenRegisters", (int)(&((idMaterial *)0)->texGenRegisters), sizeof( ((idMaterial *)0)->texGenRegisters ) },
	{ "materialCoverage_t", "coverage", (int)(&((idMaterial *)0)->coverage), sizeof( ((idMaterial *)0)->coverage ) },
	{ "cullType_t", "cullType", (int)(&((idMaterial *)0)->cullType), sizeof( ((idMaterial *)0)->cullType ) },
	{ "bool", "shouldCreateBackSides", (int)(&((idMaterial *)0)->shouldCreateBackSides), sizeof( ((idMaterial *)0)->shouldCreateBackSides ) },
	{ "bool", "fogLight", (int)(&((idMaterial *)0)->fogLight), sizeof( ((idMaterial *)0)->fogLight ) },
	{ "bool", "blendLight", (int)(&((idMaterial *)0)->blendLight), sizeof( ((idMaterial *)0)->blendLight ) },
	{ "bool", "ambientLight", (int)(&((idMaterial *)0)->ambientLight), sizeof( ((idMaterial *)0)->ambientLight ) },
	{ "bool", "unsmoothedTangents", (int)(&((idMaterial *)0)->unsmoothedTangents), sizeof( ((idMaterial *)0)->unsmoothedTangents ) },
	{ "bool", "hasSubview", (int)(&((idMaterial *)0)->hasSubview), sizeof( ((idMaterial *)0)->hasSubview ) },
	{ "bool", "allowOverlays", (int)(&((idMaterial *)0)->allowOverlays), sizeof( ((idMaterial *)0)->allowOverlays ) },
	{ "int", "numOps", (int)(&((idMaterial *)0)->numOps), sizeof( ((idMaterial *)0)->numOps ) },
	{ "expOp_t *", "ops", (int)(&((idMaterial *)0)->ops), sizeof( ((idMaterial *)0)->ops ) },
	{ "int", "numRegisters", (int)(&((idMaterial *)0)->numRegisters), sizeof( ((idMaterial *)0)->numRegisters ) },
	{ "float *", "expressionRegisters", (int)(&((idMaterial *)0)->expressionRegisters), sizeof( ((idMaterial *)0)->expressionRegisters ) },
	{ "float *", "constantRegisters", (int)(&((idMaterial *)0)->constantRegisters), sizeof( ((idMaterial *)0)->constantRegisters ) },
	{ "int", "numStages", (int)(&((idMaterial *)0)->numStages), sizeof( ((idMaterial *)0)->numStages ) },
	{ "int", "numAmbientStages", (int)(&((idMaterial *)0)->numAmbientStages), sizeof( ((idMaterial *)0)->numAmbientStages ) },
	{ "shaderStage_t *", "stages", (int)(&((idMaterial *)0)->stages), sizeof( ((idMaterial *)0)->stages ) },
	{ "mtrParsingData_s *", "pd", (int)(&((idMaterial *)0)->pd), sizeof( ((idMaterial *)0)->pd ) },
	{ "float", "surfaceArea", (int)(&((idMaterial *)0)->surfaceArea), sizeof( ((idMaterial *)0)->surfaceArea ) },
	{ "idStr", "editorImageName", (int)(&((idMaterial *)0)->editorImageName), sizeof( ((idMaterial *)0)->editorImageName ) },
	{ "mutable idImage *", "editorImage", (int)(&((idMaterial *)0)->editorImage), sizeof( ((idMaterial *)0)->editorImage ) },
	{ "float", "editorAlpha", (int)(&((idMaterial *)0)->editorAlpha), sizeof( ((idMaterial *)0)->editorAlpha ) },
	{ "bool", "suppressInSubview", (int)(&((idMaterial *)0)->suppressInSubview), sizeof( ((idMaterial *)0)->suppressInSubview ) },
	{ "bool", "portalSky", (int)(&((idMaterial *)0)->portalSky), sizeof( ((idMaterial *)0)->portalSky ) },
	{ "int", "refCount", (int)(&((idMaterial *)0)->refCount), sizeof( ((idMaterial *)0)->refCount ) },
	{ NULL, 0 }
};

static classVariableInfo_t silEdge_t_typeInfo[] = {
	{ "glIndex_t", "p1", (int)(&((silEdge_t *)0)->p1), sizeof( ((silEdge_t *)0)->p1 ) },
	{ "glIndex_t", "p2", (int)(&((silEdge_t *)0)->p2), sizeof( ((silEdge_t *)0)->p2 ) },
	{ "glIndex_t", "v1", (int)(&((silEdge_t *)0)->v1), sizeof( ((silEdge_t *)0)->v1 ) },
	{ "glIndex_t", "v2", (int)(&((silEdge_t *)0)->v2), sizeof( ((silEdge_t *)0)->v2 ) },
	{ NULL, 0 }
};

static classVariableInfo_t dominantTri_t_typeInfo[] = {
	{ "glIndex_t", "v2", (int)(&((dominantTri_t *)0)->v2), sizeof( ((dominantTri_t *)0)->v2 ) },
	{ "glIndex_t", "v3", (int)(&((dominantTri_t *)0)->v3), sizeof( ((dominantTri_t *)0)->v3 ) },
	{ "float[3]", "normalizationScale", (int)(&((dominantTri_t *)0)->normalizationScale), sizeof( ((dominantTri_t *)0)->normalizationScale ) },
	{ NULL, 0 }
};

static classVariableInfo_t lightingCache_t_typeInfo[] = {
	{ "idVec3", "localLightVector", (int)(&((lightingCache_t *)0)->localLightVector), sizeof( ((lightingCache_t *)0)->localLightVector ) },
	{ NULL, 0 }
};

static classVariableInfo_t shadowCache_t_typeInfo[] = {
	{ "idVec4", "xyz", (int)(&((shadowCache_t *)0)->xyz), sizeof( ((shadowCache_t *)0)->xyz ) },
	{ NULL, 0 }
};

static classVariableInfo_t srfTriangles_t_typeInfo[] = {
	{ "idBounds", "bounds", (int)(&((srfTriangles_t *)0)->bounds), sizeof( ((srfTriangles_t *)0)->bounds ) },
	{ "int", "ambientViewCount", (int)(&((srfTriangles_t *)0)->ambientViewCount), sizeof( ((srfTriangles_t *)0)->ambientViewCount ) },
	{ "bool", "generateNormals", (int)(&((srfTriangles_t *)0)->generateNormals), sizeof( ((srfTriangles_t *)0)->generateNormals ) },
	{ "bool", "tangentsCalculated", (int)(&((srfTriangles_t *)0)->tangentsCalculated), sizeof( ((srfTriangles_t *)0)->tangentsCalculated ) },
	{ "bool", "facePlanesCalculated", (int)(&((srfTriangles_t *)0)->facePlanesCalculated), sizeof( ((srfTriangles_t *)0)->facePlanesCalculated ) },
	{ "bool", "perfectHull", (int)(&((srfTriangles_t *)0)->perfectHull), sizeof( ((srfTriangles_t *)0)->perfectHull ) },
	{ "bool", "deformedSurface", (int)(&((srfTriangles_t *)0)->deformedSurface), sizeof( ((srfTriangles_t *)0)->deformedSurface ) },
	{ "int", "numVerts", (int)(&((srfTriangles_t *)0)->numVerts), sizeof( ((srfTriangles_t *)0)->numVerts ) },
	{ "idDrawVert *", "verts", (int)(&((srfTriangles_t *)0)->verts), sizeof( ((srfTriangles_t *)0)->verts ) },
	{ "int", "numIndexes", (int)(&((srfTriangles_t *)0)->numIndexes), sizeof( ((srfTriangles_t *)0)->numIndexes ) },
	{ "glIndex_t *", "indexes", (int)(&((srfTriangles_t *)0)->indexes), sizeof( ((srfTriangles_t *)0)->indexes ) },
	{ "glIndex_t *", "silIndexes", (int)(&((srfTriangles_t *)0)->silIndexes), sizeof( ((srfTriangles_t *)0)->silIndexes ) },
	{ "int", "numMirroredVerts", (int)(&((srfTriangles_t *)0)->numMirroredVerts), sizeof( ((srfTriangles_t *)0)->numMirroredVerts ) },
	{ "int *", "mirroredVerts", (int)(&((srfTriangles_t *)0)->mirroredVerts), sizeof( ((srfTriangles_t *)0)->mirroredVerts ) },
	{ "int", "numDupVerts", (int)(&((srfTriangles_t *)0)->numDupVerts), sizeof( ((srfTriangles_t *)0)->numDupVerts ) },
	{ "int *", "dupVerts", (int)(&((srfTriangles_t *)0)->dupVerts), sizeof( ((srfTriangles_t *)0)->dupVerts ) },
	{ "int", "numSilEdges", (int)(&((srfTriangles_t *)0)->numSilEdges), sizeof( ((srfTriangles_t *)0)->numSilEdges ) },
	{ "silEdge_t *", "silEdges", (int)(&((srfTriangles_t *)0)->silEdges), sizeof( ((srfTriangles_t *)0)->silEdges ) },
	{ "idPlane *", "facePlanes", (int)(&((srfTriangles_t *)0)->facePlanes), sizeof( ((srfTriangles_t *)0)->facePlanes ) },
	{ "dominantTri_t *", "dominantTris", (int)(&((srfTriangles_t *)0)->dominantTris), sizeof( ((srfTriangles_t *)0)->dominantTris ) },
	{ "int", "numShadowIndexesNoFrontCaps", (int)(&((srfTriangles_t *)0)->numShadowIndexesNoFrontCaps), sizeof( ((srfTriangles_t *)0)->numShadowIndexesNoFrontCaps ) },
	{ "int", "numShadowIndexesNoCaps", (int)(&((srfTriangles_t *)0)->numShadowIndexesNoCaps), sizeof( ((srfTriangles_t *)0)->numShadowIndexesNoCaps ) },
	{ "int", "shadowCapPlaneBits", (int)(&((srfTriangles_t *)0)->shadowCapPlaneBits), sizeof( ((srfTriangles_t *)0)->shadowCapPlaneBits ) },
	{ "shadowCache_t *", "shadowVertexes", (int)(&((srfTriangles_t *)0)->shadowVertexes), sizeof( ((srfTriangles_t *)0)->shadowVertexes ) },
	{ "srfTriangles_s *", "ambientSurface", (int)(&((srfTriangles_t *)0)->ambientSurface), sizeof( ((srfTriangles_t *)0)->ambientSurface ) },
	{ "srfTriangles_s *", "nextDeferredFree", (int)(&((srfTriangles_t *)0)->nextDeferredFree), sizeof( ((srfTriangles_t *)0)->nextDeferredFree ) },
	{ "vertCache_s *", "indexCache", (int)(&((srfTriangles_t *)0)->indexCache), sizeof( ((srfTriangles_t *)0)->indexCache ) },
	{ "vertCache_s *", "ambientCache", (int)(&((srfTriangles_t *)0)->ambientCache), sizeof( ((srfTriangles_t *)0)->ambientCache ) },
	{ "vertCache_s *", "lightingCache", (int)(&((srfTriangles_t *)0)->lightingCache), sizeof( ((srfTriangles_t *)0)->lightingCache ) },
	{ "vertCache_s *", "shadowCache", (int)(&((srfTriangles_t *)0)->shadowCache), sizeof( ((srfTriangles_t *)0)->shadowCache ) },
	{ NULL, 0 }
};

static classVariableInfo_t modelSurface_t_typeInfo[] = {
	{ "int", "id", (int)(&((modelSurface_t *)0)->id), sizeof( ((modelSurface_t *)0)->id ) },
	{ "const idMaterial *", "shader", (int)(&((modelSurface_t *)0)->shader), sizeof( ((modelSurface_t *)0)->shader ) },
	{ "srfTriangles_t *", "geometry", (int)(&((modelSurface_t *)0)->geometry), sizeof( ((modelSurface_t *)0)->geometry ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMD5Joint_typeInfo[] = {
	{ "idStr", "name", (int)(&((idMD5Joint *)0)->name), sizeof( ((idMD5Joint *)0)->name ) },
	{ "const idMD5Joint *", "parent", (int)(&((idMD5Joint *)0)->parent), sizeof( ((idMD5Joint *)0)->parent ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRenderModel_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idRenderModelManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t glconfig_t_typeInfo[] = {
	{ "const char *", "renderer_string", (int)(&((glconfig_t *)0)->renderer_string), sizeof( ((glconfig_t *)0)->renderer_string ) },
	{ "const char *", "vendor_string", (int)(&((glconfig_t *)0)->vendor_string), sizeof( ((glconfig_t *)0)->vendor_string ) },
	{ "const char *", "version_string", (int)(&((glconfig_t *)0)->version_string), sizeof( ((glconfig_t *)0)->version_string ) },
	{ "const char *", "extensions_string", (int)(&((glconfig_t *)0)->extensions_string), sizeof( ((glconfig_t *)0)->extensions_string ) },
	{ "const char *", "wgl_extensions_string", (int)(&((glconfig_t *)0)->wgl_extensions_string), sizeof( ((glconfig_t *)0)->wgl_extensions_string ) },
	{ "float", "glVersion", (int)(&((glconfig_t *)0)->glVersion), sizeof( ((glconfig_t *)0)->glVersion ) },
	{ "int", "maxTextureSize", (int)(&((glconfig_t *)0)->maxTextureSize), sizeof( ((glconfig_t *)0)->maxTextureSize ) },
	{ "int", "maxTextureUnits", (int)(&((glconfig_t *)0)->maxTextureUnits), sizeof( ((glconfig_t *)0)->maxTextureUnits ) },
	{ "int", "maxTextureCoords", (int)(&((glconfig_t *)0)->maxTextureCoords), sizeof( ((glconfig_t *)0)->maxTextureCoords ) },
	{ "int", "maxTextureImageUnits", (int)(&((glconfig_t *)0)->maxTextureImageUnits), sizeof( ((glconfig_t *)0)->maxTextureImageUnits ) },
	{ "float", "maxTextureAnisotropy", (int)(&((glconfig_t *)0)->maxTextureAnisotropy), sizeof( ((glconfig_t *)0)->maxTextureAnisotropy ) },
	{ "int", "colorBits", (int)(&((glconfig_t *)0)->colorBits), sizeof( ((glconfig_t *)0)->colorBits ) },
	{ "int", "depthBits", (int)(&((glconfig_t *)0)->depthBits), sizeof( ((glconfig_t *)0)->depthBits ) },
	{ "int", "stencilBits", (int)(&((glconfig_t *)0)->stencilBits), sizeof( ((glconfig_t *)0)->stencilBits ) },
	{ "bool", "multitextureAvailable", (int)(&((glconfig_t *)0)->multitextureAvailable), sizeof( ((glconfig_t *)0)->multitextureAvailable ) },
	{ "bool", "textureCompressionAvailable", (int)(&((glconfig_t *)0)->textureCompressionAvailable), sizeof( ((glconfig_t *)0)->textureCompressionAvailable ) },
	{ "bool", "anisotropicAvailable", (int)(&((glconfig_t *)0)->anisotropicAvailable), sizeof( ((glconfig_t *)0)->anisotropicAvailable ) },
	{ "bool", "textureLODBiasAvailable", (int)(&((glconfig_t *)0)->textureLODBiasAvailable), sizeof( ((glconfig_t *)0)->textureLODBiasAvailable ) },
	{ "bool", "textureEnvAddAvailable", (int)(&((glconfig_t *)0)->textureEnvAddAvailable), sizeof( ((glconfig_t *)0)->textureEnvAddAvailable ) },
	{ "bool", "textureEnvCombineAvailable", (int)(&((glconfig_t *)0)->textureEnvCombineAvailable), sizeof( ((glconfig_t *)0)->textureEnvCombineAvailable ) },
	{ "bool", "registerCombinersAvailable", (int)(&((glconfig_t *)0)->registerCombinersAvailable), sizeof( ((glconfig_t *)0)->registerCombinersAvailable ) },
	{ "bool", "cubeMapAvailable", (int)(&((glconfig_t *)0)->cubeMapAvailable), sizeof( ((glconfig_t *)0)->cubeMapAvailable ) },
	{ "bool", "envDot3Available", (int)(&((glconfig_t *)0)->envDot3Available), sizeof( ((glconfig_t *)0)->envDot3Available ) },
	{ "bool", "texture3DAvailable", (int)(&((glconfig_t *)0)->texture3DAvailable), sizeof( ((glconfig_t *)0)->texture3DAvailable ) },
	{ "bool", "sharedTexturePaletteAvailable", (int)(&((glconfig_t *)0)->sharedTexturePaletteAvailable), sizeof( ((glconfig_t *)0)->sharedTexturePaletteAvailable ) },
	{ "bool", "ARBVertexBufferObjectAvailable", (int)(&((glconfig_t *)0)->ARBVertexBufferObjectAvailable), sizeof( ((glconfig_t *)0)->ARBVertexBufferObjectAvailable ) },
	{ "bool", "ARBVertexProgramAvailable", (int)(&((glconfig_t *)0)->ARBVertexProgramAvailable), sizeof( ((glconfig_t *)0)->ARBVertexProgramAvailable ) },
	{ "bool", "ARBFragmentProgramAvailable", (int)(&((glconfig_t *)0)->ARBFragmentProgramAvailable), sizeof( ((glconfig_t *)0)->ARBFragmentProgramAvailable ) },
	{ "bool", "twoSidedStencilAvailable", (int)(&((glconfig_t *)0)->twoSidedStencilAvailable), sizeof( ((glconfig_t *)0)->twoSidedStencilAvailable ) },
	{ "bool", "textureNonPowerOfTwoAvailable", (int)(&((glconfig_t *)0)->textureNonPowerOfTwoAvailable), sizeof( ((glconfig_t *)0)->textureNonPowerOfTwoAvailable ) },
	{ "bool", "depthBoundsTestAvailable", (int)(&((glconfig_t *)0)->depthBoundsTestAvailable), sizeof( ((glconfig_t *)0)->depthBoundsTestAvailable ) },
	{ "bool", "atiFragmentShaderAvailable", (int)(&((glconfig_t *)0)->atiFragmentShaderAvailable), sizeof( ((glconfig_t *)0)->atiFragmentShaderAvailable ) },
	{ "bool", "atiTwoSidedStencilAvailable", (int)(&((glconfig_t *)0)->atiTwoSidedStencilAvailable), sizeof( ((glconfig_t *)0)->atiTwoSidedStencilAvailable ) },
	{ "int", "vidWidth", (int)(&((glconfig_t *)0)->vidWidth), sizeof( ((glconfig_t *)0)->vidWidth ) },
	{ "int", "vidHeight", (int)(&((glconfig_t *)0)->vidHeight), sizeof( ((glconfig_t *)0)->vidHeight ) },
	{ "int", "displayFrequency", (int)(&((glconfig_t *)0)->displayFrequency), sizeof( ((glconfig_t *)0)->displayFrequency ) },
	{ "bool", "isFullscreen", (int)(&((glconfig_t *)0)->isFullscreen), sizeof( ((glconfig_t *)0)->isFullscreen ) },
	{ "bool", "allowNV30Path", (int)(&((glconfig_t *)0)->allowNV30Path), sizeof( ((glconfig_t *)0)->allowNV30Path ) },
	{ "bool", "allowNV20Path", (int)(&((glconfig_t *)0)->allowNV20Path), sizeof( ((glconfig_t *)0)->allowNV20Path ) },
	{ "bool", "allowNV10Path", (int)(&((glconfig_t *)0)->allowNV10Path), sizeof( ((glconfig_t *)0)->allowNV10Path ) },
	{ "bool", "allowR200Path", (int)(&((glconfig_t *)0)->allowR200Path), sizeof( ((glconfig_t *)0)->allowR200Path ) },
	{ "bool", "allowARB2Path", (int)(&((glconfig_t *)0)->allowARB2Path), sizeof( ((glconfig_t *)0)->allowARB2Path ) },
	{ "bool", "isInitialized", (int)(&((glconfig_t *)0)->isInitialized), sizeof( ((glconfig_t *)0)->isInitialized ) },
	{ NULL, 0 }
};

static classVariableInfo_t glyphInfo_t_typeInfo[] = {
	{ "int", "height", (int)(&((glyphInfo_t *)0)->height), sizeof( ((glyphInfo_t *)0)->height ) },
	{ "int", "top", (int)(&((glyphInfo_t *)0)->top), sizeof( ((glyphInfo_t *)0)->top ) },
	{ "int", "bottom", (int)(&((glyphInfo_t *)0)->bottom), sizeof( ((glyphInfo_t *)0)->bottom ) },
	{ "int", "pitch", (int)(&((glyphInfo_t *)0)->pitch), sizeof( ((glyphInfo_t *)0)->pitch ) },
	{ "int", "xSkip", (int)(&((glyphInfo_t *)0)->xSkip), sizeof( ((glyphInfo_t *)0)->xSkip ) },
	{ "int", "imageWidth", (int)(&((glyphInfo_t *)0)->imageWidth), sizeof( ((glyphInfo_t *)0)->imageWidth ) },
	{ "int", "imageHeight", (int)(&((glyphInfo_t *)0)->imageHeight), sizeof( ((glyphInfo_t *)0)->imageHeight ) },
	{ "float", "s", (int)(&((glyphInfo_t *)0)->s), sizeof( ((glyphInfo_t *)0)->s ) },
	{ "float", "t", (int)(&((glyphInfo_t *)0)->t), sizeof( ((glyphInfo_t *)0)->t ) },
	{ "float", "s2", (int)(&((glyphInfo_t *)0)->s2), sizeof( ((glyphInfo_t *)0)->s2 ) },
	{ "float", "t2", (int)(&((glyphInfo_t *)0)->t2), sizeof( ((glyphInfo_t *)0)->t2 ) },
	{ "const idMaterial *", "glyph", (int)(&((glyphInfo_t *)0)->glyph), sizeof( ((glyphInfo_t *)0)->glyph ) },
	{ "char[32]", "shaderName", (int)(&((glyphInfo_t *)0)->shaderName), sizeof( ((glyphInfo_t *)0)->shaderName ) },
	{ NULL, 0 }
};

static classVariableInfo_t fontInfo_t_typeInfo[] = {
	{ "glyphInfo_t[256]", "glyphs", (int)(&((fontInfo_t *)0)->glyphs), sizeof( ((fontInfo_t *)0)->glyphs ) },
	{ "float", "glyphScale", (int)(&((fontInfo_t *)0)->glyphScale), sizeof( ((fontInfo_t *)0)->glyphScale ) },
	{ "char[64]", "name", (int)(&((fontInfo_t *)0)->name), sizeof( ((fontInfo_t *)0)->name ) },
	{ NULL, 0 }
};

static classVariableInfo_t fontInfoEx_t_typeInfo[] = {
	{ "fontInfo_t", "fontInfoSmall", (int)(&((fontInfoEx_t *)0)->fontInfoSmall), sizeof( ((fontInfoEx_t *)0)->fontInfoSmall ) },
	{ "fontInfo_t", "fontInfoMedium", (int)(&((fontInfoEx_t *)0)->fontInfoMedium), sizeof( ((fontInfoEx_t *)0)->fontInfoMedium ) },
	{ "fontInfo_t", "fontInfoLarge", (int)(&((fontInfoEx_t *)0)->fontInfoLarge), sizeof( ((fontInfoEx_t *)0)->fontInfoLarge ) },
	{ "int", "maxHeight", (int)(&((fontInfoEx_t *)0)->maxHeight), sizeof( ((fontInfoEx_t *)0)->maxHeight ) },
	{ "int", "maxWidth", (int)(&((fontInfoEx_t *)0)->maxWidth), sizeof( ((fontInfoEx_t *)0)->maxWidth ) },
	{ "int", "maxHeightSmall", (int)(&((fontInfoEx_t *)0)->maxHeightSmall), sizeof( ((fontInfoEx_t *)0)->maxHeightSmall ) },
	{ "int", "maxWidthSmall", (int)(&((fontInfoEx_t *)0)->maxWidthSmall), sizeof( ((fontInfoEx_t *)0)->maxWidthSmall ) },
	{ "int", "maxHeightMedium", (int)(&((fontInfoEx_t *)0)->maxHeightMedium), sizeof( ((fontInfoEx_t *)0)->maxHeightMedium ) },
	{ "int", "maxWidthMedium", (int)(&((fontInfoEx_t *)0)->maxWidthMedium), sizeof( ((fontInfoEx_t *)0)->maxWidthMedium ) },
	{ "int", "maxHeightLarge", (int)(&((fontInfoEx_t *)0)->maxHeightLarge), sizeof( ((fontInfoEx_t *)0)->maxHeightLarge ) },
	{ "int", "maxWidthLarge", (int)(&((fontInfoEx_t *)0)->maxWidthLarge), sizeof( ((fontInfoEx_t *)0)->maxWidthLarge ) },
	{ "char[64]", "name", (int)(&((fontInfoEx_t *)0)->name), sizeof( ((fontInfoEx_t *)0)->name ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRenderSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t renderEntity_t_typeInfo[] = {
	{ "idRenderModel *", "hModel", (int)(&((renderEntity_t *)0)->hModel), sizeof( ((renderEntity_t *)0)->hModel ) },
	{ "int", "entityNum", (int)(&((renderEntity_t *)0)->entityNum), sizeof( ((renderEntity_t *)0)->entityNum ) },
	{ "int", "bodyId", (int)(&((renderEntity_t *)0)->bodyId), sizeof( ((renderEntity_t *)0)->bodyId ) },
	{ "idBounds", "bounds", (int)(&((renderEntity_t *)0)->bounds), sizeof( ((renderEntity_t *)0)->bounds ) },
	{ "deferredEntityCallback_t", "callback", (int)(&((renderEntity_t *)0)->callback), sizeof( ((renderEntity_t *)0)->callback ) },
	{ "void *", "callbackData", (int)(&((renderEntity_t *)0)->callbackData), sizeof( ((renderEntity_t *)0)->callbackData ) },
	{ "int", "suppressSurfaceInViewID", (int)(&((renderEntity_t *)0)->suppressSurfaceInViewID), sizeof( ((renderEntity_t *)0)->suppressSurfaceInViewID ) },
	{ "int", "suppressShadowInViewID", (int)(&((renderEntity_t *)0)->suppressShadowInViewID), sizeof( ((renderEntity_t *)0)->suppressShadowInViewID ) },
	{ "int", "suppressShadowInLightID", (int)(&((renderEntity_t *)0)->suppressShadowInLightID), sizeof( ((renderEntity_t *)0)->suppressShadowInLightID ) },
	{ "int", "allowSurfaceInViewID", (int)(&((renderEntity_t *)0)->allowSurfaceInViewID), sizeof( ((renderEntity_t *)0)->allowSurfaceInViewID ) },
	{ "idVec3", "origin", (int)(&((renderEntity_t *)0)->origin), sizeof( ((renderEntity_t *)0)->origin ) },
	{ "idMat3", "axis", (int)(&((renderEntity_t *)0)->axis), sizeof( ((renderEntity_t *)0)->axis ) },
	{ "const idMaterial *", "customShader", (int)(&((renderEntity_t *)0)->customShader), sizeof( ((renderEntity_t *)0)->customShader ) },
	{ "const idMaterial *", "referenceShader", (int)(&((renderEntity_t *)0)->referenceShader), sizeof( ((renderEntity_t *)0)->referenceShader ) },
	{ "const idDeclSkin *", "customSkin", (int)(&((renderEntity_t *)0)->customSkin), sizeof( ((renderEntity_t *)0)->customSkin ) },
	{ "idSoundEmitter *", "referenceSound", (int)(&((renderEntity_t *)0)->referenceSound), sizeof( ((renderEntity_t *)0)->referenceSound ) },
	{ "float[12]", "shaderParms", (int)(&((renderEntity_t *)0)->shaderParms), sizeof( ((renderEntity_t *)0)->shaderParms ) },
	{ "idUserInterface *[3]", "gui", (int)(&((renderEntity_t *)0)->gui), sizeof( ((renderEntity_t *)0)->gui ) },
	{ "renderView_s *", "remoteRenderView", (int)(&((renderEntity_t *)0)->remoteRenderView), sizeof( ((renderEntity_t *)0)->remoteRenderView ) },
	{ "int", "isFreezeFrame", (int)(&((renderEntity_t *)0)->isFreezeFrame), sizeof( ((renderEntity_t *)0)->isFreezeFrame ) },
	{ "int", "numJoints", (int)(&((renderEntity_t *)0)->numJoints), sizeof( ((renderEntity_t *)0)->numJoints ) },
	{ "idJointMat *", "joints", (int)(&((renderEntity_t *)0)->joints), sizeof( ((renderEntity_t *)0)->joints ) },
	{ "float", "modelDepthHack", (int)(&((renderEntity_t *)0)->modelDepthHack), sizeof( ((renderEntity_t *)0)->modelDepthHack ) },
	{ "bool", "noSelfShadow", (int)(&((renderEntity_t *)0)->noSelfShadow), sizeof( ((renderEntity_t *)0)->noSelfShadow ) },
	{ "bool", "noShadow", (int)(&((renderEntity_t *)0)->noShadow), sizeof( ((renderEntity_t *)0)->noShadow ) },
	{ "bool", "noDynamicInteractions", (int)(&((renderEntity_t *)0)->noDynamicInteractions), sizeof( ((renderEntity_t *)0)->noDynamicInteractions ) },
	{ "bool", "weaponDepthHack", (int)(&((renderEntity_t *)0)->weaponDepthHack), sizeof( ((renderEntity_t *)0)->weaponDepthHack ) },
	{ "int", "forceUpdate", (int)(&((renderEntity_t *)0)->forceUpdate), sizeof( ((renderEntity_t *)0)->forceUpdate ) },
	{ "int", "timeGroup", (int)(&((renderEntity_t *)0)->timeGroup), sizeof( ((renderEntity_t *)0)->timeGroup ) },
	{ "int", "xrayIndex", (int)(&((renderEntity_t *)0)->xrayIndex), sizeof( ((renderEntity_t *)0)->xrayIndex ) },
	{ NULL, 0 }
};

static classVariableInfo_t renderLight_t_typeInfo[] = {
	{ "idMat3", "axis", (int)(&((renderLight_t *)0)->axis), sizeof( ((renderLight_t *)0)->axis ) },
	{ "idVec3", "origin", (int)(&((renderLight_t *)0)->origin), sizeof( ((renderLight_t *)0)->origin ) },
	{ "int", "suppressLightInViewID", (int)(&((renderLight_t *)0)->suppressLightInViewID), sizeof( ((renderLight_t *)0)->suppressLightInViewID ) },
	{ "int", "allowLightInViewID", (int)(&((renderLight_t *)0)->allowLightInViewID), sizeof( ((renderLight_t *)0)->allowLightInViewID ) },
	{ "bool", "noShadows", (int)(&((renderLight_t *)0)->noShadows), sizeof( ((renderLight_t *)0)->noShadows ) },
	{ "bool", "noSpecular", (int)(&((renderLight_t *)0)->noSpecular), sizeof( ((renderLight_t *)0)->noSpecular ) },
	{ "bool", "pointLight", (int)(&((renderLight_t *)0)->pointLight), sizeof( ((renderLight_t *)0)->pointLight ) },
	{ "bool", "parallel", (int)(&((renderLight_t *)0)->parallel), sizeof( ((renderLight_t *)0)->parallel ) },
	{ "idVec3", "lightRadius", (int)(&((renderLight_t *)0)->lightRadius), sizeof( ((renderLight_t *)0)->lightRadius ) },
	{ "idVec3", "lightCenter", (int)(&((renderLight_t *)0)->lightCenter), sizeof( ((renderLight_t *)0)->lightCenter ) },
	{ "idVec3", "target", (int)(&((renderLight_t *)0)->target), sizeof( ((renderLight_t *)0)->target ) },
	{ "idVec3", "right", (int)(&((renderLight_t *)0)->right), sizeof( ((renderLight_t *)0)->right ) },
	{ "idVec3", "up", (int)(&((renderLight_t *)0)->up), sizeof( ((renderLight_t *)0)->up ) },
	{ "idVec3", "start", (int)(&((renderLight_t *)0)->start), sizeof( ((renderLight_t *)0)->start ) },
	{ "idVec3", "end", (int)(&((renderLight_t *)0)->end), sizeof( ((renderLight_t *)0)->end ) },
	{ "idRenderModel *", "prelightModel", (int)(&((renderLight_t *)0)->prelightModel), sizeof( ((renderLight_t *)0)->prelightModel ) },
	{ "int", "lightId", (int)(&((renderLight_t *)0)->lightId), sizeof( ((renderLight_t *)0)->lightId ) },
	{ "const idMaterial *", "shader", (int)(&((renderLight_t *)0)->shader), sizeof( ((renderLight_t *)0)->shader ) },
	{ "float[12]", "shaderParms", (int)(&((renderLight_t *)0)->shaderParms), sizeof( ((renderLight_t *)0)->shaderParms ) },
	{ "idSoundEmitter *", "referenceSound", (int)(&((renderLight_t *)0)->referenceSound), sizeof( ((renderLight_t *)0)->referenceSound ) },
	{ NULL, 0 }
};

static classVariableInfo_t renderView_t_typeInfo[] = {
	{ "int", "viewID", (int)(&((renderView_t *)0)->viewID), sizeof( ((renderView_t *)0)->viewID ) },
	{ "int", "x", (int)(&((renderView_t *)0)->x), sizeof( ((renderView_t *)0)->x ) },
	{ "int", "y", (int)(&((renderView_t *)0)->y), sizeof( ((renderView_t *)0)->y ) },
	{ "int", "width", (int)(&((renderView_t *)0)->width), sizeof( ((renderView_t *)0)->width ) },
	{ "int", "height", (int)(&((renderView_t *)0)->height), sizeof( ((renderView_t *)0)->height ) },
	{ "float", "fov_x", (int)(&((renderView_t *)0)->fov_x), sizeof( ((renderView_t *)0)->fov_x ) },
	{ "float", "fov_y", (int)(&((renderView_t *)0)->fov_y), sizeof( ((renderView_t *)0)->fov_y ) },
	{ "idVec3", "vieworg", (int)(&((renderView_t *)0)->vieworg), sizeof( ((renderView_t *)0)->vieworg ) },
	{ "idMat3", "viewaxis", (int)(&((renderView_t *)0)->viewaxis), sizeof( ((renderView_t *)0)->viewaxis ) },
	{ "bool", "cramZNear", (int)(&((renderView_t *)0)->cramZNear), sizeof( ((renderView_t *)0)->cramZNear ) },
	{ "bool", "forceUpdate", (int)(&((renderView_t *)0)->forceUpdate), sizeof( ((renderView_t *)0)->forceUpdate ) },
	{ "int", "time", (int)(&((renderView_t *)0)->time), sizeof( ((renderView_t *)0)->time ) },
	{ "float[12]", "shaderParms", (int)(&((renderView_t *)0)->shaderParms), sizeof( ((renderView_t *)0)->shaderParms ) },
	{ "const idMaterial *", "globalMaterial", (int)(&((renderView_t *)0)->globalMaterial), sizeof( ((renderView_t *)0)->globalMaterial ) },
	{ NULL, 0 }
};

static classVariableInfo_t exitPortal_t_typeInfo[] = {
	{ "int[2]", "areas", (int)(&((exitPortal_t *)0)->areas), sizeof( ((exitPortal_t *)0)->areas ) },
	{ "const idWinding *", "w", (int)(&((exitPortal_t *)0)->w), sizeof( ((exitPortal_t *)0)->w ) },
	{ "int", "blockingBits", (int)(&((exitPortal_t *)0)->blockingBits), sizeof( ((exitPortal_t *)0)->blockingBits ) },
	{ "qhandle_t", "portalHandle", (int)(&((exitPortal_t *)0)->portalHandle), sizeof( ((exitPortal_t *)0)->portalHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t guiPoint_t_typeInfo[] = {
	{ "float", "x", (int)(&((guiPoint_t *)0)->x), sizeof( ((guiPoint_t *)0)->x ) },
	{ "float", "y", (int)(&((guiPoint_t *)0)->y), sizeof( ((guiPoint_t *)0)->y ) },
	{ "int", "guiId", (int)(&((guiPoint_t *)0)->guiId), sizeof( ((guiPoint_t *)0)->guiId ) },
	{ NULL, 0 }
};

static classVariableInfo_t modelTrace_t_typeInfo[] = {
	{ "float", "fraction", (int)(&((modelTrace_t *)0)->fraction), sizeof( ((modelTrace_t *)0)->fraction ) },
	{ "idVec3", "point", (int)(&((modelTrace_t *)0)->point), sizeof( ((modelTrace_t *)0)->point ) },
	{ "idVec3", "normal", (int)(&((modelTrace_t *)0)->normal), sizeof( ((modelTrace_t *)0)->normal ) },
	{ "const idMaterial *", "material", (int)(&((modelTrace_t *)0)->material), sizeof( ((modelTrace_t *)0)->material ) },
	{ "const renderEntity_t *", "entity", (int)(&((modelTrace_t *)0)->entity), sizeof( ((modelTrace_t *)0)->entity ) },
	{ "int", "jointNumber", (int)(&((modelTrace_t *)0)->jointNumber), sizeof( ((modelTrace_t *)0)->jointNumber ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRenderWorld_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t soundShaderParms_t_typeInfo[] = {
	{ "float", "minDistance", (int)(&((soundShaderParms_t *)0)->minDistance), sizeof( ((soundShaderParms_t *)0)->minDistance ) },
	{ "float", "maxDistance", (int)(&((soundShaderParms_t *)0)->maxDistance), sizeof( ((soundShaderParms_t *)0)->maxDistance ) },
	{ "float", "volume", (int)(&((soundShaderParms_t *)0)->volume), sizeof( ((soundShaderParms_t *)0)->volume ) },
	{ "float", "shakes", (int)(&((soundShaderParms_t *)0)->shakes), sizeof( ((soundShaderParms_t *)0)->shakes ) },
	{ "int", "soundShaderFlags", (int)(&((soundShaderParms_t *)0)->soundShaderFlags), sizeof( ((soundShaderParms_t *)0)->soundShaderFlags ) },
	{ "int", "soundClass", (int)(&((soundShaderParms_t *)0)->soundClass), sizeof( ((soundShaderParms_t *)0)->soundClass ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSoundShader_typeInfo[] = {
	{ "soundShaderParms_t", "parms", (int)(&((idSoundShader *)0)->parms), sizeof( ((idSoundShader *)0)->parms ) },
	{ "bool", "onDemand", (int)(&((idSoundShader *)0)->onDemand), sizeof( ((idSoundShader *)0)->onDemand ) },
	{ "int", "speakerMask", (int)(&((idSoundShader *)0)->speakerMask), sizeof( ((idSoundShader *)0)->speakerMask ) },
	{ "const idSoundShader *", "altSound", (int)(&((idSoundShader *)0)->altSound), sizeof( ((idSoundShader *)0)->altSound ) },
	{ "idStr", "desc", (int)(&((idSoundShader *)0)->desc), sizeof( ((idSoundShader *)0)->desc ) },
	{ "bool", "errorDuringParse", (int)(&((idSoundShader *)0)->errorDuringParse), sizeof( ((idSoundShader *)0)->errorDuringParse ) },
	{ "float", "leadinVolume", (int)(&((idSoundShader *)0)->leadinVolume), sizeof( ((idSoundShader *)0)->leadinVolume ) },
	{ "idSoundSample *[32]", "leadins", (int)(&((idSoundShader *)0)->leadins), sizeof( ((idSoundShader *)0)->leadins ) },
	{ "int", "numLeadins", (int)(&((idSoundShader *)0)->numLeadins), sizeof( ((idSoundShader *)0)->numLeadins ) },
	{ "idSoundSample *[32]", "entries", (int)(&((idSoundShader *)0)->entries), sizeof( ((idSoundShader *)0)->entries ) },
	{ "int", "numEntries", (int)(&((idSoundShader *)0)->numEntries), sizeof( ((idSoundShader *)0)->numEntries ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSoundEmitter_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSoundWorld_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t soundDecoderInfo_t_typeInfo[] = {
	{ "idStr", "name", (int)(&((soundDecoderInfo_t *)0)->name), sizeof( ((soundDecoderInfo_t *)0)->name ) },
	{ "idStr", "format", (int)(&((soundDecoderInfo_t *)0)->format), sizeof( ((soundDecoderInfo_t *)0)->format ) },
	{ "int", "numChannels", (int)(&((soundDecoderInfo_t *)0)->numChannels), sizeof( ((soundDecoderInfo_t *)0)->numChannels ) },
	{ "int", "numSamplesPerSecond", (int)(&((soundDecoderInfo_t *)0)->numSamplesPerSecond), sizeof( ((soundDecoderInfo_t *)0)->numSamplesPerSecond ) },
	{ "int", "num44kHzSamples", (int)(&((soundDecoderInfo_t *)0)->num44kHzSamples), sizeof( ((soundDecoderInfo_t *)0)->num44kHzSamples ) },
	{ "int", "numBytes", (int)(&((soundDecoderInfo_t *)0)->numBytes), sizeof( ((soundDecoderInfo_t *)0)->numBytes ) },
	{ "bool", "looping", (int)(&((soundDecoderInfo_t *)0)->looping), sizeof( ((soundDecoderInfo_t *)0)->looping ) },
	{ "float", "lastVolume", (int)(&((soundDecoderInfo_t *)0)->lastVolume), sizeof( ((soundDecoderInfo_t *)0)->lastVolume ) },
	{ "int", "start44kHzTime", (int)(&((soundDecoderInfo_t *)0)->start44kHzTime), sizeof( ((soundDecoderInfo_t *)0)->start44kHzTime ) },
	{ "int", "current44kHzTime", (int)(&((soundDecoderInfo_t *)0)->current44kHzTime), sizeof( ((soundDecoderInfo_t *)0)->current44kHzTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSoundSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idNetworkSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idListGUI_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idUserInterface_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idUserInterfaceManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t contactInfo_t_typeInfo[] = {
	{ "contactType_t", "type", (int)(&((contactInfo_t *)0)->type), sizeof( ((contactInfo_t *)0)->type ) },
	{ "idVec3", "point", (int)(&((contactInfo_t *)0)->point), sizeof( ((contactInfo_t *)0)->point ) },
	{ "idVec3", "normal", (int)(&((contactInfo_t *)0)->normal), sizeof( ((contactInfo_t *)0)->normal ) },
	{ "float", "dist", (int)(&((contactInfo_t *)0)->dist), sizeof( ((contactInfo_t *)0)->dist ) },
	{ "int", "contents", (int)(&((contactInfo_t *)0)->contents), sizeof( ((contactInfo_t *)0)->contents ) },
	{ "const idMaterial *", "material", (int)(&((contactInfo_t *)0)->material), sizeof( ((contactInfo_t *)0)->material ) },
	{ "int", "modelFeature", (int)(&((contactInfo_t *)0)->modelFeature), sizeof( ((contactInfo_t *)0)->modelFeature ) },
	{ "int", "trmFeature", (int)(&((contactInfo_t *)0)->trmFeature), sizeof( ((contactInfo_t *)0)->trmFeature ) },
	{ "int", "entityNum", (int)(&((contactInfo_t *)0)->entityNum), sizeof( ((contactInfo_t *)0)->entityNum ) },
	{ "int", "id", (int)(&((contactInfo_t *)0)->id), sizeof( ((contactInfo_t *)0)->id ) },
	{ NULL, 0 }
};

static classVariableInfo_t trace_t_typeInfo[] = {
	{ "float", "fraction", (int)(&((trace_t *)0)->fraction), sizeof( ((trace_t *)0)->fraction ) },
	{ "idVec3", "endpos", (int)(&((trace_t *)0)->endpos), sizeof( ((trace_t *)0)->endpos ) },
	{ "idMat3", "endAxis", (int)(&((trace_t *)0)->endAxis), sizeof( ((trace_t *)0)->endAxis ) },
	{ "contactInfo_t", "c", (int)(&((trace_t *)0)->c), sizeof( ((trace_t *)0)->c ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCollisionModelManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_typeInfo[] = {
	{ "int", "travelType", (int)(&((idReachability *)0)->travelType), sizeof( ((idReachability *)0)->travelType ) },
	{ "short", "toAreaNum", (int)(&((idReachability *)0)->toAreaNum), sizeof( ((idReachability *)0)->toAreaNum ) },
	{ "short", "fromAreaNum", (int)(&((idReachability *)0)->fromAreaNum), sizeof( ((idReachability *)0)->fromAreaNum ) },
	{ "idVec3", "start", (int)(&((idReachability *)0)->start), sizeof( ((idReachability *)0)->start ) },
	{ "idVec3", "end", (int)(&((idReachability *)0)->end), sizeof( ((idReachability *)0)->end ) },
	{ "int", "edgeNum", (int)(&((idReachability *)0)->edgeNum), sizeof( ((idReachability *)0)->edgeNum ) },
	{ "unsigned short", "travelTime", (int)(&((idReachability *)0)->travelTime), sizeof( ((idReachability *)0)->travelTime ) },
	{ "byte", "number", (int)(&((idReachability *)0)->number), sizeof( ((idReachability *)0)->number ) },
	{ "byte", "disableCount", (int)(&((idReachability *)0)->disableCount), sizeof( ((idReachability *)0)->disableCount ) },
	{ "idReachability *", "next", (int)(&((idReachability *)0)->next), sizeof( ((idReachability *)0)->next ) },
	{ "idReachability *", "rev_next", (int)(&((idReachability *)0)->rev_next), sizeof( ((idReachability *)0)->rev_next ) },
	{ "unsigned short *", "areaTravelTimes", (int)(&((idReachability *)0)->areaTravelTimes), sizeof( ((idReachability *)0)->areaTravelTimes ) },
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Walk_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_BarrierJump_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_WaterJump_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_WalkOffLedge_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Swim_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Fly_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Special_typeInfo[] = {
	{ "idDict", "dict", (int)(&((idReachability_Special *)0)->dict), sizeof( ((idReachability_Special *)0)->dict ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasEdge_t_typeInfo[] = {
	{ "int[2]", "vertexNum", (int)(&((aasEdge_t *)0)->vertexNum), sizeof( ((aasEdge_t *)0)->vertexNum ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasFace_t_typeInfo[] = {
	{ "unsigned short", "planeNum", (int)(&((aasFace_t *)0)->planeNum), sizeof( ((aasFace_t *)0)->planeNum ) },
	{ "unsigned short", "flags", (int)(&((aasFace_t *)0)->flags), sizeof( ((aasFace_t *)0)->flags ) },
	{ "int", "numEdges", (int)(&((aasFace_t *)0)->numEdges), sizeof( ((aasFace_t *)0)->numEdges ) },
	{ "int", "firstEdge", (int)(&((aasFace_t *)0)->firstEdge), sizeof( ((aasFace_t *)0)->firstEdge ) },
	{ "short[2]", "areas", (int)(&((aasFace_t *)0)->areas), sizeof( ((aasFace_t *)0)->areas ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasArea_t_typeInfo[] = {
	{ "int", "numFaces", (int)(&((aasArea_t *)0)->numFaces), sizeof( ((aasArea_t *)0)->numFaces ) },
	{ "int", "firstFace", (int)(&((aasArea_t *)0)->firstFace), sizeof( ((aasArea_t *)0)->firstFace ) },
	{ "idBounds", "bounds", (int)(&((aasArea_t *)0)->bounds), sizeof( ((aasArea_t *)0)->bounds ) },
	{ "idVec3", "center", (int)(&((aasArea_t *)0)->center), sizeof( ((aasArea_t *)0)->center ) },
	{ "unsigned short", "flags", (int)(&((aasArea_t *)0)->flags), sizeof( ((aasArea_t *)0)->flags ) },
	{ "unsigned short", "contents", (int)(&((aasArea_t *)0)->contents), sizeof( ((aasArea_t *)0)->contents ) },
	{ "short", "cluster", (int)(&((aasArea_t *)0)->cluster), sizeof( ((aasArea_t *)0)->cluster ) },
	{ "short", "clusterAreaNum", (int)(&((aasArea_t *)0)->clusterAreaNum), sizeof( ((aasArea_t *)0)->clusterAreaNum ) },
	{ "int", "travelFlags", (int)(&((aasArea_t *)0)->travelFlags), sizeof( ((aasArea_t *)0)->travelFlags ) },
	{ "idReachability *", "reach", (int)(&((aasArea_t *)0)->reach), sizeof( ((aasArea_t *)0)->reach ) },
	{ "idReachability *", "rev_reach", (int)(&((aasArea_t *)0)->rev_reach), sizeof( ((aasArea_t *)0)->rev_reach ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasNode_t_typeInfo[] = {
	{ "unsigned short", "planeNum", (int)(&((aasNode_t *)0)->planeNum), sizeof( ((aasNode_t *)0)->planeNum ) },
	{ "int[2]", "children", (int)(&((aasNode_t *)0)->children), sizeof( ((aasNode_t *)0)->children ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasPortal_t_typeInfo[] = {
	{ "short", "areaNum", (int)(&((aasPortal_t *)0)->areaNum), sizeof( ((aasPortal_t *)0)->areaNum ) },
	{ "short[2]", "clusters", (int)(&((aasPortal_t *)0)->clusters), sizeof( ((aasPortal_t *)0)->clusters ) },
	{ "short[2]", "clusterAreaNum", (int)(&((aasPortal_t *)0)->clusterAreaNum), sizeof( ((aasPortal_t *)0)->clusterAreaNum ) },
	{ "unsigned short", "maxAreaTravelTime", (int)(&((aasPortal_t *)0)->maxAreaTravelTime), sizeof( ((aasPortal_t *)0)->maxAreaTravelTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasCluster_t_typeInfo[] = {
	{ "int", "numAreas", (int)(&((aasCluster_t *)0)->numAreas), sizeof( ((aasCluster_t *)0)->numAreas ) },
	{ "int", "numReachableAreas", (int)(&((aasCluster_t *)0)->numReachableAreas), sizeof( ((aasCluster_t *)0)->numReachableAreas ) },
	{ "int", "numPortals", (int)(&((aasCluster_t *)0)->numPortals), sizeof( ((aasCluster_t *)0)->numPortals ) },
	{ "int", "firstPortal", (int)(&((aasCluster_t *)0)->firstPortal), sizeof( ((aasCluster_t *)0)->firstPortal ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasTrace_t_typeInfo[] = {
	{ "int", "flags", (int)(&((aasTrace_t *)0)->flags), sizeof( ((aasTrace_t *)0)->flags ) },
	{ "int", "travelFlags", (int)(&((aasTrace_t *)0)->travelFlags), sizeof( ((aasTrace_t *)0)->travelFlags ) },
	{ "int", "maxAreas", (int)(&((aasTrace_t *)0)->maxAreas), sizeof( ((aasTrace_t *)0)->maxAreas ) },
	{ "int", "getOutOfSolid", (int)(&((aasTrace_t *)0)->getOutOfSolid), sizeof( ((aasTrace_t *)0)->getOutOfSolid ) },
	{ "float", "fraction", (int)(&((aasTrace_t *)0)->fraction), sizeof( ((aasTrace_t *)0)->fraction ) },
	{ "idVec3", "endpos", (int)(&((aasTrace_t *)0)->endpos), sizeof( ((aasTrace_t *)0)->endpos ) },
	{ "int", "planeNum", (int)(&((aasTrace_t *)0)->planeNum), sizeof( ((aasTrace_t *)0)->planeNum ) },
	{ "int", "lastAreaNum", (int)(&((aasTrace_t *)0)->lastAreaNum), sizeof( ((aasTrace_t *)0)->lastAreaNum ) },
	{ "int", "blockingAreaNum", (int)(&((aasTrace_t *)0)->blockingAreaNum), sizeof( ((aasTrace_t *)0)->blockingAreaNum ) },
	{ "int", "numAreas", (int)(&((aasTrace_t *)0)->numAreas), sizeof( ((aasTrace_t *)0)->numAreas ) },
	{ "int *", "areas", (int)(&((aasTrace_t *)0)->areas), sizeof( ((aasTrace_t *)0)->areas ) },
	{ "idVec3 *", "points", (int)(&((aasTrace_t *)0)->points), sizeof( ((aasTrace_t *)0)->points ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASSettings_typeInfo[] = {
	{ "int", "numBoundingBoxes", (int)(&((idAASSettings *)0)->numBoundingBoxes), sizeof( ((idAASSettings *)0)->numBoundingBoxes ) },
	{ "idBounds[4]", "boundingBoxes", (int)(&((idAASSettings *)0)->boundingBoxes), sizeof( ((idAASSettings *)0)->boundingBoxes ) },
	{ "bool", "usePatches", (int)(&((idAASSettings *)0)->usePatches), sizeof( ((idAASSettings *)0)->usePatches ) },
	{ "bool", "writeBrushMap", (int)(&((idAASSettings *)0)->writeBrushMap), sizeof( ((idAASSettings *)0)->writeBrushMap ) },
	{ "bool", "playerFlood", (int)(&((idAASSettings *)0)->playerFlood), sizeof( ((idAASSettings *)0)->playerFlood ) },
	{ "bool", "noOptimize", (int)(&((idAASSettings *)0)->noOptimize), sizeof( ((idAASSettings *)0)->noOptimize ) },
	{ "bool", "allowSwimReachabilities", (int)(&((idAASSettings *)0)->allowSwimReachabilities), sizeof( ((idAASSettings *)0)->allowSwimReachabilities ) },
	{ "bool", "allowFlyReachabilities", (int)(&((idAASSettings *)0)->allowFlyReachabilities), sizeof( ((idAASSettings *)0)->allowFlyReachabilities ) },
	{ "idStr", "fileExtension", (int)(&((idAASSettings *)0)->fileExtension), sizeof( ((idAASSettings *)0)->fileExtension ) },
	{ "idVec3", "gravity", (int)(&((idAASSettings *)0)->gravity), sizeof( ((idAASSettings *)0)->gravity ) },
	{ "idVec3", "gravityDir", (int)(&((idAASSettings *)0)->gravityDir), sizeof( ((idAASSettings *)0)->gravityDir ) },
	{ "idVec3", "invGravityDir", (int)(&((idAASSettings *)0)->invGravityDir), sizeof( ((idAASSettings *)0)->invGravityDir ) },
	{ "float", "gravityValue", (int)(&((idAASSettings *)0)->gravityValue), sizeof( ((idAASSettings *)0)->gravityValue ) },
	{ "float", "maxStepHeight", (int)(&((idAASSettings *)0)->maxStepHeight), sizeof( ((idAASSettings *)0)->maxStepHeight ) },
	{ "float", "maxBarrierHeight", (int)(&((idAASSettings *)0)->maxBarrierHeight), sizeof( ((idAASSettings *)0)->maxBarrierHeight ) },
	{ "float", "maxWaterJumpHeight", (int)(&((idAASSettings *)0)->maxWaterJumpHeight), sizeof( ((idAASSettings *)0)->maxWaterJumpHeight ) },
	{ "float", "maxFallHeight", (int)(&((idAASSettings *)0)->maxFallHeight), sizeof( ((idAASSettings *)0)->maxFallHeight ) },
	{ "float", "minFloorCos", (int)(&((idAASSettings *)0)->minFloorCos), sizeof( ((idAASSettings *)0)->minFloorCos ) },
	{ "int", "tt_barrierJump", (int)(&((idAASSettings *)0)->tt_barrierJump), sizeof( ((idAASSettings *)0)->tt_barrierJump ) },
	{ "int", "tt_startCrouching", (int)(&((idAASSettings *)0)->tt_startCrouching), sizeof( ((idAASSettings *)0)->tt_startCrouching ) },
	{ "int", "tt_waterJump", (int)(&((idAASSettings *)0)->tt_waterJump), sizeof( ((idAASSettings *)0)->tt_waterJump ) },
	{ "int", "tt_startWalkOffLedge", (int)(&((idAASSettings *)0)->tt_startWalkOffLedge), sizeof( ((idAASSettings *)0)->tt_startWalkOffLedge ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFile_typeInfo[] = {
	{ "idStr", "name", (int)(&((idAASFile *)0)->name), sizeof( ((idAASFile *)0)->name ) },
	{ "unsigned int", "crc", (int)(&((idAASFile *)0)->crc), sizeof( ((idAASFile *)0)->crc ) },
	{ "idPlaneSet", "planeList", (int)(&((idAASFile *)0)->planeList), sizeof( ((idAASFile *)0)->planeList ) },
	{ "idList < aasVertex_t >", "vertices", (int)(&((idAASFile *)0)->vertices), sizeof( ((idAASFile *)0)->vertices ) },
	{ "idList < aasEdge_t >", "edges", (int)(&((idAASFile *)0)->edges), sizeof( ((idAASFile *)0)->edges ) },
	{ "idList < aasIndex_t >", "edgeIndex", (int)(&((idAASFile *)0)->edgeIndex), sizeof( ((idAASFile *)0)->edgeIndex ) },
	{ "idList < aasFace_t >", "faces", (int)(&((idAASFile *)0)->faces), sizeof( ((idAASFile *)0)->faces ) },
	{ "idList < aasIndex_t >", "faceIndex", (int)(&((idAASFile *)0)->faceIndex), sizeof( ((idAASFile *)0)->faceIndex ) },
	{ "idList < aasArea_t >", "areas", (int)(&((idAASFile *)0)->areas), sizeof( ((idAASFile *)0)->areas ) },
	{ "idList < aasNode_t >", "nodes", (int)(&((idAASFile *)0)->nodes), sizeof( ((idAASFile *)0)->nodes ) },
	{ "idList < aasPortal_t >", "portals", (int)(&((idAASFile *)0)->portals), sizeof( ((idAASFile *)0)->portals ) },
	{ "idList < aasIndex_t >", "portalIndex", (int)(&((idAASFile *)0)->portalIndex), sizeof( ((idAASFile *)0)->portalIndex ) },
	{ "idList < aasCluster_t >", "clusters", (int)(&((idAASFile *)0)->clusters), sizeof( ((idAASFile *)0)->clusters ) },
	{ "idAASSettings", "settings", (int)(&((idAASFile *)0)->settings), sizeof( ((idAASFile *)0)->settings ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFileManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t gameReturn_t_typeInfo[] = {
	{ "char[1024]", "sessionCommand", (int)(&((gameReturn_t *)0)->sessionCommand), sizeof( ((gameReturn_t *)0)->sessionCommand ) },
	{ "int", "consistencyHash", (int)(&((gameReturn_t *)0)->consistencyHash), sizeof( ((gameReturn_t *)0)->consistencyHash ) },
	{ "int", "health", (int)(&((gameReturn_t *)0)->health), sizeof( ((gameReturn_t *)0)->health ) },
	{ "int", "heartRate", (int)(&((gameReturn_t *)0)->heartRate), sizeof( ((gameReturn_t *)0)->heartRate ) },
	{ "int", "stamina", (int)(&((gameReturn_t *)0)->stamina), sizeof( ((gameReturn_t *)0)->stamina ) },
	{ "int", "combat", (int)(&((gameReturn_t *)0)->combat), sizeof( ((gameReturn_t *)0)->combat ) },
	{ "bool", "syncNextGameFrame", (int)(&((gameReturn_t *)0)->syncNextGameFrame), sizeof( ((gameReturn_t *)0)->syncNextGameFrame ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGame_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t refSound_t_typeInfo[] = {
	{ "idSoundEmitter *", "referenceSound", (int)(&((refSound_t *)0)->referenceSound), sizeof( ((refSound_t *)0)->referenceSound ) },
	{ "idVec3", "origin", (int)(&((refSound_t *)0)->origin), sizeof( ((refSound_t *)0)->origin ) },
	{ "int", "listenerId", (int)(&((refSound_t *)0)->listenerId), sizeof( ((refSound_t *)0)->listenerId ) },
	{ "const idSoundShader *", "shader", (int)(&((refSound_t *)0)->shader), sizeof( ((refSound_t *)0)->shader ) },
	{ "float", "diversity", (int)(&((refSound_t *)0)->diversity), sizeof( ((refSound_t *)0)->diversity ) },
	{ "bool", "waitfortrigger", (int)(&((refSound_t *)0)->waitfortrigger), sizeof( ((refSound_t *)0)->waitfortrigger ) },
	{ "soundShaderParms_t", "parms", (int)(&((refSound_t *)0)->parms), sizeof( ((refSound_t *)0)->parms ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGameEdit_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t gameImport_t_typeInfo[] = {
	{ "int", "version", (int)(&((gameImport_t *)0)->version), sizeof( ((gameImport_t *)0)->version ) },
	{ "idSys *", "sys", (int)(&((gameImport_t *)0)->sys), sizeof( ((gameImport_t *)0)->sys ) },
	{ "idCommon *", "common", (int)(&((gameImport_t *)0)->common), sizeof( ((gameImport_t *)0)->common ) },
	{ "idCmdSystem *", "cmdSystem", (int)(&((gameImport_t *)0)->cmdSystem), sizeof( ((gameImport_t *)0)->cmdSystem ) },
	{ "idCVarSystem *", "cvarSystem", (int)(&((gameImport_t *)0)->cvarSystem), sizeof( ((gameImport_t *)0)->cvarSystem ) },
	{ "idFileSystem *", "fileSystem", (int)(&((gameImport_t *)0)->fileSystem), sizeof( ((gameImport_t *)0)->fileSystem ) },
	{ "idNetworkSystem *", "networkSystem", (int)(&((gameImport_t *)0)->networkSystem), sizeof( ((gameImport_t *)0)->networkSystem ) },
	{ "idRenderSystem *", "renderSystem", (int)(&((gameImport_t *)0)->renderSystem), sizeof( ((gameImport_t *)0)->renderSystem ) },
	{ "idSoundSystem *", "soundSystem", (int)(&((gameImport_t *)0)->soundSystem), sizeof( ((gameImport_t *)0)->soundSystem ) },
	{ "idRenderModelManager *", "renderModelManager", (int)(&((gameImport_t *)0)->renderModelManager), sizeof( ((gameImport_t *)0)->renderModelManager ) },
	{ "idUserInterfaceManager *", "uiManager", (int)(&((gameImport_t *)0)->uiManager), sizeof( ((gameImport_t *)0)->uiManager ) },
	{ "idDeclManager *", "declManager", (int)(&((gameImport_t *)0)->declManager), sizeof( ((gameImport_t *)0)->declManager ) },
	{ "idAASFileManager *", "AASFileManager", (int)(&((gameImport_t *)0)->AASFileManager), sizeof( ((gameImport_t *)0)->AASFileManager ) },
	{ "idCollisionModelManager *", "collisionModelManager", (int)(&((gameImport_t *)0)->collisionModelManager), sizeof( ((gameImport_t *)0)->collisionModelManager ) },
	{ NULL, 0 }
};

static classVariableInfo_t gameExport_t_typeInfo[] = {
	{ "int", "version", (int)(&((gameExport_t *)0)->version), sizeof( ((gameExport_t *)0)->version ) },
	{ "idGame *", "game", (int)(&((gameExport_t *)0)->game), sizeof( ((gameExport_t *)0)->game ) },
	{ "idGameEdit *", "gameEdit", (int)(&((gameExport_t *)0)->gameEdit), sizeof( ((gameExport_t *)0)->gameEdit ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEventDef_typeInfo[] = {
	{ "const char *", "name", (int)(&((idEventDef *)0)->name), sizeof( ((idEventDef *)0)->name ) },
	{ "const char *", "formatspec", (int)(&((idEventDef *)0)->formatspec), sizeof( ((idEventDef *)0)->formatspec ) },
	{ "unsigned int", "formatspecIndex", (int)(&((idEventDef *)0)->formatspecIndex), sizeof( ((idEventDef *)0)->formatspecIndex ) },
	{ "int", "returnType", (int)(&((idEventDef *)0)->returnType), sizeof( ((idEventDef *)0)->returnType ) },
	{ "int", "numargs", (int)(&((idEventDef *)0)->numargs), sizeof( ((idEventDef *)0)->numargs ) },
	{ "size_t", "argsize", (int)(&((idEventDef *)0)->argsize), sizeof( ((idEventDef *)0)->argsize ) },
	{ "int[8]", "argOffset", (int)(&((idEventDef *)0)->argOffset), sizeof( ((idEventDef *)0)->argOffset ) },
	{ "int", "eventnum", (int)(&((idEventDef *)0)->eventnum), sizeof( ((idEventDef *)0)->eventnum ) },
	{ "const idEventDef *", "next", (int)(&((idEventDef *)0)->next), sizeof( ((idEventDef *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEvent_typeInfo[] = {
	{ "const idEventDef *", "eventdef", (int)(&((idEvent *)0)->eventdef), sizeof( ((idEvent *)0)->eventdef ) },
	{ "byte *", "data", (int)(&((idEvent *)0)->data), sizeof( ((idEvent *)0)->data ) },
	{ "int", "time", (int)(&((idEvent *)0)->time), sizeof( ((idEvent *)0)->time ) },
	{ "idClass *", "object", (int)(&((idEvent *)0)->object), sizeof( ((idEvent *)0)->object ) },
	{ "const idTypeInfo *", "typeinfo", (int)(&((idEvent *)0)->typeinfo), sizeof( ((idEvent *)0)->typeinfo ) },
	{ "idLinkList < idEvent >", "eventNode", (int)(&((idEvent *)0)->eventNode), sizeof( ((idEvent *)0)->eventNode ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEventArg_typeInfo[] = {
	{ "int", "type", (int)(&((idEventArg *)0)->type), sizeof( ((idEventArg *)0)->type ) },
	{ "int", "value", (int)(&((idEventArg *)0)->value), sizeof( ((idEventArg *)0)->value ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAllocError_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idClass_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTypeInfo_typeInfo[] = {
	{ "const char *", "classname", (int)(&((idTypeInfo *)0)->classname), sizeof( ((idTypeInfo *)0)->classname ) },
	{ "const char *", "superclass", (int)(&((idTypeInfo *)0)->superclass), sizeof( ((idTypeInfo *)0)->superclass ) },
	{ "idEventFunc < idClass > *", "eventCallbacks", (int)(&((idTypeInfo *)0)->eventCallbacks), sizeof( ((idTypeInfo *)0)->eventCallbacks ) },
	{ "eventCallback_t *", "eventMap", (int)(&((idTypeInfo *)0)->eventMap), sizeof( ((idTypeInfo *)0)->eventMap ) },
	{ "idTypeInfo *", "super", (int)(&((idTypeInfo *)0)->super), sizeof( ((idTypeInfo *)0)->super ) },
	{ "idTypeInfo *", "next", (int)(&((idTypeInfo *)0)->next), sizeof( ((idTypeInfo *)0)->next ) },
	{ "bool", "freeEventMap", (int)(&((idTypeInfo *)0)->freeEventMap), sizeof( ((idTypeInfo *)0)->freeEventMap ) },
	{ "int", "typeNum", (int)(&((idTypeInfo *)0)->typeNum), sizeof( ((idTypeInfo *)0)->typeNum ) },
	{ "int", "lastChild", (int)(&((idTypeInfo *)0)->lastChild), sizeof( ((idTypeInfo *)0)->lastChild ) },
	{ "idHierarchy < idTypeInfo >", "node", (int)(&((idTypeInfo *)0)->node), sizeof( ((idTypeInfo *)0)->node ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSaveGame_typeInfo[] = {
	{ "idFile *", "file", (int)(&((idSaveGame *)0)->file), sizeof( ((idSaveGame *)0)->file ) },
	{ "idList < const idClass * >", "objects", (int)(&((idSaveGame *)0)->objects), sizeof( ((idSaveGame *)0)->objects ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRestoreGame_typeInfo[] = {
	{ "int", "buildNumber", (int)(&((idRestoreGame *)0)->buildNumber), sizeof( ((idRestoreGame *)0)->buildNumber ) },
	{ "idFile *", "file", (int)(&((idRestoreGame *)0)->file), sizeof( ((idRestoreGame *)0)->file ) },
	{ "idList < idClass * >", "objects", (int)(&((idRestoreGame *)0)->objects), sizeof( ((idRestoreGame *)0)->objects ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDebugGraph_typeInfo[] = {
	{ "idList < float >", "samples", (int)(&((idDebugGraph *)0)->samples), sizeof( ((idDebugGraph *)0)->samples ) },
	{ "int", "index", (int)(&((idDebugGraph *)0)->index), sizeof( ((idDebugGraph *)0)->index ) },
	{ NULL, 0 }
};

static classVariableInfo_t function_t_typeInfo[] = {
	{ "idStr", "name", (int)(&((function_t *)0)->name), sizeof( ((function_t *)0)->name ) },
	{ "const idEventDef *", "eventdef", (int)(&((function_t *)0)->eventdef), sizeof( ((function_t *)0)->eventdef ) },
	{ "idVarDef *", "def", (int)(&((function_t *)0)->def), sizeof( ((function_t *)0)->def ) },
	{ "const idTypeDef *", "type", (int)(&((function_t *)0)->type), sizeof( ((function_t *)0)->type ) },
	{ "int", "firstStatement", (int)(&((function_t *)0)->firstStatement), sizeof( ((function_t *)0)->firstStatement ) },
	{ "int", "numStatements", (int)(&((function_t *)0)->numStatements), sizeof( ((function_t *)0)->numStatements ) },
	{ "int", "parmTotal", (int)(&((function_t *)0)->parmTotal), sizeof( ((function_t *)0)->parmTotal ) },
	{ "int", "locals", (int)(&((function_t *)0)->locals), sizeof( ((function_t *)0)->locals ) },
	{ "int", "filenum", (int)(&((function_t *)0)->filenum), sizeof( ((function_t *)0)->filenum ) },
	{ "idList < int >", "parmSize", (int)(&((function_t *)0)->parmSize), sizeof( ((function_t *)0)->parmSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t eval_t_typeInfo[] = {
	{ "const char *", "stringPtr", (int)(&((eval_t *)0)->stringPtr), sizeof( ((eval_t *)0)->stringPtr ) },
	{ "float", "_float", (int)(&((eval_t *)0)->_float), sizeof( ((eval_t *)0)->_float ) },
	{ "float[3]", "vector", (int)(&((eval_t *)0)->vector), sizeof( ((eval_t *)0)->vector ) },
	{ "function_t *", "function", (int)(&((eval_t *)0)->function), sizeof( ((eval_t *)0)->function ) },
	{ "int", "_int", (int)(&((eval_t *)0)->_int), sizeof( ((eval_t *)0)->_int ) },
	{ "int", "entity", (int)(&((eval_t *)0)->entity), sizeof( ((eval_t *)0)->entity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTypeDef_typeInfo[] = {
	{ "etype_t", "type", (int)(&((idTypeDef *)0)->type), sizeof( ((idTypeDef *)0)->type ) },
	{ "idStr", "name", (int)(&((idTypeDef *)0)->name), sizeof( ((idTypeDef *)0)->name ) },
	{ "int", "size", (int)(&((idTypeDef *)0)->size), sizeof( ((idTypeDef *)0)->size ) },
	{ "idTypeDef *", "auxType", (int)(&((idTypeDef *)0)->auxType), sizeof( ((idTypeDef *)0)->auxType ) },
	{ "idList < idTypeDef * >", "parmTypes", (int)(&((idTypeDef *)0)->parmTypes), sizeof( ((idTypeDef *)0)->parmTypes ) },
	{ "idStrList", "parmNames", (int)(&((idTypeDef *)0)->parmNames), sizeof( ((idTypeDef *)0)->parmNames ) },
	{ "idList < const function_t * >", "functions", (int)(&((idTypeDef *)0)->functions), sizeof( ((idTypeDef *)0)->functions ) },
	{ "idVarDef *", "def", (int)(&((idTypeDef *)0)->def), sizeof( ((idTypeDef *)0)->def ) },
	{ NULL, 0 }
};

static classVariableInfo_t idScriptObject_typeInfo[] = {
	{ "idTypeDef *", "type", (int)(&((idScriptObject *)0)->type), sizeof( ((idScriptObject *)0)->type ) },
	{ "byte *", "data", (int)(&((idScriptObject *)0)->data), sizeof( ((idScriptObject *)0)->data ) },
	{ NULL, 0 }
};

static classVariableInfo_t idScriptVariable_class_type_etype_t_etype_class_returnType__typeInfo[] = {
//	{ "type *", "data", (int)(&((idScriptVariable< class type , etype_t etype , class returnType > *)0)->data), sizeof( ((idScriptVariable< class type , etype_t etype , class returnType > *)0)->data ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCompileError_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t varEval_t_typeInfo[] = {
	{ "idScriptObject * *", "objectPtrPtr", (int)(&((varEval_t *)0)->objectPtrPtr), sizeof( ((varEval_t *)0)->objectPtrPtr ) },
	{ "char *", "stringPtr", (int)(&((varEval_t *)0)->stringPtr), sizeof( ((varEval_t *)0)->stringPtr ) },
	{ "float *", "floatPtr", (int)(&((varEval_t *)0)->floatPtr), sizeof( ((varEval_t *)0)->floatPtr ) },
	{ "idVec3 *", "vectorPtr", (int)(&((varEval_t *)0)->vectorPtr), sizeof( ((varEval_t *)0)->vectorPtr ) },
	{ "function_t *", "functionPtr", (int)(&((varEval_t *)0)->functionPtr), sizeof( ((varEval_t *)0)->functionPtr ) },
	{ "int *", "intPtr", (int)(&((varEval_t *)0)->intPtr), sizeof( ((varEval_t *)0)->intPtr ) },
	{ "byte *", "bytePtr", (int)(&((varEval_t *)0)->bytePtr), sizeof( ((varEval_t *)0)->bytePtr ) },
	{ "int *", "entityNumberPtr", (int)(&((varEval_t *)0)->entityNumberPtr), sizeof( ((varEval_t *)0)->entityNumberPtr ) },
	{ "int", "virtualFunction", (int)(&((varEval_t *)0)->virtualFunction), sizeof( ((varEval_t *)0)->virtualFunction ) },
	{ "int", "jumpOffset", (int)(&((varEval_t *)0)->jumpOffset), sizeof( ((varEval_t *)0)->jumpOffset ) },
	{ "int", "stackOffset", (int)(&((varEval_t *)0)->stackOffset), sizeof( ((varEval_t *)0)->stackOffset ) },
	{ "int", "argSize", (int)(&((varEval_t *)0)->argSize), sizeof( ((varEval_t *)0)->argSize ) },
	{ "varEval_s *", "evalPtr", (int)(&((varEval_t *)0)->evalPtr), sizeof( ((varEval_t *)0)->evalPtr ) },
	{ "int", "ptrOffset", (int)(&((varEval_t *)0)->ptrOffset), sizeof( ((varEval_t *)0)->ptrOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVarDef_typeInfo[] = {
	{ "int", "num", (int)(&((idVarDef *)0)->num), sizeof( ((idVarDef *)0)->num ) },
	{ "varEval_t", "value", (int)(&((idVarDef *)0)->value), sizeof( ((idVarDef *)0)->value ) },
	{ "idVarDef *", "scope", (int)(&((idVarDef *)0)->scope), sizeof( ((idVarDef *)0)->scope ) },
	{ "int", "numUsers", (int)(&((idVarDef *)0)->numUsers), sizeof( ((idVarDef *)0)->numUsers ) },
	{ "initialized_t", "initialized", (int)(&((idVarDef *)0)->initialized), sizeof( ((idVarDef *)0)->initialized ) },
	{ "idTypeDef *", "typeDef", (int)(&((idVarDef *)0)->typeDef), sizeof( ((idVarDef *)0)->typeDef ) },
	{ "idVarDefName *", "name", (int)(&((idVarDef *)0)->name), sizeof( ((idVarDef *)0)->name ) },
	{ "idVarDef *", "next", (int)(&((idVarDef *)0)->next), sizeof( ((idVarDef *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVarDefName_typeInfo[] = {
	{ "idStr", "name", (int)(&((idVarDefName *)0)->name), sizeof( ((idVarDefName *)0)->name ) },
	{ "idVarDef *", "defs", (int)(&((idVarDefName *)0)->defs), sizeof( ((idVarDefName *)0)->defs ) },
	{ NULL, 0 }
};

static classVariableInfo_t statement_t_typeInfo[] = {
	{ "unsigned short", "op", (int)(&((statement_t *)0)->op), sizeof( ((statement_t *)0)->op ) },
	{ "idVarDef *", "a", (int)(&((statement_t *)0)->a), sizeof( ((statement_t *)0)->a ) },
	{ "idVarDef *", "b", (int)(&((statement_t *)0)->b), sizeof( ((statement_t *)0)->b ) },
	{ "idVarDef *", "c", (int)(&((statement_t *)0)->c), sizeof( ((statement_t *)0)->c ) },
	{ "unsigned short", "linenumber", (int)(&((statement_t *)0)->linenumber), sizeof( ((statement_t *)0)->linenumber ) },
	{ "unsigned short", "file", (int)(&((statement_t *)0)->file), sizeof( ((statement_t *)0)->file ) },
	{ NULL, 0 }
};

static classVariableInfo_t idProgram_typeInfo[] = {
	{ "idStrList", "fileList", (int)(&((idProgram *)0)->fileList), sizeof( ((idProgram *)0)->fileList ) },
	{ "idStr", "filename", (int)(&((idProgram *)0)->filename), sizeof( ((idProgram *)0)->filename ) },
	{ "int", "filenum", (int)(&((idProgram *)0)->filenum), sizeof( ((idProgram *)0)->filenum ) },
	{ "int", "numVariables", (int)(&((idProgram *)0)->numVariables), sizeof( ((idProgram *)0)->numVariables ) },
	{ "byte[196608]", "variables", (int)(&((idProgram *)0)->variables), sizeof( ((idProgram *)0)->variables ) },
	{ "idStaticList < byte , 196608 >", "variableDefaults", (int)(&((idProgram *)0)->variableDefaults), sizeof( ((idProgram *)0)->variableDefaults ) },
	{ "idStaticList < function_t , 3072 >", "functions", (int)(&((idProgram *)0)->functions), sizeof( ((idProgram *)0)->functions ) },
	{ "idStaticList < statement_t , 81920 >", "statements", (int)(&((idProgram *)0)->statements), sizeof( ((idProgram *)0)->statements ) },
	{ "idList < idTypeDef * >", "types", (int)(&((idProgram *)0)->types), sizeof( ((idProgram *)0)->types ) },
	{ "idList < idVarDefName * >", "varDefNames", (int)(&((idProgram *)0)->varDefNames), sizeof( ((idProgram *)0)->varDefNames ) },
	{ "idHashIndex", "varDefNameHash", (int)(&((idProgram *)0)->varDefNameHash), sizeof( ((idProgram *)0)->varDefNameHash ) },
	{ "idList < idVarDef * >", "varDefs", (int)(&((idProgram *)0)->varDefs), sizeof( ((idProgram *)0)->varDefs ) },
	{ "idVarDef *", "sysDef", (int)(&((idProgram *)0)->sysDef), sizeof( ((idProgram *)0)->sysDef ) },
	{ "int", "top_functions", (int)(&((idProgram *)0)->top_functions), sizeof( ((idProgram *)0)->top_functions ) },
	{ "int", "top_statements", (int)(&((idProgram *)0)->top_statements), sizeof( ((idProgram *)0)->top_statements ) },
	{ "int", "top_types", (int)(&((idProgram *)0)->top_types), sizeof( ((idProgram *)0)->top_types ) },
	{ "int", "top_defs", (int)(&((idProgram *)0)->top_defs), sizeof( ((idProgram *)0)->top_defs ) },
	{ "int", "top_files", (int)(&((idProgram *)0)->top_files), sizeof( ((idProgram *)0)->top_files ) },
	{ "idVarDef *", "returnDef", (int)(&((idProgram *)0)->returnDef), sizeof( ((idProgram *)0)->returnDef ) },
	{ "idVarDef *", "returnStringDef", (int)(&((idProgram *)0)->returnStringDef), sizeof( ((idProgram *)0)->returnStringDef ) },
	{ NULL, 0 }
};

static classVariableInfo_t frameBlend_t_typeInfo[] = {
	{ "int", "cycleCount", (int)(&((frameBlend_t *)0)->cycleCount), sizeof( ((frameBlend_t *)0)->cycleCount ) },
	{ "int", "frame1", (int)(&((frameBlend_t *)0)->frame1), sizeof( ((frameBlend_t *)0)->frame1 ) },
	{ "int", "frame2", (int)(&((frameBlend_t *)0)->frame2), sizeof( ((frameBlend_t *)0)->frame2 ) },
	{ "float", "frontlerp", (int)(&((frameBlend_t *)0)->frontlerp), sizeof( ((frameBlend_t *)0)->frontlerp ) },
	{ "float", "backlerp", (int)(&((frameBlend_t *)0)->backlerp), sizeof( ((frameBlend_t *)0)->backlerp ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointAnimInfo_t_typeInfo[] = {
	{ "int", "nameIndex", (int)(&((jointAnimInfo_t *)0)->nameIndex), sizeof( ((jointAnimInfo_t *)0)->nameIndex ) },
	{ "int", "parentNum", (int)(&((jointAnimInfo_t *)0)->parentNum), sizeof( ((jointAnimInfo_t *)0)->parentNum ) },
	{ "int", "animBits", (int)(&((jointAnimInfo_t *)0)->animBits), sizeof( ((jointAnimInfo_t *)0)->animBits ) },
	{ "int", "firstComponent", (int)(&((jointAnimInfo_t *)0)->firstComponent), sizeof( ((jointAnimInfo_t *)0)->firstComponent ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointInfo_t_typeInfo[] = {
	{ "jointHandle_t", "num", (int)(&((jointInfo_t *)0)->num), sizeof( ((jointInfo_t *)0)->num ) },
	{ "jointHandle_t", "parentNum", (int)(&((jointInfo_t *)0)->parentNum), sizeof( ((jointInfo_t *)0)->parentNum ) },
	{ "int", "channel", (int)(&((jointInfo_t *)0)->channel), sizeof( ((jointInfo_t *)0)->channel ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointMod_t_typeInfo[] = {
	{ "jointHandle_t", "jointnum", (int)(&((jointMod_t *)0)->jointnum), sizeof( ((jointMod_t *)0)->jointnum ) },
	{ "idMat3", "mat", (int)(&((jointMod_t *)0)->mat), sizeof( ((jointMod_t *)0)->mat ) },
	{ "idVec3", "pos", (int)(&((jointMod_t *)0)->pos), sizeof( ((jointMod_t *)0)->pos ) },
	{ "jointModTransform_t", "transform_pos", (int)(&((jointMod_t *)0)->transform_pos), sizeof( ((jointMod_t *)0)->transform_pos ) },
	{ "jointModTransform_t", "transform_axis", (int)(&((jointMod_t *)0)->transform_axis), sizeof( ((jointMod_t *)0)->transform_axis ) },
	{ NULL, 0 }
};

static classVariableInfo_t frameLookup_t_typeInfo[] = {
	{ "int", "num", (int)(&((frameLookup_t *)0)->num), sizeof( ((frameLookup_t *)0)->num ) },
	{ "int", "firstCommand", (int)(&((frameLookup_t *)0)->firstCommand), sizeof( ((frameLookup_t *)0)->firstCommand ) },
	{ NULL, 0 }
};

static classVariableInfo_t class_254_class_254_typeInfo[] = {
//	{ "const idSoundShader *", "soundShader", (int)(&((class_254::class_254 *)0)->soundShader), sizeof( ((class_254::class_254 *)0)->soundShader ) },
//	{ "const function_t *", "function", (int)(&((class_254::class_254 *)0)->function), sizeof( ((class_254::class_254 *)0)->function ) },
//	{ "const idDeclSkin *", "skin", (int)(&((class_254::class_254 *)0)->skin), sizeof( ((class_254::class_254 *)0)->skin ) },
//	{ "int", "index", (int)(&((class_254::class_254 *)0)->index), sizeof( ((class_254::class_254 *)0)->index ) },
	{ NULL, 0 }
};

static classVariableInfo_t frameCommand_t_typeInfo[] = {
	{ "frameCommandType_t", "type", (int)(&((frameCommand_t *)0)->type), sizeof( ((frameCommand_t *)0)->type ) },
	{ "idStr *", "string", (int)(&((frameCommand_t *)0)->string), sizeof( ((frameCommand_t *)0)->string ) },
	{ NULL, 0 }
};

static classVariableInfo_t animFlags_t_typeInfo[] = {
//	{ "bool", "prevent_idle_override", (int)(&((animFlags_t *)0)->prevent_idle_override), sizeof( ((animFlags_t *)0)->prevent_idle_override ) },
//	{ "bool", "random_cycle_start", (int)(&((animFlags_t *)0)->random_cycle_start), sizeof( ((animFlags_t *)0)->random_cycle_start ) },
//	{ "bool", "ai_no_turn", (int)(&((animFlags_t *)0)->ai_no_turn), sizeof( ((animFlags_t *)0)->ai_no_turn ) },
//	{ "bool", "anim_turn", (int)(&((animFlags_t *)0)->anim_turn), sizeof( ((animFlags_t *)0)->anim_turn ) },
	{ NULL, 0 }
};

static classVariableInfo_t idModelExport_typeInfo[] = {
	{ "idStr", "commandLine", (int)(&((idModelExport *)0)->commandLine), sizeof( ((idModelExport *)0)->commandLine ) },
	{ "idStr", "src", (int)(&((idModelExport *)0)->src), sizeof( ((idModelExport *)0)->src ) },
	{ "idStr", "dest", (int)(&((idModelExport *)0)->dest), sizeof( ((idModelExport *)0)->dest ) },
	{ "bool", "force", (int)(&((idModelExport *)0)->force), sizeof( ((idModelExport *)0)->force ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMD5Anim_typeInfo[] = {
	{ "int", "numFrames", (int)(&((idMD5Anim *)0)->numFrames), sizeof( ((idMD5Anim *)0)->numFrames ) },
	{ "int", "frameRate", (int)(&((idMD5Anim *)0)->frameRate), sizeof( ((idMD5Anim *)0)->frameRate ) },
	{ "int", "animLength", (int)(&((idMD5Anim *)0)->animLength), sizeof( ((idMD5Anim *)0)->animLength ) },
	{ "int", "numJoints", (int)(&((idMD5Anim *)0)->numJoints), sizeof( ((idMD5Anim *)0)->numJoints ) },
	{ "int", "numAnimatedComponents", (int)(&((idMD5Anim *)0)->numAnimatedComponents), sizeof( ((idMD5Anim *)0)->numAnimatedComponents ) },
	{ "idList < idBounds >", "bounds", (int)(&((idMD5Anim *)0)->bounds), sizeof( ((idMD5Anim *)0)->bounds ) },
	{ "idList < jointAnimInfo_t >", "jointInfo", (int)(&((idMD5Anim *)0)->jointInfo), sizeof( ((idMD5Anim *)0)->jointInfo ) },
	{ "idList < idJointQuat >", "baseFrame", (int)(&((idMD5Anim *)0)->baseFrame), sizeof( ((idMD5Anim *)0)->baseFrame ) },
	{ "idList < float >", "componentFrames", (int)(&((idMD5Anim *)0)->componentFrames), sizeof( ((idMD5Anim *)0)->componentFrames ) },
	{ "idStr", "name", (int)(&((idMD5Anim *)0)->name), sizeof( ((idMD5Anim *)0)->name ) },
	{ "idVec3", "totaldelta", (int)(&((idMD5Anim *)0)->totaldelta), sizeof( ((idMD5Anim *)0)->totaldelta ) },
	{ "mutable int", "ref_count", (int)(&((idMD5Anim *)0)->ref_count), sizeof( ((idMD5Anim *)0)->ref_count ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnim_typeInfo[] = {
	{ "const idDeclModelDef *", "modelDef", (int)(&((idAnim *)0)->modelDef), sizeof( ((idAnim *)0)->modelDef ) },
	{ "const idMD5Anim *[3]", "anims", (int)(&((idAnim *)0)->anims), sizeof( ((idAnim *)0)->anims ) },
	{ "int", "numAnims", (int)(&((idAnim *)0)->numAnims), sizeof( ((idAnim *)0)->numAnims ) },
	{ "idStr", "name", (int)(&((idAnim *)0)->name), sizeof( ((idAnim *)0)->name ) },
	{ "idStr", "realname", (int)(&((idAnim *)0)->realname), sizeof( ((idAnim *)0)->realname ) },
	{ "idList < frameLookup_t >", "frameLookup", (int)(&((idAnim *)0)->frameLookup), sizeof( ((idAnim *)0)->frameLookup ) },
	{ "idList < frameCommand_t >", "frameCommands", (int)(&((idAnim *)0)->frameCommands), sizeof( ((idAnim *)0)->frameCommands ) },
	{ "animFlags_t", "flags", (int)(&((idAnim *)0)->flags), sizeof( ((idAnim *)0)->flags ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclModelDef_typeInfo[] = {
	{ "idVec3", "offset", (int)(&((idDeclModelDef *)0)->offset), sizeof( ((idDeclModelDef *)0)->offset ) },
	{ "idList < jointInfo_t >", "joints", (int)(&((idDeclModelDef *)0)->joints), sizeof( ((idDeclModelDef *)0)->joints ) },
	{ "idList < int >", "jointParents", (int)(&((idDeclModelDef *)0)->jointParents), sizeof( ((idDeclModelDef *)0)->jointParents ) },
	{ "idList < int >[5]", "channelJoints", (int)(&((idDeclModelDef *)0)->channelJoints), sizeof( ((idDeclModelDef *)0)->channelJoints ) },
	{ "idRenderModel *", "modelHandle", (int)(&((idDeclModelDef *)0)->modelHandle), sizeof( ((idDeclModelDef *)0)->modelHandle ) },
	{ "idList < idAnim * >", "anims", (int)(&((idDeclModelDef *)0)->anims), sizeof( ((idDeclModelDef *)0)->anims ) },
	{ "const idDeclSkin *", "skin", (int)(&((idDeclModelDef *)0)->skin), sizeof( ((idDeclModelDef *)0)->skin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimBlend_typeInfo[] = {
	{ "const idDeclModelDef *", "modelDef", (int)(&((idAnimBlend *)0)->modelDef), sizeof( ((idAnimBlend *)0)->modelDef ) },
	{ "int", "starttime", (int)(&((idAnimBlend *)0)->starttime), sizeof( ((idAnimBlend *)0)->starttime ) },
	{ "int", "endtime", (int)(&((idAnimBlend *)0)->endtime), sizeof( ((idAnimBlend *)0)->endtime ) },
	{ "int", "timeOffset", (int)(&((idAnimBlend *)0)->timeOffset), sizeof( ((idAnimBlend *)0)->timeOffset ) },
	{ "float", "rate", (int)(&((idAnimBlend *)0)->rate), sizeof( ((idAnimBlend *)0)->rate ) },
	{ "int", "blendStartTime", (int)(&((idAnimBlend *)0)->blendStartTime), sizeof( ((idAnimBlend *)0)->blendStartTime ) },
	{ "int", "blendDuration", (int)(&((idAnimBlend *)0)->blendDuration), sizeof( ((idAnimBlend *)0)->blendDuration ) },
	{ "float", "blendStartValue", (int)(&((idAnimBlend *)0)->blendStartValue), sizeof( ((idAnimBlend *)0)->blendStartValue ) },
	{ "float", "blendEndValue", (int)(&((idAnimBlend *)0)->blendEndValue), sizeof( ((idAnimBlend *)0)->blendEndValue ) },
	{ "float[3]", "animWeights", (int)(&((idAnimBlend *)0)->animWeights), sizeof( ((idAnimBlend *)0)->animWeights ) },
	{ "short", "cycle", (int)(&((idAnimBlend *)0)->cycle), sizeof( ((idAnimBlend *)0)->cycle ) },
	{ "short", "frame", (int)(&((idAnimBlend *)0)->frame), sizeof( ((idAnimBlend *)0)->frame ) },
	{ "short", "animNum", (int)(&((idAnimBlend *)0)->animNum), sizeof( ((idAnimBlend *)0)->animNum ) },
	{ "bool", "allowMove", (int)(&((idAnimBlend *)0)->allowMove), sizeof( ((idAnimBlend *)0)->allowMove ) },
	{ "bool", "allowFrameCommands", (int)(&((idAnimBlend *)0)->allowFrameCommands), sizeof( ((idAnimBlend *)0)->allowFrameCommands ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFPoseJointMod_typeInfo[] = {
	{ "AFJointModType_t", "mod", (int)(&((idAFPoseJointMod *)0)->mod), sizeof( ((idAFPoseJointMod *)0)->mod ) },
	{ "idMat3", "axis", (int)(&((idAFPoseJointMod *)0)->axis), sizeof( ((idAFPoseJointMod *)0)->axis ) },
	{ "idVec3", "origin", (int)(&((idAFPoseJointMod *)0)->origin), sizeof( ((idAFPoseJointMod *)0)->origin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimator_typeInfo[] = {
	{ "const idDeclModelDef *", "modelDef", (int)(&((idAnimator *)0)->modelDef), sizeof( ((idAnimator *)0)->modelDef ) },
	{ "idEntity *", "entity", (int)(&((idAnimator *)0)->entity), sizeof( ((idAnimator *)0)->entity ) },
	{ "idAnimBlend[15]", "channels", (int)(&((idAnimator *)0)->channels), sizeof( ((idAnimator *)0)->channels ) },
	{ "idList < jointMod_t * >", "jointMods", (int)(&((idAnimator *)0)->jointMods), sizeof( ((idAnimator *)0)->jointMods ) },
	{ "int", "numJoints", (int)(&((idAnimator *)0)->numJoints), sizeof( ((idAnimator *)0)->numJoints ) },
	{ "idJointMat *", "joints", (int)(&((idAnimator *)0)->joints), sizeof( ((idAnimator *)0)->joints ) },
	{ "mutable int", "lastTransformTime", (int)(&((idAnimator *)0)->lastTransformTime), sizeof( ((idAnimator *)0)->lastTransformTime ) },
	{ "mutable bool", "stoppedAnimatingUpdate", (int)(&((idAnimator *)0)->stoppedAnimatingUpdate), sizeof( ((idAnimator *)0)->stoppedAnimatingUpdate ) },
	{ "bool", "removeOriginOffset", (int)(&((idAnimator *)0)->removeOriginOffset), sizeof( ((idAnimator *)0)->removeOriginOffset ) },
	{ "bool", "forceUpdate", (int)(&((idAnimator *)0)->forceUpdate), sizeof( ((idAnimator *)0)->forceUpdate ) },
	{ "idBounds", "frameBounds", (int)(&((idAnimator *)0)->frameBounds), sizeof( ((idAnimator *)0)->frameBounds ) },
	{ "float", "AFPoseBlendWeight", (int)(&((idAnimator *)0)->AFPoseBlendWeight), sizeof( ((idAnimator *)0)->AFPoseBlendWeight ) },
	{ "idList < int >", "AFPoseJoints", (int)(&((idAnimator *)0)->AFPoseJoints), sizeof( ((idAnimator *)0)->AFPoseJoints ) },
	{ "idList < idAFPoseJointMod >", "AFPoseJointMods", (int)(&((idAnimator *)0)->AFPoseJointMods), sizeof( ((idAnimator *)0)->AFPoseJointMods ) },
	{ "idList < idJointQuat >", "AFPoseJointFrame", (int)(&((idAnimator *)0)->AFPoseJointFrame), sizeof( ((idAnimator *)0)->AFPoseJointFrame ) },
	{ "idBounds", "AFPoseBounds", (int)(&((idAnimator *)0)->AFPoseBounds), sizeof( ((idAnimator *)0)->AFPoseBounds ) },
	{ "int", "AFPoseTime", (int)(&((idAnimator *)0)->AFPoseTime), sizeof( ((idAnimator *)0)->AFPoseTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimManager_typeInfo[] = {
	{ "idHashTable < idMD5Anim * >", "animations", (int)(&((idAnimManager *)0)->animations), sizeof( ((idAnimManager *)0)->animations ) },
	{ "idStrList", "jointnames", (int)(&((idAnimManager *)0)->jointnames), sizeof( ((idAnimManager *)0)->jointnames ) },
	{ "idHashIndex", "jointnamesHash", (int)(&((idAnimManager *)0)->jointnamesHash), sizeof( ((idAnimManager *)0)->jointnamesHash ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasPath_t_typeInfo[] = {
	{ "int", "type", (int)(&((aasPath_t *)0)->type), sizeof( ((aasPath_t *)0)->type ) },
	{ "idVec3", "moveGoal", (int)(&((aasPath_t *)0)->moveGoal), sizeof( ((aasPath_t *)0)->moveGoal ) },
	{ "int", "moveAreaNum", (int)(&((aasPath_t *)0)->moveAreaNum), sizeof( ((aasPath_t *)0)->moveAreaNum ) },
	{ "idVec3", "secondaryGoal", (int)(&((aasPath_t *)0)->secondaryGoal), sizeof( ((aasPath_t *)0)->secondaryGoal ) },
	{ "const idReachability *", "reachability", (int)(&((aasPath_t *)0)->reachability), sizeof( ((aasPath_t *)0)->reachability ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasGoal_t_typeInfo[] = {
	{ "int", "areaNum", (int)(&((aasGoal_t *)0)->areaNum), sizeof( ((aasGoal_t *)0)->areaNum ) },
	{ "idVec3", "origin", (int)(&((aasGoal_t *)0)->origin), sizeof( ((aasGoal_t *)0)->origin ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasObstacle_t_typeInfo[] = {
	{ "idBounds", "absBounds", (int)(&((aasObstacle_t *)0)->absBounds), sizeof( ((aasObstacle_t *)0)->absBounds ) },
	{ "idBounds", "expAbsBounds", (int)(&((aasObstacle_t *)0)->expAbsBounds), sizeof( ((aasObstacle_t *)0)->expAbsBounds ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASCallback_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAAS_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idClipModel_typeInfo[] = {
	{ "bool", "enabled", (int)(&((idClipModel *)0)->enabled), sizeof( ((idClipModel *)0)->enabled ) },
	{ "idEntity *", "entity", (int)(&((idClipModel *)0)->entity), sizeof( ((idClipModel *)0)->entity ) },
	{ "int", "id", (int)(&((idClipModel *)0)->id), sizeof( ((idClipModel *)0)->id ) },
	{ "idEntity *", "owner", (int)(&((idClipModel *)0)->owner), sizeof( ((idClipModel *)0)->owner ) },
	{ "idVec3", "origin", (int)(&((idClipModel *)0)->origin), sizeof( ((idClipModel *)0)->origin ) },
	{ "idMat3", "axis", (int)(&((idClipModel *)0)->axis), sizeof( ((idClipModel *)0)->axis ) },
	{ "idBounds", "bounds", (int)(&((idClipModel *)0)->bounds), sizeof( ((idClipModel *)0)->bounds ) },
	{ "idBounds", "absBounds", (int)(&((idClipModel *)0)->absBounds), sizeof( ((idClipModel *)0)->absBounds ) },
	{ "const idMaterial *", "material", (int)(&((idClipModel *)0)->material), sizeof( ((idClipModel *)0)->material ) },
	{ "int", "contents", (int)(&((idClipModel *)0)->contents), sizeof( ((idClipModel *)0)->contents ) },
	{ "cmHandle_t", "collisionModelHandle", (int)(&((idClipModel *)0)->collisionModelHandle), sizeof( ((idClipModel *)0)->collisionModelHandle ) },
	{ "int", "traceModelIndex", (int)(&((idClipModel *)0)->traceModelIndex), sizeof( ((idClipModel *)0)->traceModelIndex ) },
	{ "int", "renderModelHandle", (int)(&((idClipModel *)0)->renderModelHandle), sizeof( ((idClipModel *)0)->renderModelHandle ) },
	{ "clipLink_s *", "clipLinks", (int)(&((idClipModel *)0)->clipLinks), sizeof( ((idClipModel *)0)->clipLinks ) },
	{ "int", "touchCount", (int)(&((idClipModel *)0)->touchCount), sizeof( ((idClipModel *)0)->touchCount ) },
	{ NULL, 0 }
};

static classVariableInfo_t idClip_typeInfo[] = {
	{ "int", "numClipSectors", (int)(&((idClip *)0)->numClipSectors), sizeof( ((idClip *)0)->numClipSectors ) },
	{ "clipSector_s *", "clipSectors", (int)(&((idClip *)0)->clipSectors), sizeof( ((idClip *)0)->clipSectors ) },
	{ "idBounds", "worldBounds", (int)(&((idClip *)0)->worldBounds), sizeof( ((idClip *)0)->worldBounds ) },
	{ "idClipModel", "temporaryClipModel", (int)(&((idClip *)0)->temporaryClipModel), sizeof( ((idClip *)0)->temporaryClipModel ) },
	{ "idClipModel", "defaultClipModel", (int)(&((idClip *)0)->defaultClipModel), sizeof( ((idClip *)0)->defaultClipModel ) },
	{ "mutable int", "touchCount", (int)(&((idClip *)0)->touchCount), sizeof( ((idClip *)0)->touchCount ) },
	{ "int", "numTranslations", (int)(&((idClip *)0)->numTranslations), sizeof( ((idClip *)0)->numTranslations ) },
	{ "int", "numRotations", (int)(&((idClip *)0)->numRotations), sizeof( ((idClip *)0)->numRotations ) },
	{ "int", "numMotions", (int)(&((idClip *)0)->numMotions), sizeof( ((idClip *)0)->numMotions ) },
	{ "int", "numRenderModelTraces", (int)(&((idClip *)0)->numRenderModelTraces), sizeof( ((idClip *)0)->numRenderModelTraces ) },
	{ "int", "numContents", (int)(&((idClip *)0)->numContents), sizeof( ((idClip *)0)->numContents ) },
	{ "int", "numContacts", (int)(&((idClip *)0)->numContacts), sizeof( ((idClip *)0)->numContacts ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPush_pushed_s_typeInfo[] = {
	{ "idEntity *", "ent", (int)(&((idPush::pushed_s *)0)->ent), sizeof( ((idPush::pushed_s *)0)->ent ) },
	{ "idAngles", "deltaViewAngles", (int)(&((idPush::pushed_s *)0)->deltaViewAngles), sizeof( ((idPush::pushed_s *)0)->deltaViewAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPush_pushedGroup_s_typeInfo[] = {
	{ "idEntity *", "ent", (int)(&((idPush::pushedGroup_s *)0)->ent), sizeof( ((idPush::pushedGroup_s *)0)->ent ) },
	{ "float", "fraction", (int)(&((idPush::pushedGroup_s *)0)->fraction), sizeof( ((idPush::pushedGroup_s *)0)->fraction ) },
	{ "bool", "groundContact", (int)(&((idPush::pushedGroup_s *)0)->groundContact), sizeof( ((idPush::pushedGroup_s *)0)->groundContact ) },
	{ "bool", "test", (int)(&((idPush::pushedGroup_s *)0)->test), sizeof( ((idPush::pushedGroup_s *)0)->test ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPush_typeInfo[] = {
	{ "idPush::pushed_s[4096]", "pushed", (int)(&((idPush *)0)->pushed), sizeof( ((idPush *)0)->pushed ) },
	{ "int", "numPushed", (int)(&((idPush *)0)->numPushed), sizeof( ((idPush *)0)->numPushed ) },
	{ "idPush::pushedGroup_s[4096]", "pushedGroup", (int)(&((idPush *)0)->pushedGroup), sizeof( ((idPush *)0)->pushedGroup ) },
	{ "int", "pushedGroupSize", (int)(&((idPush *)0)->pushedGroupSize), sizeof( ((idPush *)0)->pushedGroupSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t pvsHandle_t_typeInfo[] = {
	{ "int", "i", (int)(&((pvsHandle_t *)0)->i), sizeof( ((pvsHandle_t *)0)->i ) },
	{ "unsigned int", "h", (int)(&((pvsHandle_t *)0)->h), sizeof( ((pvsHandle_t *)0)->h ) },
	{ NULL, 0 }
};

static classVariableInfo_t pvsCurrent_t_typeInfo[] = {
	{ "pvsHandle_t", "handle", (int)(&((pvsCurrent_t *)0)->handle), sizeof( ((pvsCurrent_t *)0)->handle ) },
	{ "byte *", "pvs", (int)(&((pvsCurrent_t *)0)->pvs), sizeof( ((pvsCurrent_t *)0)->pvs ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPVS_typeInfo[] = {
	{ "int", "numAreas", (int)(&((idPVS *)0)->numAreas), sizeof( ((idPVS *)0)->numAreas ) },
	{ "int", "numPortals", (int)(&((idPVS *)0)->numPortals), sizeof( ((idPVS *)0)->numPortals ) },
	{ "bool *", "connectedAreas", (int)(&((idPVS *)0)->connectedAreas), sizeof( ((idPVS *)0)->connectedAreas ) },
	{ "int *", "areaQueue", (int)(&((idPVS *)0)->areaQueue), sizeof( ((idPVS *)0)->areaQueue ) },
	{ "byte *", "areaPVS", (int)(&((idPVS *)0)->areaPVS), sizeof( ((idPVS *)0)->areaPVS ) },
	{ "mutable pvsCurrent_t[8]", "currentPVS", (int)(&((idPVS *)0)->currentPVS), sizeof( ((idPVS *)0)->currentPVS ) },
	{ "int", "portalVisBytes", (int)(&((idPVS *)0)->portalVisBytes), sizeof( ((idPVS *)0)->portalVisBytes ) },
	{ "int", "portalVisLongs", (int)(&((idPVS *)0)->portalVisLongs), sizeof( ((idPVS *)0)->portalVisLongs ) },
	{ "int", "areaVisBytes", (int)(&((idPVS *)0)->areaVisBytes), sizeof( ((idPVS *)0)->areaVisBytes ) },
	{ "int", "areaVisLongs", (int)(&((idPVS *)0)->areaVisLongs), sizeof( ((idPVS *)0)->areaVisLongs ) },
	{ "pvsPortal_s *", "pvsPortals", (int)(&((idPVS *)0)->pvsPortals), sizeof( ((idPVS *)0)->pvsPortals ) },
	{ "pvsArea_s *", "pvsAreas", (int)(&((idPVS *)0)->pvsAreas), sizeof( ((idPVS *)0)->pvsAreas ) },
	{ NULL, 0 }
};

static classVariableInfo_t mpPlayerState_t_typeInfo[] = {
	{ "int", "ping", (int)(&((mpPlayerState_t *)0)->ping), sizeof( ((mpPlayerState_t *)0)->ping ) },
	{ "int", "fragCount", (int)(&((mpPlayerState_t *)0)->fragCount), sizeof( ((mpPlayerState_t *)0)->fragCount ) },
	{ "int", "teamFragCount", (int)(&((mpPlayerState_t *)0)->teamFragCount), sizeof( ((mpPlayerState_t *)0)->teamFragCount ) },
	{ "int", "wins", (int)(&((mpPlayerState_t *)0)->wins), sizeof( ((mpPlayerState_t *)0)->wins ) },
	{ "playerVote_t", "vote", (int)(&((mpPlayerState_t *)0)->vote), sizeof( ((mpPlayerState_t *)0)->vote ) },
	{ "bool", "scoreBoardUp", (int)(&((mpPlayerState_t *)0)->scoreBoardUp), sizeof( ((mpPlayerState_t *)0)->scoreBoardUp ) },
	{ "bool", "ingame", (int)(&((mpPlayerState_t *)0)->ingame), sizeof( ((mpPlayerState_t *)0)->ingame ) },
	{ NULL, 0 }
};

static classVariableInfo_t mpChatLine_t_typeInfo[] = {
	{ "idStr", "line", (int)(&((mpChatLine_t *)0)->line), sizeof( ((mpChatLine_t *)0)->line ) },
	{ "short", "fade", (int)(&((mpChatLine_t *)0)->fade), sizeof( ((mpChatLine_t *)0)->fade ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMultiplayerGame_typeInfo[] = {
	{ "gameState_t", "gameState", (int)(&((idMultiplayerGame *)0)->gameState), sizeof( ((idMultiplayerGame *)0)->gameState ) },
	{ "gameState_t", "nextState", (int)(&((idMultiplayerGame *)0)->nextState), sizeof( ((idMultiplayerGame *)0)->nextState ) },
	{ "int", "pingUpdateTime", (int)(&((idMultiplayerGame *)0)->pingUpdateTime), sizeof( ((idMultiplayerGame *)0)->pingUpdateTime ) },
	{ "mpPlayerState_t[32]", "playerState", (int)(&((idMultiplayerGame *)0)->playerState), sizeof( ((idMultiplayerGame *)0)->playerState ) },
	{ "vote_flags_t", "vote", (int)(&((idMultiplayerGame *)0)->vote), sizeof( ((idMultiplayerGame *)0)->vote ) },
	{ "int", "voteTimeOut", (int)(&((idMultiplayerGame *)0)->voteTimeOut), sizeof( ((idMultiplayerGame *)0)->voteTimeOut ) },
	{ "int", "voteExecTime", (int)(&((idMultiplayerGame *)0)->voteExecTime), sizeof( ((idMultiplayerGame *)0)->voteExecTime ) },
	{ "float", "yesVotes", (int)(&((idMultiplayerGame *)0)->yesVotes), sizeof( ((idMultiplayerGame *)0)->yesVotes ) },
	{ "float", "noVotes", (int)(&((idMultiplayerGame *)0)->noVotes), sizeof( ((idMultiplayerGame *)0)->noVotes ) },
	{ "idStr", "voteValue", (int)(&((idMultiplayerGame *)0)->voteValue), sizeof( ((idMultiplayerGame *)0)->voteValue ) },
	{ "idStr", "voteString", (int)(&((idMultiplayerGame *)0)->voteString), sizeof( ((idMultiplayerGame *)0)->voteString ) },
	{ "bool", "voted", (int)(&((idMultiplayerGame *)0)->voted), sizeof( ((idMultiplayerGame *)0)->voted ) },
	{ "int[32]", "kickVoteMap", (int)(&((idMultiplayerGame *)0)->kickVoteMap), sizeof( ((idMultiplayerGame *)0)->kickVoteMap ) },
	{ "int", "nextStateSwitch", (int)(&((idMultiplayerGame *)0)->nextStateSwitch), sizeof( ((idMultiplayerGame *)0)->nextStateSwitch ) },
	{ "int", "warmupEndTime", (int)(&((idMultiplayerGame *)0)->warmupEndTime), sizeof( ((idMultiplayerGame *)0)->warmupEndTime ) },
	{ "int", "matchStartedTime", (int)(&((idMultiplayerGame *)0)->matchStartedTime), sizeof( ((idMultiplayerGame *)0)->matchStartedTime ) },
	{ "int[2]", "currentTourneyPlayer", (int)(&((idMultiplayerGame *)0)->currentTourneyPlayer), sizeof( ((idMultiplayerGame *)0)->currentTourneyPlayer ) },
	{ "int", "lastWinner", (int)(&((idMultiplayerGame *)0)->lastWinner), sizeof( ((idMultiplayerGame *)0)->lastWinner ) },
	{ "idStr", "warmupText", (int)(&((idMultiplayerGame *)0)->warmupText), sizeof( ((idMultiplayerGame *)0)->warmupText ) },
	{ "bool", "one", (int)(&((idMultiplayerGame *)0)->one), sizeof( ((idMultiplayerGame *)0)->one ) },
	{ "bool", "two", (int)(&((idMultiplayerGame *)0)->two), sizeof( ((idMultiplayerGame *)0)->two ) },
	{ "bool", "three", (int)(&((idMultiplayerGame *)0)->three), sizeof( ((idMultiplayerGame *)0)->three ) },
	{ "idUserInterface *", "scoreBoard", (int)(&((idMultiplayerGame *)0)->scoreBoard), sizeof( ((idMultiplayerGame *)0)->scoreBoard ) },
	{ "idUserInterface *", "spectateGui", (int)(&((idMultiplayerGame *)0)->spectateGui), sizeof( ((idMultiplayerGame *)0)->spectateGui ) },
	{ "idUserInterface *", "guiChat", (int)(&((idMultiplayerGame *)0)->guiChat), sizeof( ((idMultiplayerGame *)0)->guiChat ) },
	{ "idUserInterface *", "mainGui", (int)(&((idMultiplayerGame *)0)->mainGui), sizeof( ((idMultiplayerGame *)0)->mainGui ) },
	{ "idListGUI *", "mapList", (int)(&((idMultiplayerGame *)0)->mapList), sizeof( ((idMultiplayerGame *)0)->mapList ) },
	{ "idUserInterface *", "msgmodeGui", (int)(&((idMultiplayerGame *)0)->msgmodeGui), sizeof( ((idMultiplayerGame *)0)->msgmodeGui ) },
	{ "int", "currentMenu", (int)(&((idMultiplayerGame *)0)->currentMenu), sizeof( ((idMultiplayerGame *)0)->currentMenu ) },
	{ "int", "nextMenu", (int)(&((idMultiplayerGame *)0)->nextMenu), sizeof( ((idMultiplayerGame *)0)->nextMenu ) },
	{ "bool", "bCurrentMenuMsg", (int)(&((idMultiplayerGame *)0)->bCurrentMenuMsg), sizeof( ((idMultiplayerGame *)0)->bCurrentMenuMsg ) },
	{ "mpChatLine_t[5]", "chatHistory", (int)(&((idMultiplayerGame *)0)->chatHistory), sizeof( ((idMultiplayerGame *)0)->chatHistory ) },
	{ "int", "chatHistoryIndex", (int)(&((idMultiplayerGame *)0)->chatHistoryIndex), sizeof( ((idMultiplayerGame *)0)->chatHistoryIndex ) },
	{ "int", "chatHistorySize", (int)(&((idMultiplayerGame *)0)->chatHistorySize), sizeof( ((idMultiplayerGame *)0)->chatHistorySize ) },
	{ "bool", "chatDataUpdated", (int)(&((idMultiplayerGame *)0)->chatDataUpdated), sizeof( ((idMultiplayerGame *)0)->chatDataUpdated ) },
	{ "int", "lastChatLineTime", (int)(&((idMultiplayerGame *)0)->lastChatLineTime), sizeof( ((idMultiplayerGame *)0)->lastChatLineTime ) },
	{ "int", "numRankedPlayers", (int)(&((idMultiplayerGame *)0)->numRankedPlayers), sizeof( ((idMultiplayerGame *)0)->numRankedPlayers ) },
	{ "idPlayer *[32]", "rankedPlayers", (int)(&((idMultiplayerGame *)0)->rankedPlayers), sizeof( ((idMultiplayerGame *)0)->rankedPlayers ) },
	{ "bool", "pureReady", (int)(&((idMultiplayerGame *)0)->pureReady), sizeof( ((idMultiplayerGame *)0)->pureReady ) },
	{ "int", "fragLimitTimeout", (int)(&((idMultiplayerGame *)0)->fragLimitTimeout), sizeof( ((idMultiplayerGame *)0)->fragLimitTimeout ) },
	{ "int[3]", "switchThrottle", (int)(&((idMultiplayerGame *)0)->switchThrottle), sizeof( ((idMultiplayerGame *)0)->switchThrottle ) },
	{ "int", "voiceChatThrottle", (int)(&((idMultiplayerGame *)0)->voiceChatThrottle), sizeof( ((idMultiplayerGame *)0)->voiceChatThrottle ) },
	{ "gameType_t", "lastGameType", (int)(&((idMultiplayerGame *)0)->lastGameType), sizeof( ((idMultiplayerGame *)0)->lastGameType ) },
	{ "int", "startFragLimit", (int)(&((idMultiplayerGame *)0)->startFragLimit), sizeof( ((idMultiplayerGame *)0)->startFragLimit ) },
	{ NULL, 0 }
};

static classVariableInfo_t entityState_t_typeInfo[] = {
	{ "int", "entityNumber", (int)(&((entityState_t *)0)->entityNumber), sizeof( ((entityState_t *)0)->entityNumber ) },
	{ "idBitMsg", "state", (int)(&((entityState_t *)0)->state), sizeof( ((entityState_t *)0)->state ) },
	{ "byte[512]", "stateBuf", (int)(&((entityState_t *)0)->stateBuf), sizeof( ((entityState_t *)0)->stateBuf ) },
	{ "entityState_s *", "next", (int)(&((entityState_t *)0)->next), sizeof( ((entityState_t *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t snapshot_t_typeInfo[] = {
	{ "int", "sequence", (int)(&((snapshot_t *)0)->sequence), sizeof( ((snapshot_t *)0)->sequence ) },
	{ "entityState_t *", "firstEntityState", (int)(&((snapshot_t *)0)->firstEntityState), sizeof( ((snapshot_t *)0)->firstEntityState ) },
	{ "int[128]", "pvs", (int)(&((snapshot_t *)0)->pvs), sizeof( ((snapshot_t *)0)->pvs ) },
	{ "snapshot_s *", "next", (int)(&((snapshot_t *)0)->next), sizeof( ((snapshot_t *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t entityNetEvent_t_typeInfo[] = {
	{ "int", "spawnId", (int)(&((entityNetEvent_t *)0)->spawnId), sizeof( ((entityNetEvent_t *)0)->spawnId ) },
	{ "int", "event", (int)(&((entityNetEvent_t *)0)->event), sizeof( ((entityNetEvent_t *)0)->event ) },
	{ "int", "time", (int)(&((entityNetEvent_t *)0)->time), sizeof( ((entityNetEvent_t *)0)->time ) },
	{ "int", "paramsSize", (int)(&((entityNetEvent_t *)0)->paramsSize), sizeof( ((entityNetEvent_t *)0)->paramsSize ) },
	{ "byte[128]", "paramsBuf", (int)(&((entityNetEvent_t *)0)->paramsBuf), sizeof( ((entityNetEvent_t *)0)->paramsBuf ) },
	{ "entityNetEvent_s *", "next", (int)(&((entityNetEvent_t *)0)->next), sizeof( ((entityNetEvent_t *)0)->next ) },
	{ "entityNetEvent_s *", "prev", (int)(&((entityNetEvent_t *)0)->prev), sizeof( ((entityNetEvent_t *)0)->prev ) },
	{ NULL, 0 }
};

static classVariableInfo_t spawnSpot_t_typeInfo[] = {
	{ "idEntity *", "ent", (int)(&((spawnSpot_t *)0)->ent), sizeof( ((spawnSpot_t *)0)->ent ) },
	{ "int", "dist", (int)(&((spawnSpot_t *)0)->dist), sizeof( ((spawnSpot_t *)0)->dist ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEventQueue_typeInfo[] = {
	{ "entityNetEvent_t *", "start", (int)(&((idEventQueue *)0)->start), sizeof( ((idEventQueue *)0)->start ) },
	{ "entityNetEvent_t *", "end", (int)(&((idEventQueue *)0)->end), sizeof( ((idEventQueue *)0)->end ) },
	{ "idBlockAlloc < entityNetEvent_t , 32 >", "eventAllocator", (int)(&((idEventQueue *)0)->eventAllocator), sizeof( ((idEventQueue *)0)->eventAllocator ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEntityPtr_class_type__typeInfo[] = {
//	{ "int", "spawnId", (int)(&((idEntityPtr< class type > *)0)->spawnId), sizeof( ((idEntityPtr< class type > *)0)->spawnId ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGameLocal_typeInfo[] = {
	{ "idDict", "serverInfo", (int)(&((idGameLocal *)0)->serverInfo), sizeof( ((idGameLocal *)0)->serverInfo ) },
	{ "int", "numClients", (int)(&((idGameLocal *)0)->numClients), sizeof( ((idGameLocal *)0)->numClients ) },
	{ "idDict[32]", "userInfo", (int)(&((idGameLocal *)0)->userInfo), sizeof( ((idGameLocal *)0)->userInfo ) },
	{ "usercmd_t[32]", "usercmds", (int)(&((idGameLocal *)0)->usercmds), sizeof( ((idGameLocal *)0)->usercmds ) },
	{ "idDict[32]", "persistentPlayerInfo", (int)(&((idGameLocal *)0)->persistentPlayerInfo), sizeof( ((idGameLocal *)0)->persistentPlayerInfo ) },
	{ "idEntity *[4096]", "entities", (int)(&((idGameLocal *)0)->entities), sizeof( ((idGameLocal *)0)->entities ) },
	{ "int[4096]", "spawnIds", (int)(&((idGameLocal *)0)->spawnIds), sizeof( ((idGameLocal *)0)->spawnIds ) },
	{ "int", "firstFreeIndex", (int)(&((idGameLocal *)0)->firstFreeIndex), sizeof( ((idGameLocal *)0)->firstFreeIndex ) },
	{ "int", "num_entities", (int)(&((idGameLocal *)0)->num_entities), sizeof( ((idGameLocal *)0)->num_entities ) },
	{ "idHashIndex", "entityHash", (int)(&((idGameLocal *)0)->entityHash), sizeof( ((idGameLocal *)0)->entityHash ) },
	{ "idWorldspawn *", "world", (int)(&((idGameLocal *)0)->world), sizeof( ((idGameLocal *)0)->world ) },
	{ "idLinkList < idEntity >", "spawnedEntities", (int)(&((idGameLocal *)0)->spawnedEntities), sizeof( ((idGameLocal *)0)->spawnedEntities ) },
	{ "idLinkList < idEntity >", "activeEntities", (int)(&((idGameLocal *)0)->activeEntities), sizeof( ((idGameLocal *)0)->activeEntities ) },
	{ "int", "numEntitiesToDeactivate", (int)(&((idGameLocal *)0)->numEntitiesToDeactivate), sizeof( ((idGameLocal *)0)->numEntitiesToDeactivate ) },
	{ "bool", "sortPushers", (int)(&((idGameLocal *)0)->sortPushers), sizeof( ((idGameLocal *)0)->sortPushers ) },
	{ "bool", "sortTeamMasters", (int)(&((idGameLocal *)0)->sortTeamMasters), sizeof( ((idGameLocal *)0)->sortTeamMasters ) },
	{ "idDict", "persistentLevelInfo", (int)(&((idGameLocal *)0)->persistentLevelInfo), sizeof( ((idGameLocal *)0)->persistentLevelInfo ) },
	{ "float[12]", "globalShaderParms", (int)(&((idGameLocal *)0)->globalShaderParms), sizeof( ((idGameLocal *)0)->globalShaderParms ) },
	{ "idRandom", "random", (int)(&((idGameLocal *)0)->random), sizeof( ((idGameLocal *)0)->random ) },
	{ "idProgram", "program", (int)(&((idGameLocal *)0)->program), sizeof( ((idGameLocal *)0)->program ) },
	{ "idThread *", "frameCommandThread", (int)(&((idGameLocal *)0)->frameCommandThread), sizeof( ((idGameLocal *)0)->frameCommandThread ) },
	{ "idClip", "clip", (int)(&((idGameLocal *)0)->clip), sizeof( ((idGameLocal *)0)->clip ) },
	{ "idPush", "push", (int)(&((idGameLocal *)0)->push), sizeof( ((idGameLocal *)0)->push ) },
	{ "idPVS", "pvs", (int)(&((idGameLocal *)0)->pvs), sizeof( ((idGameLocal *)0)->pvs ) },
	{ "idTestModel *", "testmodel", (int)(&((idGameLocal *)0)->testmodel), sizeof( ((idGameLocal *)0)->testmodel ) },
	{ "idEntityFx *", "testFx", (int)(&((idGameLocal *)0)->testFx), sizeof( ((idGameLocal *)0)->testFx ) },
	{ "idStr", "sessionCommand", (int)(&((idGameLocal *)0)->sessionCommand), sizeof( ((idGameLocal *)0)->sessionCommand ) },
	{ "idMultiplayerGame", "mpGame", (int)(&((idGameLocal *)0)->mpGame), sizeof( ((idGameLocal *)0)->mpGame ) },
	{ "idSmokeParticles *", "smokeParticles", (int)(&((idGameLocal *)0)->smokeParticles), sizeof( ((idGameLocal *)0)->smokeParticles ) },
	{ "idEditEntities *", "editEntities", (int)(&((idGameLocal *)0)->editEntities), sizeof( ((idGameLocal *)0)->editEntities ) },
	{ "int", "cinematicSkipTime", (int)(&((idGameLocal *)0)->cinematicSkipTime), sizeof( ((idGameLocal *)0)->cinematicSkipTime ) },
	{ "int", "cinematicStopTime", (int)(&((idGameLocal *)0)->cinematicStopTime), sizeof( ((idGameLocal *)0)->cinematicStopTime ) },
	{ "int", "cinematicMaxSkipTime", (int)(&((idGameLocal *)0)->cinematicMaxSkipTime), sizeof( ((idGameLocal *)0)->cinematicMaxSkipTime ) },
	{ "bool", "inCinematic", (int)(&((idGameLocal *)0)->inCinematic), sizeof( ((idGameLocal *)0)->inCinematic ) },
	{ "bool", "skipCinematic", (int)(&((idGameLocal *)0)->skipCinematic), sizeof( ((idGameLocal *)0)->skipCinematic ) },
	{ "int", "framenum", (int)(&((idGameLocal *)0)->framenum), sizeof( ((idGameLocal *)0)->framenum ) },
	{ "int", "previousTime", (int)(&((idGameLocal *)0)->previousTime), sizeof( ((idGameLocal *)0)->previousTime ) },
	{ "int", "time", (int)(&((idGameLocal *)0)->time), sizeof( ((idGameLocal *)0)->time ) },
	{ "int", "vacuumAreaNum", (int)(&((idGameLocal *)0)->vacuumAreaNum), sizeof( ((idGameLocal *)0)->vacuumAreaNum ) },
	{ "gameType_t", "gameType", (int)(&((idGameLocal *)0)->gameType), sizeof( ((idGameLocal *)0)->gameType ) },
	{ "bool", "isMultiplayer", (int)(&((idGameLocal *)0)->isMultiplayer), sizeof( ((idGameLocal *)0)->isMultiplayer ) },
	{ "bool", "isServer", (int)(&((idGameLocal *)0)->isServer), sizeof( ((idGameLocal *)0)->isServer ) },
	{ "bool", "isClient", (int)(&((idGameLocal *)0)->isClient), sizeof( ((idGameLocal *)0)->isClient ) },
	{ "int", "localClientNum", (int)(&((idGameLocal *)0)->localClientNum), sizeof( ((idGameLocal *)0)->localClientNum ) },
	{ "idLinkList < idEntity >", "snapshotEntities", (int)(&((idGameLocal *)0)->snapshotEntities), sizeof( ((idGameLocal *)0)->snapshotEntities ) },
	{ "int", "realClientTime", (int)(&((idGameLocal *)0)->realClientTime), sizeof( ((idGameLocal *)0)->realClientTime ) },
	{ "bool", "isNewFrame", (int)(&((idGameLocal *)0)->isNewFrame), sizeof( ((idGameLocal *)0)->isNewFrame ) },
	{ "float", "clientSmoothing", (int)(&((idGameLocal *)0)->clientSmoothing), sizeof( ((idGameLocal *)0)->clientSmoothing ) },
	{ "int", "entityDefBits", (int)(&((idGameLocal *)0)->entityDefBits), sizeof( ((idGameLocal *)0)->entityDefBits ) },
	{ "idEntityPtr < idEntity >", "lastGUIEnt", (int)(&((idGameLocal *)0)->lastGUIEnt), sizeof( ((idGameLocal *)0)->lastGUIEnt ) },
	{ "int", "lastGUI", (int)(&((idGameLocal *)0)->lastGUI), sizeof( ((idGameLocal *)0)->lastGUI ) },
	{ "idStr", "mapFileName", (int)(&((idGameLocal *)0)->mapFileName), sizeof( ((idGameLocal *)0)->mapFileName ) },
	{ "idMapFile *", "mapFile", (int)(&((idGameLocal *)0)->mapFile), sizeof( ((idGameLocal *)0)->mapFile ) },
	{ "bool", "mapCycleLoaded", (int)(&((idGameLocal *)0)->mapCycleLoaded), sizeof( ((idGameLocal *)0)->mapCycleLoaded ) },
	{ "int", "spawnCount", (int)(&((idGameLocal *)0)->spawnCount), sizeof( ((idGameLocal *)0)->spawnCount ) },
	{ "int", "mapSpawnCount", (int)(&((idGameLocal *)0)->mapSpawnCount), sizeof( ((idGameLocal *)0)->mapSpawnCount ) },
	{ "idLocationEntity * *", "locationEntities", (int)(&((idGameLocal *)0)->locationEntities), sizeof( ((idGameLocal *)0)->locationEntities ) },
	{ "idCamera *", "camera", (int)(&((idGameLocal *)0)->camera), sizeof( ((idGameLocal *)0)->camera ) },
	{ "const idMaterial *", "globalMaterial", (int)(&((idGameLocal *)0)->globalMaterial), sizeof( ((idGameLocal *)0)->globalMaterial ) },
	{ "idList < idAAS * >", "aasList", (int)(&((idGameLocal *)0)->aasList), sizeof( ((idGameLocal *)0)->aasList ) },
	{ "idStrList", "aasNames", (int)(&((idGameLocal *)0)->aasNames), sizeof( ((idGameLocal *)0)->aasNames ) },
	{ "idEntityPtr < idActor >", "lastAIAlertEntity", (int)(&((idGameLocal *)0)->lastAIAlertEntity), sizeof( ((idGameLocal *)0)->lastAIAlertEntity ) },
	{ "int", "lastAIAlertTime", (int)(&((idGameLocal *)0)->lastAIAlertTime), sizeof( ((idGameLocal *)0)->lastAIAlertTime ) },
	{ "idDict", "spawnArgs", (int)(&((idGameLocal *)0)->spawnArgs), sizeof( ((idGameLocal *)0)->spawnArgs ) },
	{ "pvsHandle_t", "playerPVS", (int)(&((idGameLocal *)0)->playerPVS), sizeof( ((idGameLocal *)0)->playerPVS ) },
	{ "pvsHandle_t", "playerConnectedAreas", (int)(&((idGameLocal *)0)->playerConnectedAreas), sizeof( ((idGameLocal *)0)->playerConnectedAreas ) },
	{ "idVec3", "gravity", (int)(&((idGameLocal *)0)->gravity), sizeof( ((idGameLocal *)0)->gravity ) },
	{ "gameState_t", "gamestate", (int)(&((idGameLocal *)0)->gamestate), sizeof( ((idGameLocal *)0)->gamestate ) },
	{ "bool", "influenceActive", (int)(&((idGameLocal *)0)->influenceActive), sizeof( ((idGameLocal *)0)->influenceActive ) },
	{ "int", "nextGibTime", (int)(&((idGameLocal *)0)->nextGibTime), sizeof( ((idGameLocal *)0)->nextGibTime ) },
	{ "idList < int >[1024]", "clientDeclRemap", (int)(&((idGameLocal *)0)->clientDeclRemap), sizeof( ((idGameLocal *)0)->clientDeclRemap ) },
	{ "entityState_t *[131072]", "clientEntityStates", (int)(&((idGameLocal *)0)->clientEntityStates), sizeof( ((idGameLocal *)0)->clientEntityStates ) },
	{ "int[4096]", "clientPVS", (int)(&((idGameLocal *)0)->clientPVS), sizeof( ((idGameLocal *)0)->clientPVS ) },
	{ "snapshot_t *[32]", "clientSnapshots", (int)(&((idGameLocal *)0)->clientSnapshots), sizeof( ((idGameLocal *)0)->clientSnapshots ) },
	{ "idBlockAlloc < entityState_t , 256 >", "entityStateAllocator", (int)(&((idGameLocal *)0)->entityStateAllocator), sizeof( ((idGameLocal *)0)->entityStateAllocator ) },
	{ "idBlockAlloc < snapshot_t , 64 >", "snapshotAllocator", (int)(&((idGameLocal *)0)->snapshotAllocator), sizeof( ((idGameLocal *)0)->snapshotAllocator ) },
	{ "idEventQueue", "eventQueue", (int)(&((idGameLocal *)0)->eventQueue), sizeof( ((idGameLocal *)0)->eventQueue ) },
	{ "idEventQueue", "savedEventQueue", (int)(&((idGameLocal *)0)->savedEventQueue), sizeof( ((idGameLocal *)0)->savedEventQueue ) },
	{ "idStaticList < spawnSpot_t , ( 1 << 12 ) >", "spawnSpots", (int)(&((idGameLocal *)0)->spawnSpots), sizeof( ((idGameLocal *)0)->spawnSpots ) },
	{ "idStaticList < idEntity * , ( 1 << 12 ) >", "initialSpots", (int)(&((idGameLocal *)0)->initialSpots), sizeof( ((idGameLocal *)0)->initialSpots ) },
	{ "int", "currentInitialSpot", (int)(&((idGameLocal *)0)->currentInitialSpot), sizeof( ((idGameLocal *)0)->currentInitialSpot ) },
	{ "idDict", "newInfo", (int)(&((idGameLocal *)0)->newInfo), sizeof( ((idGameLocal *)0)->newInfo ) },
	{ "idStrList", "shakeSounds", (int)(&((idGameLocal *)0)->shakeSounds), sizeof( ((idGameLocal *)0)->shakeSounds ) },
	{ "byte[16384]", "lagometer", (int)(&((idGameLocal *)0)->lagometer), sizeof( ((idGameLocal *)0)->lagometer ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGameError_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idForce_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idForce_Constant_typeInfo[] = {
	{ "idVec3", "force", (int)(&((idForce_Constant *)0)->force), sizeof( ((idForce_Constant *)0)->force ) },
	{ "idPhysics *", "physics", (int)(&((idForce_Constant *)0)->physics), sizeof( ((idForce_Constant *)0)->physics ) },
	{ "int", "id", (int)(&((idForce_Constant *)0)->id), sizeof( ((idForce_Constant *)0)->id ) },
	{ "idVec3", "point", (int)(&((idForce_Constant *)0)->point), sizeof( ((idForce_Constant *)0)->point ) },
	{ NULL, 0 }
};

static classVariableInfo_t idForce_Drag_typeInfo[] = {
	{ "float", "damping", (int)(&((idForce_Drag *)0)->damping), sizeof( ((idForce_Drag *)0)->damping ) },
	{ "idPhysics *", "physics", (int)(&((idForce_Drag *)0)->physics), sizeof( ((idForce_Drag *)0)->physics ) },
	{ "int", "id", (int)(&((idForce_Drag *)0)->id), sizeof( ((idForce_Drag *)0)->id ) },
	{ "idVec3", "p", (int)(&((idForce_Drag *)0)->p), sizeof( ((idForce_Drag *)0)->p ) },
	{ "idVec3", "dragPosition", (int)(&((idForce_Drag *)0)->dragPosition), sizeof( ((idForce_Drag *)0)->dragPosition ) },
	{ NULL, 0 }
};

static classVariableInfo_t idForce_Field_typeInfo[] = {
	{ "forceFieldType", "type", (int)(&((idForce_Field *)0)->type), sizeof( ((idForce_Field *)0)->type ) },
	{ "forceFieldApplyType", "applyType", (int)(&((idForce_Field *)0)->applyType), sizeof( ((idForce_Field *)0)->applyType ) },
	{ "float", "magnitude", (int)(&((idForce_Field *)0)->magnitude), sizeof( ((idForce_Field *)0)->magnitude ) },
	{ "idVec3", "dir", (int)(&((idForce_Field *)0)->dir), sizeof( ((idForce_Field *)0)->dir ) },
	{ "float", "randomTorque", (int)(&((idForce_Field *)0)->randomTorque), sizeof( ((idForce_Field *)0)->randomTorque ) },
	{ "bool", "playerOnly", (int)(&((idForce_Field *)0)->playerOnly), sizeof( ((idForce_Field *)0)->playerOnly ) },
	{ "bool", "monsterOnly", (int)(&((idForce_Field *)0)->monsterOnly), sizeof( ((idForce_Field *)0)->monsterOnly ) },
	{ "idClipModel *", "clipModel", (int)(&((idForce_Field *)0)->clipModel), sizeof( ((idForce_Field *)0)->clipModel ) },
	{ NULL, 0 }
};

static classVariableInfo_t idForce_Spring_typeInfo[] = {
	{ "float", "Kstretch", (int)(&((idForce_Spring *)0)->Kstretch), sizeof( ((idForce_Spring *)0)->Kstretch ) },
	{ "float", "Kcompress", (int)(&((idForce_Spring *)0)->Kcompress), sizeof( ((idForce_Spring *)0)->Kcompress ) },
	{ "float", "damping", (int)(&((idForce_Spring *)0)->damping), sizeof( ((idForce_Spring *)0)->damping ) },
	{ "float", "restLength", (int)(&((idForce_Spring *)0)->restLength), sizeof( ((idForce_Spring *)0)->restLength ) },
	{ "idPhysics *", "physics1", (int)(&((idForce_Spring *)0)->physics1), sizeof( ((idForce_Spring *)0)->physics1 ) },
	{ "int", "id1", (int)(&((idForce_Spring *)0)->id1), sizeof( ((idForce_Spring *)0)->id1 ) },
	{ "idVec3", "p1", (int)(&((idForce_Spring *)0)->p1), sizeof( ((idForce_Spring *)0)->p1 ) },
	{ "idPhysics *", "physics2", (int)(&((idForce_Spring *)0)->physics2), sizeof( ((idForce_Spring *)0)->physics2 ) },
	{ "int", "id2", (int)(&((idForce_Spring *)0)->id2), sizeof( ((idForce_Spring *)0)->id2 ) },
	{ "idVec3", "p2", (int)(&((idForce_Spring *)0)->p2), sizeof( ((idForce_Spring *)0)->p2 ) },
	{ NULL, 0 }
};

static classVariableInfo_t impactInfo_t_typeInfo[] = {
	{ "float", "invMass", (int)(&((impactInfo_t *)0)->invMass), sizeof( ((impactInfo_t *)0)->invMass ) },
	{ "idMat3", "invInertiaTensor", (int)(&((impactInfo_t *)0)->invInertiaTensor), sizeof( ((impactInfo_t *)0)->invInertiaTensor ) },
	{ "idVec3", "position", (int)(&((impactInfo_t *)0)->position), sizeof( ((impactInfo_t *)0)->position ) },
	{ "idVec3", "velocity", (int)(&((impactInfo_t *)0)->velocity), sizeof( ((impactInfo_t *)0)->velocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t staticPState_t_typeInfo[] = {
	{ "idVec3", "origin", (int)(&((staticPState_t *)0)->origin), sizeof( ((staticPState_t *)0)->origin ) },
	{ "idMat3", "axis", (int)(&((staticPState_t *)0)->axis), sizeof( ((staticPState_t *)0)->axis ) },
	{ "idVec3", "localOrigin", (int)(&((staticPState_t *)0)->localOrigin), sizeof( ((staticPState_t *)0)->localOrigin ) },
	{ "idMat3", "localAxis", (int)(&((staticPState_t *)0)->localAxis), sizeof( ((staticPState_t *)0)->localAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Static_typeInfo[] = {
	{ "idEntity *", "self", (int)(&((idPhysics_Static *)0)->self), sizeof( ((idPhysics_Static *)0)->self ) },
	{ "staticPState_t", "current", (int)(&((idPhysics_Static *)0)->current), sizeof( ((idPhysics_Static *)0)->current ) },
	{ "idClipModel *", "clipModel", (int)(&((idPhysics_Static *)0)->clipModel), sizeof( ((idPhysics_Static *)0)->clipModel ) },
	{ "bool", "hasMaster", (int)(&((idPhysics_Static *)0)->hasMaster), sizeof( ((idPhysics_Static *)0)->hasMaster ) },
	{ "bool", "isOrientated", (int)(&((idPhysics_Static *)0)->isOrientated), sizeof( ((idPhysics_Static *)0)->isOrientated ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_StaticMulti_typeInfo[] = {
	{ "idEntity *", "self", (int)(&((idPhysics_StaticMulti *)0)->self), sizeof( ((idPhysics_StaticMulti *)0)->self ) },
	{ "idList < staticPState_t >", "current", (int)(&((idPhysics_StaticMulti *)0)->current), sizeof( ((idPhysics_StaticMulti *)0)->current ) },
	{ "idList < idClipModel * >", "clipModels", (int)(&((idPhysics_StaticMulti *)0)->clipModels), sizeof( ((idPhysics_StaticMulti *)0)->clipModels ) },
	{ "bool", "hasMaster", (int)(&((idPhysics_StaticMulti *)0)->hasMaster), sizeof( ((idPhysics_StaticMulti *)0)->hasMaster ) },
	{ "bool", "isOrientated", (int)(&((idPhysics_StaticMulti *)0)->isOrientated), sizeof( ((idPhysics_StaticMulti *)0)->isOrientated ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Base_typeInfo[] = {
	{ "idEntity *", "self", (int)(&((idPhysics_Base *)0)->self), sizeof( ((idPhysics_Base *)0)->self ) },
	{ "int", "clipMask", (int)(&((idPhysics_Base *)0)->clipMask), sizeof( ((idPhysics_Base *)0)->clipMask ) },
	{ "idVec3", "gravityVector", (int)(&((idPhysics_Base *)0)->gravityVector), sizeof( ((idPhysics_Base *)0)->gravityVector ) },
	{ "idVec3", "gravityNormal", (int)(&((idPhysics_Base *)0)->gravityNormal), sizeof( ((idPhysics_Base *)0)->gravityNormal ) },
	{ "idList < contactInfo_t >", "contacts", (int)(&((idPhysics_Base *)0)->contacts), sizeof( ((idPhysics_Base *)0)->contacts ) },
	{ "idList < idEntityPtr < idEntity > >", "contactEntities", (int)(&((idPhysics_Base *)0)->contactEntities), sizeof( ((idPhysics_Base *)0)->contactEntities ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Actor_typeInfo[] = {
	{ "idClipModel *", "clipModel", (int)(&((idPhysics_Actor *)0)->clipModel), sizeof( ((idPhysics_Actor *)0)->clipModel ) },
	{ "idMat3", "clipModelAxis", (int)(&((idPhysics_Actor *)0)->clipModelAxis), sizeof( ((idPhysics_Actor *)0)->clipModelAxis ) },
	{ "float", "mass", (int)(&((idPhysics_Actor *)0)->mass), sizeof( ((idPhysics_Actor *)0)->mass ) },
	{ "float", "invMass", (int)(&((idPhysics_Actor *)0)->invMass), sizeof( ((idPhysics_Actor *)0)->invMass ) },
	{ "idEntity *", "masterEntity", (int)(&((idPhysics_Actor *)0)->masterEntity), sizeof( ((idPhysics_Actor *)0)->masterEntity ) },
	{ "float", "masterYaw", (int)(&((idPhysics_Actor *)0)->masterYaw), sizeof( ((idPhysics_Actor *)0)->masterYaw ) },
	{ "float", "masterDeltaYaw", (int)(&((idPhysics_Actor *)0)->masterDeltaYaw), sizeof( ((idPhysics_Actor *)0)->masterDeltaYaw ) },
	{ "idEntityPtr < idEntity >", "groundEntityPtr", (int)(&((idPhysics_Actor *)0)->groundEntityPtr), sizeof( ((idPhysics_Actor *)0)->groundEntityPtr ) },
	{ NULL, 0 }
};

static classVariableInfo_t monsterPState_t_typeInfo[] = {
	{ "int", "atRest", (int)(&((monsterPState_t *)0)->atRest), sizeof( ((monsterPState_t *)0)->atRest ) },
	{ "bool", "onGround", (int)(&((monsterPState_t *)0)->onGround), sizeof( ((monsterPState_t *)0)->onGround ) },
	{ "idVec3", "origin", (int)(&((monsterPState_t *)0)->origin), sizeof( ((monsterPState_t *)0)->origin ) },
	{ "idVec3", "velocity", (int)(&((monsterPState_t *)0)->velocity), sizeof( ((monsterPState_t *)0)->velocity ) },
	{ "idVec3", "localOrigin", (int)(&((monsterPState_t *)0)->localOrigin), sizeof( ((monsterPState_t *)0)->localOrigin ) },
	{ "idVec3", "pushVelocity", (int)(&((monsterPState_t *)0)->pushVelocity), sizeof( ((monsterPState_t *)0)->pushVelocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Monster_typeInfo[] = {
	{ "monsterPState_t", "current", (int)(&((idPhysics_Monster *)0)->current), sizeof( ((idPhysics_Monster *)0)->current ) },
	{ "monsterPState_t", "saved", (int)(&((idPhysics_Monster *)0)->saved), sizeof( ((idPhysics_Monster *)0)->saved ) },
	{ "float", "maxStepHeight", (int)(&((idPhysics_Monster *)0)->maxStepHeight), sizeof( ((idPhysics_Monster *)0)->maxStepHeight ) },
	{ "float", "minFloorCosine", (int)(&((idPhysics_Monster *)0)->minFloorCosine), sizeof( ((idPhysics_Monster *)0)->minFloorCosine ) },
	{ "idVec3", "delta", (int)(&((idPhysics_Monster *)0)->delta), sizeof( ((idPhysics_Monster *)0)->delta ) },
	{ "bool", "forceDeltaMove", (int)(&((idPhysics_Monster *)0)->forceDeltaMove), sizeof( ((idPhysics_Monster *)0)->forceDeltaMove ) },
	{ "bool", "fly", (int)(&((idPhysics_Monster *)0)->fly), sizeof( ((idPhysics_Monster *)0)->fly ) },
	{ "bool", "useVelocityMove", (int)(&((idPhysics_Monster *)0)->useVelocityMove), sizeof( ((idPhysics_Monster *)0)->useVelocityMove ) },
	{ "bool", "noImpact", (int)(&((idPhysics_Monster *)0)->noImpact), sizeof( ((idPhysics_Monster *)0)->noImpact ) },
	{ "monsterMoveResult_t", "moveResult", (int)(&((idPhysics_Monster *)0)->moveResult), sizeof( ((idPhysics_Monster *)0)->moveResult ) },
	{ "idEntity *", "blockingEntity", (int)(&((idPhysics_Monster *)0)->blockingEntity), sizeof( ((idPhysics_Monster *)0)->blockingEntity ) },
	{ NULL, 0 }
};

static classVariableInfo_t playerPState_t_typeInfo[] = {
	{ "idVec3", "origin", (int)(&((playerPState_t *)0)->origin), sizeof( ((playerPState_t *)0)->origin ) },
	{ "idVec3", "velocity", (int)(&((playerPState_t *)0)->velocity), sizeof( ((playerPState_t *)0)->velocity ) },
	{ "idVec3", "localOrigin", (int)(&((playerPState_t *)0)->localOrigin), sizeof( ((playerPState_t *)0)->localOrigin ) },
	{ "idVec3", "pushVelocity", (int)(&((playerPState_t *)0)->pushVelocity), sizeof( ((playerPState_t *)0)->pushVelocity ) },
	{ "float", "stepUp", (int)(&((playerPState_t *)0)->stepUp), sizeof( ((playerPState_t *)0)->stepUp ) },
	{ "int", "movementType", (int)(&((playerPState_t *)0)->movementType), sizeof( ((playerPState_t *)0)->movementType ) },
	{ "int", "movementFlags", (int)(&((playerPState_t *)0)->movementFlags), sizeof( ((playerPState_t *)0)->movementFlags ) },
	{ "int", "movementTime", (int)(&((playerPState_t *)0)->movementTime), sizeof( ((playerPState_t *)0)->movementTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Player_typeInfo[] = {
	{ "playerPState_t", "current", (int)(&((idPhysics_Player *)0)->current), sizeof( ((idPhysics_Player *)0)->current ) },
	{ "playerPState_t", "saved", (int)(&((idPhysics_Player *)0)->saved), sizeof( ((idPhysics_Player *)0)->saved ) },
	{ "float", "walkSpeed", (int)(&((idPhysics_Player *)0)->walkSpeed), sizeof( ((idPhysics_Player *)0)->walkSpeed ) },
	{ "float", "crouchSpeed", (int)(&((idPhysics_Player *)0)->crouchSpeed), sizeof( ((idPhysics_Player *)0)->crouchSpeed ) },
	{ "float", "maxStepHeight", (int)(&((idPhysics_Player *)0)->maxStepHeight), sizeof( ((idPhysics_Player *)0)->maxStepHeight ) },
	{ "float", "maxJumpHeight", (int)(&((idPhysics_Player *)0)->maxJumpHeight), sizeof( ((idPhysics_Player *)0)->maxJumpHeight ) },
	{ "int", "debugLevel", (int)(&((idPhysics_Player *)0)->debugLevel), sizeof( ((idPhysics_Player *)0)->debugLevel ) },
	{ "usercmd_t", "command", (int)(&((idPhysics_Player *)0)->command), sizeof( ((idPhysics_Player *)0)->command ) },
	{ "idAngles", "viewAngles", (int)(&((idPhysics_Player *)0)->viewAngles), sizeof( ((idPhysics_Player *)0)->viewAngles ) },
	{ "int", "framemsec", (int)(&((idPhysics_Player *)0)->framemsec), sizeof( ((idPhysics_Player *)0)->framemsec ) },
	{ "float", "frametime", (int)(&((idPhysics_Player *)0)->frametime), sizeof( ((idPhysics_Player *)0)->frametime ) },
	{ "float", "playerSpeed", (int)(&((idPhysics_Player *)0)->playerSpeed), sizeof( ((idPhysics_Player *)0)->playerSpeed ) },
	{ "idVec3", "viewForward", (int)(&((idPhysics_Player *)0)->viewForward), sizeof( ((idPhysics_Player *)0)->viewForward ) },
	{ "idVec3", "viewRight", (int)(&((idPhysics_Player *)0)->viewRight), sizeof( ((idPhysics_Player *)0)->viewRight ) },
	{ "bool", "walking", (int)(&((idPhysics_Player *)0)->walking), sizeof( ((idPhysics_Player *)0)->walking ) },
	{ "bool", "groundPlane", (int)(&((idPhysics_Player *)0)->groundPlane), sizeof( ((idPhysics_Player *)0)->groundPlane ) },
	{ "trace_t", "groundTrace", (int)(&((idPhysics_Player *)0)->groundTrace), sizeof( ((idPhysics_Player *)0)->groundTrace ) },
	{ "const idMaterial *", "groundMaterial", (int)(&((idPhysics_Player *)0)->groundMaterial), sizeof( ((idPhysics_Player *)0)->groundMaterial ) },
	{ "bool", "ladder", (int)(&((idPhysics_Player *)0)->ladder), sizeof( ((idPhysics_Player *)0)->ladder ) },
	{ "idVec3", "ladderNormal", (int)(&((idPhysics_Player *)0)->ladderNormal), sizeof( ((idPhysics_Player *)0)->ladderNormal ) },
	{ "waterLevel_t", "waterLevel", (int)(&((idPhysics_Player *)0)->waterLevel), sizeof( ((idPhysics_Player *)0)->waterLevel ) },
	{ "int", "waterType", (int)(&((idPhysics_Player *)0)->waterType), sizeof( ((idPhysics_Player *)0)->waterType ) },
	{ NULL, 0 }
};

static classVariableInfo_t parametricPState_t_typeInfo[] = {
	{ "int", "time", (int)(&((parametricPState_t *)0)->time), sizeof( ((parametricPState_t *)0)->time ) },
	{ "int", "atRest", (int)(&((parametricPState_t *)0)->atRest), sizeof( ((parametricPState_t *)0)->atRest ) },
	{ "idVec3", "origin", (int)(&((parametricPState_t *)0)->origin), sizeof( ((parametricPState_t *)0)->origin ) },
	{ "idAngles", "angles", (int)(&((parametricPState_t *)0)->angles), sizeof( ((parametricPState_t *)0)->angles ) },
	{ "idMat3", "axis", (int)(&((parametricPState_t *)0)->axis), sizeof( ((parametricPState_t *)0)->axis ) },
	{ "idVec3", "localOrigin", (int)(&((parametricPState_t *)0)->localOrigin), sizeof( ((parametricPState_t *)0)->localOrigin ) },
	{ "idAngles", "localAngles", (int)(&((parametricPState_t *)0)->localAngles), sizeof( ((parametricPState_t *)0)->localAngles ) },
	{ "idExtrapolate < idVec3 >", "linearExtrapolation", (int)(&((parametricPState_t *)0)->linearExtrapolation), sizeof( ((parametricPState_t *)0)->linearExtrapolation ) },
	{ "idExtrapolate < idAngles >", "angularExtrapolation", (int)(&((parametricPState_t *)0)->angularExtrapolation), sizeof( ((parametricPState_t *)0)->angularExtrapolation ) },
	{ "idInterpolateAccelDecelLinear < idVec3 >", "linearInterpolation", (int)(&((parametricPState_t *)0)->linearInterpolation), sizeof( ((parametricPState_t *)0)->linearInterpolation ) },
	{ "idInterpolateAccelDecelLinear < idAngles >", "angularInterpolation", (int)(&((parametricPState_t *)0)->angularInterpolation), sizeof( ((parametricPState_t *)0)->angularInterpolation ) },
	{ "idCurve_Spline < idVec3 > *", "spline", (int)(&((parametricPState_t *)0)->spline), sizeof( ((parametricPState_t *)0)->spline ) },
	{ "idInterpolateAccelDecelLinear < float >", "splineInterpolate", (int)(&((parametricPState_t *)0)->splineInterpolate), sizeof( ((parametricPState_t *)0)->splineInterpolate ) },
	{ "bool", "useSplineAngles", (int)(&((parametricPState_t *)0)->useSplineAngles), sizeof( ((parametricPState_t *)0)->useSplineAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Parametric_typeInfo[] = {
	{ "parametricPState_t", "current", (int)(&((idPhysics_Parametric *)0)->current), sizeof( ((idPhysics_Parametric *)0)->current ) },
	{ "parametricPState_t", "saved", (int)(&((idPhysics_Parametric *)0)->saved), sizeof( ((idPhysics_Parametric *)0)->saved ) },
	{ "bool", "isPusher", (int)(&((idPhysics_Parametric *)0)->isPusher), sizeof( ((idPhysics_Parametric *)0)->isPusher ) },
	{ "idClipModel *", "clipModel", (int)(&((idPhysics_Parametric *)0)->clipModel), sizeof( ((idPhysics_Parametric *)0)->clipModel ) },
	{ "int", "pushFlags", (int)(&((idPhysics_Parametric *)0)->pushFlags), sizeof( ((idPhysics_Parametric *)0)->pushFlags ) },
	{ "trace_t", "pushResults", (int)(&((idPhysics_Parametric *)0)->pushResults), sizeof( ((idPhysics_Parametric *)0)->pushResults ) },
	{ "bool", "isBlocked", (int)(&((idPhysics_Parametric *)0)->isBlocked), sizeof( ((idPhysics_Parametric *)0)->isBlocked ) },
	{ "bool", "hasMaster", (int)(&((idPhysics_Parametric *)0)->hasMaster), sizeof( ((idPhysics_Parametric *)0)->hasMaster ) },
	{ "bool", "isOrientated", (int)(&((idPhysics_Parametric *)0)->isOrientated), sizeof( ((idPhysics_Parametric *)0)->isOrientated ) },
	{ NULL, 0 }
};

static classVariableInfo_t rigidBodyIState_t_typeInfo[] = {
	{ "idVec3", "position", (int)(&((rigidBodyIState_t *)0)->position), sizeof( ((rigidBodyIState_t *)0)->position ) },
	{ "idMat3", "orientation", (int)(&((rigidBodyIState_t *)0)->orientation), sizeof( ((rigidBodyIState_t *)0)->orientation ) },
	{ "idVec3", "linearMomentum", (int)(&((rigidBodyIState_t *)0)->linearMomentum), sizeof( ((rigidBodyIState_t *)0)->linearMomentum ) },
	{ "idVec3", "angularMomentum", (int)(&((rigidBodyIState_t *)0)->angularMomentum), sizeof( ((rigidBodyIState_t *)0)->angularMomentum ) },
	{ NULL, 0 }
};

static classVariableInfo_t rigidBodyPState_t_typeInfo[] = {
	{ "int", "atRest", (int)(&((rigidBodyPState_t *)0)->atRest), sizeof( ((rigidBodyPState_t *)0)->atRest ) },
	{ "float", "lastTimeStep", (int)(&((rigidBodyPState_t *)0)->lastTimeStep), sizeof( ((rigidBodyPState_t *)0)->lastTimeStep ) },
	{ "idVec3", "localOrigin", (int)(&((rigidBodyPState_t *)0)->localOrigin), sizeof( ((rigidBodyPState_t *)0)->localOrigin ) },
	{ "idMat3", "localAxis", (int)(&((rigidBodyPState_t *)0)->localAxis), sizeof( ((rigidBodyPState_t *)0)->localAxis ) },
	{ "idVec6", "pushVelocity", (int)(&((rigidBodyPState_t *)0)->pushVelocity), sizeof( ((rigidBodyPState_t *)0)->pushVelocity ) },
	{ "idVec3", "externalForce", (int)(&((rigidBodyPState_t *)0)->externalForce), sizeof( ((rigidBodyPState_t *)0)->externalForce ) },
	{ "idVec3", "externalTorque", (int)(&((rigidBodyPState_t *)0)->externalTorque), sizeof( ((rigidBodyPState_t *)0)->externalTorque ) },
	{ "rigidBodyIState_t", "i", (int)(&((rigidBodyPState_t *)0)->i), sizeof( ((rigidBodyPState_t *)0)->i ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_RigidBody_typeInfo[] = {
	{ "rigidBodyPState_t", "current", (int)(&((idPhysics_RigidBody *)0)->current), sizeof( ((idPhysics_RigidBody *)0)->current ) },
	{ "rigidBodyPState_t", "saved", (int)(&((idPhysics_RigidBody *)0)->saved), sizeof( ((idPhysics_RigidBody *)0)->saved ) },
	{ "float", "linearFriction", (int)(&((idPhysics_RigidBody *)0)->linearFriction), sizeof( ((idPhysics_RigidBody *)0)->linearFriction ) },
	{ "float", "angularFriction", (int)(&((idPhysics_RigidBody *)0)->angularFriction), sizeof( ((idPhysics_RigidBody *)0)->angularFriction ) },
	{ "float", "contactFriction", (int)(&((idPhysics_RigidBody *)0)->contactFriction), sizeof( ((idPhysics_RigidBody *)0)->contactFriction ) },
	{ "float", "bouncyness", (int)(&((idPhysics_RigidBody *)0)->bouncyness), sizeof( ((idPhysics_RigidBody *)0)->bouncyness ) },
	{ "idClipModel *", "clipModel", (int)(&((idPhysics_RigidBody *)0)->clipModel), sizeof( ((idPhysics_RigidBody *)0)->clipModel ) },
	{ "float", "mass", (int)(&((idPhysics_RigidBody *)0)->mass), sizeof( ((idPhysics_RigidBody *)0)->mass ) },
	{ "float", "inverseMass", (int)(&((idPhysics_RigidBody *)0)->inverseMass), sizeof( ((idPhysics_RigidBody *)0)->inverseMass ) },
	{ "idVec3", "centerOfMass", (int)(&((idPhysics_RigidBody *)0)->centerOfMass), sizeof( ((idPhysics_RigidBody *)0)->centerOfMass ) },
	{ "idMat3", "inertiaTensor", (int)(&((idPhysics_RigidBody *)0)->inertiaTensor), sizeof( ((idPhysics_RigidBody *)0)->inertiaTensor ) },
	{ "idMat3", "inverseInertiaTensor", (int)(&((idPhysics_RigidBody *)0)->inverseInertiaTensor), sizeof( ((idPhysics_RigidBody *)0)->inverseInertiaTensor ) },
	{ "idODE *", "integrator", (int)(&((idPhysics_RigidBody *)0)->integrator), sizeof( ((idPhysics_RigidBody *)0)->integrator ) },
	{ "bool", "dropToFloor", (int)(&((idPhysics_RigidBody *)0)->dropToFloor), sizeof( ((idPhysics_RigidBody *)0)->dropToFloor ) },
	{ "bool", "testSolid", (int)(&((idPhysics_RigidBody *)0)->testSolid), sizeof( ((idPhysics_RigidBody *)0)->testSolid ) },
	{ "bool", "noImpact", (int)(&((idPhysics_RigidBody *)0)->noImpact), sizeof( ((idPhysics_RigidBody *)0)->noImpact ) },
	{ "bool", "noContact", (int)(&((idPhysics_RigidBody *)0)->noContact), sizeof( ((idPhysics_RigidBody *)0)->noContact ) },
	{ "bool", "hasMaster", (int)(&((idPhysics_RigidBody *)0)->hasMaster), sizeof( ((idPhysics_RigidBody *)0)->hasMaster ) },
	{ "bool", "isOrientated", (int)(&((idPhysics_RigidBody *)0)->isOrientated), sizeof( ((idPhysics_RigidBody *)0)->isOrientated ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_constraintFlags_s_typeInfo[] = {
//	{ "bool", "allowPrimary", (int)(&((idAFConstraint::constraintFlags_s *)0)->allowPrimary), sizeof( ((idAFConstraint::constraintFlags_s *)0)->allowPrimary ) },
//	{ "bool", "frameConstraint", (int)(&((idAFConstraint::constraintFlags_s *)0)->frameConstraint), sizeof( ((idAFConstraint::constraintFlags_s *)0)->frameConstraint ) },
//	{ "bool", "noCollision", (int)(&((idAFConstraint::constraintFlags_s *)0)->noCollision), sizeof( ((idAFConstraint::constraintFlags_s *)0)->noCollision ) },
//	{ "bool", "isPrimary", (int)(&((idAFConstraint::constraintFlags_s *)0)->isPrimary), sizeof( ((idAFConstraint::constraintFlags_s *)0)->isPrimary ) },
//	{ "bool", "isZero", (int)(&((idAFConstraint::constraintFlags_s *)0)->isZero), sizeof( ((idAFConstraint::constraintFlags_s *)0)->isZero ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_typeInfo[] = {
	{ "constraintType_t", "type", (int)(&((idAFConstraint *)0)->type), sizeof( ((idAFConstraint *)0)->type ) },
	{ "idStr", "name", (int)(&((idAFConstraint *)0)->name), sizeof( ((idAFConstraint *)0)->name ) },
	{ "idAFBody *", "body1", (int)(&((idAFConstraint *)0)->body1), sizeof( ((idAFConstraint *)0)->body1 ) },
	{ "idAFBody *", "body2", (int)(&((idAFConstraint *)0)->body2), sizeof( ((idAFConstraint *)0)->body2 ) },
	{ "idPhysics_AF *", "physics", (int)(&((idAFConstraint *)0)->physics), sizeof( ((idAFConstraint *)0)->physics ) },
	{ "idMatX", "J1", (int)(&((idAFConstraint *)0)->J1), sizeof( ((idAFConstraint *)0)->J1 ) },
	{ "idMatX", "J2", (int)(&((idAFConstraint *)0)->J2), sizeof( ((idAFConstraint *)0)->J2 ) },
	{ "idVecX", "c1", (int)(&((idAFConstraint *)0)->c1), sizeof( ((idAFConstraint *)0)->c1 ) },
	{ "idVecX", "c2", (int)(&((idAFConstraint *)0)->c2), sizeof( ((idAFConstraint *)0)->c2 ) },
	{ "idVecX", "lo", (int)(&((idAFConstraint *)0)->lo), sizeof( ((idAFConstraint *)0)->lo ) },
	{ "idVecX", "hi", (int)(&((idAFConstraint *)0)->hi), sizeof( ((idAFConstraint *)0)->hi ) },
	{ "idVecX", "e", (int)(&((idAFConstraint *)0)->e), sizeof( ((idAFConstraint *)0)->e ) },
	{ "idAFConstraint *", "boxConstraint", (int)(&((idAFConstraint *)0)->boxConstraint), sizeof( ((idAFConstraint *)0)->boxConstraint ) },
	{ "int[6]", "boxIndex", (int)(&((idAFConstraint *)0)->boxIndex), sizeof( ((idAFConstraint *)0)->boxIndex ) },
	{ "idMatX", "invI", (int)(&((idAFConstraint *)0)->invI), sizeof( ((idAFConstraint *)0)->invI ) },
	{ "idMatX", "J", (int)(&((idAFConstraint *)0)->J), sizeof( ((idAFConstraint *)0)->J ) },
	{ "idVecX", "s", (int)(&((idAFConstraint *)0)->s), sizeof( ((idAFConstraint *)0)->s ) },
	{ "idVecX", "lm", (int)(&((idAFConstraint *)0)->lm), sizeof( ((idAFConstraint *)0)->lm ) },
	{ "int", "firstIndex", (int)(&((idAFConstraint *)0)->firstIndex), sizeof( ((idAFConstraint *)0)->firstIndex ) },
	{ "idAFConstraint::constraintFlags_s", "fl", (int)(&((idAFConstraint *)0)->fl), sizeof( ((idAFConstraint *)0)->fl ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Fixed_typeInfo[] = {
	{ "idVec3", "offset", (int)(&((idAFConstraint_Fixed *)0)->offset), sizeof( ((idAFConstraint_Fixed *)0)->offset ) },
	{ "idMat3", "relAxis", (int)(&((idAFConstraint_Fixed *)0)->relAxis), sizeof( ((idAFConstraint_Fixed *)0)->relAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_BallAndSocketJoint_typeInfo[] = {
	{ "idVec3", "anchor1", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->anchor1), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->anchor2), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->anchor2 ) },
	{ "float", "friction", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->friction), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->friction ) },
	{ "idAFConstraint_ConeLimit *", "coneLimit", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->coneLimit), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->coneLimit ) },
	{ "idAFConstraint_PyramidLimit *", "pyramidLimit", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->pyramidLimit), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->pyramidLimit ) },
	{ "idAFConstraint_BallAndSocketJointFriction *", "fc", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->fc), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_BallAndSocketJointFriction_typeInfo[] = {
	{ "idAFConstraint_BallAndSocketJoint *", "joint", (int)(&((idAFConstraint_BallAndSocketJointFriction *)0)->joint), sizeof( ((idAFConstraint_BallAndSocketJointFriction *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_UniversalJoint_typeInfo[] = {
	{ "idVec3", "anchor1", (int)(&((idAFConstraint_UniversalJoint *)0)->anchor1), sizeof( ((idAFConstraint_UniversalJoint *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (int)(&((idAFConstraint_UniversalJoint *)0)->anchor2), sizeof( ((idAFConstraint_UniversalJoint *)0)->anchor2 ) },
	{ "idVec3", "shaft1", (int)(&((idAFConstraint_UniversalJoint *)0)->shaft1), sizeof( ((idAFConstraint_UniversalJoint *)0)->shaft1 ) },
	{ "idVec3", "shaft2", (int)(&((idAFConstraint_UniversalJoint *)0)->shaft2), sizeof( ((idAFConstraint_UniversalJoint *)0)->shaft2 ) },
	{ "idVec3", "axis1", (int)(&((idAFConstraint_UniversalJoint *)0)->axis1), sizeof( ((idAFConstraint_UniversalJoint *)0)->axis1 ) },
	{ "idVec3", "axis2", (int)(&((idAFConstraint_UniversalJoint *)0)->axis2), sizeof( ((idAFConstraint_UniversalJoint *)0)->axis2 ) },
	{ "float", "friction", (int)(&((idAFConstraint_UniversalJoint *)0)->friction), sizeof( ((idAFConstraint_UniversalJoint *)0)->friction ) },
	{ "idAFConstraint_ConeLimit *", "coneLimit", (int)(&((idAFConstraint_UniversalJoint *)0)->coneLimit), sizeof( ((idAFConstraint_UniversalJoint *)0)->coneLimit ) },
	{ "idAFConstraint_PyramidLimit *", "pyramidLimit", (int)(&((idAFConstraint_UniversalJoint *)0)->pyramidLimit), sizeof( ((idAFConstraint_UniversalJoint *)0)->pyramidLimit ) },
	{ "idAFConstraint_UniversalJointFriction *", "fc", (int)(&((idAFConstraint_UniversalJoint *)0)->fc), sizeof( ((idAFConstraint_UniversalJoint *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_UniversalJointFriction_typeInfo[] = {
	{ "idAFConstraint_UniversalJoint *", "joint", (int)(&((idAFConstraint_UniversalJointFriction *)0)->joint), sizeof( ((idAFConstraint_UniversalJointFriction *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_CylindricalJoint_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Hinge_typeInfo[] = {
	{ "idVec3", "anchor1", (int)(&((idAFConstraint_Hinge *)0)->anchor1), sizeof( ((idAFConstraint_Hinge *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (int)(&((idAFConstraint_Hinge *)0)->anchor2), sizeof( ((idAFConstraint_Hinge *)0)->anchor2 ) },
	{ "idVec3", "axis1", (int)(&((idAFConstraint_Hinge *)0)->axis1), sizeof( ((idAFConstraint_Hinge *)0)->axis1 ) },
	{ "idVec3", "axis2", (int)(&((idAFConstraint_Hinge *)0)->axis2), sizeof( ((idAFConstraint_Hinge *)0)->axis2 ) },
	{ "idMat3", "initialAxis", (int)(&((idAFConstraint_Hinge *)0)->initialAxis), sizeof( ((idAFConstraint_Hinge *)0)->initialAxis ) },
	{ "float", "friction", (int)(&((idAFConstraint_Hinge *)0)->friction), sizeof( ((idAFConstraint_Hinge *)0)->friction ) },
	{ "idAFConstraint_ConeLimit *", "coneLimit", (int)(&((idAFConstraint_Hinge *)0)->coneLimit), sizeof( ((idAFConstraint_Hinge *)0)->coneLimit ) },
	{ "idAFConstraint_HingeSteering *", "steering", (int)(&((idAFConstraint_Hinge *)0)->steering), sizeof( ((idAFConstraint_Hinge *)0)->steering ) },
	{ "idAFConstraint_HingeFriction *", "fc", (int)(&((idAFConstraint_Hinge *)0)->fc), sizeof( ((idAFConstraint_Hinge *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_HingeFriction_typeInfo[] = {
	{ "idAFConstraint_Hinge *", "hinge", (int)(&((idAFConstraint_HingeFriction *)0)->hinge), sizeof( ((idAFConstraint_HingeFriction *)0)->hinge ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_HingeSteering_typeInfo[] = {
	{ "idAFConstraint_Hinge *", "hinge", (int)(&((idAFConstraint_HingeSteering *)0)->hinge), sizeof( ((idAFConstraint_HingeSteering *)0)->hinge ) },
	{ "float", "steerAngle", (int)(&((idAFConstraint_HingeSteering *)0)->steerAngle), sizeof( ((idAFConstraint_HingeSteering *)0)->steerAngle ) },
	{ "float", "steerSpeed", (int)(&((idAFConstraint_HingeSteering *)0)->steerSpeed), sizeof( ((idAFConstraint_HingeSteering *)0)->steerSpeed ) },
	{ "float", "epsilon", (int)(&((idAFConstraint_HingeSteering *)0)->epsilon), sizeof( ((idAFConstraint_HingeSteering *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Slider_typeInfo[] = {
	{ "idVec3", "axis", (int)(&((idAFConstraint_Slider *)0)->axis), sizeof( ((idAFConstraint_Slider *)0)->axis ) },
	{ "idVec3", "offset", (int)(&((idAFConstraint_Slider *)0)->offset), sizeof( ((idAFConstraint_Slider *)0)->offset ) },
	{ "idMat3", "relAxis", (int)(&((idAFConstraint_Slider *)0)->relAxis), sizeof( ((idAFConstraint_Slider *)0)->relAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Line_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Plane_typeInfo[] = {
	{ "idVec3", "anchor1", (int)(&((idAFConstraint_Plane *)0)->anchor1), sizeof( ((idAFConstraint_Plane *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (int)(&((idAFConstraint_Plane *)0)->anchor2), sizeof( ((idAFConstraint_Plane *)0)->anchor2 ) },
	{ "idVec3", "planeNormal", (int)(&((idAFConstraint_Plane *)0)->planeNormal), sizeof( ((idAFConstraint_Plane *)0)->planeNormal ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Spring_typeInfo[] = {
	{ "idVec3", "anchor1", (int)(&((idAFConstraint_Spring *)0)->anchor1), sizeof( ((idAFConstraint_Spring *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (int)(&((idAFConstraint_Spring *)0)->anchor2), sizeof( ((idAFConstraint_Spring *)0)->anchor2 ) },
	{ "float", "kstretch", (int)(&((idAFConstraint_Spring *)0)->kstretch), sizeof( ((idAFConstraint_Spring *)0)->kstretch ) },
	{ "float", "kcompress", (int)(&((idAFConstraint_Spring *)0)->kcompress), sizeof( ((idAFConstraint_Spring *)0)->kcompress ) },
	{ "float", "damping", (int)(&((idAFConstraint_Spring *)0)->damping), sizeof( ((idAFConstraint_Spring *)0)->damping ) },
	{ "float", "restLength", (int)(&((idAFConstraint_Spring *)0)->restLength), sizeof( ((idAFConstraint_Spring *)0)->restLength ) },
	{ "float", "minLength", (int)(&((idAFConstraint_Spring *)0)->minLength), sizeof( ((idAFConstraint_Spring *)0)->minLength ) },
	{ "float", "maxLength", (int)(&((idAFConstraint_Spring *)0)->maxLength), sizeof( ((idAFConstraint_Spring *)0)->maxLength ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Contact_typeInfo[] = {
	{ "contactInfo_t", "contact", (int)(&((idAFConstraint_Contact *)0)->contact), sizeof( ((idAFConstraint_Contact *)0)->contact ) },
	{ "idAFConstraint_ContactFriction *", "fc", (int)(&((idAFConstraint_Contact *)0)->fc), sizeof( ((idAFConstraint_Contact *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_ContactFriction_typeInfo[] = {
	{ "idAFConstraint_Contact *", "cc", (int)(&((idAFConstraint_ContactFriction *)0)->cc), sizeof( ((idAFConstraint_ContactFriction *)0)->cc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_ConeLimit_typeInfo[] = {
	{ "idVec3", "coneAnchor", (int)(&((idAFConstraint_ConeLimit *)0)->coneAnchor), sizeof( ((idAFConstraint_ConeLimit *)0)->coneAnchor ) },
	{ "idVec3", "coneAxis", (int)(&((idAFConstraint_ConeLimit *)0)->coneAxis), sizeof( ((idAFConstraint_ConeLimit *)0)->coneAxis ) },
	{ "idVec3", "body1Axis", (int)(&((idAFConstraint_ConeLimit *)0)->body1Axis), sizeof( ((idAFConstraint_ConeLimit *)0)->body1Axis ) },
	{ "float", "cosAngle", (int)(&((idAFConstraint_ConeLimit *)0)->cosAngle), sizeof( ((idAFConstraint_ConeLimit *)0)->cosAngle ) },
	{ "float", "sinHalfAngle", (int)(&((idAFConstraint_ConeLimit *)0)->sinHalfAngle), sizeof( ((idAFConstraint_ConeLimit *)0)->sinHalfAngle ) },
	{ "float", "cosHalfAngle", (int)(&((idAFConstraint_ConeLimit *)0)->cosHalfAngle), sizeof( ((idAFConstraint_ConeLimit *)0)->cosHalfAngle ) },
	{ "float", "epsilon", (int)(&((idAFConstraint_ConeLimit *)0)->epsilon), sizeof( ((idAFConstraint_ConeLimit *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_PyramidLimit_typeInfo[] = {
	{ "idVec3", "pyramidAnchor", (int)(&((idAFConstraint_PyramidLimit *)0)->pyramidAnchor), sizeof( ((idAFConstraint_PyramidLimit *)0)->pyramidAnchor ) },
	{ "idMat3", "pyramidBasis", (int)(&((idAFConstraint_PyramidLimit *)0)->pyramidBasis), sizeof( ((idAFConstraint_PyramidLimit *)0)->pyramidBasis ) },
	{ "idVec3", "body1Axis", (int)(&((idAFConstraint_PyramidLimit *)0)->body1Axis), sizeof( ((idAFConstraint_PyramidLimit *)0)->body1Axis ) },
	{ "float[2]", "cosAngle", (int)(&((idAFConstraint_PyramidLimit *)0)->cosAngle), sizeof( ((idAFConstraint_PyramidLimit *)0)->cosAngle ) },
	{ "float[2]", "sinHalfAngle", (int)(&((idAFConstraint_PyramidLimit *)0)->sinHalfAngle), sizeof( ((idAFConstraint_PyramidLimit *)0)->sinHalfAngle ) },
	{ "float[2]", "cosHalfAngle", (int)(&((idAFConstraint_PyramidLimit *)0)->cosHalfAngle), sizeof( ((idAFConstraint_PyramidLimit *)0)->cosHalfAngle ) },
	{ "float", "epsilon", (int)(&((idAFConstraint_PyramidLimit *)0)->epsilon), sizeof( ((idAFConstraint_PyramidLimit *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Suspension_typeInfo[] = {
	{ "idVec3", "localOrigin", (int)(&((idAFConstraint_Suspension *)0)->localOrigin), sizeof( ((idAFConstraint_Suspension *)0)->localOrigin ) },
	{ "idMat3", "localAxis", (int)(&((idAFConstraint_Suspension *)0)->localAxis), sizeof( ((idAFConstraint_Suspension *)0)->localAxis ) },
	{ "float", "suspensionUp", (int)(&((idAFConstraint_Suspension *)0)->suspensionUp), sizeof( ((idAFConstraint_Suspension *)0)->suspensionUp ) },
	{ "float", "suspensionDown", (int)(&((idAFConstraint_Suspension *)0)->suspensionDown), sizeof( ((idAFConstraint_Suspension *)0)->suspensionDown ) },
	{ "float", "suspensionKCompress", (int)(&((idAFConstraint_Suspension *)0)->suspensionKCompress), sizeof( ((idAFConstraint_Suspension *)0)->suspensionKCompress ) },
	{ "float", "suspensionDamping", (int)(&((idAFConstraint_Suspension *)0)->suspensionDamping), sizeof( ((idAFConstraint_Suspension *)0)->suspensionDamping ) },
	{ "float", "steerAngle", (int)(&((idAFConstraint_Suspension *)0)->steerAngle), sizeof( ((idAFConstraint_Suspension *)0)->steerAngle ) },
	{ "float", "friction", (int)(&((idAFConstraint_Suspension *)0)->friction), sizeof( ((idAFConstraint_Suspension *)0)->friction ) },
	{ "bool", "motorEnabled", (int)(&((idAFConstraint_Suspension *)0)->motorEnabled), sizeof( ((idAFConstraint_Suspension *)0)->motorEnabled ) },
	{ "float", "motorForce", (int)(&((idAFConstraint_Suspension *)0)->motorForce), sizeof( ((idAFConstraint_Suspension *)0)->motorForce ) },
	{ "float", "motorVelocity", (int)(&((idAFConstraint_Suspension *)0)->motorVelocity), sizeof( ((idAFConstraint_Suspension *)0)->motorVelocity ) },
	{ "idClipModel *", "wheelModel", (int)(&((idAFConstraint_Suspension *)0)->wheelModel), sizeof( ((idAFConstraint_Suspension *)0)->wheelModel ) },
	{ "idVec3", "wheelOffset", (int)(&((idAFConstraint_Suspension *)0)->wheelOffset), sizeof( ((idAFConstraint_Suspension *)0)->wheelOffset ) },
	{ "trace_t", "trace", (int)(&((idAFConstraint_Suspension *)0)->trace), sizeof( ((idAFConstraint_Suspension *)0)->trace ) },
	{ "float", "epsilon", (int)(&((idAFConstraint_Suspension *)0)->epsilon), sizeof( ((idAFConstraint_Suspension *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t AFBodyPState_t_typeInfo[] = {
	{ "idVec3", "worldOrigin", (int)(&((AFBodyPState_t *)0)->worldOrigin), sizeof( ((AFBodyPState_t *)0)->worldOrigin ) },
	{ "idMat3", "worldAxis", (int)(&((AFBodyPState_t *)0)->worldAxis), sizeof( ((AFBodyPState_t *)0)->worldAxis ) },
	{ "idVec6", "spatialVelocity", (int)(&((AFBodyPState_t *)0)->spatialVelocity), sizeof( ((AFBodyPState_t *)0)->spatialVelocity ) },
	{ "idVec6", "externalForce", (int)(&((AFBodyPState_t *)0)->externalForce), sizeof( ((AFBodyPState_t *)0)->externalForce ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFBody_bodyFlags_s_typeInfo[] = {
//	{ "bool", "clipMaskSet", (int)(&((idAFBody::bodyFlags_s *)0)->clipMaskSet), sizeof( ((idAFBody::bodyFlags_s *)0)->clipMaskSet ) },
//	{ "bool", "selfCollision", (int)(&((idAFBody::bodyFlags_s *)0)->selfCollision), sizeof( ((idAFBody::bodyFlags_s *)0)->selfCollision ) },
//	{ "bool", "spatialInertiaSparse", (int)(&((idAFBody::bodyFlags_s *)0)->spatialInertiaSparse), sizeof( ((idAFBody::bodyFlags_s *)0)->spatialInertiaSparse ) },
//	{ "bool", "useFrictionDir", (int)(&((idAFBody::bodyFlags_s *)0)->useFrictionDir), sizeof( ((idAFBody::bodyFlags_s *)0)->useFrictionDir ) },
//	{ "bool", "useContactMotorDir", (int)(&((idAFBody::bodyFlags_s *)0)->useContactMotorDir), sizeof( ((idAFBody::bodyFlags_s *)0)->useContactMotorDir ) },
//	{ "bool", "isZero", (int)(&((idAFBody::bodyFlags_s *)0)->isZero), sizeof( ((idAFBody::bodyFlags_s *)0)->isZero ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFBody_typeInfo[] = {
	{ "idStr", "name", (int)(&((idAFBody *)0)->name), sizeof( ((idAFBody *)0)->name ) },
	{ "idAFBody *", "parent", (int)(&((idAFBody *)0)->parent), sizeof( ((idAFBody *)0)->parent ) },
	{ "idList < idAFBody * >", "children", (int)(&((idAFBody *)0)->children), sizeof( ((idAFBody *)0)->children ) },
	{ "idClipModel *", "clipModel", (int)(&((idAFBody *)0)->clipModel), sizeof( ((idAFBody *)0)->clipModel ) },
	{ "idAFConstraint *", "primaryConstraint", (int)(&((idAFBody *)0)->primaryConstraint), sizeof( ((idAFBody *)0)->primaryConstraint ) },
	{ "idList < idAFConstraint * >", "constraints", (int)(&((idAFBody *)0)->constraints), sizeof( ((idAFBody *)0)->constraints ) },
	{ "idAFTree *", "tree", (int)(&((idAFBody *)0)->tree), sizeof( ((idAFBody *)0)->tree ) },
	{ "float", "linearFriction", (int)(&((idAFBody *)0)->linearFriction), sizeof( ((idAFBody *)0)->linearFriction ) },
	{ "float", "angularFriction", (int)(&((idAFBody *)0)->angularFriction), sizeof( ((idAFBody *)0)->angularFriction ) },
	{ "float", "contactFriction", (int)(&((idAFBody *)0)->contactFriction), sizeof( ((idAFBody *)0)->contactFriction ) },
	{ "float", "bouncyness", (int)(&((idAFBody *)0)->bouncyness), sizeof( ((idAFBody *)0)->bouncyness ) },
	{ "int", "clipMask", (int)(&((idAFBody *)0)->clipMask), sizeof( ((idAFBody *)0)->clipMask ) },
	{ "idVec3", "frictionDir", (int)(&((idAFBody *)0)->frictionDir), sizeof( ((idAFBody *)0)->frictionDir ) },
	{ "idVec3", "contactMotorDir", (int)(&((idAFBody *)0)->contactMotorDir), sizeof( ((idAFBody *)0)->contactMotorDir ) },
	{ "float", "contactMotorVelocity", (int)(&((idAFBody *)0)->contactMotorVelocity), sizeof( ((idAFBody *)0)->contactMotorVelocity ) },
	{ "float", "contactMotorForce", (int)(&((idAFBody *)0)->contactMotorForce), sizeof( ((idAFBody *)0)->contactMotorForce ) },
	{ "float", "mass", (int)(&((idAFBody *)0)->mass), sizeof( ((idAFBody *)0)->mass ) },
	{ "float", "invMass", (int)(&((idAFBody *)0)->invMass), sizeof( ((idAFBody *)0)->invMass ) },
	{ "idVec3", "centerOfMass", (int)(&((idAFBody *)0)->centerOfMass), sizeof( ((idAFBody *)0)->centerOfMass ) },
	{ "idMat3", "inertiaTensor", (int)(&((idAFBody *)0)->inertiaTensor), sizeof( ((idAFBody *)0)->inertiaTensor ) },
	{ "idMat3", "inverseInertiaTensor", (int)(&((idAFBody *)0)->inverseInertiaTensor), sizeof( ((idAFBody *)0)->inverseInertiaTensor ) },
	{ "AFBodyPState_t[2]", "state", (int)(&((idAFBody *)0)->state), sizeof( ((idAFBody *)0)->state ) },
	{ "AFBodyPState_t *", "current", (int)(&((idAFBody *)0)->current), sizeof( ((idAFBody *)0)->current ) },
	{ "AFBodyPState_t *", "next", (int)(&((idAFBody *)0)->next), sizeof( ((idAFBody *)0)->next ) },
	{ "AFBodyPState_t", "saved", (int)(&((idAFBody *)0)->saved), sizeof( ((idAFBody *)0)->saved ) },
	{ "idVec3", "atRestOrigin", (int)(&((idAFBody *)0)->atRestOrigin), sizeof( ((idAFBody *)0)->atRestOrigin ) },
	{ "idMat3", "atRestAxis", (int)(&((idAFBody *)0)->atRestAxis), sizeof( ((idAFBody *)0)->atRestAxis ) },
	{ "idMatX", "inverseWorldSpatialInertia", (int)(&((idAFBody *)0)->inverseWorldSpatialInertia), sizeof( ((idAFBody *)0)->inverseWorldSpatialInertia ) },
	{ "idMatX", "I", (int)(&((idAFBody *)0)->I), sizeof( ((idAFBody *)0)->I ) },
	{ "idMatX", "invI", (int)(&((idAFBody *)0)->invI), sizeof( ((idAFBody *)0)->invI ) },
	{ "idMatX", "J", (int)(&((idAFBody *)0)->J), sizeof( ((idAFBody *)0)->J ) },
	{ "idVecX", "s", (int)(&((idAFBody *)0)->s), sizeof( ((idAFBody *)0)->s ) },
	{ "idVecX", "totalForce", (int)(&((idAFBody *)0)->totalForce), sizeof( ((idAFBody *)0)->totalForce ) },
	{ "idVecX", "auxForce", (int)(&((idAFBody *)0)->auxForce), sizeof( ((idAFBody *)0)->auxForce ) },
	{ "idVecX", "acceleration", (int)(&((idAFBody *)0)->acceleration), sizeof( ((idAFBody *)0)->acceleration ) },
	{ "float *", "response", (int)(&((idAFBody *)0)->response), sizeof( ((idAFBody *)0)->response ) },
	{ "int *", "responseIndex", (int)(&((idAFBody *)0)->responseIndex), sizeof( ((idAFBody *)0)->responseIndex ) },
	{ "int", "numResponses", (int)(&((idAFBody *)0)->numResponses), sizeof( ((idAFBody *)0)->numResponses ) },
	{ "int", "maxAuxiliaryIndex", (int)(&((idAFBody *)0)->maxAuxiliaryIndex), sizeof( ((idAFBody *)0)->maxAuxiliaryIndex ) },
	{ "int", "maxSubTreeAuxiliaryIndex", (int)(&((idAFBody *)0)->maxSubTreeAuxiliaryIndex), sizeof( ((idAFBody *)0)->maxSubTreeAuxiliaryIndex ) },
	{ "idAFBody::bodyFlags_s", "fl", (int)(&((idAFBody *)0)->fl), sizeof( ((idAFBody *)0)->fl ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFTree_typeInfo[] = {
	{ "idList < idAFBody * >", "sortedBodies", (int)(&((idAFTree *)0)->sortedBodies), sizeof( ((idAFTree *)0)->sortedBodies ) },
	{ NULL, 0 }
};

static classVariableInfo_t AFPState_t_typeInfo[] = {
	{ "int", "atRest", (int)(&((AFPState_t *)0)->atRest), sizeof( ((AFPState_t *)0)->atRest ) },
	{ "float", "noMoveTime", (int)(&((AFPState_t *)0)->noMoveTime), sizeof( ((AFPState_t *)0)->noMoveTime ) },
	{ "float", "activateTime", (int)(&((AFPState_t *)0)->activateTime), sizeof( ((AFPState_t *)0)->activateTime ) },
	{ "float", "lastTimeStep", (int)(&((AFPState_t *)0)->lastTimeStep), sizeof( ((AFPState_t *)0)->lastTimeStep ) },
	{ "idVec6", "pushVelocity", (int)(&((AFPState_t *)0)->pushVelocity), sizeof( ((AFPState_t *)0)->pushVelocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t AFCollision_t_typeInfo[] = {
	{ "trace_t", "trace", (int)(&((AFCollision_t *)0)->trace), sizeof( ((AFCollision_t *)0)->trace ) },
	{ "idAFBody *", "body", (int)(&((AFCollision_t *)0)->body), sizeof( ((AFCollision_t *)0)->body ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_AF_typeInfo[] = {
	{ "idList < idAFTree * >", "trees", (int)(&((idPhysics_AF *)0)->trees), sizeof( ((idPhysics_AF *)0)->trees ) },
	{ "idList < idAFBody * >", "bodies", (int)(&((idPhysics_AF *)0)->bodies), sizeof( ((idPhysics_AF *)0)->bodies ) },
	{ "idList < idAFConstraint * >", "constraints", (int)(&((idPhysics_AF *)0)->constraints), sizeof( ((idPhysics_AF *)0)->constraints ) },
	{ "idList < idAFConstraint * >", "primaryConstraints", (int)(&((idPhysics_AF *)0)->primaryConstraints), sizeof( ((idPhysics_AF *)0)->primaryConstraints ) },
	{ "idList < idAFConstraint * >", "auxiliaryConstraints", (int)(&((idPhysics_AF *)0)->auxiliaryConstraints), sizeof( ((idPhysics_AF *)0)->auxiliaryConstraints ) },
	{ "idList < idAFConstraint * >", "frameConstraints", (int)(&((idPhysics_AF *)0)->frameConstraints), sizeof( ((idPhysics_AF *)0)->frameConstraints ) },
	{ "idList < idAFConstraint_Contact * >", "contactConstraints", (int)(&((idPhysics_AF *)0)->contactConstraints), sizeof( ((idPhysics_AF *)0)->contactConstraints ) },
	{ "idList < int >", "contactBodies", (int)(&((idPhysics_AF *)0)->contactBodies), sizeof( ((idPhysics_AF *)0)->contactBodies ) },
	{ "idList < AFCollision_t >", "collisions", (int)(&((idPhysics_AF *)0)->collisions), sizeof( ((idPhysics_AF *)0)->collisions ) },
	{ "bool", "changedAF", (int)(&((idPhysics_AF *)0)->changedAF), sizeof( ((idPhysics_AF *)0)->changedAF ) },
	{ "float", "linearFriction", (int)(&((idPhysics_AF *)0)->linearFriction), sizeof( ((idPhysics_AF *)0)->linearFriction ) },
	{ "float", "angularFriction", (int)(&((idPhysics_AF *)0)->angularFriction), sizeof( ((idPhysics_AF *)0)->angularFriction ) },
	{ "float", "contactFriction", (int)(&((idPhysics_AF *)0)->contactFriction), sizeof( ((idPhysics_AF *)0)->contactFriction ) },
	{ "float", "bouncyness", (int)(&((idPhysics_AF *)0)->bouncyness), sizeof( ((idPhysics_AF *)0)->bouncyness ) },
	{ "float", "totalMass", (int)(&((idPhysics_AF *)0)->totalMass), sizeof( ((idPhysics_AF *)0)->totalMass ) },
	{ "float", "forceTotalMass", (int)(&((idPhysics_AF *)0)->forceTotalMass), sizeof( ((idPhysics_AF *)0)->forceTotalMass ) },
	{ "idVec2", "suspendVelocity", (int)(&((idPhysics_AF *)0)->suspendVelocity), sizeof( ((idPhysics_AF *)0)->suspendVelocity ) },
	{ "idVec2", "suspendAcceleration", (int)(&((idPhysics_AF *)0)->suspendAcceleration), sizeof( ((idPhysics_AF *)0)->suspendAcceleration ) },
	{ "float", "noMoveTime", (int)(&((idPhysics_AF *)0)->noMoveTime), sizeof( ((idPhysics_AF *)0)->noMoveTime ) },
	{ "float", "noMoveTranslation", (int)(&((idPhysics_AF *)0)->noMoveTranslation), sizeof( ((idPhysics_AF *)0)->noMoveTranslation ) },
	{ "float", "noMoveRotation", (int)(&((idPhysics_AF *)0)->noMoveRotation), sizeof( ((idPhysics_AF *)0)->noMoveRotation ) },
	{ "float", "minMoveTime", (int)(&((idPhysics_AF *)0)->minMoveTime), sizeof( ((idPhysics_AF *)0)->minMoveTime ) },
	{ "float", "maxMoveTime", (int)(&((idPhysics_AF *)0)->maxMoveTime), sizeof( ((idPhysics_AF *)0)->maxMoveTime ) },
	{ "float", "impulseThreshold", (int)(&((idPhysics_AF *)0)->impulseThreshold), sizeof( ((idPhysics_AF *)0)->impulseThreshold ) },
	{ "float", "timeScale", (int)(&((idPhysics_AF *)0)->timeScale), sizeof( ((idPhysics_AF *)0)->timeScale ) },
	{ "float", "timeScaleRampStart", (int)(&((idPhysics_AF *)0)->timeScaleRampStart), sizeof( ((idPhysics_AF *)0)->timeScaleRampStart ) },
	{ "float", "timeScaleRampEnd", (int)(&((idPhysics_AF *)0)->timeScaleRampEnd), sizeof( ((idPhysics_AF *)0)->timeScaleRampEnd ) },
	{ "float", "jointFrictionScale", (int)(&((idPhysics_AF *)0)->jointFrictionScale), sizeof( ((idPhysics_AF *)0)->jointFrictionScale ) },
	{ "float", "jointFrictionDent", (int)(&((idPhysics_AF *)0)->jointFrictionDent), sizeof( ((idPhysics_AF *)0)->jointFrictionDent ) },
	{ "float", "jointFrictionDentStart", (int)(&((idPhysics_AF *)0)->jointFrictionDentStart), sizeof( ((idPhysics_AF *)0)->jointFrictionDentStart ) },
	{ "float", "jointFrictionDentEnd", (int)(&((idPhysics_AF *)0)->jointFrictionDentEnd), sizeof( ((idPhysics_AF *)0)->jointFrictionDentEnd ) },
	{ "float", "jointFrictionDentScale", (int)(&((idPhysics_AF *)0)->jointFrictionDentScale), sizeof( ((idPhysics_AF *)0)->jointFrictionDentScale ) },
	{ "float", "contactFrictionScale", (int)(&((idPhysics_AF *)0)->contactFrictionScale), sizeof( ((idPhysics_AF *)0)->contactFrictionScale ) },
	{ "float", "contactFrictionDent", (int)(&((idPhysics_AF *)0)->contactFrictionDent), sizeof( ((idPhysics_AF *)0)->contactFrictionDent ) },
	{ "float", "contactFrictionDentStart", (int)(&((idPhysics_AF *)0)->contactFrictionDentStart), sizeof( ((idPhysics_AF *)0)->contactFrictionDentStart ) },
	{ "float", "contactFrictionDentEnd", (int)(&((idPhysics_AF *)0)->contactFrictionDentEnd), sizeof( ((idPhysics_AF *)0)->contactFrictionDentEnd ) },
	{ "float", "contactFrictionDentScale", (int)(&((idPhysics_AF *)0)->contactFrictionDentScale), sizeof( ((idPhysics_AF *)0)->contactFrictionDentScale ) },
	{ "bool", "enableCollision", (int)(&((idPhysics_AF *)0)->enableCollision), sizeof( ((idPhysics_AF *)0)->enableCollision ) },
	{ "bool", "selfCollision", (int)(&((idPhysics_AF *)0)->selfCollision), sizeof( ((idPhysics_AF *)0)->selfCollision ) },
	{ "bool", "comeToRest", (int)(&((idPhysics_AF *)0)->comeToRest), sizeof( ((idPhysics_AF *)0)->comeToRest ) },
	{ "bool", "linearTime", (int)(&((idPhysics_AF *)0)->linearTime), sizeof( ((idPhysics_AF *)0)->linearTime ) },
	{ "bool", "noImpact", (int)(&((idPhysics_AF *)0)->noImpact), sizeof( ((idPhysics_AF *)0)->noImpact ) },
	{ "bool", "worldConstraintsLocked", (int)(&((idPhysics_AF *)0)->worldConstraintsLocked), sizeof( ((idPhysics_AF *)0)->worldConstraintsLocked ) },
	{ "bool", "forcePushable", (int)(&((idPhysics_AF *)0)->forcePushable), sizeof( ((idPhysics_AF *)0)->forcePushable ) },
	{ "AFPState_t", "current", (int)(&((idPhysics_AF *)0)->current), sizeof( ((idPhysics_AF *)0)->current ) },
	{ "AFPState_t", "saved", (int)(&((idPhysics_AF *)0)->saved), sizeof( ((idPhysics_AF *)0)->saved ) },
	{ "idAFBody *", "masterBody", (int)(&((idPhysics_AF *)0)->masterBody), sizeof( ((idPhysics_AF *)0)->masterBody ) },
	{ "idLCP *", "lcp", (int)(&((idPhysics_AF *)0)->lcp), sizeof( ((idPhysics_AF *)0)->lcp ) },
	{ NULL, 0 }
};

static classVariableInfo_t singleSmoke_t_typeInfo[] = {
	{ "singleSmoke_s *", "next", (int)(&((singleSmoke_t *)0)->next), sizeof( ((singleSmoke_t *)0)->next ) },
	{ "int", "privateStartTime", (int)(&((singleSmoke_t *)0)->privateStartTime), sizeof( ((singleSmoke_t *)0)->privateStartTime ) },
	{ "int", "index", (int)(&((singleSmoke_t *)0)->index), sizeof( ((singleSmoke_t *)0)->index ) },
	{ "idRandom", "random", (int)(&((singleSmoke_t *)0)->random), sizeof( ((singleSmoke_t *)0)->random ) },
	{ "idVec3", "origin", (int)(&((singleSmoke_t *)0)->origin), sizeof( ((singleSmoke_t *)0)->origin ) },
	{ "idMat3", "axis", (int)(&((singleSmoke_t *)0)->axis), sizeof( ((singleSmoke_t *)0)->axis ) },
	{ NULL, 0 }
};

static classVariableInfo_t activeSmokeStage_t_typeInfo[] = {
	{ "const idParticleStage *", "stage", (int)(&((activeSmokeStage_t *)0)->stage), sizeof( ((activeSmokeStage_t *)0)->stage ) },
	{ "singleSmoke_t *", "smokes", (int)(&((activeSmokeStage_t *)0)->smokes), sizeof( ((activeSmokeStage_t *)0)->smokes ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSmokeParticles_typeInfo[] = {
	{ "bool", "initialized", (int)(&((idSmokeParticles *)0)->initialized), sizeof( ((idSmokeParticles *)0)->initialized ) },
	{ "renderEntity_t", "renderEntity", (int)(&((idSmokeParticles *)0)->renderEntity), sizeof( ((idSmokeParticles *)0)->renderEntity ) },
	{ "int", "renderEntityHandle", (int)(&((idSmokeParticles *)0)->renderEntityHandle), sizeof( ((idSmokeParticles *)0)->renderEntityHandle ) },
	{ "singleSmoke_t[10000]", "smokes", (int)(&((idSmokeParticles *)0)->smokes), sizeof( ((idSmokeParticles *)0)->smokes ) },
	{ "idList < activeSmokeStage_t >", "activeStages", (int)(&((idSmokeParticles *)0)->activeStages), sizeof( ((idSmokeParticles *)0)->activeStages ) },
	{ "singleSmoke_t *", "freeSmokes", (int)(&((idSmokeParticles *)0)->freeSmokes), sizeof( ((idSmokeParticles *)0)->freeSmokes ) },
	{ "int", "numActiveSmokes", (int)(&((idSmokeParticles *)0)->numActiveSmokes), sizeof( ((idSmokeParticles *)0)->numActiveSmokes ) },
	{ "int", "currentParticleTime", (int)(&((idSmokeParticles *)0)->currentParticleTime), sizeof( ((idSmokeParticles *)0)->currentParticleTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t signal_t_typeInfo[] = {
	{ "int", "threadnum", (int)(&((signal_t *)0)->threadnum), sizeof( ((signal_t *)0)->threadnum ) },
	{ "const function_t *", "function", (int)(&((signal_t *)0)->function), sizeof( ((signal_t *)0)->function ) },
	{ NULL, 0 }
};

static classVariableInfo_t signalList_t_typeInfo[] = {
	{ "idList < signal_t >[10]", "signal", (int)(&((signalList_t *)0)->signal), sizeof( ((signalList_t *)0)->signal ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEntity_entityFlags_s_typeInfo[] = {
//	{ "bool", "notarget", (int)(&((idEntity::entityFlags_s *)0)->notarget), sizeof( ((idEntity::entityFlags_s *)0)->notarget ) },
//	{ "bool", "noknockback", (int)(&((idEntity::entityFlags_s *)0)->noknockback), sizeof( ((idEntity::entityFlags_s *)0)->noknockback ) },
//	{ "bool", "takedamage", (int)(&((idEntity::entityFlags_s *)0)->takedamage), sizeof( ((idEntity::entityFlags_s *)0)->takedamage ) },
//	{ "bool", "hidden", (int)(&((idEntity::entityFlags_s *)0)->hidden), sizeof( ((idEntity::entityFlags_s *)0)->hidden ) },
//	{ "bool", "bindOrientated", (int)(&((idEntity::entityFlags_s *)0)->bindOrientated), sizeof( ((idEntity::entityFlags_s *)0)->bindOrientated ) },
//	{ "bool", "solidForTeam", (int)(&((idEntity::entityFlags_s *)0)->solidForTeam), sizeof( ((idEntity::entityFlags_s *)0)->solidForTeam ) },
//	{ "bool", "forcePhysicsUpdate", (int)(&((idEntity::entityFlags_s *)0)->forcePhysicsUpdate), sizeof( ((idEntity::entityFlags_s *)0)->forcePhysicsUpdate ) },
//	{ "bool", "selected", (int)(&((idEntity::entityFlags_s *)0)->selected), sizeof( ((idEntity::entityFlags_s *)0)->selected ) },
//	{ "bool", "neverDormant", (int)(&((idEntity::entityFlags_s *)0)->neverDormant), sizeof( ((idEntity::entityFlags_s *)0)->neverDormant ) },
//	{ "bool", "isDormant", (int)(&((idEntity::entityFlags_s *)0)->isDormant), sizeof( ((idEntity::entityFlags_s *)0)->isDormant ) },
//	{ "bool", "hasAwakened", (int)(&((idEntity::entityFlags_s *)0)->hasAwakened), sizeof( ((idEntity::entityFlags_s *)0)->hasAwakened ) },
//	{ "bool", "networkSync", (int)(&((idEntity::entityFlags_s *)0)->networkSync), sizeof( ((idEntity::entityFlags_s *)0)->networkSync ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEntity_typeInfo[] = {
	{ "int", "entityNumber", (int)(&((idEntity *)0)->entityNumber), sizeof( ((idEntity *)0)->entityNumber ) },
	{ "int", "entityDefNumber", (int)(&((idEntity *)0)->entityDefNumber), sizeof( ((idEntity *)0)->entityDefNumber ) },
	{ "idLinkList < idEntity >", "spawnNode", (int)(&((idEntity *)0)->spawnNode), sizeof( ((idEntity *)0)->spawnNode ) },
	{ "idLinkList < idEntity >", "activeNode", (int)(&((idEntity *)0)->activeNode), sizeof( ((idEntity *)0)->activeNode ) },
	{ "idLinkList < idEntity >", "snapshotNode", (int)(&((idEntity *)0)->snapshotNode), sizeof( ((idEntity *)0)->snapshotNode ) },
	{ "int", "snapshotSequence", (int)(&((idEntity *)0)->snapshotSequence), sizeof( ((idEntity *)0)->snapshotSequence ) },
	{ "int", "snapshotBits", (int)(&((idEntity *)0)->snapshotBits), sizeof( ((idEntity *)0)->snapshotBits ) },
	{ "idStr", "name", (int)(&((idEntity *)0)->name), sizeof( ((idEntity *)0)->name ) },
	{ "idDict", "spawnArgs", (int)(&((idEntity *)0)->spawnArgs), sizeof( ((idEntity *)0)->spawnArgs ) },
	{ "idScriptObject", "scriptObject", (int)(&((idEntity *)0)->scriptObject), sizeof( ((idEntity *)0)->scriptObject ) },
	{ "int", "thinkFlags", (int)(&((idEntity *)0)->thinkFlags), sizeof( ((idEntity *)0)->thinkFlags ) },
	{ "int", "dormantStart", (int)(&((idEntity *)0)->dormantStart), sizeof( ((idEntity *)0)->dormantStart ) },
	{ "bool", "cinematic", (int)(&((idEntity *)0)->cinematic), sizeof( ((idEntity *)0)->cinematic ) },
	{ "renderView_t *", "renderView", (int)(&((idEntity *)0)->renderView), sizeof( ((idEntity *)0)->renderView ) },
	{ "idEntity *", "cameraTarget", (int)(&((idEntity *)0)->cameraTarget), sizeof( ((idEntity *)0)->cameraTarget ) },
	{ "idList < idEntityPtr < idEntity > >", "targets", (int)(&((idEntity *)0)->targets), sizeof( ((idEntity *)0)->targets ) },
	{ "int", "health", (int)(&((idEntity *)0)->health), sizeof( ((idEntity *)0)->health ) },
	{ "idEntity::entityFlags_s", "fl", (int)(&((idEntity *)0)->fl), sizeof( ((idEntity *)0)->fl ) },
	{ "renderEntity_t", "renderEntity", (int)(&((idEntity *)0)->renderEntity), sizeof( ((idEntity *)0)->renderEntity ) },
	{ "int", "modelDefHandle", (int)(&((idEntity *)0)->modelDefHandle), sizeof( ((idEntity *)0)->modelDefHandle ) },
	{ "refSound_t", "refSound", (int)(&((idEntity *)0)->refSound), sizeof( ((idEntity *)0)->refSound ) },
	{ "idPhysics_Static", "defaultPhysicsObj", (int)(&((idEntity *)0)->defaultPhysicsObj), sizeof( ((idEntity *)0)->defaultPhysicsObj ) },
	{ "idPhysics *", "physics", (int)(&((idEntity *)0)->physics), sizeof( ((idEntity *)0)->physics ) },
	{ "idEntity *", "bindMaster", (int)(&((idEntity *)0)->bindMaster), sizeof( ((idEntity *)0)->bindMaster ) },
	{ "jointHandle_t", "bindJoint", (int)(&((idEntity *)0)->bindJoint), sizeof( ((idEntity *)0)->bindJoint ) },
	{ "int", "bindBody", (int)(&((idEntity *)0)->bindBody), sizeof( ((idEntity *)0)->bindBody ) },
	{ "idEntity *", "teamMaster", (int)(&((idEntity *)0)->teamMaster), sizeof( ((idEntity *)0)->teamMaster ) },
	{ "idEntity *", "teamChain", (int)(&((idEntity *)0)->teamChain), sizeof( ((idEntity *)0)->teamChain ) },
	{ "int", "numPVSAreas", (int)(&((idEntity *)0)->numPVSAreas), sizeof( ((idEntity *)0)->numPVSAreas ) },
	{ "int[4]", "PVSAreas", (int)(&((idEntity *)0)->PVSAreas), sizeof( ((idEntity *)0)->PVSAreas ) },
	{ "signalList_t *", "signals", (int)(&((idEntity *)0)->signals), sizeof( ((idEntity *)0)->signals ) },
	{ "int", "mpGUIState", (int)(&((idEntity *)0)->mpGUIState), sizeof( ((idEntity *)0)->mpGUIState ) },
	{ NULL, 0 }
};

static classVariableInfo_t damageEffect_t_typeInfo[] = {
	{ "jointHandle_t", "jointNum", (int)(&((damageEffect_t *)0)->jointNum), sizeof( ((damageEffect_t *)0)->jointNum ) },
	{ "idVec3", "localOrigin", (int)(&((damageEffect_t *)0)->localOrigin), sizeof( ((damageEffect_t *)0)->localOrigin ) },
	{ "idVec3", "localNormal", (int)(&((damageEffect_t *)0)->localNormal), sizeof( ((damageEffect_t *)0)->localNormal ) },
	{ "int", "time", (int)(&((damageEffect_t *)0)->time), sizeof( ((damageEffect_t *)0)->time ) },
	{ "const idDeclParticle *", "type", (int)(&((damageEffect_t *)0)->type), sizeof( ((damageEffect_t *)0)->type ) },
	{ "damageEffect_s *", "next", (int)(&((damageEffect_t *)0)->next), sizeof( ((damageEffect_t *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimatedEntity_typeInfo[] = {
	{ "idAnimator", "animator", (int)(&((idAnimatedEntity *)0)->animator), sizeof( ((idAnimatedEntity *)0)->animator ) },
	{ "damageEffect_t *", "damageEffects", (int)(&((idAnimatedEntity *)0)->damageEffects), sizeof( ((idAnimatedEntity *)0)->damageEffects ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCursor3D_typeInfo[] = {
	{ "idForce_Drag", "drag", (int)(&((idCursor3D *)0)->drag), sizeof( ((idCursor3D *)0)->drag ) },
	{ "idVec3", "draggedPosition", (int)(&((idCursor3D *)0)->draggedPosition), sizeof( ((idCursor3D *)0)->draggedPosition ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDragEntity_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "dragEnt", (int)(&((idDragEntity *)0)->dragEnt), sizeof( ((idDragEntity *)0)->dragEnt ) },
	{ "jointHandle_t", "joint", (int)(&((idDragEntity *)0)->joint), sizeof( ((idDragEntity *)0)->joint ) },
	{ "int", "id", (int)(&((idDragEntity *)0)->id), sizeof( ((idDragEntity *)0)->id ) },
	{ "idVec3", "localEntityPoint", (int)(&((idDragEntity *)0)->localEntityPoint), sizeof( ((idDragEntity *)0)->localEntityPoint ) },
	{ "idVec3", "localPlayerPoint", (int)(&((idDragEntity *)0)->localPlayerPoint), sizeof( ((idDragEntity *)0)->localPlayerPoint ) },
	{ "idStr", "bodyName", (int)(&((idDragEntity *)0)->bodyName), sizeof( ((idDragEntity *)0)->bodyName ) },
	{ "idCursor3D *", "cursor", (int)(&((idDragEntity *)0)->cursor), sizeof( ((idDragEntity *)0)->cursor ) },
	{ "idEntityPtr < idEntity >", "selected", (int)(&((idDragEntity *)0)->selected), sizeof( ((idDragEntity *)0)->selected ) },
	{ NULL, 0 }
};

static classVariableInfo_t selectedTypeInfo_t_typeInfo[] = {
	{ "idTypeInfo *", "typeInfo", (int)(&((selectedTypeInfo_t *)0)->typeInfo), sizeof( ((selectedTypeInfo_t *)0)->typeInfo ) },
	{ "idStr", "textKey", (int)(&((selectedTypeInfo_t *)0)->textKey), sizeof( ((selectedTypeInfo_t *)0)->textKey ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEditEntities_typeInfo[] = {
	{ "int", "nextSelectTime", (int)(&((idEditEntities *)0)->nextSelectTime), sizeof( ((idEditEntities *)0)->nextSelectTime ) },
	{ "idList < selectedTypeInfo_t >", "selectableEntityClasses", (int)(&((idEditEntities *)0)->selectableEntityClasses), sizeof( ((idEditEntities *)0)->selectableEntityClasses ) },
	{ "idList < idEntity * >", "selectedEntities", (int)(&((idEditEntities *)0)->selectedEntities), sizeof( ((idEditEntities *)0)->selectedEntities ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointConversion_t_typeInfo[] = {
	{ "int", "bodyId", (int)(&((jointConversion_t *)0)->bodyId), sizeof( ((jointConversion_t *)0)->bodyId ) },
	{ "jointHandle_t", "jointHandle", (int)(&((jointConversion_t *)0)->jointHandle), sizeof( ((jointConversion_t *)0)->jointHandle ) },
	{ "AFJointModType_t", "jointMod", (int)(&((jointConversion_t *)0)->jointMod), sizeof( ((jointConversion_t *)0)->jointMod ) },
	{ "idVec3", "jointBodyOrigin", (int)(&((jointConversion_t *)0)->jointBodyOrigin), sizeof( ((jointConversion_t *)0)->jointBodyOrigin ) },
	{ "idMat3", "jointBodyAxis", (int)(&((jointConversion_t *)0)->jointBodyAxis), sizeof( ((jointConversion_t *)0)->jointBodyAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t afTouch_t_typeInfo[] = {
	{ "idEntity *", "touchedEnt", (int)(&((afTouch_t *)0)->touchedEnt), sizeof( ((afTouch_t *)0)->touchedEnt ) },
	{ "idClipModel *", "touchedClipModel", (int)(&((afTouch_t *)0)->touchedClipModel), sizeof( ((afTouch_t *)0)->touchedClipModel ) },
	{ "idAFBody *", "touchedByBody", (int)(&((afTouch_t *)0)->touchedByBody), sizeof( ((afTouch_t *)0)->touchedByBody ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAF_typeInfo[] = {
	{ "idStr", "name", (int)(&((idAF *)0)->name), sizeof( ((idAF *)0)->name ) },
	{ "idPhysics_AF", "physicsObj", (int)(&((idAF *)0)->physicsObj), sizeof( ((idAF *)0)->physicsObj ) },
	{ "idEntity *", "self", (int)(&((idAF *)0)->self), sizeof( ((idAF *)0)->self ) },
	{ "idAnimator *", "animator", (int)(&((idAF *)0)->animator), sizeof( ((idAF *)0)->animator ) },
	{ "int", "modifiedAnim", (int)(&((idAF *)0)->modifiedAnim), sizeof( ((idAF *)0)->modifiedAnim ) },
	{ "idVec3", "baseOrigin", (int)(&((idAF *)0)->baseOrigin), sizeof( ((idAF *)0)->baseOrigin ) },
	{ "idMat3", "baseAxis", (int)(&((idAF *)0)->baseAxis), sizeof( ((idAF *)0)->baseAxis ) },
	{ "idList < jointConversion_t >", "jointMods", (int)(&((idAF *)0)->jointMods), sizeof( ((idAF *)0)->jointMods ) },
	{ "idList < int >", "jointBody", (int)(&((idAF *)0)->jointBody), sizeof( ((idAF *)0)->jointBody ) },
	{ "int", "poseTime", (int)(&((idAF *)0)->poseTime), sizeof( ((idAF *)0)->poseTime ) },
	{ "int", "restStartTime", (int)(&((idAF *)0)->restStartTime), sizeof( ((idAF *)0)->restStartTime ) },
	{ "bool", "isLoaded", (int)(&((idAF *)0)->isLoaded), sizeof( ((idAF *)0)->isLoaded ) },
	{ "bool", "isActive", (int)(&((idAF *)0)->isActive), sizeof( ((idAF *)0)->isActive ) },
	{ "bool", "hasBindConstraints", (int)(&((idAF *)0)->hasBindConstraints), sizeof( ((idAF *)0)->hasBindConstraints ) },
	{ NULL, 0 }
};

static classVariableInfo_t idIK_typeInfo[] = {
	{ "bool", "initialized", (int)(&((idIK *)0)->initialized), sizeof( ((idIK *)0)->initialized ) },
	{ "bool", "ik_activate", (int)(&((idIK *)0)->ik_activate), sizeof( ((idIK *)0)->ik_activate ) },
	{ "idEntity *", "self", (int)(&((idIK *)0)->self), sizeof( ((idIK *)0)->self ) },
	{ "idAnimator *", "animator", (int)(&((idIK *)0)->animator), sizeof( ((idIK *)0)->animator ) },
	{ "int", "modifiedAnim", (int)(&((idIK *)0)->modifiedAnim), sizeof( ((idIK *)0)->modifiedAnim ) },
	{ "idVec3", "modelOffset", (int)(&((idIK *)0)->modelOffset), sizeof( ((idIK *)0)->modelOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idIK_Walk_typeInfo[] = {
	{ "idClipModel *", "footModel", (int)(&((idIK_Walk *)0)->footModel), sizeof( ((idIK_Walk *)0)->footModel ) },
	{ "int", "numLegs", (int)(&((idIK_Walk *)0)->numLegs), sizeof( ((idIK_Walk *)0)->numLegs ) },
	{ "int", "enabledLegs", (int)(&((idIK_Walk *)0)->enabledLegs), sizeof( ((idIK_Walk *)0)->enabledLegs ) },
	{ "jointHandle_t[8]", "footJoints", (int)(&((idIK_Walk *)0)->footJoints), sizeof( ((idIK_Walk *)0)->footJoints ) },
	{ "jointHandle_t[8]", "ankleJoints", (int)(&((idIK_Walk *)0)->ankleJoints), sizeof( ((idIK_Walk *)0)->ankleJoints ) },
	{ "jointHandle_t[8]", "kneeJoints", (int)(&((idIK_Walk *)0)->kneeJoints), sizeof( ((idIK_Walk *)0)->kneeJoints ) },
	{ "jointHandle_t[8]", "hipJoints", (int)(&((idIK_Walk *)0)->hipJoints), sizeof( ((idIK_Walk *)0)->hipJoints ) },
	{ "jointHandle_t[8]", "dirJoints", (int)(&((idIK_Walk *)0)->dirJoints), sizeof( ((idIK_Walk *)0)->dirJoints ) },
	{ "jointHandle_t", "waistJoint", (int)(&((idIK_Walk *)0)->waistJoint), sizeof( ((idIK_Walk *)0)->waistJoint ) },
	{ "idVec3[8]", "hipForward", (int)(&((idIK_Walk *)0)->hipForward), sizeof( ((idIK_Walk *)0)->hipForward ) },
	{ "idVec3[8]", "kneeForward", (int)(&((idIK_Walk *)0)->kneeForward), sizeof( ((idIK_Walk *)0)->kneeForward ) },
	{ "float[8]", "upperLegLength", (int)(&((idIK_Walk *)0)->upperLegLength), sizeof( ((idIK_Walk *)0)->upperLegLength ) },
	{ "float[8]", "lowerLegLength", (int)(&((idIK_Walk *)0)->lowerLegLength), sizeof( ((idIK_Walk *)0)->lowerLegLength ) },
	{ "idMat3[8]", "upperLegToHipJoint", (int)(&((idIK_Walk *)0)->upperLegToHipJoint), sizeof( ((idIK_Walk *)0)->upperLegToHipJoint ) },
	{ "idMat3[8]", "lowerLegToKneeJoint", (int)(&((idIK_Walk *)0)->lowerLegToKneeJoint), sizeof( ((idIK_Walk *)0)->lowerLegToKneeJoint ) },
	{ "float", "smoothing", (int)(&((idIK_Walk *)0)->smoothing), sizeof( ((idIK_Walk *)0)->smoothing ) },
	{ "float", "waistSmoothing", (int)(&((idIK_Walk *)0)->waistSmoothing), sizeof( ((idIK_Walk *)0)->waistSmoothing ) },
	{ "float", "footShift", (int)(&((idIK_Walk *)0)->footShift), sizeof( ((idIK_Walk *)0)->footShift ) },
	{ "float", "waistShift", (int)(&((idIK_Walk *)0)->waistShift), sizeof( ((idIK_Walk *)0)->waistShift ) },
	{ "float", "minWaistFloorDist", (int)(&((idIK_Walk *)0)->minWaistFloorDist), sizeof( ((idIK_Walk *)0)->minWaistFloorDist ) },
	{ "float", "minWaistAnkleDist", (int)(&((idIK_Walk *)0)->minWaistAnkleDist), sizeof( ((idIK_Walk *)0)->minWaistAnkleDist ) },
	{ "float", "footUpTrace", (int)(&((idIK_Walk *)0)->footUpTrace), sizeof( ((idIK_Walk *)0)->footUpTrace ) },
	{ "float", "footDownTrace", (int)(&((idIK_Walk *)0)->footDownTrace), sizeof( ((idIK_Walk *)0)->footDownTrace ) },
	{ "bool", "tiltWaist", (int)(&((idIK_Walk *)0)->tiltWaist), sizeof( ((idIK_Walk *)0)->tiltWaist ) },
	{ "bool", "usePivot", (int)(&((idIK_Walk *)0)->usePivot), sizeof( ((idIK_Walk *)0)->usePivot ) },
	{ "int", "pivotFoot", (int)(&((idIK_Walk *)0)->pivotFoot), sizeof( ((idIK_Walk *)0)->pivotFoot ) },
	{ "float", "pivotYaw", (int)(&((idIK_Walk *)0)->pivotYaw), sizeof( ((idIK_Walk *)0)->pivotYaw ) },
	{ "idVec3", "pivotPos", (int)(&((idIK_Walk *)0)->pivotPos), sizeof( ((idIK_Walk *)0)->pivotPos ) },
	{ "bool", "oldHeightsValid", (int)(&((idIK_Walk *)0)->oldHeightsValid), sizeof( ((idIK_Walk *)0)->oldHeightsValid ) },
	{ "float", "oldWaistHeight", (int)(&((idIK_Walk *)0)->oldWaistHeight), sizeof( ((idIK_Walk *)0)->oldWaistHeight ) },
	{ "float[8]", "oldAnkleHeights", (int)(&((idIK_Walk *)0)->oldAnkleHeights), sizeof( ((idIK_Walk *)0)->oldAnkleHeights ) },
	{ "idVec3", "waistOffset", (int)(&((idIK_Walk *)0)->waistOffset), sizeof( ((idIK_Walk *)0)->waistOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idIK_Reach_typeInfo[] = {
	{ "int", "numArms", (int)(&((idIK_Reach *)0)->numArms), sizeof( ((idIK_Reach *)0)->numArms ) },
	{ "int", "enabledArms", (int)(&((idIK_Reach *)0)->enabledArms), sizeof( ((idIK_Reach *)0)->enabledArms ) },
	{ "jointHandle_t[2]", "handJoints", (int)(&((idIK_Reach *)0)->handJoints), sizeof( ((idIK_Reach *)0)->handJoints ) },
	{ "jointHandle_t[2]", "elbowJoints", (int)(&((idIK_Reach *)0)->elbowJoints), sizeof( ((idIK_Reach *)0)->elbowJoints ) },
	{ "jointHandle_t[2]", "shoulderJoints", (int)(&((idIK_Reach *)0)->shoulderJoints), sizeof( ((idIK_Reach *)0)->shoulderJoints ) },
	{ "jointHandle_t[2]", "dirJoints", (int)(&((idIK_Reach *)0)->dirJoints), sizeof( ((idIK_Reach *)0)->dirJoints ) },
	{ "idVec3[2]", "shoulderForward", (int)(&((idIK_Reach *)0)->shoulderForward), sizeof( ((idIK_Reach *)0)->shoulderForward ) },
	{ "idVec3[2]", "elbowForward", (int)(&((idIK_Reach *)0)->elbowForward), sizeof( ((idIK_Reach *)0)->elbowForward ) },
	{ "float[2]", "upperArmLength", (int)(&((idIK_Reach *)0)->upperArmLength), sizeof( ((idIK_Reach *)0)->upperArmLength ) },
	{ "float[2]", "lowerArmLength", (int)(&((idIK_Reach *)0)->lowerArmLength), sizeof( ((idIK_Reach *)0)->lowerArmLength ) },
	{ "idMat3[2]", "upperArmToShoulderJoint", (int)(&((idIK_Reach *)0)->upperArmToShoulderJoint), sizeof( ((idIK_Reach *)0)->upperArmToShoulderJoint ) },
	{ "idMat3[2]", "lowerArmToElbowJoint", (int)(&((idIK_Reach *)0)->lowerArmToElbowJoint), sizeof( ((idIK_Reach *)0)->lowerArmToElbowJoint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMultiModelAF_typeInfo[] = {
	{ "idPhysics_AF", "physicsObj", (int)(&((idMultiModelAF *)0)->physicsObj), sizeof( ((idMultiModelAF *)0)->physicsObj ) },
	{ "idList < idRenderModel * >", "modelHandles", (int)(&((idMultiModelAF *)0)->modelHandles), sizeof( ((idMultiModelAF *)0)->modelHandles ) },
	{ "idList < int >", "modelDefHandles", (int)(&((idMultiModelAF *)0)->modelDefHandles), sizeof( ((idMultiModelAF *)0)->modelDefHandles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idChain_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAFAttachment_typeInfo[] = {
	{ "idEntity *", "body", (int)(&((idAFAttachment *)0)->body), sizeof( ((idAFAttachment *)0)->body ) },
	{ "idClipModel *", "combatModel", (int)(&((idAFAttachment *)0)->combatModel), sizeof( ((idAFAttachment *)0)->combatModel ) },
	{ "int", "idleAnim", (int)(&((idAFAttachment *)0)->idleAnim), sizeof( ((idAFAttachment *)0)->idleAnim ) },
	{ "jointHandle_t", "attachJoint", (int)(&((idAFAttachment *)0)->attachJoint), sizeof( ((idAFAttachment *)0)->attachJoint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_Base_typeInfo[] = {
	{ "idAF", "af", (int)(&((idAFEntity_Base *)0)->af), sizeof( ((idAFEntity_Base *)0)->af ) },
	{ "idClipModel *", "combatModel", (int)(&((idAFEntity_Base *)0)->combatModel), sizeof( ((idAFEntity_Base *)0)->combatModel ) },
	{ "int", "combatModelContents", (int)(&((idAFEntity_Base *)0)->combatModelContents), sizeof( ((idAFEntity_Base *)0)->combatModelContents ) },
	{ "idVec3", "spawnOrigin", (int)(&((idAFEntity_Base *)0)->spawnOrigin), sizeof( ((idAFEntity_Base *)0)->spawnOrigin ) },
	{ "idMat3", "spawnAxis", (int)(&((idAFEntity_Base *)0)->spawnAxis), sizeof( ((idAFEntity_Base *)0)->spawnAxis ) },
	{ "int", "nextSoundTime", (int)(&((idAFEntity_Base *)0)->nextSoundTime), sizeof( ((idAFEntity_Base *)0)->nextSoundTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_Gibbable_typeInfo[] = {
	{ "idRenderModel *", "skeletonModel", (int)(&((idAFEntity_Gibbable *)0)->skeletonModel), sizeof( ((idAFEntity_Gibbable *)0)->skeletonModel ) },
	{ "int", "skeletonModelDefHandle", (int)(&((idAFEntity_Gibbable *)0)->skeletonModelDefHandle), sizeof( ((idAFEntity_Gibbable *)0)->skeletonModelDefHandle ) },
	{ "bool", "gibbed", (int)(&((idAFEntity_Gibbable *)0)->gibbed), sizeof( ((idAFEntity_Gibbable *)0)->gibbed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_Generic_typeInfo[] = {
	{ "bool", "keepRunningPhysics", (int)(&((idAFEntity_Generic *)0)->keepRunningPhysics), sizeof( ((idAFEntity_Generic *)0)->keepRunningPhysics ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_WithAttachedHead_typeInfo[] = {
	{ "idEntityPtr < idAFAttachment >", "head", (int)(&((idAFEntity_WithAttachedHead *)0)->head), sizeof( ((idAFEntity_WithAttachedHead *)0)->head ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_Vehicle_typeInfo[] = {
	{ "idPlayer *", "player", (int)(&((idAFEntity_Vehicle *)0)->player), sizeof( ((idAFEntity_Vehicle *)0)->player ) },
	{ "jointHandle_t", "eyesJoint", (int)(&((idAFEntity_Vehicle *)0)->eyesJoint), sizeof( ((idAFEntity_Vehicle *)0)->eyesJoint ) },
	{ "jointHandle_t", "steeringWheelJoint", (int)(&((idAFEntity_Vehicle *)0)->steeringWheelJoint), sizeof( ((idAFEntity_Vehicle *)0)->steeringWheelJoint ) },
	{ "float", "wheelRadius", (int)(&((idAFEntity_Vehicle *)0)->wheelRadius), sizeof( ((idAFEntity_Vehicle *)0)->wheelRadius ) },
	{ "float", "steerAngle", (int)(&((idAFEntity_Vehicle *)0)->steerAngle), sizeof( ((idAFEntity_Vehicle *)0)->steerAngle ) },
	{ "float", "steerSpeed", (int)(&((idAFEntity_Vehicle *)0)->steerSpeed), sizeof( ((idAFEntity_Vehicle *)0)->steerSpeed ) },
	{ "const idDeclParticle *", "dustSmoke", (int)(&((idAFEntity_Vehicle *)0)->dustSmoke), sizeof( ((idAFEntity_Vehicle *)0)->dustSmoke ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_VehicleSimple_typeInfo[] = {
	{ "idClipModel *", "wheelModel", (int)(&((idAFEntity_VehicleSimple *)0)->wheelModel), sizeof( ((idAFEntity_VehicleSimple *)0)->wheelModel ) },
	{ "idAFConstraint_Suspension *[4]", "suspension", (int)(&((idAFEntity_VehicleSimple *)0)->suspension), sizeof( ((idAFEntity_VehicleSimple *)0)->suspension ) },
	{ "jointHandle_t[4]", "wheelJoints", (int)(&((idAFEntity_VehicleSimple *)0)->wheelJoints), sizeof( ((idAFEntity_VehicleSimple *)0)->wheelJoints ) },
	{ "float[4]", "wheelAngles", (int)(&((idAFEntity_VehicleSimple *)0)->wheelAngles), sizeof( ((idAFEntity_VehicleSimple *)0)->wheelAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_VehicleFourWheels_typeInfo[] = {
	{ "idAFBody *[4]", "wheels", (int)(&((idAFEntity_VehicleFourWheels *)0)->wheels), sizeof( ((idAFEntity_VehicleFourWheels *)0)->wheels ) },
	{ "idAFConstraint_Hinge *[2]", "steering", (int)(&((idAFEntity_VehicleFourWheels *)0)->steering), sizeof( ((idAFEntity_VehicleFourWheels *)0)->steering ) },
	{ "jointHandle_t[4]", "wheelJoints", (int)(&((idAFEntity_VehicleFourWheels *)0)->wheelJoints), sizeof( ((idAFEntity_VehicleFourWheels *)0)->wheelJoints ) },
	{ "float[4]", "wheelAngles", (int)(&((idAFEntity_VehicleFourWheels *)0)->wheelAngles), sizeof( ((idAFEntity_VehicleFourWheels *)0)->wheelAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_VehicleSixWheels_typeInfo[] = {
	{ "idAFBody *[6]", "wheels", (int)(&((idAFEntity_VehicleSixWheels *)0)->wheels), sizeof( ((idAFEntity_VehicleSixWheels *)0)->wheels ) },
	{ "idAFConstraint_Hinge *[4]", "steering", (int)(&((idAFEntity_VehicleSixWheels *)0)->steering), sizeof( ((idAFEntity_VehicleSixWheels *)0)->steering ) },
	{ "jointHandle_t[6]", "wheelJoints", (int)(&((idAFEntity_VehicleSixWheels *)0)->wheelJoints), sizeof( ((idAFEntity_VehicleSixWheels *)0)->wheelJoints ) },
	{ "float[6]", "wheelAngles", (int)(&((idAFEntity_VehicleSixWheels *)0)->wheelAngles), sizeof( ((idAFEntity_VehicleSixWheels *)0)->wheelAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_SteamPipe_typeInfo[] = {
	{ "int", "steamBody", (int)(&((idAFEntity_SteamPipe *)0)->steamBody), sizeof( ((idAFEntity_SteamPipe *)0)->steamBody ) },
	{ "float", "steamForce", (int)(&((idAFEntity_SteamPipe *)0)->steamForce), sizeof( ((idAFEntity_SteamPipe *)0)->steamForce ) },
	{ "float", "steamUpForce", (int)(&((idAFEntity_SteamPipe *)0)->steamUpForce), sizeof( ((idAFEntity_SteamPipe *)0)->steamUpForce ) },
	{ "idForce_Constant", "force", (int)(&((idAFEntity_SteamPipe *)0)->force), sizeof( ((idAFEntity_SteamPipe *)0)->force ) },
	{ "renderEntity_t", "steamRenderEntity", (int)(&((idAFEntity_SteamPipe *)0)->steamRenderEntity), sizeof( ((idAFEntity_SteamPipe *)0)->steamRenderEntity ) },
	{ "qhandle_t", "steamModelDefHandle", (int)(&((idAFEntity_SteamPipe *)0)->steamModelDefHandle), sizeof( ((idAFEntity_SteamPipe *)0)->steamModelDefHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_ClawFourFingers_typeInfo[] = {
	{ "idAFConstraint_Hinge *[4]", "fingers", (int)(&((idAFEntity_ClawFourFingers *)0)->fingers), sizeof( ((idAFEntity_ClawFourFingers *)0)->fingers ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSpawnableEntity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idPlayerStart_typeInfo[] = {
	{ "int", "teleportStage", (int)(&((idPlayerStart *)0)->teleportStage), sizeof( ((idPlayerStart *)0)->teleportStage ) },
	{ NULL, 0 }
};

static classVariableInfo_t idActivator_typeInfo[] = {
	{ "bool", "stay_on", (int)(&((idActivator *)0)->stay_on), sizeof( ((idActivator *)0)->stay_on ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPathCorner_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idDamagable_typeInfo[] = {
	{ "int", "count", (int)(&((idDamagable *)0)->count), sizeof( ((idDamagable *)0)->count ) },
	{ "int", "nextTriggerTime", (int)(&((idDamagable *)0)->nextTriggerTime), sizeof( ((idDamagable *)0)->nextTriggerTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idExplodable_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSpring_typeInfo[] = {
	{ "idEntity *", "ent1", (int)(&((idSpring *)0)->ent1), sizeof( ((idSpring *)0)->ent1 ) },
	{ "idEntity *", "ent2", (int)(&((idSpring *)0)->ent2), sizeof( ((idSpring *)0)->ent2 ) },
	{ "int", "id1", (int)(&((idSpring *)0)->id1), sizeof( ((idSpring *)0)->id1 ) },
	{ "int", "id2", (int)(&((idSpring *)0)->id2), sizeof( ((idSpring *)0)->id2 ) },
	{ "idVec3", "p1", (int)(&((idSpring *)0)->p1), sizeof( ((idSpring *)0)->p1 ) },
	{ "idVec3", "p2", (int)(&((idSpring *)0)->p2), sizeof( ((idSpring *)0)->p2 ) },
	{ "idForce_Spring", "spring", (int)(&((idSpring *)0)->spring), sizeof( ((idSpring *)0)->spring ) },
	{ NULL, 0 }
};

static classVariableInfo_t idForceField_typeInfo[] = {
	{ "idForce_Field", "forceField", (int)(&((idForceField *)0)->forceField), sizeof( ((idForceField *)0)->forceField ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimated_typeInfo[] = {
	{ "int", "num_anims", (int)(&((idAnimated *)0)->num_anims), sizeof( ((idAnimated *)0)->num_anims ) },
	{ "int", "current_anim_index", (int)(&((idAnimated *)0)->current_anim_index), sizeof( ((idAnimated *)0)->current_anim_index ) },
	{ "int", "anim", (int)(&((idAnimated *)0)->anim), sizeof( ((idAnimated *)0)->anim ) },
	{ "int", "blendFrames", (int)(&((idAnimated *)0)->blendFrames), sizeof( ((idAnimated *)0)->blendFrames ) },
	{ "jointHandle_t", "soundJoint", (int)(&((idAnimated *)0)->soundJoint), sizeof( ((idAnimated *)0)->soundJoint ) },
	{ "idEntityPtr < idEntity >", "activator", (int)(&((idAnimated *)0)->activator), sizeof( ((idAnimated *)0)->activator ) },
	{ "bool", "activated", (int)(&((idAnimated *)0)->activated), sizeof( ((idAnimated *)0)->activated ) },
	{ NULL, 0 }
};

static classVariableInfo_t idStaticEntity_typeInfo[] = {
	{ "int", "spawnTime", (int)(&((idStaticEntity *)0)->spawnTime), sizeof( ((idStaticEntity *)0)->spawnTime ) },
	{ "bool", "active", (int)(&((idStaticEntity *)0)->active), sizeof( ((idStaticEntity *)0)->active ) },
	{ "idVec4", "fadeFrom", (int)(&((idStaticEntity *)0)->fadeFrom), sizeof( ((idStaticEntity *)0)->fadeFrom ) },
	{ "idVec4", "fadeTo", (int)(&((idStaticEntity *)0)->fadeTo), sizeof( ((idStaticEntity *)0)->fadeTo ) },
	{ "int", "fadeStart", (int)(&((idStaticEntity *)0)->fadeStart), sizeof( ((idStaticEntity *)0)->fadeStart ) },
	{ "int", "fadeEnd", (int)(&((idStaticEntity *)0)->fadeEnd), sizeof( ((idStaticEntity *)0)->fadeEnd ) },
	{ "bool", "runGui", (int)(&((idStaticEntity *)0)->runGui), sizeof( ((idStaticEntity *)0)->runGui ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncEmitter_typeInfo[] = {
	{ "bool", "hidden", (int)(&((idFuncEmitter *)0)->hidden), sizeof( ((idFuncEmitter *)0)->hidden ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncSmoke_typeInfo[] = {
	{ "int", "smokeTime", (int)(&((idFuncSmoke *)0)->smokeTime), sizeof( ((idFuncSmoke *)0)->smokeTime ) },
	{ "const idDeclParticle *", "smoke", (int)(&((idFuncSmoke *)0)->smoke), sizeof( ((idFuncSmoke *)0)->smoke ) },
	{ "bool", "restart", (int)(&((idFuncSmoke *)0)->restart), sizeof( ((idFuncSmoke *)0)->restart ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncSplat_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTextEntity_typeInfo[] = {
	{ "idStr", "text", (int)(&((idTextEntity *)0)->text), sizeof( ((idTextEntity *)0)->text ) },
	{ "bool", "playerOriented", (int)(&((idTextEntity *)0)->playerOriented), sizeof( ((idTextEntity *)0)->playerOriented ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLocationEntity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idLocationSeparatorEntity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idVacuumSeparatorEntity_typeInfo[] = {
	{ "qhandle_t", "portal", (int)(&((idVacuumSeparatorEntity *)0)->portal), sizeof( ((idVacuumSeparatorEntity *)0)->portal ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVacuumEntity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idBeam_typeInfo[] = {
	{ "idEntityPtr < idBeam >", "target", (int)(&((idBeam *)0)->target), sizeof( ((idBeam *)0)->target ) },
	{ "idEntityPtr < idBeam >", "master", (int)(&((idBeam *)0)->master), sizeof( ((idBeam *)0)->master ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLiquid_typeInfo[] = {
	{ "idRenderModelLiquid *", "model", (int)(&((idLiquid *)0)->model), sizeof( ((idLiquid *)0)->model ) },
	{ NULL, 0 }
};

static classVariableInfo_t idShaking_typeInfo[] = {
	{ "idPhysics_Parametric", "physicsObj", (int)(&((idShaking *)0)->physicsObj), sizeof( ((idShaking *)0)->physicsObj ) },
	{ "bool", "active", (int)(&((idShaking *)0)->active), sizeof( ((idShaking *)0)->active ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEarthQuake_typeInfo[] = {
	{ "int", "nextTriggerTime", (int)(&((idEarthQuake *)0)->nextTriggerTime), sizeof( ((idEarthQuake *)0)->nextTriggerTime ) },
	{ "int", "shakeStopTime", (int)(&((idEarthQuake *)0)->shakeStopTime), sizeof( ((idEarthQuake *)0)->shakeStopTime ) },
	{ "float", "wait", (int)(&((idEarthQuake *)0)->wait), sizeof( ((idEarthQuake *)0)->wait ) },
	{ "float", "random", (int)(&((idEarthQuake *)0)->random), sizeof( ((idEarthQuake *)0)->random ) },
	{ "bool", "triggered", (int)(&((idEarthQuake *)0)->triggered), sizeof( ((idEarthQuake *)0)->triggered ) },
	{ "bool", "playerOriented", (int)(&((idEarthQuake *)0)->playerOriented), sizeof( ((idEarthQuake *)0)->playerOriented ) },
	{ "bool", "disabled", (int)(&((idEarthQuake *)0)->disabled), sizeof( ((idEarthQuake *)0)->disabled ) },
	{ "float", "shakeTime", (int)(&((idEarthQuake *)0)->shakeTime), sizeof( ((idEarthQuake *)0)->shakeTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncPortal_typeInfo[] = {
	{ "qhandle_t", "portal", (int)(&((idFuncPortal *)0)->portal), sizeof( ((idFuncPortal *)0)->portal ) },
	{ "bool", "state", (int)(&((idFuncPortal *)0)->state), sizeof( ((idFuncPortal *)0)->state ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncAASPortal_typeInfo[] = {
	{ "bool", "state", (int)(&((idFuncAASPortal *)0)->state), sizeof( ((idFuncAASPortal *)0)->state ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncAASObstacle_typeInfo[] = {
	{ "bool", "state", (int)(&((idFuncAASObstacle *)0)->state), sizeof( ((idFuncAASObstacle *)0)->state ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncRadioChatter_typeInfo[] = {
	{ "float", "time", (int)(&((idFuncRadioChatter *)0)->time), sizeof( ((idFuncRadioChatter *)0)->time ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhantomObjects_typeInfo[] = {
	{ "int", "end_time", (int)(&((idPhantomObjects *)0)->end_time), sizeof( ((idPhantomObjects *)0)->end_time ) },
	{ "float", "throw_time", (int)(&((idPhantomObjects *)0)->throw_time), sizeof( ((idPhantomObjects *)0)->throw_time ) },
	{ "float", "shake_time", (int)(&((idPhantomObjects *)0)->shake_time), sizeof( ((idPhantomObjects *)0)->shake_time ) },
	{ "idVec3", "shake_ang", (int)(&((idPhantomObjects *)0)->shake_ang), sizeof( ((idPhantomObjects *)0)->shake_ang ) },
	{ "float", "speed", (int)(&((idPhantomObjects *)0)->speed), sizeof( ((idPhantomObjects *)0)->speed ) },
	{ "int", "min_wait", (int)(&((idPhantomObjects *)0)->min_wait), sizeof( ((idPhantomObjects *)0)->min_wait ) },
	{ "int", "max_wait", (int)(&((idPhantomObjects *)0)->max_wait), sizeof( ((idPhantomObjects *)0)->max_wait ) },
	{ "idEntityPtr < idActor >", "target", (int)(&((idPhantomObjects *)0)->target), sizeof( ((idPhantomObjects *)0)->target ) },
	{ "idList < int >", "targetTime", (int)(&((idPhantomObjects *)0)->targetTime), sizeof( ((idPhantomObjects *)0)->targetTime ) },
	{ "idList < idVec3 >", "lastTargetPos", (int)(&((idPhantomObjects *)0)->lastTargetPos), sizeof( ((idPhantomObjects *)0)->lastTargetPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimState_typeInfo[] = {
	{ "bool", "idleAnim", (int)(&((idAnimState *)0)->idleAnim), sizeof( ((idAnimState *)0)->idleAnim ) },
	{ "idStr", "state", (int)(&((idAnimState *)0)->state), sizeof( ((idAnimState *)0)->state ) },
	{ "int", "animBlendFrames", (int)(&((idAnimState *)0)->animBlendFrames), sizeof( ((idAnimState *)0)->animBlendFrames ) },
	{ "int", "lastAnimBlendFrames", (int)(&((idAnimState *)0)->lastAnimBlendFrames), sizeof( ((idAnimState *)0)->lastAnimBlendFrames ) },
	{ "idActor *", "self", (int)(&((idAnimState *)0)->self), sizeof( ((idAnimState *)0)->self ) },
	{ "idAnimator *", "animator", (int)(&((idAnimState *)0)->animator), sizeof( ((idAnimState *)0)->animator ) },
	{ "idThread *", "thread", (int)(&((idAnimState *)0)->thread), sizeof( ((idAnimState *)0)->thread ) },
	{ "int", "channel", (int)(&((idAnimState *)0)->channel), sizeof( ((idAnimState *)0)->channel ) },
	{ "bool", "disabled", (int)(&((idAnimState *)0)->disabled), sizeof( ((idAnimState *)0)->disabled ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAttachInfo_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "ent", (int)(&((idAttachInfo *)0)->ent), sizeof( ((idAttachInfo *)0)->ent ) },
	{ "int", "channel", (int)(&((idAttachInfo *)0)->channel), sizeof( ((idAttachInfo *)0)->channel ) },
	{ NULL, 0 }
};

static classVariableInfo_t copyJoints_t_typeInfo[] = {
	{ "jointModTransform_t", "mod", (int)(&((copyJoints_t *)0)->mod), sizeof( ((copyJoints_t *)0)->mod ) },
	{ "jointHandle_t", "from", (int)(&((copyJoints_t *)0)->from), sizeof( ((copyJoints_t *)0)->from ) },
	{ "jointHandle_t", "to", (int)(&((copyJoints_t *)0)->to), sizeof( ((copyJoints_t *)0)->to ) },
	{ NULL, 0 }
};

static classVariableInfo_t idActor_typeInfo[] = {
	{ "int", "team", (int)(&((idActor *)0)->team), sizeof( ((idActor *)0)->team ) },
	{ "int", "rank", (int)(&((idActor *)0)->rank), sizeof( ((idActor *)0)->rank ) },
	{ "idMat3", "viewAxis", (int)(&((idActor *)0)->viewAxis), sizeof( ((idActor *)0)->viewAxis ) },
	{ "idLinkList < idActor >", "enemyNode", (int)(&((idActor *)0)->enemyNode), sizeof( ((idActor *)0)->enemyNode ) },
	{ "idLinkList < idActor >", "enemyList", (int)(&((idActor *)0)->enemyList), sizeof( ((idActor *)0)->enemyList ) },
	{ "float", "fovDot", (int)(&((idActor *)0)->fovDot), sizeof( ((idActor *)0)->fovDot ) },
	{ "idVec3", "eyeOffset", (int)(&((idActor *)0)->eyeOffset), sizeof( ((idActor *)0)->eyeOffset ) },
	{ "idVec3", "modelOffset", (int)(&((idActor *)0)->modelOffset), sizeof( ((idActor *)0)->modelOffset ) },
	{ "idAngles", "deltaViewAngles", (int)(&((idActor *)0)->deltaViewAngles), sizeof( ((idActor *)0)->deltaViewAngles ) },
	{ "int", "pain_debounce_time", (int)(&((idActor *)0)->pain_debounce_time), sizeof( ((idActor *)0)->pain_debounce_time ) },
	{ "int", "pain_delay", (int)(&((idActor *)0)->pain_delay), sizeof( ((idActor *)0)->pain_delay ) },
	{ "int", "pain_threshold", (int)(&((idActor *)0)->pain_threshold), sizeof( ((idActor *)0)->pain_threshold ) },
	{ "idStrList", "damageGroups", (int)(&((idActor *)0)->damageGroups), sizeof( ((idActor *)0)->damageGroups ) },
	{ "idList < float >", "damageScale", (int)(&((idActor *)0)->damageScale), sizeof( ((idActor *)0)->damageScale ) },
	{ "bool", "use_combat_bbox", (int)(&((idActor *)0)->use_combat_bbox), sizeof( ((idActor *)0)->use_combat_bbox ) },
	{ "idEntityPtr < idAFAttachment >", "head", (int)(&((idActor *)0)->head), sizeof( ((idActor *)0)->head ) },
	{ "idList < copyJoints_t >", "copyJoints", (int)(&((idActor *)0)->copyJoints), sizeof( ((idActor *)0)->copyJoints ) },
	{ "const function_t *", "state", (int)(&((idActor *)0)->state), sizeof( ((idActor *)0)->state ) },
	{ "const function_t *", "idealState", (int)(&((idActor *)0)->idealState), sizeof( ((idActor *)0)->idealState ) },
	{ "jointHandle_t", "leftEyeJoint", (int)(&((idActor *)0)->leftEyeJoint), sizeof( ((idActor *)0)->leftEyeJoint ) },
	{ "jointHandle_t", "rightEyeJoint", (int)(&((idActor *)0)->rightEyeJoint), sizeof( ((idActor *)0)->rightEyeJoint ) },
	{ "jointHandle_t", "soundJoint", (int)(&((idActor *)0)->soundJoint), sizeof( ((idActor *)0)->soundJoint ) },
	{ "idIK_Walk", "walkIK", (int)(&((idActor *)0)->walkIK), sizeof( ((idActor *)0)->walkIK ) },
	{ "idStr", "animPrefix", (int)(&((idActor *)0)->animPrefix), sizeof( ((idActor *)0)->animPrefix ) },
	{ "idStr", "painAnim", (int)(&((idActor *)0)->painAnim), sizeof( ((idActor *)0)->painAnim ) },
	{ "int", "blink_anim", (int)(&((idActor *)0)->blink_anim), sizeof( ((idActor *)0)->blink_anim ) },
	{ "int", "blink_time", (int)(&((idActor *)0)->blink_time), sizeof( ((idActor *)0)->blink_time ) },
	{ "int", "blink_min", (int)(&((idActor *)0)->blink_min), sizeof( ((idActor *)0)->blink_min ) },
	{ "int", "blink_max", (int)(&((idActor *)0)->blink_max), sizeof( ((idActor *)0)->blink_max ) },
	{ "idThread *", "scriptThread", (int)(&((idActor *)0)->scriptThread), sizeof( ((idActor *)0)->scriptThread ) },
	{ "idStr", "waitState", (int)(&((idActor *)0)->waitState), sizeof( ((idActor *)0)->waitState ) },
	{ "idAnimState", "headAnim", (int)(&((idActor *)0)->headAnim), sizeof( ((idActor *)0)->headAnim ) },
	{ "idAnimState", "torsoAnim", (int)(&((idActor *)0)->torsoAnim), sizeof( ((idActor *)0)->torsoAnim ) },
	{ "idAnimState", "legsAnim", (int)(&((idActor *)0)->legsAnim), sizeof( ((idActor *)0)->legsAnim ) },
	{ "bool", "allowPain", (int)(&((idActor *)0)->allowPain), sizeof( ((idActor *)0)->allowPain ) },
	{ "bool", "allowEyeFocus", (int)(&((idActor *)0)->allowEyeFocus), sizeof( ((idActor *)0)->allowEyeFocus ) },
	{ "bool", "finalBoss", (int)(&((idActor *)0)->finalBoss), sizeof( ((idActor *)0)->finalBoss ) },
	{ "int", "painTime", (int)(&((idActor *)0)->painTime), sizeof( ((idActor *)0)->painTime ) },
	{ "idList < idAttachInfo >", "attachments", (int)(&((idActor *)0)->attachments), sizeof( ((idActor *)0)->attachments ) },
	{ NULL, 0 }
};

static classVariableInfo_t idProjectile_projectileFlags_s_typeInfo[] = {
//	{ "bool", "detonate_on_world", (int)(&((idProjectile::projectileFlags_s *)0)->detonate_on_world), sizeof( ((idProjectile::projectileFlags_s *)0)->detonate_on_world ) },
//	{ "bool", "detonate_on_actor", (int)(&((idProjectile::projectileFlags_s *)0)->detonate_on_actor), sizeof( ((idProjectile::projectileFlags_s *)0)->detonate_on_actor ) },
//	{ "bool", "randomShaderSpin", (int)(&((idProjectile::projectileFlags_s *)0)->randomShaderSpin), sizeof( ((idProjectile::projectileFlags_s *)0)->randomShaderSpin ) },
//	{ "bool", "isTracer", (int)(&((idProjectile::projectileFlags_s *)0)->isTracer), sizeof( ((idProjectile::projectileFlags_s *)0)->isTracer ) },
//	{ "bool", "noSplashDamage", (int)(&((idProjectile::projectileFlags_s *)0)->noSplashDamage), sizeof( ((idProjectile::projectileFlags_s *)0)->noSplashDamage ) },
	{ NULL, 0 }
};

static classVariableInfo_t idProjectile_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "owner", (int)(&((idProjectile *)0)->owner), sizeof( ((idProjectile *)0)->owner ) },
	{ "idProjectile::projectileFlags_s", "projectileFlags", (int)(&((idProjectile *)0)->projectileFlags), sizeof( ((idProjectile *)0)->projectileFlags ) },
	{ "float", "thrust", (int)(&((idProjectile *)0)->thrust), sizeof( ((idProjectile *)0)->thrust ) },
	{ "int", "thrust_end", (int)(&((idProjectile *)0)->thrust_end), sizeof( ((idProjectile *)0)->thrust_end ) },
	{ "float", "damagePower", (int)(&((idProjectile *)0)->damagePower), sizeof( ((idProjectile *)0)->damagePower ) },
	{ "renderLight_t", "renderLight", (int)(&((idProjectile *)0)->renderLight), sizeof( ((idProjectile *)0)->renderLight ) },
	{ "qhandle_t", "lightDefHandle", (int)(&((idProjectile *)0)->lightDefHandle), sizeof( ((idProjectile *)0)->lightDefHandle ) },
	{ "idVec3", "lightOffset", (int)(&((idProjectile *)0)->lightOffset), sizeof( ((idProjectile *)0)->lightOffset ) },
	{ "int", "lightStartTime", (int)(&((idProjectile *)0)->lightStartTime), sizeof( ((idProjectile *)0)->lightStartTime ) },
	{ "int", "lightEndTime", (int)(&((idProjectile *)0)->lightEndTime), sizeof( ((idProjectile *)0)->lightEndTime ) },
	{ "idVec3", "lightColor", (int)(&((idProjectile *)0)->lightColor), sizeof( ((idProjectile *)0)->lightColor ) },
	{ "idForce_Constant", "thruster", (int)(&((idProjectile *)0)->thruster), sizeof( ((idProjectile *)0)->thruster ) },
	{ "idPhysics_RigidBody", "physicsObj", (int)(&((idProjectile *)0)->physicsObj), sizeof( ((idProjectile *)0)->physicsObj ) },
	{ "const idDeclParticle *", "smokeFly", (int)(&((idProjectile *)0)->smokeFly), sizeof( ((idProjectile *)0)->smokeFly ) },
	{ "int", "smokeFlyTime", (int)(&((idProjectile *)0)->smokeFlyTime), sizeof( ((idProjectile *)0)->smokeFlyTime ) },
	{ "projectileState_t", "state", (int)(&((idProjectile *)0)->state), sizeof( ((idProjectile *)0)->state ) },
	{ "bool", "netSyncPhysics", (int)(&((idProjectile *)0)->netSyncPhysics), sizeof( ((idProjectile *)0)->netSyncPhysics ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGuidedProjectile_typeInfo[] = {
	{ "float", "speed", (int)(&((idGuidedProjectile *)0)->speed), sizeof( ((idGuidedProjectile *)0)->speed ) },
	{ "idEntityPtr < idEntity >", "enemy", (int)(&((idGuidedProjectile *)0)->enemy), sizeof( ((idGuidedProjectile *)0)->enemy ) },
	{ "idAngles", "rndScale", (int)(&((idGuidedProjectile *)0)->rndScale), sizeof( ((idGuidedProjectile *)0)->rndScale ) },
	{ "idAngles", "rndAng", (int)(&((idGuidedProjectile *)0)->rndAng), sizeof( ((idGuidedProjectile *)0)->rndAng ) },
	{ "idAngles", "angles", (int)(&((idGuidedProjectile *)0)->angles), sizeof( ((idGuidedProjectile *)0)->angles ) },
	{ "int", "rndUpdateTime", (int)(&((idGuidedProjectile *)0)->rndUpdateTime), sizeof( ((idGuidedProjectile *)0)->rndUpdateTime ) },
	{ "float", "turn_max", (int)(&((idGuidedProjectile *)0)->turn_max), sizeof( ((idGuidedProjectile *)0)->turn_max ) },
	{ "float", "clamp_dist", (int)(&((idGuidedProjectile *)0)->clamp_dist), sizeof( ((idGuidedProjectile *)0)->clamp_dist ) },
	{ "bool", "burstMode", (int)(&((idGuidedProjectile *)0)->burstMode), sizeof( ((idGuidedProjectile *)0)->burstMode ) },
	{ "bool", "unGuided", (int)(&((idGuidedProjectile *)0)->unGuided), sizeof( ((idGuidedProjectile *)0)->unGuided ) },
	{ "float", "burstDist", (int)(&((idGuidedProjectile *)0)->burstDist), sizeof( ((idGuidedProjectile *)0)->burstDist ) },
	{ "float", "burstVelocity", (int)(&((idGuidedProjectile *)0)->burstVelocity), sizeof( ((idGuidedProjectile *)0)->burstVelocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSoulCubeMissile_typeInfo[] = {
	{ "idVec3", "startingVelocity", (int)(&((idSoulCubeMissile *)0)->startingVelocity), sizeof( ((idSoulCubeMissile *)0)->startingVelocity ) },
	{ "idVec3", "endingVelocity", (int)(&((idSoulCubeMissile *)0)->endingVelocity), sizeof( ((idSoulCubeMissile *)0)->endingVelocity ) },
	{ "float", "accelTime", (int)(&((idSoulCubeMissile *)0)->accelTime), sizeof( ((idSoulCubeMissile *)0)->accelTime ) },
	{ "int", "launchTime", (int)(&((idSoulCubeMissile *)0)->launchTime), sizeof( ((idSoulCubeMissile *)0)->launchTime ) },
	{ "bool", "killPhase", (int)(&((idSoulCubeMissile *)0)->killPhase), sizeof( ((idSoulCubeMissile *)0)->killPhase ) },
	{ "bool", "returnPhase", (int)(&((idSoulCubeMissile *)0)->returnPhase), sizeof( ((idSoulCubeMissile *)0)->returnPhase ) },
	{ "idVec3", "destOrg", (int)(&((idSoulCubeMissile *)0)->destOrg), sizeof( ((idSoulCubeMissile *)0)->destOrg ) },
	{ "idVec3", "orbitOrg", (int)(&((idSoulCubeMissile *)0)->orbitOrg), sizeof( ((idSoulCubeMissile *)0)->orbitOrg ) },
	{ "int", "orbitTime", (int)(&((idSoulCubeMissile *)0)->orbitTime), sizeof( ((idSoulCubeMissile *)0)->orbitTime ) },
	{ "int", "smokeKillTime", (int)(&((idSoulCubeMissile *)0)->smokeKillTime), sizeof( ((idSoulCubeMissile *)0)->smokeKillTime ) },
	{ "const idDeclParticle *", "smokeKill", (int)(&((idSoulCubeMissile *)0)->smokeKill), sizeof( ((idSoulCubeMissile *)0)->smokeKill ) },
	{ NULL, 0 }
};

static classVariableInfo_t beamTarget_t_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "target", (int)(&((beamTarget_t *)0)->target), sizeof( ((beamTarget_t *)0)->target ) },
	{ "renderEntity_t", "renderEntity", (int)(&((beamTarget_t *)0)->renderEntity), sizeof( ((beamTarget_t *)0)->renderEntity ) },
	{ "qhandle_t", "modelDefHandle", (int)(&((beamTarget_t *)0)->modelDefHandle), sizeof( ((beamTarget_t *)0)->modelDefHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBFGProjectile_typeInfo[] = {
	{ "idList < beamTarget_t >", "beamTargets", (int)(&((idBFGProjectile *)0)->beamTargets), sizeof( ((idBFGProjectile *)0)->beamTargets ) },
	{ "renderEntity_t", "secondModel", (int)(&((idBFGProjectile *)0)->secondModel), sizeof( ((idBFGProjectile *)0)->secondModel ) },
	{ "qhandle_t", "secondModelDefHandle", (int)(&((idBFGProjectile *)0)->secondModelDefHandle), sizeof( ((idBFGProjectile *)0)->secondModelDefHandle ) },
	{ "int", "nextDamageTime", (int)(&((idBFGProjectile *)0)->nextDamageTime), sizeof( ((idBFGProjectile *)0)->nextDamageTime ) },
	{ "idStr", "damageFreq", (int)(&((idBFGProjectile *)0)->damageFreq), sizeof( ((idBFGProjectile *)0)->damageFreq ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDebris_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "owner", (int)(&((idDebris *)0)->owner), sizeof( ((idDebris *)0)->owner ) },
	{ "idPhysics_RigidBody", "physicsObj", (int)(&((idDebris *)0)->physicsObj), sizeof( ((idDebris *)0)->physicsObj ) },
	{ "const idDeclParticle *", "smokeFly", (int)(&((idDebris *)0)->smokeFly), sizeof( ((idDebris *)0)->smokeFly ) },
	{ "int", "smokeFlyTime", (int)(&((idDebris *)0)->smokeFlyTime), sizeof( ((idDebris *)0)->smokeFlyTime ) },
	{ "const idSoundShader *", "sndBounce", (int)(&((idDebris *)0)->sndBounce), sizeof( ((idDebris *)0)->sndBounce ) },
	{ NULL, 0 }
};

static classVariableInfo_t idWeapon_typeInfo[] = {
	{ "idScriptBool", "WEAPON_ATTACK", (int)(&((idWeapon *)0)->WEAPON_ATTACK), sizeof( ((idWeapon *)0)->WEAPON_ATTACK ) },
	{ "idScriptBool", "WEAPON_RELOAD", (int)(&((idWeapon *)0)->WEAPON_RELOAD), sizeof( ((idWeapon *)0)->WEAPON_RELOAD ) },
	{ "idScriptBool", "WEAPON_NETRELOAD", (int)(&((idWeapon *)0)->WEAPON_NETRELOAD), sizeof( ((idWeapon *)0)->WEAPON_NETRELOAD ) },
	{ "idScriptBool", "WEAPON_NETENDRELOAD", (int)(&((idWeapon *)0)->WEAPON_NETENDRELOAD), sizeof( ((idWeapon *)0)->WEAPON_NETENDRELOAD ) },
	{ "idScriptBool", "WEAPON_NETFIRING", (int)(&((idWeapon *)0)->WEAPON_NETFIRING), sizeof( ((idWeapon *)0)->WEAPON_NETFIRING ) },
	{ "idScriptBool", "WEAPON_RAISEWEAPON", (int)(&((idWeapon *)0)->WEAPON_RAISEWEAPON), sizeof( ((idWeapon *)0)->WEAPON_RAISEWEAPON ) },
	{ "idScriptBool", "WEAPON_LOWERWEAPON", (int)(&((idWeapon *)0)->WEAPON_LOWERWEAPON), sizeof( ((idWeapon *)0)->WEAPON_LOWERWEAPON ) },
	{ "weaponStatus_t", "status", (int)(&((idWeapon *)0)->status), sizeof( ((idWeapon *)0)->status ) },
	{ "idThread *", "thread", (int)(&((idWeapon *)0)->thread), sizeof( ((idWeapon *)0)->thread ) },
	{ "idStr", "state", (int)(&((idWeapon *)0)->state), sizeof( ((idWeapon *)0)->state ) },
	{ "idStr", "idealState", (int)(&((idWeapon *)0)->idealState), sizeof( ((idWeapon *)0)->idealState ) },
	{ "int", "animBlendFrames", (int)(&((idWeapon *)0)->animBlendFrames), sizeof( ((idWeapon *)0)->animBlendFrames ) },
	{ "int", "animDoneTime", (int)(&((idWeapon *)0)->animDoneTime), sizeof( ((idWeapon *)0)->animDoneTime ) },
	{ "bool", "isLinked", (int)(&((idWeapon *)0)->isLinked), sizeof( ((idWeapon *)0)->isLinked ) },
	{ "idEntity *", "projectileEnt", (int)(&((idWeapon *)0)->projectileEnt), sizeof( ((idWeapon *)0)->projectileEnt ) },
	{ "idPlayer *", "owner", (int)(&((idWeapon *)0)->owner), sizeof( ((idWeapon *)0)->owner ) },
	{ "idEntityPtr < idAnimatedEntity >", "worldModel", (int)(&((idWeapon *)0)->worldModel), sizeof( ((idWeapon *)0)->worldModel ) },
	{ "int", "hideTime", (int)(&((idWeapon *)0)->hideTime), sizeof( ((idWeapon *)0)->hideTime ) },
	{ "float", "hideDistance", (int)(&((idWeapon *)0)->hideDistance), sizeof( ((idWeapon *)0)->hideDistance ) },
	{ "int", "hideStartTime", (int)(&((idWeapon *)0)->hideStartTime), sizeof( ((idWeapon *)0)->hideStartTime ) },
	{ "float", "hideStart", (int)(&((idWeapon *)0)->hideStart), sizeof( ((idWeapon *)0)->hideStart ) },
	{ "float", "hideEnd", (int)(&((idWeapon *)0)->hideEnd), sizeof( ((idWeapon *)0)->hideEnd ) },
	{ "float", "hideOffset", (int)(&((idWeapon *)0)->hideOffset), sizeof( ((idWeapon *)0)->hideOffset ) },
	{ "bool", "hide", (int)(&((idWeapon *)0)->hide), sizeof( ((idWeapon *)0)->hide ) },
	{ "bool", "disabled", (int)(&((idWeapon *)0)->disabled), sizeof( ((idWeapon *)0)->disabled ) },
	{ "int", "berserk", (int)(&((idWeapon *)0)->berserk), sizeof( ((idWeapon *)0)->berserk ) },
	{ "idVec3", "playerViewOrigin", (int)(&((idWeapon *)0)->playerViewOrigin), sizeof( ((idWeapon *)0)->playerViewOrigin ) },
	{ "idMat3", "playerViewAxis", (int)(&((idWeapon *)0)->playerViewAxis), sizeof( ((idWeapon *)0)->playerViewAxis ) },
	{ "idVec3", "viewWeaponOrigin", (int)(&((idWeapon *)0)->viewWeaponOrigin), sizeof( ((idWeapon *)0)->viewWeaponOrigin ) },
	{ "idMat3", "viewWeaponAxis", (int)(&((idWeapon *)0)->viewWeaponAxis), sizeof( ((idWeapon *)0)->viewWeaponAxis ) },
	{ "idVec3", "muzzleOrigin", (int)(&((idWeapon *)0)->muzzleOrigin), sizeof( ((idWeapon *)0)->muzzleOrigin ) },
	{ "idMat3", "muzzleAxis", (int)(&((idWeapon *)0)->muzzleAxis), sizeof( ((idWeapon *)0)->muzzleAxis ) },
	{ "idVec3", "pushVelocity", (int)(&((idWeapon *)0)->pushVelocity), sizeof( ((idWeapon *)0)->pushVelocity ) },
	{ "const idDeclEntityDef *", "weaponDef", (int)(&((idWeapon *)0)->weaponDef), sizeof( ((idWeapon *)0)->weaponDef ) },
	{ "const idDeclEntityDef *", "meleeDef", (int)(&((idWeapon *)0)->meleeDef), sizeof( ((idWeapon *)0)->meleeDef ) },
	{ "idDict", "projectileDict", (int)(&((idWeapon *)0)->projectileDict), sizeof( ((idWeapon *)0)->projectileDict ) },
	{ "float", "meleeDistance", (int)(&((idWeapon *)0)->meleeDistance), sizeof( ((idWeapon *)0)->meleeDistance ) },
	{ "idStr", "meleeDefName", (int)(&((idWeapon *)0)->meleeDefName), sizeof( ((idWeapon *)0)->meleeDefName ) },
	{ "idDict", "brassDict", (int)(&((idWeapon *)0)->brassDict), sizeof( ((idWeapon *)0)->brassDict ) },
	{ "int", "brassDelay", (int)(&((idWeapon *)0)->brassDelay), sizeof( ((idWeapon *)0)->brassDelay ) },
	{ "idStr", "icon", (int)(&((idWeapon *)0)->icon), sizeof( ((idWeapon *)0)->icon ) },
	{ "renderLight_t", "guiLight", (int)(&((idWeapon *)0)->guiLight), sizeof( ((idWeapon *)0)->guiLight ) },
	{ "int", "guiLightHandle", (int)(&((idWeapon *)0)->guiLightHandle), sizeof( ((idWeapon *)0)->guiLightHandle ) },
	{ "renderLight_t", "muzzleFlash", (int)(&((idWeapon *)0)->muzzleFlash), sizeof( ((idWeapon *)0)->muzzleFlash ) },
	{ "int", "muzzleFlashHandle", (int)(&((idWeapon *)0)->muzzleFlashHandle), sizeof( ((idWeapon *)0)->muzzleFlashHandle ) },
	{ "renderLight_t", "worldMuzzleFlash", (int)(&((idWeapon *)0)->worldMuzzleFlash), sizeof( ((idWeapon *)0)->worldMuzzleFlash ) },
	{ "int", "worldMuzzleFlashHandle", (int)(&((idWeapon *)0)->worldMuzzleFlashHandle), sizeof( ((idWeapon *)0)->worldMuzzleFlashHandle ) },
	{ "idVec3", "flashColor", (int)(&((idWeapon *)0)->flashColor), sizeof( ((idWeapon *)0)->flashColor ) },
	{ "int", "muzzleFlashEnd", (int)(&((idWeapon *)0)->muzzleFlashEnd), sizeof( ((idWeapon *)0)->muzzleFlashEnd ) },
	{ "int", "flashTime", (int)(&((idWeapon *)0)->flashTime), sizeof( ((idWeapon *)0)->flashTime ) },
	{ "bool", "lightOn", (int)(&((idWeapon *)0)->lightOn), sizeof( ((idWeapon *)0)->lightOn ) },
	{ "bool", "silent_fire", (int)(&((idWeapon *)0)->silent_fire), sizeof( ((idWeapon *)0)->silent_fire ) },
	{ "bool", "allowDrop", (int)(&((idWeapon *)0)->allowDrop), sizeof( ((idWeapon *)0)->allowDrop ) },
	{ "bool", "hasBloodSplat", (int)(&((idWeapon *)0)->hasBloodSplat), sizeof( ((idWeapon *)0)->hasBloodSplat ) },
	{ "int", "kick_endtime", (int)(&((idWeapon *)0)->kick_endtime), sizeof( ((idWeapon *)0)->kick_endtime ) },
	{ "int", "muzzle_kick_time", (int)(&((idWeapon *)0)->muzzle_kick_time), sizeof( ((idWeapon *)0)->muzzle_kick_time ) },
	{ "int", "muzzle_kick_maxtime", (int)(&((idWeapon *)0)->muzzle_kick_maxtime), sizeof( ((idWeapon *)0)->muzzle_kick_maxtime ) },
	{ "idAngles", "muzzle_kick_angles", (int)(&((idWeapon *)0)->muzzle_kick_angles), sizeof( ((idWeapon *)0)->muzzle_kick_angles ) },
	{ "idVec3", "muzzle_kick_offset", (int)(&((idWeapon *)0)->muzzle_kick_offset), sizeof( ((idWeapon *)0)->muzzle_kick_offset ) },
	{ "ammo_t", "ammoType", (int)(&((idWeapon *)0)->ammoType), sizeof( ((idWeapon *)0)->ammoType ) },
	{ "int", "ammoRequired", (int)(&((idWeapon *)0)->ammoRequired), sizeof( ((idWeapon *)0)->ammoRequired ) },
	{ "int", "clipSize", (int)(&((idWeapon *)0)->clipSize), sizeof( ((idWeapon *)0)->clipSize ) },
	{ "int", "ammoClip", (int)(&((idWeapon *)0)->ammoClip), sizeof( ((idWeapon *)0)->ammoClip ) },
	{ "int", "lowAmmo", (int)(&((idWeapon *)0)->lowAmmo), sizeof( ((idWeapon *)0)->lowAmmo ) },
	{ "bool", "powerAmmo", (int)(&((idWeapon *)0)->powerAmmo), sizeof( ((idWeapon *)0)->powerAmmo ) },
	{ "bool", "isFiring", (int)(&((idWeapon *)0)->isFiring), sizeof( ((idWeapon *)0)->isFiring ) },
	{ "int", "zoomFov", (int)(&((idWeapon *)0)->zoomFov), sizeof( ((idWeapon *)0)->zoomFov ) },
	{ "jointHandle_t", "barrelJointView", (int)(&((idWeapon *)0)->barrelJointView), sizeof( ((idWeapon *)0)->barrelJointView ) },
	{ "jointHandle_t", "flashJointView", (int)(&((idWeapon *)0)->flashJointView), sizeof( ((idWeapon *)0)->flashJointView ) },
	{ "jointHandle_t", "ejectJointView", (int)(&((idWeapon *)0)->ejectJointView), sizeof( ((idWeapon *)0)->ejectJointView ) },
	{ "jointHandle_t", "guiLightJointView", (int)(&((idWeapon *)0)->guiLightJointView), sizeof( ((idWeapon *)0)->guiLightJointView ) },
	{ "jointHandle_t", "ventLightJointView", (int)(&((idWeapon *)0)->ventLightJointView), sizeof( ((idWeapon *)0)->ventLightJointView ) },
	{ "jointHandle_t", "flashJointWorld", (int)(&((idWeapon *)0)->flashJointWorld), sizeof( ((idWeapon *)0)->flashJointWorld ) },
	{ "jointHandle_t", "barrelJointWorld", (int)(&((idWeapon *)0)->barrelJointWorld), sizeof( ((idWeapon *)0)->barrelJointWorld ) },
	{ "jointHandle_t", "ejectJointWorld", (int)(&((idWeapon *)0)->ejectJointWorld), sizeof( ((idWeapon *)0)->ejectJointWorld ) },
	{ "const idSoundShader *", "sndHum", (int)(&((idWeapon *)0)->sndHum), sizeof( ((idWeapon *)0)->sndHum ) },
	{ "const idDeclParticle *", "weaponSmoke", (int)(&((idWeapon *)0)->weaponSmoke), sizeof( ((idWeapon *)0)->weaponSmoke ) },
	{ "int", "weaponSmokeStartTime", (int)(&((idWeapon *)0)->weaponSmokeStartTime), sizeof( ((idWeapon *)0)->weaponSmokeStartTime ) },
	{ "bool", "continuousSmoke", (int)(&((idWeapon *)0)->continuousSmoke), sizeof( ((idWeapon *)0)->continuousSmoke ) },
	{ "const idDeclParticle *", "strikeSmoke", (int)(&((idWeapon *)0)->strikeSmoke), sizeof( ((idWeapon *)0)->strikeSmoke ) },
	{ "int", "strikeSmokeStartTime", (int)(&((idWeapon *)0)->strikeSmokeStartTime), sizeof( ((idWeapon *)0)->strikeSmokeStartTime ) },
	{ "idVec3", "strikePos", (int)(&((idWeapon *)0)->strikePos), sizeof( ((idWeapon *)0)->strikePos ) },
	{ "idMat3", "strikeAxis", (int)(&((idWeapon *)0)->strikeAxis), sizeof( ((idWeapon *)0)->strikeAxis ) },
	{ "int", "nextStrikeFx", (int)(&((idWeapon *)0)->nextStrikeFx), sizeof( ((idWeapon *)0)->nextStrikeFx ) },
	{ "bool", "nozzleFx", (int)(&((idWeapon *)0)->nozzleFx), sizeof( ((idWeapon *)0)->nozzleFx ) },
	{ "int", "nozzleFxFade", (int)(&((idWeapon *)0)->nozzleFxFade), sizeof( ((idWeapon *)0)->nozzleFxFade ) },
	{ "int", "lastAttack", (int)(&((idWeapon *)0)->lastAttack), sizeof( ((idWeapon *)0)->lastAttack ) },
	{ "renderLight_t", "nozzleGlow", (int)(&((idWeapon *)0)->nozzleGlow), sizeof( ((idWeapon *)0)->nozzleGlow ) },
	{ "int", "nozzleGlowHandle", (int)(&((idWeapon *)0)->nozzleGlowHandle), sizeof( ((idWeapon *)0)->nozzleGlowHandle ) },
	{ "idVec3", "nozzleGlowColor", (int)(&((idWeapon *)0)->nozzleGlowColor), sizeof( ((idWeapon *)0)->nozzleGlowColor ) },
	{ "const idMaterial *", "nozzleGlowShader", (int)(&((idWeapon *)0)->nozzleGlowShader), sizeof( ((idWeapon *)0)->nozzleGlowShader ) },
	{ "float", "nozzleGlowRadius", (int)(&((idWeapon *)0)->nozzleGlowRadius), sizeof( ((idWeapon *)0)->nozzleGlowRadius ) },
	{ "int", "weaponAngleOffsetAverages", (int)(&((idWeapon *)0)->weaponAngleOffsetAverages), sizeof( ((idWeapon *)0)->weaponAngleOffsetAverages ) },
	{ "float", "weaponAngleOffsetScale", (int)(&((idWeapon *)0)->weaponAngleOffsetScale), sizeof( ((idWeapon *)0)->weaponAngleOffsetScale ) },
	{ "float", "weaponAngleOffsetMax", (int)(&((idWeapon *)0)->weaponAngleOffsetMax), sizeof( ((idWeapon *)0)->weaponAngleOffsetMax ) },
	{ "float", "weaponOffsetTime", (int)(&((idWeapon *)0)->weaponOffsetTime), sizeof( ((idWeapon *)0)->weaponOffsetTime ) },
	{ "float", "weaponOffsetScale", (int)(&((idWeapon *)0)->weaponOffsetScale), sizeof( ((idWeapon *)0)->weaponOffsetScale ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLight_typeInfo[] = {
	{ "renderLight_t", "renderLight", (int)(&((idLight *)0)->renderLight), sizeof( ((idLight *)0)->renderLight ) },
	{ "idVec3", "localLightOrigin", (int)(&((idLight *)0)->localLightOrigin), sizeof( ((idLight *)0)->localLightOrigin ) },
	{ "idMat3", "localLightAxis", (int)(&((idLight *)0)->localLightAxis), sizeof( ((idLight *)0)->localLightAxis ) },
	{ "qhandle_t", "lightDefHandle", (int)(&((idLight *)0)->lightDefHandle), sizeof( ((idLight *)0)->lightDefHandle ) },
	{ "idStr", "brokenModel", (int)(&((idLight *)0)->brokenModel), sizeof( ((idLight *)0)->brokenModel ) },
	{ "int", "levels", (int)(&((idLight *)0)->levels), sizeof( ((idLight *)0)->levels ) },
	{ "int", "currentLevel", (int)(&((idLight *)0)->currentLevel), sizeof( ((idLight *)0)->currentLevel ) },
	{ "idVec3", "baseColor", (int)(&((idLight *)0)->baseColor), sizeof( ((idLight *)0)->baseColor ) },
	{ "bool", "breakOnTrigger", (int)(&((idLight *)0)->breakOnTrigger), sizeof( ((idLight *)0)->breakOnTrigger ) },
	{ "int", "count", (int)(&((idLight *)0)->count), sizeof( ((idLight *)0)->count ) },
	{ "int", "triggercount", (int)(&((idLight *)0)->triggercount), sizeof( ((idLight *)0)->triggercount ) },
	{ "idEntity *", "lightParent", (int)(&((idLight *)0)->lightParent), sizeof( ((idLight *)0)->lightParent ) },
	{ "idVec4", "fadeFrom", (int)(&((idLight *)0)->fadeFrom), sizeof( ((idLight *)0)->fadeFrom ) },
	{ "idVec4", "fadeTo", (int)(&((idLight *)0)->fadeTo), sizeof( ((idLight *)0)->fadeTo ) },
	{ "int", "fadeStart", (int)(&((idLight *)0)->fadeStart), sizeof( ((idLight *)0)->fadeStart ) },
	{ "int", "fadeEnd", (int)(&((idLight *)0)->fadeEnd), sizeof( ((idLight *)0)->fadeEnd ) },
	{ "bool", "soundWasPlaying", (int)(&((idLight *)0)->soundWasPlaying), sizeof( ((idLight *)0)->soundWasPlaying ) },
	{ NULL, 0 }
};

static classVariableInfo_t idWorldspawn_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idItem_typeInfo[] = {
	{ "idVec3", "orgOrigin", (int)(&((idItem *)0)->orgOrigin), sizeof( ((idItem *)0)->orgOrigin ) },
	{ "bool", "spin", (int)(&((idItem *)0)->spin), sizeof( ((idItem *)0)->spin ) },
	{ "bool", "pulse", (int)(&((idItem *)0)->pulse), sizeof( ((idItem *)0)->pulse ) },
	{ "bool", "canPickUp", (int)(&((idItem *)0)->canPickUp), sizeof( ((idItem *)0)->canPickUp ) },
	{ "int", "itemShellHandle", (int)(&((idItem *)0)->itemShellHandle), sizeof( ((idItem *)0)->itemShellHandle ) },
	{ "const idMaterial *", "shellMaterial", (int)(&((idItem *)0)->shellMaterial), sizeof( ((idItem *)0)->shellMaterial ) },
	{ "mutable bool", "inView", (int)(&((idItem *)0)->inView), sizeof( ((idItem *)0)->inView ) },
	{ "mutable int", "inViewTime", (int)(&((idItem *)0)->inViewTime), sizeof( ((idItem *)0)->inViewTime ) },
	{ "mutable int", "lastCycle", (int)(&((idItem *)0)->lastCycle), sizeof( ((idItem *)0)->lastCycle ) },
	{ "mutable int", "lastRenderViewTime", (int)(&((idItem *)0)->lastRenderViewTime), sizeof( ((idItem *)0)->lastRenderViewTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idItemPowerup_typeInfo[] = {
	{ "int", "time", (int)(&((idItemPowerup *)0)->time), sizeof( ((idItemPowerup *)0)->time ) },
	{ "int", "type", (int)(&((idItemPowerup *)0)->type), sizeof( ((idItemPowerup *)0)->type ) },
	{ NULL, 0 }
};

static classVariableInfo_t idObjective_typeInfo[] = {
	{ "idVec3", "playerPos", (int)(&((idObjective *)0)->playerPos), sizeof( ((idObjective *)0)->playerPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVideoCDItem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idPDAItem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idMoveableItem_typeInfo[] = {
	{ "idPhysics_RigidBody", "physicsObj", (int)(&((idMoveableItem *)0)->physicsObj), sizeof( ((idMoveableItem *)0)->physicsObj ) },
	{ "idClipModel *", "trigger", (int)(&((idMoveableItem *)0)->trigger), sizeof( ((idMoveableItem *)0)->trigger ) },
	{ "const idDeclParticle *", "smoke", (int)(&((idMoveableItem *)0)->smoke), sizeof( ((idMoveableItem *)0)->smoke ) },
	{ "int", "smokeTime", (int)(&((idMoveableItem *)0)->smokeTime), sizeof( ((idMoveableItem *)0)->smokeTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMoveablePDAItem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idItemRemover_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idObjectiveComplete_typeInfo[] = {
	{ "idVec3", "playerPos", (int)(&((idObjectiveComplete *)0)->playerPos), sizeof( ((idObjectiveComplete *)0)->playerPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t screenBlob_t_typeInfo[] = {
	{ "const idMaterial *", "material", (int)(&((screenBlob_t *)0)->material), sizeof( ((screenBlob_t *)0)->material ) },
	{ "float", "x", (int)(&((screenBlob_t *)0)->x), sizeof( ((screenBlob_t *)0)->x ) },
	{ "float", "y", (int)(&((screenBlob_t *)0)->y), sizeof( ((screenBlob_t *)0)->y ) },
	{ "float", "w", (int)(&((screenBlob_t *)0)->w), sizeof( ((screenBlob_t *)0)->w ) },
	{ "float", "h", (int)(&((screenBlob_t *)0)->h), sizeof( ((screenBlob_t *)0)->h ) },
	{ "float", "s1", (int)(&((screenBlob_t *)0)->s1), sizeof( ((screenBlob_t *)0)->s1 ) },
	{ "float", "t1", (int)(&((screenBlob_t *)0)->t1), sizeof( ((screenBlob_t *)0)->t1 ) },
	{ "float", "s2", (int)(&((screenBlob_t *)0)->s2), sizeof( ((screenBlob_t *)0)->s2 ) },
	{ "float", "t2", (int)(&((screenBlob_t *)0)->t2), sizeof( ((screenBlob_t *)0)->t2 ) },
	{ "int", "finishTime", (int)(&((screenBlob_t *)0)->finishTime), sizeof( ((screenBlob_t *)0)->finishTime ) },
	{ "int", "startFadeTime", (int)(&((screenBlob_t *)0)->startFadeTime), sizeof( ((screenBlob_t *)0)->startFadeTime ) },
	{ "float", "driftAmount", (int)(&((screenBlob_t *)0)->driftAmount), sizeof( ((screenBlob_t *)0)->driftAmount ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlayerView_typeInfo[] = {
	{ "screenBlob_t[8]", "screenBlobs", (int)(&((idPlayerView *)0)->screenBlobs), sizeof( ((idPlayerView *)0)->screenBlobs ) },
	{ "int", "dvFinishTime", (int)(&((idPlayerView *)0)->dvFinishTime), sizeof( ((idPlayerView *)0)->dvFinishTime ) },
	{ "const idMaterial *", "dvMaterial", (int)(&((idPlayerView *)0)->dvMaterial), sizeof( ((idPlayerView *)0)->dvMaterial ) },
	{ "int", "kickFinishTime", (int)(&((idPlayerView *)0)->kickFinishTime), sizeof( ((idPlayerView *)0)->kickFinishTime ) },
	{ "idAngles", "kickAngles", (int)(&((idPlayerView *)0)->kickAngles), sizeof( ((idPlayerView *)0)->kickAngles ) },
	{ "bool", "bfgVision", (int)(&((idPlayerView *)0)->bfgVision), sizeof( ((idPlayerView *)0)->bfgVision ) },
	{ "const idMaterial *", "tunnelMaterial", (int)(&((idPlayerView *)0)->tunnelMaterial), sizeof( ((idPlayerView *)0)->tunnelMaterial ) },
	{ "const idMaterial *", "armorMaterial", (int)(&((idPlayerView *)0)->armorMaterial), sizeof( ((idPlayerView *)0)->armorMaterial ) },
	{ "const idMaterial *", "berserkMaterial", (int)(&((idPlayerView *)0)->berserkMaterial), sizeof( ((idPlayerView *)0)->berserkMaterial ) },
	{ "const idMaterial *", "irGogglesMaterial", (int)(&((idPlayerView *)0)->irGogglesMaterial), sizeof( ((idPlayerView *)0)->irGogglesMaterial ) },
	{ "const idMaterial *", "bloodSprayMaterial", (int)(&((idPlayerView *)0)->bloodSprayMaterial), sizeof( ((idPlayerView *)0)->bloodSprayMaterial ) },
	{ "const idMaterial *", "bfgMaterial", (int)(&((idPlayerView *)0)->bfgMaterial), sizeof( ((idPlayerView *)0)->bfgMaterial ) },
	{ "const idMaterial *", "lagoMaterial", (int)(&((idPlayerView *)0)->lagoMaterial), sizeof( ((idPlayerView *)0)->lagoMaterial ) },
	{ "float", "lastDamageTime", (int)(&((idPlayerView *)0)->lastDamageTime), sizeof( ((idPlayerView *)0)->lastDamageTime ) },
	{ "idVec4", "fadeColor", (int)(&((idPlayerView *)0)->fadeColor), sizeof( ((idPlayerView *)0)->fadeColor ) },
	{ "idVec4", "fadeToColor", (int)(&((idPlayerView *)0)->fadeToColor), sizeof( ((idPlayerView *)0)->fadeToColor ) },
	{ "idVec4", "fadeFromColor", (int)(&((idPlayerView *)0)->fadeFromColor), sizeof( ((idPlayerView *)0)->fadeFromColor ) },
	{ "float", "fadeRate", (int)(&((idPlayerView *)0)->fadeRate), sizeof( ((idPlayerView *)0)->fadeRate ) },
	{ "int", "fadeTime", (int)(&((idPlayerView *)0)->fadeTime), sizeof( ((idPlayerView *)0)->fadeTime ) },
	{ "idAngles", "shakeAng", (int)(&((idPlayerView *)0)->shakeAng), sizeof( ((idPlayerView *)0)->shakeAng ) },
	{ "idPlayer *", "player", (int)(&((idPlayerView *)0)->player), sizeof( ((idPlayerView *)0)->player ) },
	{ "renderView_t", "view", (int)(&((idPlayerView *)0)->view), sizeof( ((idPlayerView *)0)->view ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlayerIcon_typeInfo[] = {
	{ "playerIconType_t", "iconType", (int)(&((idPlayerIcon *)0)->iconType), sizeof( ((idPlayerIcon *)0)->iconType ) },
	{ "renderEntity_t", "renderEnt", (int)(&((idPlayerIcon *)0)->renderEnt), sizeof( ((idPlayerIcon *)0)->renderEnt ) },
	{ "qhandle_t", "iconHandle", (int)(&((idPlayerIcon *)0)->iconHandle), sizeof( ((idPlayerIcon *)0)->iconHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t idItemInfo_typeInfo[] = {
	{ "idStr", "name", (int)(&((idItemInfo *)0)->name), sizeof( ((idItemInfo *)0)->name ) },
	{ "idStr", "icon", (int)(&((idItemInfo *)0)->icon), sizeof( ((idItemInfo *)0)->icon ) },
	{ NULL, 0 }
};

static classVariableInfo_t idObjectiveInfo_typeInfo[] = {
	{ "idStr", "title", (int)(&((idObjectiveInfo *)0)->title), sizeof( ((idObjectiveInfo *)0)->title ) },
	{ "idStr", "text", (int)(&((idObjectiveInfo *)0)->text), sizeof( ((idObjectiveInfo *)0)->text ) },
	{ "idStr", "screenshot", (int)(&((idObjectiveInfo *)0)->screenshot), sizeof( ((idObjectiveInfo *)0)->screenshot ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLevelTriggerInfo_typeInfo[] = {
	{ "idStr", "levelName", (int)(&((idLevelTriggerInfo *)0)->levelName), sizeof( ((idLevelTriggerInfo *)0)->levelName ) },
	{ "idStr", "triggerName", (int)(&((idLevelTriggerInfo *)0)->triggerName), sizeof( ((idLevelTriggerInfo *)0)->triggerName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInventory_typeInfo[] = {
	{ "int", "maxHealth", (int)(&((idInventory *)0)->maxHealth), sizeof( ((idInventory *)0)->maxHealth ) },
	{ "int", "weapons", (int)(&((idInventory *)0)->weapons), sizeof( ((idInventory *)0)->weapons ) },
	{ "int", "powerups", (int)(&((idInventory *)0)->powerups), sizeof( ((idInventory *)0)->powerups ) },
	{ "int", "armor", (int)(&((idInventory *)0)->armor), sizeof( ((idInventory *)0)->armor ) },
	{ "int", "maxarmor", (int)(&((idInventory *)0)->maxarmor), sizeof( ((idInventory *)0)->maxarmor ) },
	{ "int[16]", "ammo", (int)(&((idInventory *)0)->ammo), sizeof( ((idInventory *)0)->ammo ) },
	{ "int[16]", "clip", (int)(&((idInventory *)0)->clip), sizeof( ((idInventory *)0)->clip ) },
	{ "int[4]", "powerupEndTime", (int)(&((idInventory *)0)->powerupEndTime), sizeof( ((idInventory *)0)->powerupEndTime ) },
	{ "int", "ammoPredictTime", (int)(&((idInventory *)0)->ammoPredictTime), sizeof( ((idInventory *)0)->ammoPredictTime ) },
	{ "int", "deplete_armor", (int)(&((idInventory *)0)->deplete_armor), sizeof( ((idInventory *)0)->deplete_armor ) },
	{ "float", "deplete_rate", (int)(&((idInventory *)0)->deplete_rate), sizeof( ((idInventory *)0)->deplete_rate ) },
	{ "int", "deplete_ammount", (int)(&((idInventory *)0)->deplete_ammount), sizeof( ((idInventory *)0)->deplete_ammount ) },
	{ "int", "nextArmorDepleteTime", (int)(&((idInventory *)0)->nextArmorDepleteTime), sizeof( ((idInventory *)0)->nextArmorDepleteTime ) },
	{ "int[4]", "pdasViewed", (int)(&((idInventory *)0)->pdasViewed), sizeof( ((idInventory *)0)->pdasViewed ) },
	{ "int", "selPDA", (int)(&((idInventory *)0)->selPDA), sizeof( ((idInventory *)0)->selPDA ) },
	{ "int", "selEMail", (int)(&((idInventory *)0)->selEMail), sizeof( ((idInventory *)0)->selEMail ) },
	{ "int", "selVideo", (int)(&((idInventory *)0)->selVideo), sizeof( ((idInventory *)0)->selVideo ) },
	{ "int", "selAudio", (int)(&((idInventory *)0)->selAudio), sizeof( ((idInventory *)0)->selAudio ) },
	{ "bool", "pdaOpened", (int)(&((idInventory *)0)->pdaOpened), sizeof( ((idInventory *)0)->pdaOpened ) },
	{ "bool", "turkeyScore", (int)(&((idInventory *)0)->turkeyScore), sizeof( ((idInventory *)0)->turkeyScore ) },
	{ "idList < idDict * >", "items", (int)(&((idInventory *)0)->items), sizeof( ((idInventory *)0)->items ) },
	{ "idStrList", "pdas", (int)(&((idInventory *)0)->pdas), sizeof( ((idInventory *)0)->pdas ) },
	{ "idStrList", "pdaSecurity", (int)(&((idInventory *)0)->pdaSecurity), sizeof( ((idInventory *)0)->pdaSecurity ) },
	{ "idStrList", "videos", (int)(&((idInventory *)0)->videos), sizeof( ((idInventory *)0)->videos ) },
	{ "idStrList", "emails", (int)(&((idInventory *)0)->emails), sizeof( ((idInventory *)0)->emails ) },
	{ "bool", "ammoPulse", (int)(&((idInventory *)0)->ammoPulse), sizeof( ((idInventory *)0)->ammoPulse ) },
	{ "bool", "weaponPulse", (int)(&((idInventory *)0)->weaponPulse), sizeof( ((idInventory *)0)->weaponPulse ) },
	{ "bool", "armorPulse", (int)(&((idInventory *)0)->armorPulse), sizeof( ((idInventory *)0)->armorPulse ) },
	{ "int", "lastGiveTime", (int)(&((idInventory *)0)->lastGiveTime), sizeof( ((idInventory *)0)->lastGiveTime ) },
	{ "idList < idLevelTriggerInfo >", "levelTriggers", (int)(&((idInventory *)0)->levelTriggers), sizeof( ((idInventory *)0)->levelTriggers ) },
	{ "int", "nextItemPickup", (int)(&((idInventory *)0)->nextItemPickup), sizeof( ((idInventory *)0)->nextItemPickup ) },
	{ "int", "nextItemNum", (int)(&((idInventory *)0)->nextItemNum), sizeof( ((idInventory *)0)->nextItemNum ) },
	{ "int", "onePickupTime", (int)(&((idInventory *)0)->onePickupTime), sizeof( ((idInventory *)0)->onePickupTime ) },
	{ "idList < idItemInfo >", "pickupItemNames", (int)(&((idInventory *)0)->pickupItemNames), sizeof( ((idInventory *)0)->pickupItemNames ) },
	{ "idList < idObjectiveInfo >", "objectiveNames", (int)(&((idInventory *)0)->objectiveNames), sizeof( ((idInventory *)0)->objectiveNames ) },
	{ NULL, 0 }
};

static classVariableInfo_t loggedAccel_t_typeInfo[] = {
	{ "int", "time", (int)(&((loggedAccel_t *)0)->time), sizeof( ((loggedAccel_t *)0)->time ) },
	{ "idVec3", "dir", (int)(&((loggedAccel_t *)0)->dir), sizeof( ((loggedAccel_t *)0)->dir ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasLocation_t_typeInfo[] = {
	{ "int", "areaNum", (int)(&((aasLocation_t *)0)->areaNum), sizeof( ((aasLocation_t *)0)->areaNum ) },
	{ "idVec3", "pos", (int)(&((aasLocation_t *)0)->pos), sizeof( ((aasLocation_t *)0)->pos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlayer_typeInfo[] = {
	{ "usercmd_t", "usercmd", (int)(&((idPlayer *)0)->usercmd), sizeof( ((idPlayer *)0)->usercmd ) },
	{ "idPlayerView", "playerView", (int)(&((idPlayer *)0)->playerView), sizeof( ((idPlayer *)0)->playerView ) },
	{ "bool", "noclip", (int)(&((idPlayer *)0)->noclip), sizeof( ((idPlayer *)0)->noclip ) },
	{ "bool", "godmode", (int)(&((idPlayer *)0)->godmode), sizeof( ((idPlayer *)0)->godmode ) },
	{ "bool", "spawnAnglesSet", (int)(&((idPlayer *)0)->spawnAnglesSet), sizeof( ((idPlayer *)0)->spawnAnglesSet ) },
	{ "idAngles", "spawnAngles", (int)(&((idPlayer *)0)->spawnAngles), sizeof( ((idPlayer *)0)->spawnAngles ) },
	{ "idAngles", "viewAngles", (int)(&((idPlayer *)0)->viewAngles), sizeof( ((idPlayer *)0)->viewAngles ) },
	{ "idAngles", "cmdAngles", (int)(&((idPlayer *)0)->cmdAngles), sizeof( ((idPlayer *)0)->cmdAngles ) },
	{ "int", "buttonMask", (int)(&((idPlayer *)0)->buttonMask), sizeof( ((idPlayer *)0)->buttonMask ) },
	{ "int", "oldButtons", (int)(&((idPlayer *)0)->oldButtons), sizeof( ((idPlayer *)0)->oldButtons ) },
	{ "int", "oldFlags", (int)(&((idPlayer *)0)->oldFlags), sizeof( ((idPlayer *)0)->oldFlags ) },
	{ "int", "lastHitTime", (int)(&((idPlayer *)0)->lastHitTime), sizeof( ((idPlayer *)0)->lastHitTime ) },
	{ "int", "lastSndHitTime", (int)(&((idPlayer *)0)->lastSndHitTime), sizeof( ((idPlayer *)0)->lastSndHitTime ) },
	{ "int", "lastSavingThrowTime", (int)(&((idPlayer *)0)->lastSavingThrowTime), sizeof( ((idPlayer *)0)->lastSavingThrowTime ) },
	{ "idScriptBool", "AI_FORWARD", (int)(&((idPlayer *)0)->AI_FORWARD), sizeof( ((idPlayer *)0)->AI_FORWARD ) },
	{ "idScriptBool", "AI_BACKWARD", (int)(&((idPlayer *)0)->AI_BACKWARD), sizeof( ((idPlayer *)0)->AI_BACKWARD ) },
	{ "idScriptBool", "AI_STRAFE_LEFT", (int)(&((idPlayer *)0)->AI_STRAFE_LEFT), sizeof( ((idPlayer *)0)->AI_STRAFE_LEFT ) },
	{ "idScriptBool", "AI_STRAFE_RIGHT", (int)(&((idPlayer *)0)->AI_STRAFE_RIGHT), sizeof( ((idPlayer *)0)->AI_STRAFE_RIGHT ) },
	{ "idScriptBool", "AI_ATTACK_HELD", (int)(&((idPlayer *)0)->AI_ATTACK_HELD), sizeof( ((idPlayer *)0)->AI_ATTACK_HELD ) },
	{ "idScriptBool", "AI_WEAPON_FIRED", (int)(&((idPlayer *)0)->AI_WEAPON_FIRED), sizeof( ((idPlayer *)0)->AI_WEAPON_FIRED ) },
	{ "idScriptBool", "AI_JUMP", (int)(&((idPlayer *)0)->AI_JUMP), sizeof( ((idPlayer *)0)->AI_JUMP ) },
	{ "idScriptBool", "AI_CROUCH", (int)(&((idPlayer *)0)->AI_CROUCH), sizeof( ((idPlayer *)0)->AI_CROUCH ) },
	{ "idScriptBool", "AI_ONGROUND", (int)(&((idPlayer *)0)->AI_ONGROUND), sizeof( ((idPlayer *)0)->AI_ONGROUND ) },
	{ "idScriptBool", "AI_ONLADDER", (int)(&((idPlayer *)0)->AI_ONLADDER), sizeof( ((idPlayer *)0)->AI_ONLADDER ) },
	{ "idScriptBool", "AI_DEAD", (int)(&((idPlayer *)0)->AI_DEAD), sizeof( ((idPlayer *)0)->AI_DEAD ) },
	{ "idScriptBool", "AI_RUN", (int)(&((idPlayer *)0)->AI_RUN), sizeof( ((idPlayer *)0)->AI_RUN ) },
	{ "idScriptBool", "AI_PAIN", (int)(&((idPlayer *)0)->AI_PAIN), sizeof( ((idPlayer *)0)->AI_PAIN ) },
	{ "idScriptBool", "AI_HARDLANDING", (int)(&((idPlayer *)0)->AI_HARDLANDING), sizeof( ((idPlayer *)0)->AI_HARDLANDING ) },
	{ "idScriptBool", "AI_SOFTLANDING", (int)(&((idPlayer *)0)->AI_SOFTLANDING), sizeof( ((idPlayer *)0)->AI_SOFTLANDING ) },
	{ "idScriptBool", "AI_RELOAD", (int)(&((idPlayer *)0)->AI_RELOAD), sizeof( ((idPlayer *)0)->AI_RELOAD ) },
	{ "idScriptBool", "AI_TELEPORT", (int)(&((idPlayer *)0)->AI_TELEPORT), sizeof( ((idPlayer *)0)->AI_TELEPORT ) },
	{ "idScriptBool", "AI_TURN_LEFT", (int)(&((idPlayer *)0)->AI_TURN_LEFT), sizeof( ((idPlayer *)0)->AI_TURN_LEFT ) },
	{ "idScriptBool", "AI_TURN_RIGHT", (int)(&((idPlayer *)0)->AI_TURN_RIGHT), sizeof( ((idPlayer *)0)->AI_TURN_RIGHT ) },
	{ "idInventory", "inventory", (int)(&((idPlayer *)0)->inventory), sizeof( ((idPlayer *)0)->inventory ) },
	{ "idEntityPtr < idWeapon >", "weapon", (int)(&((idPlayer *)0)->weapon), sizeof( ((idPlayer *)0)->weapon ) },
	{ "idUserInterface *", "hud", (int)(&((idPlayer *)0)->hud), sizeof( ((idPlayer *)0)->hud ) },
	{ "idUserInterface *", "objectiveSystem", (int)(&((idPlayer *)0)->objectiveSystem), sizeof( ((idPlayer *)0)->objectiveSystem ) },
	{ "bool", "objectiveSystemOpen", (int)(&((idPlayer *)0)->objectiveSystemOpen), sizeof( ((idPlayer *)0)->objectiveSystemOpen ) },
	{ "int", "weapon_soulcube", (int)(&((idPlayer *)0)->weapon_soulcube), sizeof( ((idPlayer *)0)->weapon_soulcube ) },
	{ "int", "weapon_pda", (int)(&((idPlayer *)0)->weapon_pda), sizeof( ((idPlayer *)0)->weapon_pda ) },
	{ "int", "weapon_fists", (int)(&((idPlayer *)0)->weapon_fists), sizeof( ((idPlayer *)0)->weapon_fists ) },
	{ "int", "heartRate", (int)(&((idPlayer *)0)->heartRate), sizeof( ((idPlayer *)0)->heartRate ) },
	{ "idInterpolate < float >", "heartInfo", (int)(&((idPlayer *)0)->heartInfo), sizeof( ((idPlayer *)0)->heartInfo ) },
	{ "int", "lastHeartAdjust", (int)(&((idPlayer *)0)->lastHeartAdjust), sizeof( ((idPlayer *)0)->lastHeartAdjust ) },
	{ "int", "lastHeartBeat", (int)(&((idPlayer *)0)->lastHeartBeat), sizeof( ((idPlayer *)0)->lastHeartBeat ) },
	{ "int", "lastDmgTime", (int)(&((idPlayer *)0)->lastDmgTime), sizeof( ((idPlayer *)0)->lastDmgTime ) },
	{ "int", "deathClearContentsTime", (int)(&((idPlayer *)0)->deathClearContentsTime), sizeof( ((idPlayer *)0)->deathClearContentsTime ) },
	{ "bool", "doingDeathSkin", (int)(&((idPlayer *)0)->doingDeathSkin), sizeof( ((idPlayer *)0)->doingDeathSkin ) },
	{ "int", "lastArmorPulse", (int)(&((idPlayer *)0)->lastArmorPulse), sizeof( ((idPlayer *)0)->lastArmorPulse ) },
	{ "float", "stamina", (int)(&((idPlayer *)0)->stamina), sizeof( ((idPlayer *)0)->stamina ) },
	{ "float", "healthPool", (int)(&((idPlayer *)0)->healthPool), sizeof( ((idPlayer *)0)->healthPool ) },
	{ "int", "nextHealthPulse", (int)(&((idPlayer *)0)->nextHealthPulse), sizeof( ((idPlayer *)0)->nextHealthPulse ) },
	{ "bool", "healthPulse", (int)(&((idPlayer *)0)->healthPulse), sizeof( ((idPlayer *)0)->healthPulse ) },
	{ "bool", "healthTake", (int)(&((idPlayer *)0)->healthTake), sizeof( ((idPlayer *)0)->healthTake ) },
	{ "int", "nextHealthTake", (int)(&((idPlayer *)0)->nextHealthTake), sizeof( ((idPlayer *)0)->nextHealthTake ) },
	{ "bool", "hiddenWeapon", (int)(&((idPlayer *)0)->hiddenWeapon), sizeof( ((idPlayer *)0)->hiddenWeapon ) },
	{ "idEntityPtr < idProjectile >", "soulCubeProjectile", (int)(&((idPlayer *)0)->soulCubeProjectile), sizeof( ((idPlayer *)0)->soulCubeProjectile ) },
	{ "int", "spectator", (int)(&((idPlayer *)0)->spectator), sizeof( ((idPlayer *)0)->spectator ) },
	{ "idVec3", "colorBar", (int)(&((idPlayer *)0)->colorBar), sizeof( ((idPlayer *)0)->colorBar ) },
	{ "int", "colorBarIndex", (int)(&((idPlayer *)0)->colorBarIndex), sizeof( ((idPlayer *)0)->colorBarIndex ) },
	{ "bool", "scoreBoardOpen", (int)(&((idPlayer *)0)->scoreBoardOpen), sizeof( ((idPlayer *)0)->scoreBoardOpen ) },
	{ "bool", "forceScoreBoard", (int)(&((idPlayer *)0)->forceScoreBoard), sizeof( ((idPlayer *)0)->forceScoreBoard ) },
	{ "bool", "forceRespawn", (int)(&((idPlayer *)0)->forceRespawn), sizeof( ((idPlayer *)0)->forceRespawn ) },
	{ "bool", "spectating", (int)(&((idPlayer *)0)->spectating), sizeof( ((idPlayer *)0)->spectating ) },
	{ "int", "lastSpectateTeleport", (int)(&((idPlayer *)0)->lastSpectateTeleport), sizeof( ((idPlayer *)0)->lastSpectateTeleport ) },
	{ "bool", "lastHitToggle", (int)(&((idPlayer *)0)->lastHitToggle), sizeof( ((idPlayer *)0)->lastHitToggle ) },
	{ "bool", "forcedReady", (int)(&((idPlayer *)0)->forcedReady), sizeof( ((idPlayer *)0)->forcedReady ) },
	{ "bool", "wantSpectate", (int)(&((idPlayer *)0)->wantSpectate), sizeof( ((idPlayer *)0)->wantSpectate ) },
	{ "bool", "weaponGone", (int)(&((idPlayer *)0)->weaponGone), sizeof( ((idPlayer *)0)->weaponGone ) },
	{ "bool", "useInitialSpawns", (int)(&((idPlayer *)0)->useInitialSpawns), sizeof( ((idPlayer *)0)->useInitialSpawns ) },
	{ "int", "latchedTeam", (int)(&((idPlayer *)0)->latchedTeam), sizeof( ((idPlayer *)0)->latchedTeam ) },
	{ "int", "tourneyRank", (int)(&((idPlayer *)0)->tourneyRank), sizeof( ((idPlayer *)0)->tourneyRank ) },
	{ "int", "tourneyLine", (int)(&((idPlayer *)0)->tourneyLine), sizeof( ((idPlayer *)0)->tourneyLine ) },
	{ "int", "spawnedTime", (int)(&((idPlayer *)0)->spawnedTime), sizeof( ((idPlayer *)0)->spawnedTime ) },
	{ "idEntityPtr < idEntity >", "teleportEntity", (int)(&((idPlayer *)0)->teleportEntity), sizeof( ((idPlayer *)0)->teleportEntity ) },
	{ "int", "teleportKiller", (int)(&((idPlayer *)0)->teleportKiller), sizeof( ((idPlayer *)0)->teleportKiller ) },
	{ "bool", "lastManOver", (int)(&((idPlayer *)0)->lastManOver), sizeof( ((idPlayer *)0)->lastManOver ) },
	{ "bool", "lastManPlayAgain", (int)(&((idPlayer *)0)->lastManPlayAgain), sizeof( ((idPlayer *)0)->lastManPlayAgain ) },
	{ "bool", "lastManPresent", (int)(&((idPlayer *)0)->lastManPresent), sizeof( ((idPlayer *)0)->lastManPresent ) },
	{ "bool", "isLagged", (int)(&((idPlayer *)0)->isLagged), sizeof( ((idPlayer *)0)->isLagged ) },
	{ "bool", "isChatting", (int)(&((idPlayer *)0)->isChatting), sizeof( ((idPlayer *)0)->isChatting ) },
	{ "int", "minRespawnTime", (int)(&((idPlayer *)0)->minRespawnTime), sizeof( ((idPlayer *)0)->minRespawnTime ) },
	{ "int", "maxRespawnTime", (int)(&((idPlayer *)0)->maxRespawnTime), sizeof( ((idPlayer *)0)->maxRespawnTime ) },
	{ "idVec3", "firstPersonViewOrigin", (int)(&((idPlayer *)0)->firstPersonViewOrigin), sizeof( ((idPlayer *)0)->firstPersonViewOrigin ) },
	{ "idMat3", "firstPersonViewAxis", (int)(&((idPlayer *)0)->firstPersonViewAxis), sizeof( ((idPlayer *)0)->firstPersonViewAxis ) },
	{ "idDragEntity", "dragEntity", (int)(&((idPlayer *)0)->dragEntity), sizeof( ((idPlayer *)0)->dragEntity ) },
	{ "jointHandle_t", "hipJoint", (int)(&((idPlayer *)0)->hipJoint), sizeof( ((idPlayer *)0)->hipJoint ) },
	{ "jointHandle_t", "chestJoint", (int)(&((idPlayer *)0)->chestJoint), sizeof( ((idPlayer *)0)->chestJoint ) },
	{ "jointHandle_t", "headJoint", (int)(&((idPlayer *)0)->headJoint), sizeof( ((idPlayer *)0)->headJoint ) },
	{ "idPhysics_Player", "physicsObj", (int)(&((idPlayer *)0)->physicsObj), sizeof( ((idPlayer *)0)->physicsObj ) },
	{ "idList < aasLocation_t >", "aasLocation", (int)(&((idPlayer *)0)->aasLocation), sizeof( ((idPlayer *)0)->aasLocation ) },
	{ "int", "bobFoot", (int)(&((idPlayer *)0)->bobFoot), sizeof( ((idPlayer *)0)->bobFoot ) },
	{ "float", "bobFrac", (int)(&((idPlayer *)0)->bobFrac), sizeof( ((idPlayer *)0)->bobFrac ) },
	{ "float", "bobfracsin", (int)(&((idPlayer *)0)->bobfracsin), sizeof( ((idPlayer *)0)->bobfracsin ) },
	{ "int", "bobCycle", (int)(&((idPlayer *)0)->bobCycle), sizeof( ((idPlayer *)0)->bobCycle ) },
	{ "float", "xyspeed", (int)(&((idPlayer *)0)->xyspeed), sizeof( ((idPlayer *)0)->xyspeed ) },
	{ "int", "stepUpTime", (int)(&((idPlayer *)0)->stepUpTime), sizeof( ((idPlayer *)0)->stepUpTime ) },
	{ "float", "stepUpDelta", (int)(&((idPlayer *)0)->stepUpDelta), sizeof( ((idPlayer *)0)->stepUpDelta ) },
	{ "float", "idealLegsYaw", (int)(&((idPlayer *)0)->idealLegsYaw), sizeof( ((idPlayer *)0)->idealLegsYaw ) },
	{ "float", "legsYaw", (int)(&((idPlayer *)0)->legsYaw), sizeof( ((idPlayer *)0)->legsYaw ) },
	{ "bool", "legsForward", (int)(&((idPlayer *)0)->legsForward), sizeof( ((idPlayer *)0)->legsForward ) },
	{ "float", "oldViewYaw", (int)(&((idPlayer *)0)->oldViewYaw), sizeof( ((idPlayer *)0)->oldViewYaw ) },
	{ "idAngles", "viewBobAngles", (int)(&((idPlayer *)0)->viewBobAngles), sizeof( ((idPlayer *)0)->viewBobAngles ) },
	{ "idVec3", "viewBob", (int)(&((idPlayer *)0)->viewBob), sizeof( ((idPlayer *)0)->viewBob ) },
	{ "int", "landChange", (int)(&((idPlayer *)0)->landChange), sizeof( ((idPlayer *)0)->landChange ) },
	{ "int", "landTime", (int)(&((idPlayer *)0)->landTime), sizeof( ((idPlayer *)0)->landTime ) },
	{ "int", "currentWeapon", (int)(&((idPlayer *)0)->currentWeapon), sizeof( ((idPlayer *)0)->currentWeapon ) },
	{ "int", "idealWeapon", (int)(&((idPlayer *)0)->idealWeapon), sizeof( ((idPlayer *)0)->idealWeapon ) },
	{ "int", "previousWeapon", (int)(&((idPlayer *)0)->previousWeapon), sizeof( ((idPlayer *)0)->previousWeapon ) },
	{ "int", "weaponSwitchTime", (int)(&((idPlayer *)0)->weaponSwitchTime), sizeof( ((idPlayer *)0)->weaponSwitchTime ) },
	{ "bool", "weaponEnabled", (int)(&((idPlayer *)0)->weaponEnabled), sizeof( ((idPlayer *)0)->weaponEnabled ) },
	{ "bool", "showWeaponViewModel", (int)(&((idPlayer *)0)->showWeaponViewModel), sizeof( ((idPlayer *)0)->showWeaponViewModel ) },
	{ "const idDeclSkin *", "skin", (int)(&((idPlayer *)0)->skin), sizeof( ((idPlayer *)0)->skin ) },
	{ "const idDeclSkin *", "powerUpSkin", (int)(&((idPlayer *)0)->powerUpSkin), sizeof( ((idPlayer *)0)->powerUpSkin ) },
	{ "idStr", "baseSkinName", (int)(&((idPlayer *)0)->baseSkinName), sizeof( ((idPlayer *)0)->baseSkinName ) },
	{ "int", "numProjectilesFired", (int)(&((idPlayer *)0)->numProjectilesFired), sizeof( ((idPlayer *)0)->numProjectilesFired ) },
	{ "int", "numProjectileHits", (int)(&((idPlayer *)0)->numProjectileHits), sizeof( ((idPlayer *)0)->numProjectileHits ) },
	{ "bool", "airless", (int)(&((idPlayer *)0)->airless), sizeof( ((idPlayer *)0)->airless ) },
	{ "int", "airTics", (int)(&((idPlayer *)0)->airTics), sizeof( ((idPlayer *)0)->airTics ) },
	{ "int", "lastAirDamage", (int)(&((idPlayer *)0)->lastAirDamage), sizeof( ((idPlayer *)0)->lastAirDamage ) },
	{ "bool", "gibDeath", (int)(&((idPlayer *)0)->gibDeath), sizeof( ((idPlayer *)0)->gibDeath ) },
	{ "bool", "gibsLaunched", (int)(&((idPlayer *)0)->gibsLaunched), sizeof( ((idPlayer *)0)->gibsLaunched ) },
	{ "idVec3", "gibsDir", (int)(&((idPlayer *)0)->gibsDir), sizeof( ((idPlayer *)0)->gibsDir ) },
	{ "idInterpolate < float >", "zoomFov", (int)(&((idPlayer *)0)->zoomFov), sizeof( ((idPlayer *)0)->zoomFov ) },
	{ "idInterpolate < float >", "centerView", (int)(&((idPlayer *)0)->centerView), sizeof( ((idPlayer *)0)->centerView ) },
	{ "bool", "fxFov", (int)(&((idPlayer *)0)->fxFov), sizeof( ((idPlayer *)0)->fxFov ) },
	{ "float", "influenceFov", (int)(&((idPlayer *)0)->influenceFov), sizeof( ((idPlayer *)0)->influenceFov ) },
	{ "int", "influenceActive", (int)(&((idPlayer *)0)->influenceActive), sizeof( ((idPlayer *)0)->influenceActive ) },
	{ "idEntity *", "influenceEntity", (int)(&((idPlayer *)0)->influenceEntity), sizeof( ((idPlayer *)0)->influenceEntity ) },
	{ "const idMaterial *", "influenceMaterial", (int)(&((idPlayer *)0)->influenceMaterial), sizeof( ((idPlayer *)0)->influenceMaterial ) },
	{ "float", "influenceRadius", (int)(&((idPlayer *)0)->influenceRadius), sizeof( ((idPlayer *)0)->influenceRadius ) },
	{ "const idDeclSkin *", "influenceSkin", (int)(&((idPlayer *)0)->influenceSkin), sizeof( ((idPlayer *)0)->influenceSkin ) },
	{ "idCamera *", "privateCameraView", (int)(&((idPlayer *)0)->privateCameraView), sizeof( ((idPlayer *)0)->privateCameraView ) },
	{ "idAngles[64]", "loggedViewAngles", (int)(&((idPlayer *)0)->loggedViewAngles), sizeof( ((idPlayer *)0)->loggedViewAngles ) },
	{ "loggedAccel_t[16]", "loggedAccel", (int)(&((idPlayer *)0)->loggedAccel), sizeof( ((idPlayer *)0)->loggedAccel ) },
	{ "int", "currentLoggedAccel", (int)(&((idPlayer *)0)->currentLoggedAccel), sizeof( ((idPlayer *)0)->currentLoggedAccel ) },
	{ "idEntity *", "focusGUIent", (int)(&((idPlayer *)0)->focusGUIent), sizeof( ((idPlayer *)0)->focusGUIent ) },
	{ "idUserInterface *", "focusUI", (int)(&((idPlayer *)0)->focusUI), sizeof( ((idPlayer *)0)->focusUI ) },
	{ "idAI *", "focusCharacter", (int)(&((idPlayer *)0)->focusCharacter), sizeof( ((idPlayer *)0)->focusCharacter ) },
	{ "int", "talkCursor", (int)(&((idPlayer *)0)->talkCursor), sizeof( ((idPlayer *)0)->talkCursor ) },
	{ "int", "focusTime", (int)(&((idPlayer *)0)->focusTime), sizeof( ((idPlayer *)0)->focusTime ) },
	{ "idAFEntity_Vehicle *", "focusVehicle", (int)(&((idPlayer *)0)->focusVehicle), sizeof( ((idPlayer *)0)->focusVehicle ) },
	{ "idUserInterface *", "cursor", (int)(&((idPlayer *)0)->cursor), sizeof( ((idPlayer *)0)->cursor ) },
	{ "int", "oldMouseX", (int)(&((idPlayer *)0)->oldMouseX), sizeof( ((idPlayer *)0)->oldMouseX ) },
	{ "int", "oldMouseY", (int)(&((idPlayer *)0)->oldMouseY), sizeof( ((idPlayer *)0)->oldMouseY ) },
	{ "idStr", "pdaAudio", (int)(&((idPlayer *)0)->pdaAudio), sizeof( ((idPlayer *)0)->pdaAudio ) },
	{ "idStr", "pdaVideo", (int)(&((idPlayer *)0)->pdaVideo), sizeof( ((idPlayer *)0)->pdaVideo ) },
	{ "idStr", "pdaVideoWave", (int)(&((idPlayer *)0)->pdaVideoWave), sizeof( ((idPlayer *)0)->pdaVideoWave ) },
	{ "bool", "tipUp", (int)(&((idPlayer *)0)->tipUp), sizeof( ((idPlayer *)0)->tipUp ) },
	{ "bool", "objectiveUp", (int)(&((idPlayer *)0)->objectiveUp), sizeof( ((idPlayer *)0)->objectiveUp ) },
	{ "int", "lastDamageDef", (int)(&((idPlayer *)0)->lastDamageDef), sizeof( ((idPlayer *)0)->lastDamageDef ) },
	{ "idVec3", "lastDamageDir", (int)(&((idPlayer *)0)->lastDamageDir), sizeof( ((idPlayer *)0)->lastDamageDir ) },
	{ "int", "lastDamageLocation", (int)(&((idPlayer *)0)->lastDamageLocation), sizeof( ((idPlayer *)0)->lastDamageLocation ) },
	{ "int", "smoothedFrame", (int)(&((idPlayer *)0)->smoothedFrame), sizeof( ((idPlayer *)0)->smoothedFrame ) },
	{ "bool", "smoothedOriginUpdated", (int)(&((idPlayer *)0)->smoothedOriginUpdated), sizeof( ((idPlayer *)0)->smoothedOriginUpdated ) },
	{ "idVec3", "smoothedOrigin", (int)(&((idPlayer *)0)->smoothedOrigin), sizeof( ((idPlayer *)0)->smoothedOrigin ) },
	{ "idAngles", "smoothedAngles", (int)(&((idPlayer *)0)->smoothedAngles), sizeof( ((idPlayer *)0)->smoothedAngles ) },
	{ "bool", "ready", (int)(&((idPlayer *)0)->ready), sizeof( ((idPlayer *)0)->ready ) },
	{ "bool", "respawning", (int)(&((idPlayer *)0)->respawning), sizeof( ((idPlayer *)0)->respawning ) },
	{ "bool", "leader", (int)(&((idPlayer *)0)->leader), sizeof( ((idPlayer *)0)->leader ) },
	{ "int", "lastSpectateChange", (int)(&((idPlayer *)0)->lastSpectateChange), sizeof( ((idPlayer *)0)->lastSpectateChange ) },
	{ "int", "lastTeleFX", (int)(&((idPlayer *)0)->lastTeleFX), sizeof( ((idPlayer *)0)->lastTeleFX ) },
	{ "unsigned int", "lastSnapshotSequence", (int)(&((idPlayer *)0)->lastSnapshotSequence), sizeof( ((idPlayer *)0)->lastSnapshotSequence ) },
	{ "bool", "weaponCatchup", (int)(&((idPlayer *)0)->weaponCatchup), sizeof( ((idPlayer *)0)->weaponCatchup ) },
	{ "int", "MPAim", (int)(&((idPlayer *)0)->MPAim), sizeof( ((idPlayer *)0)->MPAim ) },
	{ "int", "lastMPAim", (int)(&((idPlayer *)0)->lastMPAim), sizeof( ((idPlayer *)0)->lastMPAim ) },
	{ "int", "lastMPAimTime", (int)(&((idPlayer *)0)->lastMPAimTime), sizeof( ((idPlayer *)0)->lastMPAimTime ) },
	{ "int", "MPAimFadeTime", (int)(&((idPlayer *)0)->MPAimFadeTime), sizeof( ((idPlayer *)0)->MPAimFadeTime ) },
	{ "bool", "MPAimHighlight", (int)(&((idPlayer *)0)->MPAimHighlight), sizeof( ((idPlayer *)0)->MPAimHighlight ) },
	{ "bool", "isTelefragged", (int)(&((idPlayer *)0)->isTelefragged), sizeof( ((idPlayer *)0)->isTelefragged ) },
	{ "idPlayerIcon", "playerIcon", (int)(&((idPlayer *)0)->playerIcon), sizeof( ((idPlayer *)0)->playerIcon ) },
	{ "bool", "selfSmooth", (int)(&((idPlayer *)0)->selfSmooth), sizeof( ((idPlayer *)0)->selfSmooth ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_moveState_t_typeInfo[] = {
	{ "moveStage_t", "stage", (int)(&((idMover::moveState_t *)0)->stage), sizeof( ((idMover::moveState_t *)0)->stage ) },
	{ "int", "acceleration", (int)(&((idMover::moveState_t *)0)->acceleration), sizeof( ((idMover::moveState_t *)0)->acceleration ) },
	{ "int", "movetime", (int)(&((idMover::moveState_t *)0)->movetime), sizeof( ((idMover::moveState_t *)0)->movetime ) },
	{ "int", "deceleration", (int)(&((idMover::moveState_t *)0)->deceleration), sizeof( ((idMover::moveState_t *)0)->deceleration ) },
	{ "idVec3", "dir", (int)(&((idMover::moveState_t *)0)->dir), sizeof( ((idMover::moveState_t *)0)->dir ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_rotationState_t_typeInfo[] = {
	{ "moveStage_t", "stage", (int)(&((idMover::rotationState_t *)0)->stage), sizeof( ((idMover::rotationState_t *)0)->stage ) },
	{ "int", "acceleration", (int)(&((idMover::rotationState_t *)0)->acceleration), sizeof( ((idMover::rotationState_t *)0)->acceleration ) },
	{ "int", "movetime", (int)(&((idMover::rotationState_t *)0)->movetime), sizeof( ((idMover::rotationState_t *)0)->movetime ) },
	{ "int", "deceleration", (int)(&((idMover::rotationState_t *)0)->deceleration), sizeof( ((idMover::rotationState_t *)0)->deceleration ) },
	{ "idAngles", "rot", (int)(&((idMover::rotationState_t *)0)->rot), sizeof( ((idMover::rotationState_t *)0)->rot ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_typeInfo[] = {
	{ "idPhysics_Parametric", "physicsObj", (int)(&((idMover *)0)->physicsObj), sizeof( ((idMover *)0)->physicsObj ) },
	{ "moveState_t", "move", (int)(&((idMover *)0)->move), sizeof( ((idMover *)0)->move ) },
	{ "rotationState_t", "rot", (int)(&((idMover *)0)->rot), sizeof( ((idMover *)0)->rot ) },
	{ "int", "move_thread", (int)(&((idMover *)0)->move_thread), sizeof( ((idMover *)0)->move_thread ) },
	{ "int", "rotate_thread", (int)(&((idMover *)0)->rotate_thread), sizeof( ((idMover *)0)->rotate_thread ) },
	{ "idAngles", "dest_angles", (int)(&((idMover *)0)->dest_angles), sizeof( ((idMover *)0)->dest_angles ) },
	{ "idAngles", "angle_delta", (int)(&((idMover *)0)->angle_delta), sizeof( ((idMover *)0)->angle_delta ) },
	{ "idVec3", "dest_position", (int)(&((idMover *)0)->dest_position), sizeof( ((idMover *)0)->dest_position ) },
	{ "idVec3", "move_delta", (int)(&((idMover *)0)->move_delta), sizeof( ((idMover *)0)->move_delta ) },
	{ "float", "move_speed", (int)(&((idMover *)0)->move_speed), sizeof( ((idMover *)0)->move_speed ) },
	{ "int", "move_time", (int)(&((idMover *)0)->move_time), sizeof( ((idMover *)0)->move_time ) },
	{ "int", "deceltime", (int)(&((idMover *)0)->deceltime), sizeof( ((idMover *)0)->deceltime ) },
	{ "int", "acceltime", (int)(&((idMover *)0)->acceltime), sizeof( ((idMover *)0)->acceltime ) },
	{ "bool", "stopRotation", (int)(&((idMover *)0)->stopRotation), sizeof( ((idMover *)0)->stopRotation ) },
	{ "bool", "useSplineAngles", (int)(&((idMover *)0)->useSplineAngles), sizeof( ((idMover *)0)->useSplineAngles ) },
	{ "idEntityPtr < idEntity >", "splineEnt", (int)(&((idMover *)0)->splineEnt), sizeof( ((idMover *)0)->splineEnt ) },
	{ "moverCommand_t", "lastCommand", (int)(&((idMover *)0)->lastCommand), sizeof( ((idMover *)0)->lastCommand ) },
	{ "float", "damage", (int)(&((idMover *)0)->damage), sizeof( ((idMover *)0)->damage ) },
	{ "qhandle_t", "areaPortal", (int)(&((idMover *)0)->areaPortal), sizeof( ((idMover *)0)->areaPortal ) },
	{ "idList < idEntityPtr < idEntity > >", "guiTargets", (int)(&((idMover *)0)->guiTargets), sizeof( ((idMover *)0)->guiTargets ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSplinePath_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t floorInfo_s_typeInfo[] = {
	{ "idVec3", "pos", (int)(&((floorInfo_s *)0)->pos), sizeof( ((floorInfo_s *)0)->pos ) },
	{ "idStr", "door", (int)(&((floorInfo_s *)0)->door), sizeof( ((floorInfo_s *)0)->door ) },
	{ "int", "floor", (int)(&((floorInfo_s *)0)->floor), sizeof( ((floorInfo_s *)0)->floor ) },
	{ NULL, 0 }
};

static classVariableInfo_t idElevator_typeInfo[] = {
	{ "elevatorState_t", "state", (int)(&((idElevator *)0)->state), sizeof( ((idElevator *)0)->state ) },
	{ "idList < floorInfo_s >", "floorInfo", (int)(&((idElevator *)0)->floorInfo), sizeof( ((idElevator *)0)->floorInfo ) },
	{ "int", "currentFloor", (int)(&((idElevator *)0)->currentFloor), sizeof( ((idElevator *)0)->currentFloor ) },
	{ "int", "pendingFloor", (int)(&((idElevator *)0)->pendingFloor), sizeof( ((idElevator *)0)->pendingFloor ) },
	{ "int", "lastFloor", (int)(&((idElevator *)0)->lastFloor), sizeof( ((idElevator *)0)->lastFloor ) },
	{ "bool", "controlsDisabled", (int)(&((idElevator *)0)->controlsDisabled), sizeof( ((idElevator *)0)->controlsDisabled ) },
	{ "float", "returnTime", (int)(&((idElevator *)0)->returnTime), sizeof( ((idElevator *)0)->returnTime ) },
	{ "int", "returnFloor", (int)(&((idElevator *)0)->returnFloor), sizeof( ((idElevator *)0)->returnFloor ) },
	{ "int", "lastTouchTime", (int)(&((idElevator *)0)->lastTouchTime), sizeof( ((idElevator *)0)->lastTouchTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_Binary_typeInfo[] = {
	{ "idVec3", "pos1", (int)(&((idMover_Binary *)0)->pos1), sizeof( ((idMover_Binary *)0)->pos1 ) },
	{ "idVec3", "pos2", (int)(&((idMover_Binary *)0)->pos2), sizeof( ((idMover_Binary *)0)->pos2 ) },
	{ "moverState_t", "moverState", (int)(&((idMover_Binary *)0)->moverState), sizeof( ((idMover_Binary *)0)->moverState ) },
	{ "idMover_Binary *", "moveMaster", (int)(&((idMover_Binary *)0)->moveMaster), sizeof( ((idMover_Binary *)0)->moveMaster ) },
	{ "idMover_Binary *", "activateChain", (int)(&((idMover_Binary *)0)->activateChain), sizeof( ((idMover_Binary *)0)->activateChain ) },
	{ "int", "soundPos1", (int)(&((idMover_Binary *)0)->soundPos1), sizeof( ((idMover_Binary *)0)->soundPos1 ) },
	{ "int", "sound1to2", (int)(&((idMover_Binary *)0)->sound1to2), sizeof( ((idMover_Binary *)0)->sound1to2 ) },
	{ "int", "sound2to1", (int)(&((idMover_Binary *)0)->sound2to1), sizeof( ((idMover_Binary *)0)->sound2to1 ) },
	{ "int", "soundPos2", (int)(&((idMover_Binary *)0)->soundPos2), sizeof( ((idMover_Binary *)0)->soundPos2 ) },
	{ "int", "soundLoop", (int)(&((idMover_Binary *)0)->soundLoop), sizeof( ((idMover_Binary *)0)->soundLoop ) },
	{ "float", "wait", (int)(&((idMover_Binary *)0)->wait), sizeof( ((idMover_Binary *)0)->wait ) },
	{ "float", "damage", (int)(&((idMover_Binary *)0)->damage), sizeof( ((idMover_Binary *)0)->damage ) },
	{ "int", "duration", (int)(&((idMover_Binary *)0)->duration), sizeof( ((idMover_Binary *)0)->duration ) },
	{ "int", "accelTime", (int)(&((idMover_Binary *)0)->accelTime), sizeof( ((idMover_Binary *)0)->accelTime ) },
	{ "int", "decelTime", (int)(&((idMover_Binary *)0)->decelTime), sizeof( ((idMover_Binary *)0)->decelTime ) },
	{ "idEntityPtr < idEntity >", "activatedBy", (int)(&((idMover_Binary *)0)->activatedBy), sizeof( ((idMover_Binary *)0)->activatedBy ) },
	{ "int", "stateStartTime", (int)(&((idMover_Binary *)0)->stateStartTime), sizeof( ((idMover_Binary *)0)->stateStartTime ) },
	{ "idStr", "team", (int)(&((idMover_Binary *)0)->team), sizeof( ((idMover_Binary *)0)->team ) },
	{ "bool", "enabled", (int)(&((idMover_Binary *)0)->enabled), sizeof( ((idMover_Binary *)0)->enabled ) },
	{ "int", "move_thread", (int)(&((idMover_Binary *)0)->move_thread), sizeof( ((idMover_Binary *)0)->move_thread ) },
	{ "int", "updateStatus", (int)(&((idMover_Binary *)0)->updateStatus), sizeof( ((idMover_Binary *)0)->updateStatus ) },
	{ "idStrList", "buddies", (int)(&((idMover_Binary *)0)->buddies), sizeof( ((idMover_Binary *)0)->buddies ) },
	{ "idPhysics_Parametric", "physicsObj", (int)(&((idMover_Binary *)0)->physicsObj), sizeof( ((idMover_Binary *)0)->physicsObj ) },
	{ "qhandle_t", "areaPortal", (int)(&((idMover_Binary *)0)->areaPortal), sizeof( ((idMover_Binary *)0)->areaPortal ) },
	{ "bool", "blocked", (int)(&((idMover_Binary *)0)->blocked), sizeof( ((idMover_Binary *)0)->blocked ) },
	{ "idList < idEntityPtr < idEntity > >", "guiTargets", (int)(&((idMover_Binary *)0)->guiTargets), sizeof( ((idMover_Binary *)0)->guiTargets ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDoor_typeInfo[] = {
	{ "float", "triggersize", (int)(&((idDoor *)0)->triggersize), sizeof( ((idDoor *)0)->triggersize ) },
	{ "bool", "crusher", (int)(&((idDoor *)0)->crusher), sizeof( ((idDoor *)0)->crusher ) },
	{ "bool", "noTouch", (int)(&((idDoor *)0)->noTouch), sizeof( ((idDoor *)0)->noTouch ) },
	{ "bool", "aas_area_closed", (int)(&((idDoor *)0)->aas_area_closed), sizeof( ((idDoor *)0)->aas_area_closed ) },
	{ "idStr", "buddyStr", (int)(&((idDoor *)0)->buddyStr), sizeof( ((idDoor *)0)->buddyStr ) },
	{ "idClipModel *", "trigger", (int)(&((idDoor *)0)->trigger), sizeof( ((idDoor *)0)->trigger ) },
	{ "idClipModel *", "sndTrigger", (int)(&((idDoor *)0)->sndTrigger), sizeof( ((idDoor *)0)->sndTrigger ) },
	{ "int", "nextSndTriggerTime", (int)(&((idDoor *)0)->nextSndTriggerTime), sizeof( ((idDoor *)0)->nextSndTriggerTime ) },
	{ "idVec3", "localTriggerOrigin", (int)(&((idDoor *)0)->localTriggerOrigin), sizeof( ((idDoor *)0)->localTriggerOrigin ) },
	{ "idMat3", "localTriggerAxis", (int)(&((idDoor *)0)->localTriggerAxis), sizeof( ((idDoor *)0)->localTriggerAxis ) },
	{ "idStr", "requires", (int)(&((idDoor *)0)->requires), sizeof( ((idDoor *)0)->requires ) },
	{ "int", "removeItem", (int)(&((idDoor *)0)->removeItem), sizeof( ((idDoor *)0)->removeItem ) },
	{ "idStr", "syncLock", (int)(&((idDoor *)0)->syncLock), sizeof( ((idDoor *)0)->syncLock ) },
	{ "int", "normalAxisIndex", (int)(&((idDoor *)0)->normalAxisIndex), sizeof( ((idDoor *)0)->normalAxisIndex ) },
	{ "idDoor *", "companionDoor", (int)(&((idDoor *)0)->companionDoor), sizeof( ((idDoor *)0)->companionDoor ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlat_typeInfo[] = {
	{ "idClipModel *", "trigger", (int)(&((idPlat *)0)->trigger), sizeof( ((idPlat *)0)->trigger ) },
	{ "idVec3", "localTriggerOrigin", (int)(&((idPlat *)0)->localTriggerOrigin), sizeof( ((idPlat *)0)->localTriggerOrigin ) },
	{ "idMat3", "localTriggerAxis", (int)(&((idPlat *)0)->localTriggerAxis), sizeof( ((idPlat *)0)->localTriggerAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_Periodic_typeInfo[] = {
	{ "idPhysics_Parametric", "physicsObj", (int)(&((idMover_Periodic *)0)->physicsObj), sizeof( ((idMover_Periodic *)0)->physicsObj ) },
	{ "float", "damage", (int)(&((idMover_Periodic *)0)->damage), sizeof( ((idMover_Periodic *)0)->damage ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRotater_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "activatedBy", (int)(&((idRotater *)0)->activatedBy), sizeof( ((idRotater *)0)->activatedBy ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBobber_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idPendulum_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idRiser_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCamera_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCameraView_typeInfo[] = {
	{ "float", "fov", (int)(&((idCameraView *)0)->fov), sizeof( ((idCameraView *)0)->fov ) },
	{ "idEntity *", "attachedTo", (int)(&((idCameraView *)0)->attachedTo), sizeof( ((idCameraView *)0)->attachedTo ) },
	{ "idEntity *", "attachedView", (int)(&((idCameraView *)0)->attachedView), sizeof( ((idCameraView *)0)->attachedView ) },
	{ NULL, 0 }
};

static classVariableInfo_t cameraFrame_t_typeInfo[] = {
	{ "idCQuat", "q", (int)(&((cameraFrame_t *)0)->q), sizeof( ((cameraFrame_t *)0)->q ) },
	{ "idVec3", "t", (int)(&((cameraFrame_t *)0)->t), sizeof( ((cameraFrame_t *)0)->t ) },
	{ "float", "fov", (int)(&((cameraFrame_t *)0)->fov), sizeof( ((cameraFrame_t *)0)->fov ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCameraAnim_typeInfo[] = {
	{ "int", "threadNum", (int)(&((idCameraAnim *)0)->threadNum), sizeof( ((idCameraAnim *)0)->threadNum ) },
	{ "idVec3", "offset", (int)(&((idCameraAnim *)0)->offset), sizeof( ((idCameraAnim *)0)->offset ) },
	{ "int", "frameRate", (int)(&((idCameraAnim *)0)->frameRate), sizeof( ((idCameraAnim *)0)->frameRate ) },
	{ "int", "starttime", (int)(&((idCameraAnim *)0)->starttime), sizeof( ((idCameraAnim *)0)->starttime ) },
	{ "int", "cycle", (int)(&((idCameraAnim *)0)->cycle), sizeof( ((idCameraAnim *)0)->cycle ) },
	{ "idList < int >", "cameraCuts", (int)(&((idCameraAnim *)0)->cameraCuts), sizeof( ((idCameraAnim *)0)->cameraCuts ) },
	{ "idList < cameraFrame_t >", "camera", (int)(&((idCameraAnim *)0)->camera), sizeof( ((idCameraAnim *)0)->camera ) },
	{ "idEntityPtr < idEntity >", "activator", (int)(&((idCameraAnim *)0)->activator), sizeof( ((idCameraAnim *)0)->activator ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMoveable_typeInfo[] = {
	{ "idPhysics_RigidBody", "physicsObj", (int)(&((idMoveable *)0)->physicsObj), sizeof( ((idMoveable *)0)->physicsObj ) },
	{ "idStr", "brokenModel", (int)(&((idMoveable *)0)->brokenModel), sizeof( ((idMoveable *)0)->brokenModel ) },
	{ "idStr", "damage", (int)(&((idMoveable *)0)->damage), sizeof( ((idMoveable *)0)->damage ) },
	{ "idStr", "fxCollide", (int)(&((idMoveable *)0)->fxCollide), sizeof( ((idMoveable *)0)->fxCollide ) },
	{ "int", "nextCollideFxTime", (int)(&((idMoveable *)0)->nextCollideFxTime), sizeof( ((idMoveable *)0)->nextCollideFxTime ) },
	{ "float", "minDamageVelocity", (int)(&((idMoveable *)0)->minDamageVelocity), sizeof( ((idMoveable *)0)->minDamageVelocity ) },
	{ "float", "maxDamageVelocity", (int)(&((idMoveable *)0)->maxDamageVelocity), sizeof( ((idMoveable *)0)->maxDamageVelocity ) },
	{ "idCurve_Spline < idVec3 > *", "initialSpline", (int)(&((idMoveable *)0)->initialSpline), sizeof( ((idMoveable *)0)->initialSpline ) },
	{ "idVec3", "initialSplineDir", (int)(&((idMoveable *)0)->initialSplineDir), sizeof( ((idMoveable *)0)->initialSplineDir ) },
	{ "bool", "explode", (int)(&((idMoveable *)0)->explode), sizeof( ((idMoveable *)0)->explode ) },
	{ "bool", "unbindOnDeath", (int)(&((idMoveable *)0)->unbindOnDeath), sizeof( ((idMoveable *)0)->unbindOnDeath ) },
	{ "bool", "allowStep", (int)(&((idMoveable *)0)->allowStep), sizeof( ((idMoveable *)0)->allowStep ) },
	{ "bool", "canDamage", (int)(&((idMoveable *)0)->canDamage), sizeof( ((idMoveable *)0)->canDamage ) },
	{ "int", "nextDamageTime", (int)(&((idMoveable *)0)->nextDamageTime), sizeof( ((idMoveable *)0)->nextDamageTime ) },
	{ "int", "nextSoundTime", (int)(&((idMoveable *)0)->nextSoundTime), sizeof( ((idMoveable *)0)->nextSoundTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBarrel_typeInfo[] = {
	{ "float", "radius", (int)(&((idBarrel *)0)->radius), sizeof( ((idBarrel *)0)->radius ) },
	{ "int", "barrelAxis", (int)(&((idBarrel *)0)->barrelAxis), sizeof( ((idBarrel *)0)->barrelAxis ) },
	{ "idVec3", "lastOrigin", (int)(&((idBarrel *)0)->lastOrigin), sizeof( ((idBarrel *)0)->lastOrigin ) },
	{ "idMat3", "lastAxis", (int)(&((idBarrel *)0)->lastAxis), sizeof( ((idBarrel *)0)->lastAxis ) },
	{ "float", "additionalRotation", (int)(&((idBarrel *)0)->additionalRotation), sizeof( ((idBarrel *)0)->additionalRotation ) },
	{ "idMat3", "additionalAxis", (int)(&((idBarrel *)0)->additionalAxis), sizeof( ((idBarrel *)0)->additionalAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idExplodingBarrel_typeInfo[] = {
	{ "explode_state_t", "state", (int)(&((idExplodingBarrel *)0)->state), sizeof( ((idExplodingBarrel *)0)->state ) },
	{ "idVec3", "spawnOrigin", (int)(&((idExplodingBarrel *)0)->spawnOrigin), sizeof( ((idExplodingBarrel *)0)->spawnOrigin ) },
	{ "idMat3", "spawnAxis", (int)(&((idExplodingBarrel *)0)->spawnAxis), sizeof( ((idExplodingBarrel *)0)->spawnAxis ) },
	{ "qhandle_t", "particleModelDefHandle", (int)(&((idExplodingBarrel *)0)->particleModelDefHandle), sizeof( ((idExplodingBarrel *)0)->particleModelDefHandle ) },
	{ "qhandle_t", "lightDefHandle", (int)(&((idExplodingBarrel *)0)->lightDefHandle), sizeof( ((idExplodingBarrel *)0)->lightDefHandle ) },
	{ "renderEntity_t", "particleRenderEntity", (int)(&((idExplodingBarrel *)0)->particleRenderEntity), sizeof( ((idExplodingBarrel *)0)->particleRenderEntity ) },
	{ "renderLight_t", "light", (int)(&((idExplodingBarrel *)0)->light), sizeof( ((idExplodingBarrel *)0)->light ) },
	{ "int", "particleTime", (int)(&((idExplodingBarrel *)0)->particleTime), sizeof( ((idExplodingBarrel *)0)->particleTime ) },
	{ "int", "lightTime", (int)(&((idExplodingBarrel *)0)->lightTime), sizeof( ((idExplodingBarrel *)0)->lightTime ) },
	{ "float", "time", (int)(&((idExplodingBarrel *)0)->time), sizeof( ((idExplodingBarrel *)0)->time ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Remove_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Show_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Damage_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SessionCommand_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_EndLevel_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_WaitForButton_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetGlobalShaderTime_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetShaderParm_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetShaderTime_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_FadeEntity_typeInfo[] = {
	{ "idVec4", "fadeFrom", (int)(&((idTarget_FadeEntity *)0)->fadeFrom), sizeof( ((idTarget_FadeEntity *)0)->fadeFrom ) },
	{ "int", "fadeStart", (int)(&((idTarget_FadeEntity *)0)->fadeStart), sizeof( ((idTarget_FadeEntity *)0)->fadeStart ) },
	{ "int", "fadeEnd", (int)(&((idTarget_FadeEntity *)0)->fadeEnd), sizeof( ((idTarget_FadeEntity *)0)->fadeEnd ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_LightFadeIn_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_LightFadeOut_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Give_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_GiveEmail_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetModel_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetInfluence_typeInfo[] = {
	{ "idList < int >", "lightList", (int)(&((idTarget_SetInfluence *)0)->lightList), sizeof( ((idTarget_SetInfluence *)0)->lightList ) },
	{ "idList < int >", "guiList", (int)(&((idTarget_SetInfluence *)0)->guiList), sizeof( ((idTarget_SetInfluence *)0)->guiList ) },
	{ "idList < int >", "soundList", (int)(&((idTarget_SetInfluence *)0)->soundList), sizeof( ((idTarget_SetInfluence *)0)->soundList ) },
	{ "idList < int >", "genericList", (int)(&((idTarget_SetInfluence *)0)->genericList), sizeof( ((idTarget_SetInfluence *)0)->genericList ) },
	{ "float", "flashIn", (int)(&((idTarget_SetInfluence *)0)->flashIn), sizeof( ((idTarget_SetInfluence *)0)->flashIn ) },
	{ "float", "flashOut", (int)(&((idTarget_SetInfluence *)0)->flashOut), sizeof( ((idTarget_SetInfluence *)0)->flashOut ) },
	{ "float", "delay", (int)(&((idTarget_SetInfluence *)0)->delay), sizeof( ((idTarget_SetInfluence *)0)->delay ) },
	{ "idStr", "flashInSound", (int)(&((idTarget_SetInfluence *)0)->flashInSound), sizeof( ((idTarget_SetInfluence *)0)->flashInSound ) },
	{ "idStr", "flashOutSound", (int)(&((idTarget_SetInfluence *)0)->flashOutSound), sizeof( ((idTarget_SetInfluence *)0)->flashOutSound ) },
	{ "idEntity *", "switchToCamera", (int)(&((idTarget_SetInfluence *)0)->switchToCamera), sizeof( ((idTarget_SetInfluence *)0)->switchToCamera ) },
	{ "idInterpolate < float >", "fovSetting", (int)(&((idTarget_SetInfluence *)0)->fovSetting), sizeof( ((idTarget_SetInfluence *)0)->fovSetting ) },
	{ "bool", "soundFaded", (int)(&((idTarget_SetInfluence *)0)->soundFaded), sizeof( ((idTarget_SetInfluence *)0)->soundFaded ) },
	{ "bool", "restoreOnTrigger", (int)(&((idTarget_SetInfluence *)0)->restoreOnTrigger), sizeof( ((idTarget_SetInfluence *)0)->restoreOnTrigger ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetKeyVal_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetFov_typeInfo[] = {
	{ "idInterpolate < int >", "fovSetting", (int)(&((idTarget_SetFov *)0)->fovSetting), sizeof( ((idTarget_SetFov *)0)->fovSetting ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetPrimaryObjective_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_LockDoor_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_CallObjectFunction_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_EnableLevelWeapons_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Tip_typeInfo[] = {
	{ "idVec3", "playerPos", (int)(&((idTarget_Tip *)0)->playerPos), sizeof( ((idTarget_Tip *)0)->playerPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_GiveSecurity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_RemoveWeapons_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_LevelTrigger_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_EnableStamina_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_FadeSoundClass_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_typeInfo[] = {
	{ "const function_t *", "scriptFunction", (int)(&((idTrigger *)0)->scriptFunction), sizeof( ((idTrigger *)0)->scriptFunction ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Multi_typeInfo[] = {
	{ "float", "wait", (int)(&((idTrigger_Multi *)0)->wait), sizeof( ((idTrigger_Multi *)0)->wait ) },
	{ "float", "random", (int)(&((idTrigger_Multi *)0)->random), sizeof( ((idTrigger_Multi *)0)->random ) },
	{ "float", "delay", (int)(&((idTrigger_Multi *)0)->delay), sizeof( ((idTrigger_Multi *)0)->delay ) },
	{ "float", "random_delay", (int)(&((idTrigger_Multi *)0)->random_delay), sizeof( ((idTrigger_Multi *)0)->random_delay ) },
	{ "int", "nextTriggerTime", (int)(&((idTrigger_Multi *)0)->nextTriggerTime), sizeof( ((idTrigger_Multi *)0)->nextTriggerTime ) },
	{ "idStr", "requires", (int)(&((idTrigger_Multi *)0)->requires), sizeof( ((idTrigger_Multi *)0)->requires ) },
	{ "int", "removeItem", (int)(&((idTrigger_Multi *)0)->removeItem), sizeof( ((idTrigger_Multi *)0)->removeItem ) },
	{ "bool", "touchClient", (int)(&((idTrigger_Multi *)0)->touchClient), sizeof( ((idTrigger_Multi *)0)->touchClient ) },
	{ "bool", "touchOther", (int)(&((idTrigger_Multi *)0)->touchOther), sizeof( ((idTrigger_Multi *)0)->touchOther ) },
	{ "bool", "triggerFirst", (int)(&((idTrigger_Multi *)0)->triggerFirst), sizeof( ((idTrigger_Multi *)0)->triggerFirst ) },
	{ "bool", "triggerWithSelf", (int)(&((idTrigger_Multi *)0)->triggerWithSelf), sizeof( ((idTrigger_Multi *)0)->triggerWithSelf ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_EntityName_typeInfo[] = {
	{ "float", "wait", (int)(&((idTrigger_EntityName *)0)->wait), sizeof( ((idTrigger_EntityName *)0)->wait ) },
	{ "float", "random", (int)(&((idTrigger_EntityName *)0)->random), sizeof( ((idTrigger_EntityName *)0)->random ) },
	{ "float", "delay", (int)(&((idTrigger_EntityName *)0)->delay), sizeof( ((idTrigger_EntityName *)0)->delay ) },
	{ "float", "random_delay", (int)(&((idTrigger_EntityName *)0)->random_delay), sizeof( ((idTrigger_EntityName *)0)->random_delay ) },
	{ "int", "nextTriggerTime", (int)(&((idTrigger_EntityName *)0)->nextTriggerTime), sizeof( ((idTrigger_EntityName *)0)->nextTriggerTime ) },
	{ "bool", "triggerFirst", (int)(&((idTrigger_EntityName *)0)->triggerFirst), sizeof( ((idTrigger_EntityName *)0)->triggerFirst ) },
	{ "idStr", "entityName", (int)(&((idTrigger_EntityName *)0)->entityName), sizeof( ((idTrigger_EntityName *)0)->entityName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Timer_typeInfo[] = {
	{ "float", "random", (int)(&((idTrigger_Timer *)0)->random), sizeof( ((idTrigger_Timer *)0)->random ) },
	{ "float", "wait", (int)(&((idTrigger_Timer *)0)->wait), sizeof( ((idTrigger_Timer *)0)->wait ) },
	{ "bool", "on", (int)(&((idTrigger_Timer *)0)->on), sizeof( ((idTrigger_Timer *)0)->on ) },
	{ "float", "delay", (int)(&((idTrigger_Timer *)0)->delay), sizeof( ((idTrigger_Timer *)0)->delay ) },
	{ "idStr", "onName", (int)(&((idTrigger_Timer *)0)->onName), sizeof( ((idTrigger_Timer *)0)->onName ) },
	{ "idStr", "offName", (int)(&((idTrigger_Timer *)0)->offName), sizeof( ((idTrigger_Timer *)0)->offName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Count_typeInfo[] = {
	{ "int", "goal", (int)(&((idTrigger_Count *)0)->goal), sizeof( ((idTrigger_Count *)0)->goal ) },
	{ "int", "count", (int)(&((idTrigger_Count *)0)->count), sizeof( ((idTrigger_Count *)0)->count ) },
	{ "float", "delay", (int)(&((idTrigger_Count *)0)->delay), sizeof( ((idTrigger_Count *)0)->delay ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Hurt_typeInfo[] = {
	{ "bool", "on", (int)(&((idTrigger_Hurt *)0)->on), sizeof( ((idTrigger_Hurt *)0)->on ) },
	{ "float", "delay", (int)(&((idTrigger_Hurt *)0)->delay), sizeof( ((idTrigger_Hurt *)0)->delay ) },
	{ "int", "nextTime", (int)(&((idTrigger_Hurt *)0)->nextTime), sizeof( ((idTrigger_Hurt *)0)->nextTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Fade_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Touch_typeInfo[] = {
	{ "idClipModel *", "clipModel", (int)(&((idTrigger_Touch *)0)->clipModel), sizeof( ((idTrigger_Touch *)0)->clipModel ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSound_typeInfo[] = {
	{ "float", "lastSoundVol", (int)(&((idSound *)0)->lastSoundVol), sizeof( ((idSound *)0)->lastSoundVol ) },
	{ "float", "soundVol", (int)(&((idSound *)0)->soundVol), sizeof( ((idSound *)0)->soundVol ) },
	{ "float", "random", (int)(&((idSound *)0)->random), sizeof( ((idSound *)0)->random ) },
	{ "float", "wait", (int)(&((idSound *)0)->wait), sizeof( ((idSound *)0)->wait ) },
	{ "bool", "timerOn", (int)(&((idSound *)0)->timerOn), sizeof( ((idSound *)0)->timerOn ) },
	{ "idVec3", "shakeTranslate", (int)(&((idSound *)0)->shakeTranslate), sizeof( ((idSound *)0)->shakeTranslate ) },
	{ "idAngles", "shakeRotate", (int)(&((idSound *)0)->shakeRotate), sizeof( ((idSound *)0)->shakeRotate ) },
	{ "int", "playingUntilTime", (int)(&((idSound *)0)->playingUntilTime), sizeof( ((idSound *)0)->playingUntilTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFXLocalAction_typeInfo[] = {
	{ "renderLight_t", "renderLight", (int)(&((idFXLocalAction *)0)->renderLight), sizeof( ((idFXLocalAction *)0)->renderLight ) },
	{ "qhandle_t", "lightDefHandle", (int)(&((idFXLocalAction *)0)->lightDefHandle), sizeof( ((idFXLocalAction *)0)->lightDefHandle ) },
	{ "renderEntity_t", "renderEntity", (int)(&((idFXLocalAction *)0)->renderEntity), sizeof( ((idFXLocalAction *)0)->renderEntity ) },
	{ "int", "modelDefHandle", (int)(&((idFXLocalAction *)0)->modelDefHandle), sizeof( ((idFXLocalAction *)0)->modelDefHandle ) },
	{ "float", "delay", (int)(&((idFXLocalAction *)0)->delay), sizeof( ((idFXLocalAction *)0)->delay ) },
	{ "int", "particleSystem", (int)(&((idFXLocalAction *)0)->particleSystem), sizeof( ((idFXLocalAction *)0)->particleSystem ) },
	{ "int", "start", (int)(&((idFXLocalAction *)0)->start), sizeof( ((idFXLocalAction *)0)->start ) },
	{ "bool", "soundStarted", (int)(&((idFXLocalAction *)0)->soundStarted), sizeof( ((idFXLocalAction *)0)->soundStarted ) },
	{ "bool", "shakeStarted", (int)(&((idFXLocalAction *)0)->shakeStarted), sizeof( ((idFXLocalAction *)0)->shakeStarted ) },
	{ "bool", "decalDropped", (int)(&((idFXLocalAction *)0)->decalDropped), sizeof( ((idFXLocalAction *)0)->decalDropped ) },
	{ "bool", "launched", (int)(&((idFXLocalAction *)0)->launched), sizeof( ((idFXLocalAction *)0)->launched ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEntityFx_typeInfo[] = {
	{ "int", "started", (int)(&((idEntityFx *)0)->started), sizeof( ((idEntityFx *)0)->started ) },
	{ "int", "nextTriggerTime", (int)(&((idEntityFx *)0)->nextTriggerTime), sizeof( ((idEntityFx *)0)->nextTriggerTime ) },
	{ "const idDeclFX *", "fxEffect", (int)(&((idEntityFx *)0)->fxEffect), sizeof( ((idEntityFx *)0)->fxEffect ) },
	{ "idList < idFXLocalAction >", "actions", (int)(&((idEntityFx *)0)->actions), sizeof( ((idEntityFx *)0)->actions ) },
	{ "idStr", "systemName", (int)(&((idEntityFx *)0)->systemName), sizeof( ((idEntityFx *)0)->systemName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTeleporter_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSecurityCamera_typeInfo[] = {
	{ "float", "angle", (int)(&((idSecurityCamera *)0)->angle), sizeof( ((idSecurityCamera *)0)->angle ) },
	{ "float", "sweepAngle", (int)(&((idSecurityCamera *)0)->sweepAngle), sizeof( ((idSecurityCamera *)0)->sweepAngle ) },
	{ "int", "modelAxis", (int)(&((idSecurityCamera *)0)->modelAxis), sizeof( ((idSecurityCamera *)0)->modelAxis ) },
	{ "bool", "flipAxis", (int)(&((idSecurityCamera *)0)->flipAxis), sizeof( ((idSecurityCamera *)0)->flipAxis ) },
	{ "float", "scanDist", (int)(&((idSecurityCamera *)0)->scanDist), sizeof( ((idSecurityCamera *)0)->scanDist ) },
	{ "float", "scanFov", (int)(&((idSecurityCamera *)0)->scanFov), sizeof( ((idSecurityCamera *)0)->scanFov ) },
	{ "float", "sweepStart", (int)(&((idSecurityCamera *)0)->sweepStart), sizeof( ((idSecurityCamera *)0)->sweepStart ) },
	{ "float", "sweepEnd", (int)(&((idSecurityCamera *)0)->sweepEnd), sizeof( ((idSecurityCamera *)0)->sweepEnd ) },
	{ "bool", "negativeSweep", (int)(&((idSecurityCamera *)0)->negativeSweep), sizeof( ((idSecurityCamera *)0)->negativeSweep ) },
	{ "bool", "sweeping", (int)(&((idSecurityCamera *)0)->sweeping), sizeof( ((idSecurityCamera *)0)->sweeping ) },
	{ "int", "alertMode", (int)(&((idSecurityCamera *)0)->alertMode), sizeof( ((idSecurityCamera *)0)->alertMode ) },
	{ "float", "stopSweeping", (int)(&((idSecurityCamera *)0)->stopSweeping), sizeof( ((idSecurityCamera *)0)->stopSweeping ) },
	{ "float", "scanFovCos", (int)(&((idSecurityCamera *)0)->scanFovCos), sizeof( ((idSecurityCamera *)0)->scanFovCos ) },
	{ "idVec3", "viewOffset", (int)(&((idSecurityCamera *)0)->viewOffset), sizeof( ((idSecurityCamera *)0)->viewOffset ) },
	{ "int", "pvsArea", (int)(&((idSecurityCamera *)0)->pvsArea), sizeof( ((idSecurityCamera *)0)->pvsArea ) },
	{ "idPhysics_RigidBody", "physicsObj", (int)(&((idSecurityCamera *)0)->physicsObj), sizeof( ((idSecurityCamera *)0)->physicsObj ) },
	{ "idTraceModel", "trm", (int)(&((idSecurityCamera *)0)->trm), sizeof( ((idSecurityCamera *)0)->trm ) },
	{ NULL, 0 }
};

static classVariableInfo_t shard_t_typeInfo[] = {
	{ "idClipModel *", "clipModel", (int)(&((shard_t *)0)->clipModel), sizeof( ((shard_t *)0)->clipModel ) },
	{ "idFixedWinding", "winding", (int)(&((shard_t *)0)->winding), sizeof( ((shard_t *)0)->winding ) },
	{ "idList < idFixedWinding * >", "decals", (int)(&((shard_t *)0)->decals), sizeof( ((shard_t *)0)->decals ) },
	{ "idList < bool >", "edgeHasNeighbour", (int)(&((shard_t *)0)->edgeHasNeighbour), sizeof( ((shard_t *)0)->edgeHasNeighbour ) },
	{ "idList < struct shard_s * >", "neighbours", (int)(&((shard_t *)0)->neighbours), sizeof( ((shard_t *)0)->neighbours ) },
	{ "idPhysics_RigidBody", "physicsObj", (int)(&((shard_t *)0)->physicsObj), sizeof( ((shard_t *)0)->physicsObj ) },
	{ "int", "droppedTime", (int)(&((shard_t *)0)->droppedTime), sizeof( ((shard_t *)0)->droppedTime ) },
	{ "bool", "atEdge", (int)(&((shard_t *)0)->atEdge), sizeof( ((shard_t *)0)->atEdge ) },
	{ "int", "islandNum", (int)(&((shard_t *)0)->islandNum), sizeof( ((shard_t *)0)->islandNum ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBrittleFracture_typeInfo[] = {
	{ "const idMaterial *", "material", (int)(&((idBrittleFracture *)0)->material), sizeof( ((idBrittleFracture *)0)->material ) },
	{ "const idMaterial *", "decalMaterial", (int)(&((idBrittleFracture *)0)->decalMaterial), sizeof( ((idBrittleFracture *)0)->decalMaterial ) },
	{ "float", "decalSize", (int)(&((idBrittleFracture *)0)->decalSize), sizeof( ((idBrittleFracture *)0)->decalSize ) },
	{ "float", "maxShardArea", (int)(&((idBrittleFracture *)0)->maxShardArea), sizeof( ((idBrittleFracture *)0)->maxShardArea ) },
	{ "float", "maxShatterRadius", (int)(&((idBrittleFracture *)0)->maxShatterRadius), sizeof( ((idBrittleFracture *)0)->maxShatterRadius ) },
	{ "float", "minShatterRadius", (int)(&((idBrittleFracture *)0)->minShatterRadius), sizeof( ((idBrittleFracture *)0)->minShatterRadius ) },
	{ "float", "linearVelocityScale", (int)(&((idBrittleFracture *)0)->linearVelocityScale), sizeof( ((idBrittleFracture *)0)->linearVelocityScale ) },
	{ "float", "angularVelocityScale", (int)(&((idBrittleFracture *)0)->angularVelocityScale), sizeof( ((idBrittleFracture *)0)->angularVelocityScale ) },
	{ "float", "shardMass", (int)(&((idBrittleFracture *)0)->shardMass), sizeof( ((idBrittleFracture *)0)->shardMass ) },
	{ "float", "density", (int)(&((idBrittleFracture *)0)->density), sizeof( ((idBrittleFracture *)0)->density ) },
	{ "float", "friction", (int)(&((idBrittleFracture *)0)->friction), sizeof( ((idBrittleFracture *)0)->friction ) },
	{ "float", "bouncyness", (int)(&((idBrittleFracture *)0)->bouncyness), sizeof( ((idBrittleFracture *)0)->bouncyness ) },
	{ "idStr", "fxFracture", (int)(&((idBrittleFracture *)0)->fxFracture), sizeof( ((idBrittleFracture *)0)->fxFracture ) },
	{ "idPhysics_StaticMulti", "physicsObj", (int)(&((idBrittleFracture *)0)->physicsObj), sizeof( ((idBrittleFracture *)0)->physicsObj ) },
	{ "idList < shard_t * >", "shards", (int)(&((idBrittleFracture *)0)->shards), sizeof( ((idBrittleFracture *)0)->shards ) },
	{ "idBounds", "bounds", (int)(&((idBrittleFracture *)0)->bounds), sizeof( ((idBrittleFracture *)0)->bounds ) },
	{ "bool", "disableFracture", (int)(&((idBrittleFracture *)0)->disableFracture), sizeof( ((idBrittleFracture *)0)->disableFracture ) },
	{ "mutable int", "lastRenderEntityUpdate", (int)(&((idBrittleFracture *)0)->lastRenderEntityUpdate), sizeof( ((idBrittleFracture *)0)->lastRenderEntityUpdate ) },
	{ "mutable bool", "changed", (int)(&((idBrittleFracture *)0)->changed), sizeof( ((idBrittleFracture *)0)->changed ) },
	{ NULL, 0 }
};

static classVariableInfo_t obstaclePath_t_typeInfo[] = {
	{ "idVec3", "seekPos", (int)(&((obstaclePath_t *)0)->seekPos), sizeof( ((obstaclePath_t *)0)->seekPos ) },
	{ "idEntity *", "firstObstacle", (int)(&((obstaclePath_t *)0)->firstObstacle), sizeof( ((obstaclePath_t *)0)->firstObstacle ) },
	{ "idVec3", "startPosOutsideObstacles", (int)(&((obstaclePath_t *)0)->startPosOutsideObstacles), sizeof( ((obstaclePath_t *)0)->startPosOutsideObstacles ) },
	{ "idEntity *", "startPosObstacle", (int)(&((obstaclePath_t *)0)->startPosObstacle), sizeof( ((obstaclePath_t *)0)->startPosObstacle ) },
	{ "idVec3", "seekPosOutsideObstacles", (int)(&((obstaclePath_t *)0)->seekPosOutsideObstacles), sizeof( ((obstaclePath_t *)0)->seekPosOutsideObstacles ) },
	{ "idEntity *", "seekPosObstacle", (int)(&((obstaclePath_t *)0)->seekPosObstacle), sizeof( ((obstaclePath_t *)0)->seekPosObstacle ) },
	{ NULL, 0 }
};

static classVariableInfo_t predictedPath_t_typeInfo[] = {
	{ "idVec3", "endPos", (int)(&((predictedPath_t *)0)->endPos), sizeof( ((predictedPath_t *)0)->endPos ) },
	{ "idVec3", "endVelocity", (int)(&((predictedPath_t *)0)->endVelocity), sizeof( ((predictedPath_t *)0)->endVelocity ) },
	{ "idVec3", "endNormal", (int)(&((predictedPath_t *)0)->endNormal), sizeof( ((predictedPath_t *)0)->endNormal ) },
	{ "int", "endTime", (int)(&((predictedPath_t *)0)->endTime), sizeof( ((predictedPath_t *)0)->endTime ) },
	{ "int", "endEvent", (int)(&((predictedPath_t *)0)->endEvent), sizeof( ((predictedPath_t *)0)->endEvent ) },
	{ "const idEntity *", "blockingEntity", (int)(&((predictedPath_t *)0)->blockingEntity), sizeof( ((predictedPath_t *)0)->blockingEntity ) },
	{ NULL, 0 }
};

static classVariableInfo_t particleEmitter_t_typeInfo[] = {
	{ "const idDeclParticle *", "particle", (int)(&((particleEmitter_t *)0)->particle), sizeof( ((particleEmitter_t *)0)->particle ) },
	{ "int", "time", (int)(&((particleEmitter_t *)0)->time), sizeof( ((particleEmitter_t *)0)->time ) },
	{ "jointHandle_t", "joint", (int)(&((particleEmitter_t *)0)->joint), sizeof( ((particleEmitter_t *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMoveState_typeInfo[] = {
	{ "moveType_t", "moveType", (int)(&((idMoveState *)0)->moveType), sizeof( ((idMoveState *)0)->moveType ) },
	{ "moveCommand_t", "moveCommand", (int)(&((idMoveState *)0)->moveCommand), sizeof( ((idMoveState *)0)->moveCommand ) },
	{ "moveStatus_t", "moveStatus", (int)(&((idMoveState *)0)->moveStatus), sizeof( ((idMoveState *)0)->moveStatus ) },
	{ "idVec3", "moveDest", (int)(&((idMoveState *)0)->moveDest), sizeof( ((idMoveState *)0)->moveDest ) },
	{ "idVec3", "moveDir", (int)(&((idMoveState *)0)->moveDir), sizeof( ((idMoveState *)0)->moveDir ) },
	{ "idEntityPtr < idEntity >", "goalEntity", (int)(&((idMoveState *)0)->goalEntity), sizeof( ((idMoveState *)0)->goalEntity ) },
	{ "idVec3", "goalEntityOrigin", (int)(&((idMoveState *)0)->goalEntityOrigin), sizeof( ((idMoveState *)0)->goalEntityOrigin ) },
	{ "int", "toAreaNum", (int)(&((idMoveState *)0)->toAreaNum), sizeof( ((idMoveState *)0)->toAreaNum ) },
	{ "int", "startTime", (int)(&((idMoveState *)0)->startTime), sizeof( ((idMoveState *)0)->startTime ) },
	{ "int", "duration", (int)(&((idMoveState *)0)->duration), sizeof( ((idMoveState *)0)->duration ) },
	{ "float", "speed", (int)(&((idMoveState *)0)->speed), sizeof( ((idMoveState *)0)->speed ) },
	{ "float", "range", (int)(&((idMoveState *)0)->range), sizeof( ((idMoveState *)0)->range ) },
	{ "float", "wanderYaw", (int)(&((idMoveState *)0)->wanderYaw), sizeof( ((idMoveState *)0)->wanderYaw ) },
	{ "int", "nextWanderTime", (int)(&((idMoveState *)0)->nextWanderTime), sizeof( ((idMoveState *)0)->nextWanderTime ) },
	{ "int", "blockTime", (int)(&((idMoveState *)0)->blockTime), sizeof( ((idMoveState *)0)->blockTime ) },
	{ "idEntityPtr < idEntity >", "obstacle", (int)(&((idMoveState *)0)->obstacle), sizeof( ((idMoveState *)0)->obstacle ) },
	{ "idVec3", "lastMoveOrigin", (int)(&((idMoveState *)0)->lastMoveOrigin), sizeof( ((idMoveState *)0)->lastMoveOrigin ) },
	{ "int", "lastMoveTime", (int)(&((idMoveState *)0)->lastMoveTime), sizeof( ((idMoveState *)0)->lastMoveTime ) },
	{ "int", "anim", (int)(&((idMoveState *)0)->anim), sizeof( ((idMoveState *)0)->anim ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFindCover_typeInfo[] = {
	{ "pvsHandle_t", "hidePVS", (int)(&((idAASFindCover *)0)->hidePVS), sizeof( ((idAASFindCover *)0)->hidePVS ) },
	{ "int[4]", "PVSAreas", (int)(&((idAASFindCover *)0)->PVSAreas), sizeof( ((idAASFindCover *)0)->PVSAreas ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFindAreaOutOfRange_typeInfo[] = {
	{ "idVec3", "targetPos", (int)(&((idAASFindAreaOutOfRange *)0)->targetPos), sizeof( ((idAASFindAreaOutOfRange *)0)->targetPos ) },
	{ "float", "maxDistSqr", (int)(&((idAASFindAreaOutOfRange *)0)->maxDistSqr), sizeof( ((idAASFindAreaOutOfRange *)0)->maxDistSqr ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFindAttackPosition_typeInfo[] = {
	{ "const idAI *", "self", (int)(&((idAASFindAttackPosition *)0)->self), sizeof( ((idAASFindAttackPosition *)0)->self ) },
	{ "idEntity *", "target", (int)(&((idAASFindAttackPosition *)0)->target), sizeof( ((idAASFindAttackPosition *)0)->target ) },
	{ "idBounds", "excludeBounds", (int)(&((idAASFindAttackPosition *)0)->excludeBounds), sizeof( ((idAASFindAttackPosition *)0)->excludeBounds ) },
	{ "idVec3", "targetPos", (int)(&((idAASFindAttackPosition *)0)->targetPos), sizeof( ((idAASFindAttackPosition *)0)->targetPos ) },
	{ "idVec3", "fireOffset", (int)(&((idAASFindAttackPosition *)0)->fireOffset), sizeof( ((idAASFindAttackPosition *)0)->fireOffset ) },
	{ "idMat3", "gravityAxis", (int)(&((idAASFindAttackPosition *)0)->gravityAxis), sizeof( ((idAASFindAttackPosition *)0)->gravityAxis ) },
	{ "pvsHandle_t", "targetPVS", (int)(&((idAASFindAttackPosition *)0)->targetPVS), sizeof( ((idAASFindAttackPosition *)0)->targetPVS ) },
	{ "int[4]", "PVSAreas", (int)(&((idAASFindAttackPosition *)0)->PVSAreas), sizeof( ((idAASFindAttackPosition *)0)->PVSAreas ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAI_typeInfo[] = {
	{ "idAAS *", "aas", (int)(&((idAI *)0)->aas), sizeof( ((idAI *)0)->aas ) },
	{ "int", "travelFlags", (int)(&((idAI *)0)->travelFlags), sizeof( ((idAI *)0)->travelFlags ) },
	{ "idMoveState", "move", (int)(&((idAI *)0)->move), sizeof( ((idAI *)0)->move ) },
	{ "idMoveState", "savedMove", (int)(&((idAI *)0)->savedMove), sizeof( ((idAI *)0)->savedMove ) },
	{ "float", "kickForce", (int)(&((idAI *)0)->kickForce), sizeof( ((idAI *)0)->kickForce ) },
	{ "bool", "ignore_obstacles", (int)(&((idAI *)0)->ignore_obstacles), sizeof( ((idAI *)0)->ignore_obstacles ) },
	{ "float", "blockedRadius", (int)(&((idAI *)0)->blockedRadius), sizeof( ((idAI *)0)->blockedRadius ) },
	{ "int", "blockedMoveTime", (int)(&((idAI *)0)->blockedMoveTime), sizeof( ((idAI *)0)->blockedMoveTime ) },
	{ "int", "blockedAttackTime", (int)(&((idAI *)0)->blockedAttackTime), sizeof( ((idAI *)0)->blockedAttackTime ) },
	{ "float", "ideal_yaw", (int)(&((idAI *)0)->ideal_yaw), sizeof( ((idAI *)0)->ideal_yaw ) },
	{ "float", "current_yaw", (int)(&((idAI *)0)->current_yaw), sizeof( ((idAI *)0)->current_yaw ) },
	{ "float", "turnRate", (int)(&((idAI *)0)->turnRate), sizeof( ((idAI *)0)->turnRate ) },
	{ "float", "turnVel", (int)(&((idAI *)0)->turnVel), sizeof( ((idAI *)0)->turnVel ) },
	{ "float", "anim_turn_yaw", (int)(&((idAI *)0)->anim_turn_yaw), sizeof( ((idAI *)0)->anim_turn_yaw ) },
	{ "float", "anim_turn_amount", (int)(&((idAI *)0)->anim_turn_amount), sizeof( ((idAI *)0)->anim_turn_amount ) },
	{ "float", "anim_turn_angles", (int)(&((idAI *)0)->anim_turn_angles), sizeof( ((idAI *)0)->anim_turn_angles ) },
	{ "idPhysics_Monster", "physicsObj", (int)(&((idAI *)0)->physicsObj), sizeof( ((idAI *)0)->physicsObj ) },
	{ "jointHandle_t", "flyTiltJoint", (int)(&((idAI *)0)->flyTiltJoint), sizeof( ((idAI *)0)->flyTiltJoint ) },
	{ "float", "fly_speed", (int)(&((idAI *)0)->fly_speed), sizeof( ((idAI *)0)->fly_speed ) },
	{ "float", "fly_bob_strength", (int)(&((idAI *)0)->fly_bob_strength), sizeof( ((idAI *)0)->fly_bob_strength ) },
	{ "float", "fly_bob_vert", (int)(&((idAI *)0)->fly_bob_vert), sizeof( ((idAI *)0)->fly_bob_vert ) },
	{ "float", "fly_bob_horz", (int)(&((idAI *)0)->fly_bob_horz), sizeof( ((idAI *)0)->fly_bob_horz ) },
	{ "int", "fly_offset", (int)(&((idAI *)0)->fly_offset), sizeof( ((idAI *)0)->fly_offset ) },
	{ "float", "fly_seek_scale", (int)(&((idAI *)0)->fly_seek_scale), sizeof( ((idAI *)0)->fly_seek_scale ) },
	{ "float", "fly_roll_scale", (int)(&((idAI *)0)->fly_roll_scale), sizeof( ((idAI *)0)->fly_roll_scale ) },
	{ "float", "fly_roll_max", (int)(&((idAI *)0)->fly_roll_max), sizeof( ((idAI *)0)->fly_roll_max ) },
	{ "float", "fly_roll", (int)(&((idAI *)0)->fly_roll), sizeof( ((idAI *)0)->fly_roll ) },
	{ "float", "fly_pitch_scale", (int)(&((idAI *)0)->fly_pitch_scale), sizeof( ((idAI *)0)->fly_pitch_scale ) },
	{ "float", "fly_pitch_max", (int)(&((idAI *)0)->fly_pitch_max), sizeof( ((idAI *)0)->fly_pitch_max ) },
	{ "float", "fly_pitch", (int)(&((idAI *)0)->fly_pitch), sizeof( ((idAI *)0)->fly_pitch ) },
	{ "bool", "allowMove", (int)(&((idAI *)0)->allowMove), sizeof( ((idAI *)0)->allowMove ) },
	{ "bool", "allowHiddenMovement", (int)(&((idAI *)0)->allowHiddenMovement), sizeof( ((idAI *)0)->allowHiddenMovement ) },
	{ "bool", "disableGravity", (int)(&((idAI *)0)->disableGravity), sizeof( ((idAI *)0)->disableGravity ) },
	{ "bool", "af_push_moveables", (int)(&((idAI *)0)->af_push_moveables), sizeof( ((idAI *)0)->af_push_moveables ) },
	{ "bool", "lastHitCheckResult", (int)(&((idAI *)0)->lastHitCheckResult), sizeof( ((idAI *)0)->lastHitCheckResult ) },
	{ "int", "lastHitCheckTime", (int)(&((idAI *)0)->lastHitCheckTime), sizeof( ((idAI *)0)->lastHitCheckTime ) },
	{ "int", "lastAttackTime", (int)(&((idAI *)0)->lastAttackTime), sizeof( ((idAI *)0)->lastAttackTime ) },
	{ "float", "melee_range", (int)(&((idAI *)0)->melee_range), sizeof( ((idAI *)0)->melee_range ) },
	{ "float", "projectile_height_to_distance_ratio", (int)(&((idAI *)0)->projectile_height_to_distance_ratio), sizeof( ((idAI *)0)->projectile_height_to_distance_ratio ) },
	{ "idList < idVec3 >", "missileLaunchOffset", (int)(&((idAI *)0)->missileLaunchOffset), sizeof( ((idAI *)0)->missileLaunchOffset ) },
	{ "const idDict *", "projectileDef", (int)(&((idAI *)0)->projectileDef), sizeof( ((idAI *)0)->projectileDef ) },
	{ "mutable idClipModel *", "projectileClipModel", (int)(&((idAI *)0)->projectileClipModel), sizeof( ((idAI *)0)->projectileClipModel ) },
	{ "float", "projectileRadius", (int)(&((idAI *)0)->projectileRadius), sizeof( ((idAI *)0)->projectileRadius ) },
	{ "float", "projectileSpeed", (int)(&((idAI *)0)->projectileSpeed), sizeof( ((idAI *)0)->projectileSpeed ) },
	{ "idVec3", "projectileVelocity", (int)(&((idAI *)0)->projectileVelocity), sizeof( ((idAI *)0)->projectileVelocity ) },
	{ "idVec3", "projectileGravity", (int)(&((idAI *)0)->projectileGravity), sizeof( ((idAI *)0)->projectileGravity ) },
	{ "idEntityPtr < idProjectile >", "projectile", (int)(&((idAI *)0)->projectile), sizeof( ((idAI *)0)->projectile ) },
	{ "idStr", "attack", (int)(&((idAI *)0)->attack), sizeof( ((idAI *)0)->attack ) },
	{ "const idSoundShader *", "chat_snd", (int)(&((idAI *)0)->chat_snd), sizeof( ((idAI *)0)->chat_snd ) },
	{ "int", "chat_min", (int)(&((idAI *)0)->chat_min), sizeof( ((idAI *)0)->chat_min ) },
	{ "int", "chat_max", (int)(&((idAI *)0)->chat_max), sizeof( ((idAI *)0)->chat_max ) },
	{ "int", "chat_time", (int)(&((idAI *)0)->chat_time), sizeof( ((idAI *)0)->chat_time ) },
	{ "talkState_t", "talk_state", (int)(&((idAI *)0)->talk_state), sizeof( ((idAI *)0)->talk_state ) },
	{ "idEntityPtr < idActor >", "talkTarget", (int)(&((idAI *)0)->talkTarget), sizeof( ((idAI *)0)->talkTarget ) },
	{ "int", "num_cinematics", (int)(&((idAI *)0)->num_cinematics), sizeof( ((idAI *)0)->num_cinematics ) },
	{ "int", "current_cinematic", (int)(&((idAI *)0)->current_cinematic), sizeof( ((idAI *)0)->current_cinematic ) },
	{ "bool", "allowJointMod", (int)(&((idAI *)0)->allowJointMod), sizeof( ((idAI *)0)->allowJointMod ) },
	{ "idEntityPtr < idEntity >", "focusEntity", (int)(&((idAI *)0)->focusEntity), sizeof( ((idAI *)0)->focusEntity ) },
	{ "idVec3", "currentFocusPos", (int)(&((idAI *)0)->currentFocusPos), sizeof( ((idAI *)0)->currentFocusPos ) },
	{ "int", "focusTime", (int)(&((idAI *)0)->focusTime), sizeof( ((idAI *)0)->focusTime ) },
	{ "int", "alignHeadTime", (int)(&((idAI *)0)->alignHeadTime), sizeof( ((idAI *)0)->alignHeadTime ) },
	{ "int", "forceAlignHeadTime", (int)(&((idAI *)0)->forceAlignHeadTime), sizeof( ((idAI *)0)->forceAlignHeadTime ) },
	{ "idAngles", "eyeAng", (int)(&((idAI *)0)->eyeAng), sizeof( ((idAI *)0)->eyeAng ) },
	{ "idAngles", "lookAng", (int)(&((idAI *)0)->lookAng), sizeof( ((idAI *)0)->lookAng ) },
	{ "idAngles", "destLookAng", (int)(&((idAI *)0)->destLookAng), sizeof( ((idAI *)0)->destLookAng ) },
	{ "idAngles", "lookMin", (int)(&((idAI *)0)->lookMin), sizeof( ((idAI *)0)->lookMin ) },
	{ "idAngles", "lookMax", (int)(&((idAI *)0)->lookMax), sizeof( ((idAI *)0)->lookMax ) },
	{ "idList < jointHandle_t >", "lookJoints", (int)(&((idAI *)0)->lookJoints), sizeof( ((idAI *)0)->lookJoints ) },
	{ "idList < idAngles >", "lookJointAngles", (int)(&((idAI *)0)->lookJointAngles), sizeof( ((idAI *)0)->lookJointAngles ) },
	{ "float", "eyeVerticalOffset", (int)(&((idAI *)0)->eyeVerticalOffset), sizeof( ((idAI *)0)->eyeVerticalOffset ) },
	{ "float", "eyeHorizontalOffset", (int)(&((idAI *)0)->eyeHorizontalOffset), sizeof( ((idAI *)0)->eyeHorizontalOffset ) },
	{ "float", "eyeFocusRate", (int)(&((idAI *)0)->eyeFocusRate), sizeof( ((idAI *)0)->eyeFocusRate ) },
	{ "float", "headFocusRate", (int)(&((idAI *)0)->headFocusRate), sizeof( ((idAI *)0)->headFocusRate ) },
	{ "int", "focusAlignTime", (int)(&((idAI *)0)->focusAlignTime), sizeof( ((idAI *)0)->focusAlignTime ) },
	{ "float", "shrivel_rate", (int)(&((idAI *)0)->shrivel_rate), sizeof( ((idAI *)0)->shrivel_rate ) },
	{ "int", "shrivel_start", (int)(&((idAI *)0)->shrivel_start), sizeof( ((idAI *)0)->shrivel_start ) },
	{ "bool", "restartParticles", (int)(&((idAI *)0)->restartParticles), sizeof( ((idAI *)0)->restartParticles ) },
	{ "bool", "useBoneAxis", (int)(&((idAI *)0)->useBoneAxis), sizeof( ((idAI *)0)->useBoneAxis ) },
	{ "idList < particleEmitter_t >", "particles", (int)(&((idAI *)0)->particles), sizeof( ((idAI *)0)->particles ) },
	{ "renderLight_t", "worldMuzzleFlash", (int)(&((idAI *)0)->worldMuzzleFlash), sizeof( ((idAI *)0)->worldMuzzleFlash ) },
	{ "int", "worldMuzzleFlashHandle", (int)(&((idAI *)0)->worldMuzzleFlashHandle), sizeof( ((idAI *)0)->worldMuzzleFlashHandle ) },
	{ "jointHandle_t", "flashJointWorld", (int)(&((idAI *)0)->flashJointWorld), sizeof( ((idAI *)0)->flashJointWorld ) },
	{ "int", "muzzleFlashEnd", (int)(&((idAI *)0)->muzzleFlashEnd), sizeof( ((idAI *)0)->muzzleFlashEnd ) },
	{ "int", "flashTime", (int)(&((idAI *)0)->flashTime), sizeof( ((idAI *)0)->flashTime ) },
	{ "idAngles", "eyeMin", (int)(&((idAI *)0)->eyeMin), sizeof( ((idAI *)0)->eyeMin ) },
	{ "idAngles", "eyeMax", (int)(&((idAI *)0)->eyeMax), sizeof( ((idAI *)0)->eyeMax ) },
	{ "jointHandle_t", "focusJoint", (int)(&((idAI *)0)->focusJoint), sizeof( ((idAI *)0)->focusJoint ) },
	{ "jointHandle_t", "orientationJoint", (int)(&((idAI *)0)->orientationJoint), sizeof( ((idAI *)0)->orientationJoint ) },
	{ "idEntityPtr < idActor >", "enemy", (int)(&((idAI *)0)->enemy), sizeof( ((idAI *)0)->enemy ) },
	{ "idVec3", "lastVisibleEnemyPos", (int)(&((idAI *)0)->lastVisibleEnemyPos), sizeof( ((idAI *)0)->lastVisibleEnemyPos ) },
	{ "idVec3", "lastVisibleEnemyEyeOffset", (int)(&((idAI *)0)->lastVisibleEnemyEyeOffset), sizeof( ((idAI *)0)->lastVisibleEnemyEyeOffset ) },
	{ "idVec3", "lastVisibleReachableEnemyPos", (int)(&((idAI *)0)->lastVisibleReachableEnemyPos), sizeof( ((idAI *)0)->lastVisibleReachableEnemyPos ) },
	{ "idVec3", "lastReachableEnemyPos", (int)(&((idAI *)0)->lastReachableEnemyPos), sizeof( ((idAI *)0)->lastReachableEnemyPos ) },
	{ "bool", "wakeOnFlashlight", (int)(&((idAI *)0)->wakeOnFlashlight), sizeof( ((idAI *)0)->wakeOnFlashlight ) },
	{ "idScriptBool", "AI_TALK", (int)(&((idAI *)0)->AI_TALK), sizeof( ((idAI *)0)->AI_TALK ) },
	{ "idScriptBool", "AI_DAMAGE", (int)(&((idAI *)0)->AI_DAMAGE), sizeof( ((idAI *)0)->AI_DAMAGE ) },
	{ "idScriptBool", "AI_PAIN", (int)(&((idAI *)0)->AI_PAIN), sizeof( ((idAI *)0)->AI_PAIN ) },
	{ "idScriptFloat", "AI_SPECIAL_DAMAGE", (int)(&((idAI *)0)->AI_SPECIAL_DAMAGE), sizeof( ((idAI *)0)->AI_SPECIAL_DAMAGE ) },
	{ "idScriptBool", "AI_DEAD", (int)(&((idAI *)0)->AI_DEAD), sizeof( ((idAI *)0)->AI_DEAD ) },
	{ "idScriptBool", "AI_ENEMY_VISIBLE", (int)(&((idAI *)0)->AI_ENEMY_VISIBLE), sizeof( ((idAI *)0)->AI_ENEMY_VISIBLE ) },
	{ "idScriptBool", "AI_ENEMY_IN_FOV", (int)(&((idAI *)0)->AI_ENEMY_IN_FOV), sizeof( ((idAI *)0)->AI_ENEMY_IN_FOV ) },
	{ "idScriptBool", "AI_ENEMY_DEAD", (int)(&((idAI *)0)->AI_ENEMY_DEAD), sizeof( ((idAI *)0)->AI_ENEMY_DEAD ) },
	{ "idScriptBool", "AI_MOVE_DONE", (int)(&((idAI *)0)->AI_MOVE_DONE), sizeof( ((idAI *)0)->AI_MOVE_DONE ) },
	{ "idScriptBool", "AI_ONGROUND", (int)(&((idAI *)0)->AI_ONGROUND), sizeof( ((idAI *)0)->AI_ONGROUND ) },
	{ "idScriptBool", "AI_ACTIVATED", (int)(&((idAI *)0)->AI_ACTIVATED), sizeof( ((idAI *)0)->AI_ACTIVATED ) },
	{ "idScriptBool", "AI_FORWARD", (int)(&((idAI *)0)->AI_FORWARD), sizeof( ((idAI *)0)->AI_FORWARD ) },
	{ "idScriptBool", "AI_JUMP", (int)(&((idAI *)0)->AI_JUMP), sizeof( ((idAI *)0)->AI_JUMP ) },
	{ "idScriptBool", "AI_ENEMY_REACHABLE", (int)(&((idAI *)0)->AI_ENEMY_REACHABLE), sizeof( ((idAI *)0)->AI_ENEMY_REACHABLE ) },
	{ "idScriptBool", "AI_BLOCKED", (int)(&((idAI *)0)->AI_BLOCKED), sizeof( ((idAI *)0)->AI_BLOCKED ) },
	{ "idScriptBool", "AI_OBSTACLE_IN_PATH", (int)(&((idAI *)0)->AI_OBSTACLE_IN_PATH), sizeof( ((idAI *)0)->AI_OBSTACLE_IN_PATH ) },
	{ "idScriptBool", "AI_DEST_UNREACHABLE", (int)(&((idAI *)0)->AI_DEST_UNREACHABLE), sizeof( ((idAI *)0)->AI_DEST_UNREACHABLE ) },
	{ "idScriptBool", "AI_HIT_ENEMY", (int)(&((idAI *)0)->AI_HIT_ENEMY), sizeof( ((idAI *)0)->AI_HIT_ENEMY ) },
	{ "idScriptBool", "AI_PUSHED", (int)(&((idAI *)0)->AI_PUSHED), sizeof( ((idAI *)0)->AI_PUSHED ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCombatNode_typeInfo[] = {
	{ "float", "min_dist", (int)(&((idCombatNode *)0)->min_dist), sizeof( ((idCombatNode *)0)->min_dist ) },
	{ "float", "max_dist", (int)(&((idCombatNode *)0)->max_dist), sizeof( ((idCombatNode *)0)->max_dist ) },
	{ "float", "cone_dist", (int)(&((idCombatNode *)0)->cone_dist), sizeof( ((idCombatNode *)0)->cone_dist ) },
	{ "float", "min_height", (int)(&((idCombatNode *)0)->min_height), sizeof( ((idCombatNode *)0)->min_height ) },
	{ "float", "max_height", (int)(&((idCombatNode *)0)->max_height), sizeof( ((idCombatNode *)0)->max_height ) },
	{ "idVec3", "cone_left", (int)(&((idCombatNode *)0)->cone_left), sizeof( ((idCombatNode *)0)->cone_left ) },
	{ "idVec3", "cone_right", (int)(&((idCombatNode *)0)->cone_right), sizeof( ((idCombatNode *)0)->cone_right ) },
	{ "idVec3", "offset", (int)(&((idCombatNode *)0)->offset), sizeof( ((idCombatNode *)0)->offset ) },
	{ "bool", "disabled", (int)(&((idCombatNode *)0)->disabled), sizeof( ((idCombatNode *)0)->disabled ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTestModel_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "head", (int)(&((idTestModel *)0)->head), sizeof( ((idTestModel *)0)->head ) },
	{ "idAnimator *", "headAnimator", (int)(&((idTestModel *)0)->headAnimator), sizeof( ((idTestModel *)0)->headAnimator ) },
	{ "idAnim", "customAnim", (int)(&((idTestModel *)0)->customAnim), sizeof( ((idTestModel *)0)->customAnim ) },
	{ "idPhysics_Parametric", "physicsObj", (int)(&((idTestModel *)0)->physicsObj), sizeof( ((idTestModel *)0)->physicsObj ) },
	{ "idStr", "animname", (int)(&((idTestModel *)0)->animname), sizeof( ((idTestModel *)0)->animname ) },
	{ "int", "anim", (int)(&((idTestModel *)0)->anim), sizeof( ((idTestModel *)0)->anim ) },
	{ "int", "headAnim", (int)(&((idTestModel *)0)->headAnim), sizeof( ((idTestModel *)0)->headAnim ) },
	{ "int", "mode", (int)(&((idTestModel *)0)->mode), sizeof( ((idTestModel *)0)->mode ) },
	{ "int", "frame", (int)(&((idTestModel *)0)->frame), sizeof( ((idTestModel *)0)->frame ) },
	{ "int", "starttime", (int)(&((idTestModel *)0)->starttime), sizeof( ((idTestModel *)0)->starttime ) },
	{ "int", "animtime", (int)(&((idTestModel *)0)->animtime), sizeof( ((idTestModel *)0)->animtime ) },
	{ "idList < copyJoints_t >", "copyJoints", (int)(&((idTestModel *)0)->copyJoints), sizeof( ((idTestModel *)0)->copyJoints ) },
	{ NULL, 0 }
};

static classVariableInfo_t opcode_t_typeInfo[] = {
	{ "char *", "name", (int)(&((opcode_t *)0)->name), sizeof( ((opcode_t *)0)->name ) },
	{ "char *", "opname", (int)(&((opcode_t *)0)->opname), sizeof( ((opcode_t *)0)->opname ) },
	{ "int", "priority", (int)(&((opcode_t *)0)->priority), sizeof( ((opcode_t *)0)->priority ) },
	{ "bool", "rightAssociative", (int)(&((opcode_t *)0)->rightAssociative), sizeof( ((opcode_t *)0)->rightAssociative ) },
	{ "idVarDef *", "type_a", (int)(&((opcode_t *)0)->type_a), sizeof( ((opcode_t *)0)->type_a ) },
	{ "idVarDef *", "type_b", (int)(&((opcode_t *)0)->type_b), sizeof( ((opcode_t *)0)->type_b ) },
	{ "idVarDef *", "type_c", (int)(&((opcode_t *)0)->type_c), sizeof( ((opcode_t *)0)->type_c ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCompiler_typeInfo[] = {
	{ "idParser", "parser", (int)(&((idCompiler *)0)->parser), sizeof( ((idCompiler *)0)->parser ) },
	{ "idParser *", "parserPtr", (int)(&((idCompiler *)0)->parserPtr), sizeof( ((idCompiler *)0)->parserPtr ) },
	{ "idToken", "token", (int)(&((idCompiler *)0)->token), sizeof( ((idCompiler *)0)->token ) },
	{ "idTypeDef *", "immediateType", (int)(&((idCompiler *)0)->immediateType), sizeof( ((idCompiler *)0)->immediateType ) },
	{ "eval_t", "immediate", (int)(&((idCompiler *)0)->immediate), sizeof( ((idCompiler *)0)->immediate ) },
	{ "bool", "eof", (int)(&((idCompiler *)0)->eof), sizeof( ((idCompiler *)0)->eof ) },
	{ "bool", "console", (int)(&((idCompiler *)0)->console), sizeof( ((idCompiler *)0)->console ) },
	{ "bool", "callthread", (int)(&((idCompiler *)0)->callthread), sizeof( ((idCompiler *)0)->callthread ) },
	{ "int", "braceDepth", (int)(&((idCompiler *)0)->braceDepth), sizeof( ((idCompiler *)0)->braceDepth ) },
	{ "int", "loopDepth", (int)(&((idCompiler *)0)->loopDepth), sizeof( ((idCompiler *)0)->loopDepth ) },
	{ "int", "currentLineNumber", (int)(&((idCompiler *)0)->currentLineNumber), sizeof( ((idCompiler *)0)->currentLineNumber ) },
	{ "int", "currentFileNumber", (int)(&((idCompiler *)0)->currentFileNumber), sizeof( ((idCompiler *)0)->currentFileNumber ) },
	{ "int", "errorCount", (int)(&((idCompiler *)0)->errorCount), sizeof( ((idCompiler *)0)->errorCount ) },
	{ "idVarDef *", "scope", (int)(&((idCompiler *)0)->scope), sizeof( ((idCompiler *)0)->scope ) },
	{ "const idVarDef *", "basetype", (int)(&((idCompiler *)0)->basetype), sizeof( ((idCompiler *)0)->basetype ) },
	{ NULL, 0 }
};

static classVariableInfo_t prstack_t_typeInfo[] = {
	{ "int", "s", (int)(&((prstack_t *)0)->s), sizeof( ((prstack_t *)0)->s ) },
	{ "const function_t *", "f", (int)(&((prstack_t *)0)->f), sizeof( ((prstack_t *)0)->f ) },
	{ "int", "stackbase", (int)(&((prstack_t *)0)->stackbase), sizeof( ((prstack_t *)0)->stackbase ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInterpreter_typeInfo[] = {
	{ "prstack_t[64]", "callStack", (int)(&((idInterpreter *)0)->callStack), sizeof( ((idInterpreter *)0)->callStack ) },
	{ "int", "callStackDepth", (int)(&((idInterpreter *)0)->callStackDepth), sizeof( ((idInterpreter *)0)->callStackDepth ) },
	{ "int", "maxStackDepth", (int)(&((idInterpreter *)0)->maxStackDepth), sizeof( ((idInterpreter *)0)->maxStackDepth ) },
	{ "byte[6144]", "localstack", (int)(&((idInterpreter *)0)->localstack), sizeof( ((idInterpreter *)0)->localstack ) },
	{ "int", "localstackUsed", (int)(&((idInterpreter *)0)->localstackUsed), sizeof( ((idInterpreter *)0)->localstackUsed ) },
	{ "int", "localstackBase", (int)(&((idInterpreter *)0)->localstackBase), sizeof( ((idInterpreter *)0)->localstackBase ) },
	{ "int", "maxLocalstackUsed", (int)(&((idInterpreter *)0)->maxLocalstackUsed), sizeof( ((idInterpreter *)0)->maxLocalstackUsed ) },
	{ "const function_t *", "currentFunction", (int)(&((idInterpreter *)0)->currentFunction), sizeof( ((idInterpreter *)0)->currentFunction ) },
	{ "int", "instructionPointer", (int)(&((idInterpreter *)0)->instructionPointer), sizeof( ((idInterpreter *)0)->instructionPointer ) },
	{ "int", "popParms", (int)(&((idInterpreter *)0)->popParms), sizeof( ((idInterpreter *)0)->popParms ) },
	{ "const idEventDef *", "multiFrameEvent", (int)(&((idInterpreter *)0)->multiFrameEvent), sizeof( ((idInterpreter *)0)->multiFrameEvent ) },
	{ "idEntity *", "eventEntity", (int)(&((idInterpreter *)0)->eventEntity), sizeof( ((idInterpreter *)0)->eventEntity ) },
	{ "idThread *", "thread", (int)(&((idInterpreter *)0)->thread), sizeof( ((idInterpreter *)0)->thread ) },
	{ "bool", "doneProcessing", (int)(&((idInterpreter *)0)->doneProcessing), sizeof( ((idInterpreter *)0)->doneProcessing ) },
	{ "bool", "threadDying", (int)(&((idInterpreter *)0)->threadDying), sizeof( ((idInterpreter *)0)->threadDying ) },
	{ "bool", "terminateOnExit", (int)(&((idInterpreter *)0)->terminateOnExit), sizeof( ((idInterpreter *)0)->terminateOnExit ) },
	{ "bool", "debug", (int)(&((idInterpreter *)0)->debug), sizeof( ((idInterpreter *)0)->debug ) },
	{ NULL, 0 }
};

static classVariableInfo_t idThread_typeInfo[] = {
	{ "idThread *", "waitingForThread", (int)(&((idThread *)0)->waitingForThread), sizeof( ((idThread *)0)->waitingForThread ) },
	{ "int", "waitingFor", (int)(&((idThread *)0)->waitingFor), sizeof( ((idThread *)0)->waitingFor ) },
	{ "int", "waitingUntil", (int)(&((idThread *)0)->waitingUntil), sizeof( ((idThread *)0)->waitingUntil ) },
	{ "idInterpreter", "interpreter", (int)(&((idThread *)0)->interpreter), sizeof( ((idThread *)0)->interpreter ) },
	{ "idDict", "spawnArgs", (int)(&((idThread *)0)->spawnArgs), sizeof( ((idThread *)0)->spawnArgs ) },
	{ "int", "threadNum", (int)(&((idThread *)0)->threadNum), sizeof( ((idThread *)0)->threadNum ) },
	{ "idStr", "threadName", (int)(&((idThread *)0)->threadName), sizeof( ((idThread *)0)->threadName ) },
	{ "int", "lastExecuteTime", (int)(&((idThread *)0)->lastExecuteTime), sizeof( ((idThread *)0)->lastExecuteTime ) },
	{ "int", "creationTime", (int)(&((idThread *)0)->creationTime), sizeof( ((idThread *)0)->creationTime ) },
	{ "bool", "manualControl", (int)(&((idThread *)0)->manualControl), sizeof( ((idThread *)0)->manualControl ) },
	{ NULL, 0 }
};

static classTypeInfo_t classTypeInfo[] = {
	{ "sysEvent_t", "", sizeof(sysEvent_t), sysEvent_t_typeInfo },
	{ "sysMemoryStats_t", "", sizeof(sysMemoryStats_t), sysMemoryStats_t_typeInfo },
	{ "netadr_t", "", sizeof(netadr_t), netadr_t_typeInfo },
	{ "idPort", "", sizeof(idPort), idPort_typeInfo },
	{ "idTCP", "", sizeof(idTCP), idTCP_typeInfo },
	{ "xthreadInfo", "", sizeof(xthreadInfo), xthreadInfo_typeInfo },
	{ "idSys", "", sizeof(idSys), idSys_typeInfo },
	{ "idLib", "", sizeof(idLib), idLib_typeInfo },
	{ "idException", "", sizeof(idException), idException_typeInfo },
	{ "memoryStats_t", "", sizeof(memoryStats_t), memoryStats_t_typeInfo },
//	{ "idBlockAlloc< class type , int blockSize >::element_t", "", sizeof(idBlockAlloc< class type , int blockSize >::element_t), idBlockAlloc_class_type_int_blockSize__element_t_typeInfo },
//	{ "idBlockAlloc< class type , int blockSize >::block_t", "", sizeof(idBlockAlloc< class type , int blockSize >::block_t), idBlockAlloc_class_type_int_blockSize__block_t_typeInfo },
//	{ "idBlockAlloc< class type , int blockSize >", "", sizeof(idBlockAlloc< class type , int blockSize >), idBlockAlloc_class_type_int_blockSize__typeInfo },
//	{ "idDynamicAlloc< class type , int baseBlockSize , int minBlockSize >", "", sizeof(idDynamicAlloc< class type , int baseBlockSize , int minBlockSize >), idDynamicAlloc_class_type_int_baseBlockSize_int_minBlockSize__typeInfo },
//	{ "idBTreeNode< class objType , class keyType >", "", sizeof(idBTreeNode< class objType , class keyType >), idBTreeNode_class_objType_class_keyType__typeInfo },
//	{ "idBTree< class objType , class keyType , int maxChildrenPerNode >", "", sizeof(idBTree< class objType , class keyType , int maxChildrenPerNode >), idBTree_class_objType_class_keyType_int_maxChildrenPerNode__typeInfo },
//	{ "idDynamicBlock< class type >", "", sizeof(idDynamicBlock< class type >), idDynamicBlock_class_type__typeInfo },
//	{ "idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize >", "", sizeof(idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize >), idDynamicBlockAlloc_class_type_int_baseBlockSize_int_minBlockSize__typeInfo },
//	{ "idList< class type >", "", sizeof(idList< class type >), idList_class_type__typeInfo },
	{ "idSIMD", "", sizeof(idSIMD), idSIMD_typeInfo },
	{ "idSIMDProcessor", "", sizeof(idSIMDProcessor), idSIMDProcessor_typeInfo },
	{ "idMath::_flint", "", sizeof(idMath::_flint), idMath__flint_typeInfo },
	{ "idMath", "", sizeof(idMath), idMath_typeInfo },
	{ "idRandom", "", sizeof(idRandom), idRandom_typeInfo },
	{ "idRandom2", "", sizeof(idRandom2), idRandom2_typeInfo },
	{ "idComplex", "", sizeof(idComplex), idComplex_typeInfo },
	{ "idVec2", "", sizeof(idVec2), idVec2_typeInfo },
	{ "idVec3", "", sizeof(idVec3), idVec3_typeInfo },
	{ "idVec4", "", sizeof(idVec4), idVec4_typeInfo },
	{ "idVec5", "", sizeof(idVec5), idVec5_typeInfo },
	{ "idVec6", "", sizeof(idVec6), idVec6_typeInfo },
	{ "idVecX", "", sizeof(idVecX), idVecX_typeInfo },
	{ "idPolar3", "", sizeof(idPolar3), idPolar3_typeInfo },
	{ "idMat2", "", sizeof(idMat2), idMat2_typeInfo },
	{ "idMat3", "", sizeof(idMat3), idMat3_typeInfo },
	{ "idMat4", "", sizeof(idMat4), idMat4_typeInfo },
	{ "idMat5", "", sizeof(idMat5), idMat5_typeInfo },
	{ "idMat6", "", sizeof(idMat6), idMat6_typeInfo },
	{ "idMatX", "", sizeof(idMatX), idMatX_typeInfo },
	{ "idAngles", "", sizeof(idAngles), idAngles_typeInfo },
	{ "idQuat", "", sizeof(idQuat), idQuat_typeInfo },
	{ "idCQuat", "", sizeof(idCQuat), idCQuat_typeInfo },
	{ "idRotation", "", sizeof(idRotation), idRotation_typeInfo },
	{ "idPlane", "", sizeof(idPlane), idPlane_typeInfo },
	{ "idPluecker", "", sizeof(idPluecker), idPluecker_typeInfo },
	{ "idPolynomial", "", sizeof(idPolynomial), idPolynomial_typeInfo },
//	{ "idExtrapolate< class type >", "", sizeof(idExtrapolate< class type >), idExtrapolate_class_type__typeInfo },
//	{ "idInterpolate< class type >", "", sizeof(idInterpolate< class type >), idInterpolate_class_type__typeInfo },
//	{ "idInterpolateAccelDecelLinear< class type >", "", sizeof(idInterpolateAccelDecelLinear< class type >), idInterpolateAccelDecelLinear_class_type__typeInfo },
//	{ "idInterpolateAccelDecelSine< class type >", "", sizeof(idInterpolateAccelDecelSine< class type >), idInterpolateAccelDecelSine_class_type__typeInfo },
//	{ "idCurve< class type >", "", sizeof(idCurve< class type >), idCurve_class_type__typeInfo },
//	{ "idCurve_Bezier< class type >", "idCurve< type >", sizeof(idCurve_Bezier< class type >), idCurve_Bezier_class_type__typeInfo },
//	{ "idCurve_QuadraticBezier< class type >", "idCurve< type >", sizeof(idCurve_QuadraticBezier< class type >), idCurve_QuadraticBezier_class_type__typeInfo },
//	{ "idCurve_CubicBezier< class type >", "idCurve< type >", sizeof(idCurve_CubicBezier< class type >), idCurve_CubicBezier_class_type__typeInfo },
//	{ "idCurve_Spline< class type >", "idCurve< type >", sizeof(idCurve_Spline< class type >), idCurve_Spline_class_type__typeInfo },
//	{ "idCurve_NaturalCubicSpline< class type >", "idCurve_Spline< type >", sizeof(idCurve_NaturalCubicSpline< class type >), idCurve_NaturalCubicSpline_class_type__typeInfo },
//	{ "idCurve_CatmullRomSpline< class type >", "idCurve_Spline< type >", sizeof(idCurve_CatmullRomSpline< class type >), idCurve_CatmullRomSpline_class_type__typeInfo },
//	{ "idCurve_KochanekBartelsSpline< class type >", "idCurve_Spline< type >", sizeof(idCurve_KochanekBartelsSpline< class type >), idCurve_KochanekBartelsSpline_class_type__typeInfo },
//	{ "idCurve_BSpline< class type >", "idCurve_Spline< type >", sizeof(idCurve_BSpline< class type >), idCurve_BSpline_class_type__typeInfo },
//	{ "idCurve_UniformCubicBSpline< class type >", "idCurve_BSpline< type >", sizeof(idCurve_UniformCubicBSpline< class type >), idCurve_UniformCubicBSpline_class_type__typeInfo },
//	{ "idCurve_NonUniformBSpline< class type >", "idCurve_BSpline< type >", sizeof(idCurve_NonUniformBSpline< class type >), idCurve_NonUniformBSpline_class_type__typeInfo },
//	{ "idCurve_NURBS< class type >", "idCurve_NonUniformBSpline< type >", sizeof(idCurve_NURBS< class type >), idCurve_NURBS_class_type__typeInfo },
	{ "idODE", "", sizeof(idODE), idODE_typeInfo },
	{ "idODE_Euler", "idODE", sizeof(idODE_Euler), idODE_Euler_typeInfo },
	{ "idODE_Midpoint", "idODE", sizeof(idODE_Midpoint), idODE_Midpoint_typeInfo },
	{ "idODE_RK4", "idODE", sizeof(idODE_RK4), idODE_RK4_typeInfo },
	{ "idODE_RK4Adaptive", "idODE", sizeof(idODE_RK4Adaptive), idODE_RK4Adaptive_typeInfo },
	{ "idLCP", "", sizeof(idLCP), idLCP_typeInfo },
	{ "idSphere", "", sizeof(idSphere), idSphere_typeInfo },
	{ "idBounds", "", sizeof(idBounds), idBounds_typeInfo },
	{ "idBox", "", sizeof(idBox), idBox_typeInfo },
	{ "idFrustum", "", sizeof(idFrustum), idFrustum_typeInfo },
	{ "idDrawVert", "", sizeof(idDrawVert), idDrawVert_typeInfo },
	{ "idJointQuat", "", sizeof(idJointQuat), idJointQuat_typeInfo },
	{ "idJointMat", "", sizeof(idJointMat), idJointMat_typeInfo },
	{ "idWinding", "", sizeof(idWinding), idWinding_typeInfo },
	{ "idFixedWinding", "idWinding", sizeof(idFixedWinding), idFixedWinding_typeInfo },
	{ "idWinding2D", "", sizeof(idWinding2D), idWinding2D_typeInfo },
	{ "surfaceEdge_t", "", sizeof(surfaceEdge_t), surfaceEdge_t_typeInfo },
	{ "idSurface", "", sizeof(idSurface), idSurface_typeInfo },
	{ "idSurface_Patch", "idSurface", sizeof(idSurface_Patch), idSurface_Patch_typeInfo },
	{ "idSurface_Polytope", "idSurface", sizeof(idSurface_Polytope), idSurface_Polytope_typeInfo },
	{ "idSurface_SweptSpline", "idSurface", sizeof(idSurface_SweptSpline), idSurface_SweptSpline_typeInfo },
	{ "traceModelEdge_t", "", sizeof(traceModelEdge_t), traceModelEdge_t_typeInfo },
	{ "traceModelPoly_t", "", sizeof(traceModelPoly_t), traceModelPoly_t_typeInfo },
	{ "idTraceModel", "", sizeof(idTraceModel), idTraceModel_typeInfo },
	{ "idStr", "", sizeof(idStr), idStr_typeInfo },
	{ "idToken", "idStr", sizeof(idToken), idToken_typeInfo },
	{ "punctuation_t", "", sizeof(punctuation_t), punctuation_t_typeInfo },
	{ "idLexer", "", sizeof(idLexer), idLexer_typeInfo },
	{ "define_t", "", sizeof(define_t), define_t_typeInfo },
	{ "indent_t", "", sizeof(indent_t), indent_t_typeInfo },
	{ "idParser", "", sizeof(idParser), idParser_typeInfo },
	{ "idBase64", "", sizeof(idBase64), idBase64_typeInfo },
	{ "idCmdArgs", "", sizeof(idCmdArgs), idCmdArgs_typeInfo },
	{ "idHashIndex", "", sizeof(idHashIndex), idHashIndex_typeInfo },
//	{ "idHashTable< class Type >::hashnode_s", "", sizeof(idHashTable< class Type >::hashnode_s), idHashTable_class_Type__hashnode_s_typeInfo },
//	{ "idHashTable< class Type >", "", sizeof(idHashTable< class Type >), idHashTable_class_Type__typeInfo },
//	{ "idStaticList< class type , int size >", "", sizeof(idStaticList< class type , int size >), idStaticList_class_type_int_size__typeInfo },
//	{ "idLinkList< class type >", "", sizeof(idLinkList< class type >), idLinkList_class_type__typeInfo },
//	{ "idHierarchy< class type >", "", sizeof(idHierarchy< class type >), idHierarchy_class_type__typeInfo },
//	{ "idQueueTemplate< class type , int nextOffset >", "", sizeof(idQueueTemplate< class type , int nextOffset >), idQueueTemplate_class_type_int_nextOffset__typeInfo },
//	{ "idStackTemplate< class type , int nextOffset >", "", sizeof(idStackTemplate< class type , int nextOffset >), idStackTemplate_class_type_int_nextOffset__typeInfo },
	{ "idPoolStr", "idStr", sizeof(idPoolStr), idPoolStr_typeInfo },
	{ "idStrPool", "", sizeof(idStrPool), idStrPool_typeInfo },
//	{ "idVectorSet< class type , int dimension >", "idList< type >", sizeof(idVectorSet< class type , int dimension >), idVectorSet_class_type_int_dimension__typeInfo },
//	{ "idVectorSubset< class type , int dimension >", "", sizeof(idVectorSubset< class type , int dimension >), idVectorSubset_class_type_int_dimension__typeInfo },
	{ "idPlaneSet", "idList< idPlane >", sizeof(idPlaneSet), idPlaneSet_typeInfo },
	{ "idKeyValue", "", sizeof(idKeyValue), idKeyValue_typeInfo },
	{ "idDict", "", sizeof(idDict), idDict_typeInfo },
	{ "idLangKeyValue", "", sizeof(idLangKeyValue), idLangKeyValue_typeInfo },
	{ "idLangDict", "", sizeof(idLangDict), idLangDict_typeInfo },
	{ "idBitMsg", "", sizeof(idBitMsg), idBitMsg_typeInfo },
	{ "idBitMsgDelta", "", sizeof(idBitMsgDelta), idBitMsgDelta_typeInfo },
	{ "idMapPrimitive", "", sizeof(idMapPrimitive), idMapPrimitive_typeInfo },
	{ "idMapBrushSide", "", sizeof(idMapBrushSide), idMapBrushSide_typeInfo },
	{ "idMapBrush", "idMapPrimitive", sizeof(idMapBrush), idMapBrush_typeInfo },
	{ "idMapPatch", "idSurface_Patch", sizeof(idMapPatch), idMapPatch_typeInfo },
	{ "idMapEntity", "", sizeof(idMapEntity), idMapEntity_typeInfo },
	{ "idMapFile", "", sizeof(idMapFile), idMapFile_typeInfo },
	{ "idTimer", "", sizeof(idTimer), idTimer_typeInfo },
	{ "idTimerReport", "", sizeof(idTimerReport), idTimerReport_typeInfo },
	{ "idCmdSystem", "", sizeof(idCmdSystem), idCmdSystem_typeInfo },
	{ "idCVar", "", sizeof(idCVar), idCVar_typeInfo },
	{ "idCVarSystem", "", sizeof(idCVarSystem), idCVarSystem_typeInfo },
	{ "MemInfo_t", "", sizeof(MemInfo_t), MemInfo_t_typeInfo },
	{ "idCommon", "", sizeof(idCommon), idCommon_typeInfo },
	{ "idFile", "", sizeof(idFile), idFile_typeInfo },
	{ "idFile_Memory", "idFile", sizeof(idFile_Memory), idFile_Memory_typeInfo },
	{ "idFile_BitMsg", "idFile", sizeof(idFile_BitMsg), idFile_BitMsg_typeInfo },
	{ "idFile_Permanent", "idFile", sizeof(idFile_Permanent), idFile_Permanent_typeInfo },
	{ "idFile_InZip", "idFile", sizeof(idFile_InZip), idFile_InZip_typeInfo },
	{ "urlDownload_t", "", sizeof(urlDownload_t), urlDownload_t_typeInfo },
	{ "fileDownload_t", "", sizeof(fileDownload_t), fileDownload_t_typeInfo },
	{ "backgroundDownload_t", "", sizeof(backgroundDownload_t), backgroundDownload_t_typeInfo },
	{ "idFileList", "", sizeof(idFileList), idFileList_typeInfo },
	{ "idModList", "", sizeof(idModList), idModList_typeInfo },
	{ "idFileSystem", "", sizeof(idFileSystem), idFileSystem_typeInfo },
	{ "usercmd_t", "", sizeof(usercmd_t), usercmd_t_typeInfo },
	{ "idUsercmdGen", "", sizeof(idUsercmdGen), idUsercmdGen_typeInfo },
	{ "idDeclBase", "", sizeof(idDeclBase), idDeclBase_typeInfo },
	{ "idDecl", "", sizeof(idDecl), idDecl_typeInfo },
	{ "idDeclManager", "", sizeof(idDeclManager), idDeclManager_typeInfo },
	{ "idDeclTable", "idDecl", sizeof(idDeclTable), idDeclTable_typeInfo },
	{ "skinMapping_t", "", sizeof(skinMapping_t), skinMapping_t_typeInfo },
	{ "idDeclSkin", "idDecl", sizeof(idDeclSkin), idDeclSkin_typeInfo },
	{ "idDeclEntityDef", "idDecl", sizeof(idDeclEntityDef), idDeclEntityDef_typeInfo },
	{ "idFXSingleAction", "", sizeof(idFXSingleAction), idFXSingleAction_typeInfo },
	{ "idDeclFX", "idDecl", sizeof(idDeclFX), idDeclFX_typeInfo },
	{ "idParticleParm", "", sizeof(idParticleParm), idParticleParm_typeInfo },
	{ "particleGen_t", "", sizeof(particleGen_t), particleGen_t_typeInfo },
	{ "idParticleStage", "", sizeof(idParticleStage), idParticleStage_typeInfo },
	{ "idDeclParticle", "idDecl", sizeof(idDeclParticle), idDeclParticle_typeInfo },
	{ "idAFVector", "", sizeof(idAFVector), idAFVector_typeInfo },
	{ "idDeclAF_Body", "", sizeof(idDeclAF_Body), idDeclAF_Body_typeInfo },
	{ "idDeclAF_Constraint", "", sizeof(idDeclAF_Constraint), idDeclAF_Constraint_typeInfo },
	{ "idDeclAF", "idDecl", sizeof(idDeclAF), idDeclAF_typeInfo },
	{ "idDeclEmail", "idDecl", sizeof(idDeclEmail), idDeclEmail_typeInfo },
	{ "idDeclVideo", "idDecl", sizeof(idDeclVideo), idDeclVideo_typeInfo },
	{ "idDeclAudio", "idDecl", sizeof(idDeclAudio), idDeclAudio_typeInfo },
	{ "idDeclPDA", "idDecl", sizeof(idDeclPDA), idDeclPDA_typeInfo },
	{ "cinData_t", "", sizeof(cinData_t), cinData_t_typeInfo },
	{ "idCinematic", "", sizeof(idCinematic), idCinematic_typeInfo },
	{ "idSndWindow", "idCinematic", sizeof(idSndWindow), idSndWindow_typeInfo },
	{ "decalInfo_t", "", sizeof(decalInfo_t), decalInfo_t_typeInfo },
	{ "expOp_t", "", sizeof(expOp_t), expOp_t_typeInfo },
	{ "colorStage_t", "", sizeof(colorStage_t), colorStage_t_typeInfo },
	{ "textureStage_t", "", sizeof(textureStage_t), textureStage_t_typeInfo },
	{ "newShaderStage_t", "", sizeof(newShaderStage_t), newShaderStage_t_typeInfo },
	{ "shaderStage_t", "", sizeof(shaderStage_t), shaderStage_t_typeInfo },
	{ "idMaterial", "idDecl", sizeof(idMaterial), idMaterial_typeInfo },
	{ "silEdge_t", "", sizeof(silEdge_t), silEdge_t_typeInfo },
	{ "dominantTri_t", "", sizeof(dominantTri_t), dominantTri_t_typeInfo },
	{ "lightingCache_t", "", sizeof(lightingCache_t), lightingCache_t_typeInfo },
	{ "shadowCache_t", "", sizeof(shadowCache_t), shadowCache_t_typeInfo },
	{ "srfTriangles_t", "", sizeof(srfTriangles_t), srfTriangles_t_typeInfo },
	{ "modelSurface_t", "", sizeof(modelSurface_t), modelSurface_t_typeInfo },
	{ "idMD5Joint", "", sizeof(idMD5Joint), idMD5Joint_typeInfo },
	{ "idRenderModel", "", sizeof(idRenderModel), idRenderModel_typeInfo },
	{ "idRenderModelManager", "", sizeof(idRenderModelManager), idRenderModelManager_typeInfo },
	{ "glconfig_t", "", sizeof(glconfig_t), glconfig_t_typeInfo },
	{ "glyphInfo_t", "", sizeof(glyphInfo_t), glyphInfo_t_typeInfo },
	{ "fontInfo_t", "", sizeof(fontInfo_t), fontInfo_t_typeInfo },
	{ "fontInfoEx_t", "", sizeof(fontInfoEx_t), fontInfoEx_t_typeInfo },
	{ "idRenderSystem", "", sizeof(idRenderSystem), idRenderSystem_typeInfo },
	{ "renderEntity_t", "", sizeof(renderEntity_t), renderEntity_t_typeInfo },
	{ "renderLight_t", "", sizeof(renderLight_t), renderLight_t_typeInfo },
	{ "renderView_t", "", sizeof(renderView_t), renderView_t_typeInfo },
	{ "exitPortal_t", "", sizeof(exitPortal_t), exitPortal_t_typeInfo },
	{ "guiPoint_t", "", sizeof(guiPoint_t), guiPoint_t_typeInfo },
	{ "modelTrace_t", "", sizeof(modelTrace_t), modelTrace_t_typeInfo },
	{ "idRenderWorld", "", sizeof(idRenderWorld), idRenderWorld_typeInfo },
	{ "soundShaderParms_t", "", sizeof(soundShaderParms_t), soundShaderParms_t_typeInfo },
	{ "idSoundShader", "idDecl", sizeof(idSoundShader), idSoundShader_typeInfo },
	{ "idSoundEmitter", "", sizeof(idSoundEmitter), idSoundEmitter_typeInfo },
	{ "idSoundWorld", "", sizeof(idSoundWorld), idSoundWorld_typeInfo },
	{ "soundDecoderInfo_t", "", sizeof(soundDecoderInfo_t), soundDecoderInfo_t_typeInfo },
	{ "idSoundSystem", "", sizeof(idSoundSystem), idSoundSystem_typeInfo },
	{ "idNetworkSystem", "", sizeof(idNetworkSystem), idNetworkSystem_typeInfo },
	{ "idListGUI", "", sizeof(idListGUI), idListGUI_typeInfo },
	{ "idUserInterface", "", sizeof(idUserInterface), idUserInterface_typeInfo },
	{ "idUserInterfaceManager", "", sizeof(idUserInterfaceManager), idUserInterfaceManager_typeInfo },
	{ "contactInfo_t", "", sizeof(contactInfo_t), contactInfo_t_typeInfo },
	{ "trace_t", "", sizeof(trace_t), trace_t_typeInfo },
	{ "idCollisionModelManager", "", sizeof(idCollisionModelManager), idCollisionModelManager_typeInfo },
	{ "idReachability", "", sizeof(idReachability), idReachability_typeInfo },
	{ "idReachability_Walk", "idReachability", sizeof(idReachability_Walk), idReachability_Walk_typeInfo },
	{ "idReachability_BarrierJump", "idReachability", sizeof(idReachability_BarrierJump), idReachability_BarrierJump_typeInfo },
	{ "idReachability_WaterJump", "idReachability", sizeof(idReachability_WaterJump), idReachability_WaterJump_typeInfo },
	{ "idReachability_WalkOffLedge", "idReachability", sizeof(idReachability_WalkOffLedge), idReachability_WalkOffLedge_typeInfo },
	{ "idReachability_Swim", "idReachability", sizeof(idReachability_Swim), idReachability_Swim_typeInfo },
	{ "idReachability_Fly", "idReachability", sizeof(idReachability_Fly), idReachability_Fly_typeInfo },
	{ "idReachability_Special", "idReachability", sizeof(idReachability_Special), idReachability_Special_typeInfo },
	{ "aasEdge_t", "", sizeof(aasEdge_t), aasEdge_t_typeInfo },
	{ "aasFace_t", "", sizeof(aasFace_t), aasFace_t_typeInfo },
	{ "aasArea_t", "", sizeof(aasArea_t), aasArea_t_typeInfo },
	{ "aasNode_t", "", sizeof(aasNode_t), aasNode_t_typeInfo },
	{ "aasPortal_t", "", sizeof(aasPortal_t), aasPortal_t_typeInfo },
	{ "aasCluster_t", "", sizeof(aasCluster_t), aasCluster_t_typeInfo },
	{ "aasTrace_t", "", sizeof(aasTrace_t), aasTrace_t_typeInfo },
	{ "idAASSettings", "", sizeof(idAASSettings), idAASSettings_typeInfo },
	{ "idAASFile", "", sizeof(idAASFile), idAASFile_typeInfo },
	{ "idAASFileManager", "", sizeof(idAASFileManager), idAASFileManager_typeInfo },
	{ "gameReturn_t", "", sizeof(gameReturn_t), gameReturn_t_typeInfo },
	{ "idGame", "", sizeof(idGame), idGame_typeInfo },
	{ "refSound_t", "", sizeof(refSound_t), refSound_t_typeInfo },
	{ "idGameEdit", "", sizeof(idGameEdit), idGameEdit_typeInfo },
	{ "gameImport_t", "", sizeof(gameImport_t), gameImport_t_typeInfo },
	{ "gameExport_t", "", sizeof(gameExport_t), gameExport_t_typeInfo },
	{ "idEventDef", "", sizeof(idEventDef), idEventDef_typeInfo },
	{ "idEvent", "", sizeof(idEvent), idEvent_typeInfo },
	{ "idEventArg", "", sizeof(idEventArg), idEventArg_typeInfo },
	{ "idAllocError", "idException", sizeof(idAllocError), idAllocError_typeInfo },
	{ "idClass", "", sizeof(idClass), idClass_typeInfo },
	{ "idTypeInfo", "", sizeof(idTypeInfo), idTypeInfo_typeInfo },
	{ "idSaveGame", "", sizeof(idSaveGame), idSaveGame_typeInfo },
	{ "idRestoreGame", "", sizeof(idRestoreGame), idRestoreGame_typeInfo },
	{ "idDebugGraph", "", sizeof(idDebugGraph), idDebugGraph_typeInfo },
	{ "function_t", "", sizeof(function_t), function_t_typeInfo },
	{ "eval_t", "", sizeof(eval_t), eval_t_typeInfo },
	{ "idTypeDef", "", sizeof(idTypeDef), idTypeDef_typeInfo },
	{ "idScriptObject", "", sizeof(idScriptObject), idScriptObject_typeInfo },
//	{ "idScriptVariable< class type , etype_t etype , class returnType >", "", sizeof(idScriptVariable< class type , etype_t etype , class returnType >), idScriptVariable_class_type_etype_t_etype_class_returnType__typeInfo },
	{ "idCompileError", "idException", sizeof(idCompileError), idCompileError_typeInfo },
	{ "varEval_t", "", sizeof(varEval_t), varEval_t_typeInfo },
	{ "idVarDef", "", sizeof(idVarDef), idVarDef_typeInfo },
	{ "idVarDefName", "", sizeof(idVarDefName), idVarDefName_typeInfo },
	{ "statement_t", "", sizeof(statement_t), statement_t_typeInfo },
	{ "idProgram", "", sizeof(idProgram), idProgram_typeInfo },
	{ "frameBlend_t", "", sizeof(frameBlend_t), frameBlend_t_typeInfo },
	{ "jointAnimInfo_t", "", sizeof(jointAnimInfo_t), jointAnimInfo_t_typeInfo },
	{ "jointInfo_t", "", sizeof(jointInfo_t), jointInfo_t_typeInfo },
	{ "jointMod_t", "", sizeof(jointMod_t), jointMod_t_typeInfo },
	{ "frameLookup_t", "", sizeof(frameLookup_t), frameLookup_t_typeInfo },
//	{ "class_254::class_254", "", sizeof(class_254::class_254), class_254_class_254_typeInfo },
	{ "frameCommand_t", "", sizeof(frameCommand_t), frameCommand_t_typeInfo },
	{ "animFlags_t", "", sizeof(animFlags_t), animFlags_t_typeInfo },
	{ "idModelExport", "", sizeof(idModelExport), idModelExport_typeInfo },
	{ "idMD5Anim", "", sizeof(idMD5Anim), idMD5Anim_typeInfo },
	{ "idAnim", "", sizeof(idAnim), idAnim_typeInfo },
	{ "idDeclModelDef", "idDecl", sizeof(idDeclModelDef), idDeclModelDef_typeInfo },
	{ "idAnimBlend", "", sizeof(idAnimBlend), idAnimBlend_typeInfo },
	{ "idAFPoseJointMod", "", sizeof(idAFPoseJointMod), idAFPoseJointMod_typeInfo },
	{ "idAnimator", "", sizeof(idAnimator), idAnimator_typeInfo },
	{ "idAnimManager", "", sizeof(idAnimManager), idAnimManager_typeInfo },
	{ "aasPath_t", "", sizeof(aasPath_t), aasPath_t_typeInfo },
	{ "aasGoal_t", "", sizeof(aasGoal_t), aasGoal_t_typeInfo },
	{ "aasObstacle_t", "", sizeof(aasObstacle_t), aasObstacle_t_typeInfo },
	{ "idAASCallback", "", sizeof(idAASCallback), idAASCallback_typeInfo },
	{ "idAAS", "", sizeof(idAAS), idAAS_typeInfo },
	{ "idClipModel", "", sizeof(idClipModel), idClipModel_typeInfo },
	{ "idClip", "", sizeof(idClip), idClip_typeInfo },
	{ "idPush::pushed_s", "", sizeof(idPush::pushed_s), idPush_pushed_s_typeInfo },
	{ "idPush::pushedGroup_s", "", sizeof(idPush::pushedGroup_s), idPush_pushedGroup_s_typeInfo },
	{ "idPush", "", sizeof(idPush), idPush_typeInfo },
	{ "pvsHandle_t", "", sizeof(pvsHandle_t), pvsHandle_t_typeInfo },
	{ "pvsCurrent_t", "", sizeof(pvsCurrent_t), pvsCurrent_t_typeInfo },
	{ "idPVS", "", sizeof(idPVS), idPVS_typeInfo },
	{ "mpPlayerState_t", "", sizeof(mpPlayerState_t), mpPlayerState_t_typeInfo },
	{ "mpChatLine_t", "", sizeof(mpChatLine_t), mpChatLine_t_typeInfo },
	{ "idMultiplayerGame", "", sizeof(idMultiplayerGame), idMultiplayerGame_typeInfo },
	{ "entityState_t", "", sizeof(entityState_t), entityState_t_typeInfo },
	{ "snapshot_t", "", sizeof(snapshot_t), snapshot_t_typeInfo },
	{ "entityNetEvent_t", "", sizeof(entityNetEvent_t), entityNetEvent_t_typeInfo },
	{ "spawnSpot_t", "", sizeof(spawnSpot_t), spawnSpot_t_typeInfo },
	{ "idEventQueue", "", sizeof(idEventQueue), idEventQueue_typeInfo },
//	{ "idEntityPtr< class type >", "", sizeof(idEntityPtr< class type >), idEntityPtr_class_type__typeInfo },
	{ "idGameLocal", "idGame", sizeof(idGameLocal), idGameLocal_typeInfo },
	{ "idGameError", "idException", sizeof(idGameError), idGameError_typeInfo },
	{ "idForce", "idClass", sizeof(idForce), idForce_typeInfo },
	{ "idForce_Constant", "idForce", sizeof(idForce_Constant), idForce_Constant_typeInfo },
	{ "idForce_Drag", "idForce", sizeof(idForce_Drag), idForce_Drag_typeInfo },
	{ "idForce_Field", "idForce", sizeof(idForce_Field), idForce_Field_typeInfo },
	{ "idForce_Spring", "idForce", sizeof(idForce_Spring), idForce_Spring_typeInfo },
	{ "impactInfo_t", "", sizeof(impactInfo_t), impactInfo_t_typeInfo },
	{ "idPhysics", "idClass", sizeof(idPhysics), idPhysics_typeInfo },
	{ "staticPState_t", "", sizeof(staticPState_t), staticPState_t_typeInfo },
	{ "idPhysics_Static", "idPhysics", sizeof(idPhysics_Static), idPhysics_Static_typeInfo },
	{ "idPhysics_StaticMulti", "idPhysics", sizeof(idPhysics_StaticMulti), idPhysics_StaticMulti_typeInfo },
	{ "idPhysics_Base", "idPhysics", sizeof(idPhysics_Base), idPhysics_Base_typeInfo },
	{ "idPhysics_Actor", "idPhysics_Base", sizeof(idPhysics_Actor), idPhysics_Actor_typeInfo },
	{ "monsterPState_t", "", sizeof(monsterPState_t), monsterPState_t_typeInfo },
	{ "idPhysics_Monster", "idPhysics_Actor", sizeof(idPhysics_Monster), idPhysics_Monster_typeInfo },
	{ "playerPState_t", "", sizeof(playerPState_t), playerPState_t_typeInfo },
	{ "idPhysics_Player", "idPhysics_Actor", sizeof(idPhysics_Player), idPhysics_Player_typeInfo },
	{ "parametricPState_t", "", sizeof(parametricPState_t), parametricPState_t_typeInfo },
	{ "idPhysics_Parametric", "idPhysics_Base", sizeof(idPhysics_Parametric), idPhysics_Parametric_typeInfo },
	{ "rigidBodyIState_t", "", sizeof(rigidBodyIState_t), rigidBodyIState_t_typeInfo },
	{ "rigidBodyPState_t", "", sizeof(rigidBodyPState_t), rigidBodyPState_t_typeInfo },
	{ "idPhysics_RigidBody", "idPhysics_Base", sizeof(idPhysics_RigidBody), idPhysics_RigidBody_typeInfo },
	{ "idAFConstraint::constraintFlags_s", "", sizeof(idAFConstraint::constraintFlags_s), idAFConstraint_constraintFlags_s_typeInfo },
	{ "idAFConstraint", "", sizeof(idAFConstraint), idAFConstraint_typeInfo },
	{ "idAFConstraint_Fixed", "idAFConstraint", sizeof(idAFConstraint_Fixed), idAFConstraint_Fixed_typeInfo },
	{ "idAFConstraint_BallAndSocketJoint", "idAFConstraint", sizeof(idAFConstraint_BallAndSocketJoint), idAFConstraint_BallAndSocketJoint_typeInfo },
	{ "idAFConstraint_BallAndSocketJointFriction", "idAFConstraint", sizeof(idAFConstraint_BallAndSocketJointFriction), idAFConstraint_BallAndSocketJointFriction_typeInfo },
	{ "idAFConstraint_UniversalJoint", "idAFConstraint", sizeof(idAFConstraint_UniversalJoint), idAFConstraint_UniversalJoint_typeInfo },
	{ "idAFConstraint_UniversalJointFriction", "idAFConstraint", sizeof(idAFConstraint_UniversalJointFriction), idAFConstraint_UniversalJointFriction_typeInfo },
	{ "idAFConstraint_CylindricalJoint", "idAFConstraint", sizeof(idAFConstraint_CylindricalJoint), idAFConstraint_CylindricalJoint_typeInfo },
	{ "idAFConstraint_Hinge", "idAFConstraint", sizeof(idAFConstraint_Hinge), idAFConstraint_Hinge_typeInfo },
	{ "idAFConstraint_HingeFriction", "idAFConstraint", sizeof(idAFConstraint_HingeFriction), idAFConstraint_HingeFriction_typeInfo },
	{ "idAFConstraint_HingeSteering", "idAFConstraint", sizeof(idAFConstraint_HingeSteering), idAFConstraint_HingeSteering_typeInfo },
	{ "idAFConstraint_Slider", "idAFConstraint", sizeof(idAFConstraint_Slider), idAFConstraint_Slider_typeInfo },
	{ "idAFConstraint_Line", "idAFConstraint", sizeof(idAFConstraint_Line), idAFConstraint_Line_typeInfo },
	{ "idAFConstraint_Plane", "idAFConstraint", sizeof(idAFConstraint_Plane), idAFConstraint_Plane_typeInfo },
	{ "idAFConstraint_Spring", "idAFConstraint", sizeof(idAFConstraint_Spring), idAFConstraint_Spring_typeInfo },
	{ "idAFConstraint_Contact", "idAFConstraint", sizeof(idAFConstraint_Contact), idAFConstraint_Contact_typeInfo },
	{ "idAFConstraint_ContactFriction", "idAFConstraint", sizeof(idAFConstraint_ContactFriction), idAFConstraint_ContactFriction_typeInfo },
	{ "idAFConstraint_ConeLimit", "idAFConstraint", sizeof(idAFConstraint_ConeLimit), idAFConstraint_ConeLimit_typeInfo },
	{ "idAFConstraint_PyramidLimit", "idAFConstraint", sizeof(idAFConstraint_PyramidLimit), idAFConstraint_PyramidLimit_typeInfo },
	{ "idAFConstraint_Suspension", "idAFConstraint", sizeof(idAFConstraint_Suspension), idAFConstraint_Suspension_typeInfo },
	{ "AFBodyPState_t", "", sizeof(AFBodyPState_t), AFBodyPState_t_typeInfo },
	{ "idAFBody::bodyFlags_s", "", sizeof(idAFBody::bodyFlags_s), idAFBody_bodyFlags_s_typeInfo },
	{ "idAFBody", "", sizeof(idAFBody), idAFBody_typeInfo },
	{ "idAFTree", "", sizeof(idAFTree), idAFTree_typeInfo },
	{ "AFPState_t", "", sizeof(AFPState_t), AFPState_t_typeInfo },
	{ "AFCollision_t", "", sizeof(AFCollision_t), AFCollision_t_typeInfo },
	{ "idPhysics_AF", "idPhysics_Base", sizeof(idPhysics_AF), idPhysics_AF_typeInfo },
	{ "singleSmoke_t", "", sizeof(singleSmoke_t), singleSmoke_t_typeInfo },
	{ "activeSmokeStage_t", "", sizeof(activeSmokeStage_t), activeSmokeStage_t_typeInfo },
	{ "idSmokeParticles", "", sizeof(idSmokeParticles), idSmokeParticles_typeInfo },
	{ "signal_t", "", sizeof(signal_t), signal_t_typeInfo },
	{ "signalList_t", "", sizeof(signalList_t), signalList_t_typeInfo },
	{ "idEntity::entityFlags_s", "", sizeof(idEntity::entityFlags_s), idEntity_entityFlags_s_typeInfo },
	{ "idEntity", "idClass", sizeof(idEntity), idEntity_typeInfo },
	{ "damageEffect_t", "", sizeof(damageEffect_t), damageEffect_t_typeInfo },
	{ "idAnimatedEntity", "idEntity", sizeof(idAnimatedEntity), idAnimatedEntity_typeInfo },
	{ "idCursor3D", "idEntity", sizeof(idCursor3D), idCursor3D_typeInfo },
	{ "idDragEntity", "", sizeof(idDragEntity), idDragEntity_typeInfo },
	{ "selectedTypeInfo_t", "", sizeof(selectedTypeInfo_t), selectedTypeInfo_t_typeInfo },
	{ "idEditEntities", "", sizeof(idEditEntities), idEditEntities_typeInfo },
	{ "jointConversion_t", "", sizeof(jointConversion_t), jointConversion_t_typeInfo },
	{ "afTouch_t", "", sizeof(afTouch_t), afTouch_t_typeInfo },
	{ "idAF", "", sizeof(idAF), idAF_typeInfo },
	{ "idIK", "", sizeof(idIK), idIK_typeInfo },
	{ "idIK_Walk", "idIK", sizeof(idIK_Walk), idIK_Walk_typeInfo },
	{ "idIK_Reach", "idIK", sizeof(idIK_Reach), idIK_Reach_typeInfo },
	{ "idMultiModelAF", "idEntity", sizeof(idMultiModelAF), idMultiModelAF_typeInfo },
	{ "idChain", "idMultiModelAF", sizeof(idChain), idChain_typeInfo },
	{ "idAFAttachment", "idAnimatedEntity", sizeof(idAFAttachment), idAFAttachment_typeInfo },
	{ "idAFEntity_Base", "idAnimatedEntity", sizeof(idAFEntity_Base), idAFEntity_Base_typeInfo },
	{ "idAFEntity_Gibbable", "idAFEntity_Base", sizeof(idAFEntity_Gibbable), idAFEntity_Gibbable_typeInfo },
	{ "idAFEntity_Generic", "idAFEntity_Gibbable", sizeof(idAFEntity_Generic), idAFEntity_Generic_typeInfo },
	{ "idAFEntity_WithAttachedHead", "idAFEntity_Gibbable", sizeof(idAFEntity_WithAttachedHead), idAFEntity_WithAttachedHead_typeInfo },
	{ "idAFEntity_Vehicle", "idAFEntity_Base", sizeof(idAFEntity_Vehicle), idAFEntity_Vehicle_typeInfo },
	{ "idAFEntity_VehicleSimple", "idAFEntity_Vehicle", sizeof(idAFEntity_VehicleSimple), idAFEntity_VehicleSimple_typeInfo },
	{ "idAFEntity_VehicleFourWheels", "idAFEntity_Vehicle", sizeof(idAFEntity_VehicleFourWheels), idAFEntity_VehicleFourWheels_typeInfo },
	{ "idAFEntity_VehicleSixWheels", "idAFEntity_Vehicle", sizeof(idAFEntity_VehicleSixWheels), idAFEntity_VehicleSixWheels_typeInfo },
	{ "idAFEntity_SteamPipe", "idAFEntity_Base", sizeof(idAFEntity_SteamPipe), idAFEntity_SteamPipe_typeInfo },
	{ "idAFEntity_ClawFourFingers", "idAFEntity_Base", sizeof(idAFEntity_ClawFourFingers), idAFEntity_ClawFourFingers_typeInfo },
	{ "idSpawnableEntity", "idEntity", sizeof(idSpawnableEntity), idSpawnableEntity_typeInfo },
	{ "idPlayerStart", "idEntity", sizeof(idPlayerStart), idPlayerStart_typeInfo },
	{ "idActivator", "idEntity", sizeof(idActivator), idActivator_typeInfo },
	{ "idPathCorner", "idEntity", sizeof(idPathCorner), idPathCorner_typeInfo },
	{ "idDamagable", "idEntity", sizeof(idDamagable), idDamagable_typeInfo },
	{ "idExplodable", "idEntity", sizeof(idExplodable), idExplodable_typeInfo },
	{ "idSpring", "idEntity", sizeof(idSpring), idSpring_typeInfo },
	{ "idForceField", "idEntity", sizeof(idForceField), idForceField_typeInfo },
	{ "idAnimated", "idAFEntity_Gibbable", sizeof(idAnimated), idAnimated_typeInfo },
	{ "idStaticEntity", "idEntity", sizeof(idStaticEntity), idStaticEntity_typeInfo },
	{ "idFuncEmitter", "idStaticEntity", sizeof(idFuncEmitter), idFuncEmitter_typeInfo },
	{ "idFuncSmoke", "idEntity", sizeof(idFuncSmoke), idFuncSmoke_typeInfo },
	{ "idFuncSplat", "idFuncEmitter", sizeof(idFuncSplat), idFuncSplat_typeInfo },
	{ "idTextEntity", "idEntity", sizeof(idTextEntity), idTextEntity_typeInfo },
	{ "idLocationEntity", "idEntity", sizeof(idLocationEntity), idLocationEntity_typeInfo },
	{ "idLocationSeparatorEntity", "idEntity", sizeof(idLocationSeparatorEntity), idLocationSeparatorEntity_typeInfo },
	{ "idVacuumSeparatorEntity", "idEntity", sizeof(idVacuumSeparatorEntity), idVacuumSeparatorEntity_typeInfo },
	{ "idVacuumEntity", "idEntity", sizeof(idVacuumEntity), idVacuumEntity_typeInfo },
	{ "idBeam", "idEntity", sizeof(idBeam), idBeam_typeInfo },
	{ "idLiquid", "idEntity", sizeof(idLiquid), idLiquid_typeInfo },
	{ "idShaking", "idEntity", sizeof(idShaking), idShaking_typeInfo },
	{ "idEarthQuake", "idEntity", sizeof(idEarthQuake), idEarthQuake_typeInfo },
	{ "idFuncPortal", "idEntity", sizeof(idFuncPortal), idFuncPortal_typeInfo },
	{ "idFuncAASPortal", "idEntity", sizeof(idFuncAASPortal), idFuncAASPortal_typeInfo },
	{ "idFuncAASObstacle", "idEntity", sizeof(idFuncAASObstacle), idFuncAASObstacle_typeInfo },
	{ "idFuncRadioChatter", "idEntity", sizeof(idFuncRadioChatter), idFuncRadioChatter_typeInfo },
	{ "idPhantomObjects", "idEntity", sizeof(idPhantomObjects), idPhantomObjects_typeInfo },
	{ "idAnimState", "", sizeof(idAnimState), idAnimState_typeInfo },
	{ "idAttachInfo", "", sizeof(idAttachInfo), idAttachInfo_typeInfo },
	{ "copyJoints_t", "", sizeof(copyJoints_t), copyJoints_t_typeInfo },
	{ "idActor", "idAFEntity_Gibbable", sizeof(idActor), idActor_typeInfo },
	{ "idProjectile::projectileFlags_s", "", sizeof(idProjectile::projectileFlags_s), idProjectile_projectileFlags_s_typeInfo },
	{ "idProjectile", "idEntity", sizeof(idProjectile), idProjectile_typeInfo },
	{ "idGuidedProjectile", "idProjectile", sizeof(idGuidedProjectile), idGuidedProjectile_typeInfo },
	{ "idSoulCubeMissile", "idGuidedProjectile", sizeof(idSoulCubeMissile), idSoulCubeMissile_typeInfo },
	{ "beamTarget_t", "", sizeof(beamTarget_t), beamTarget_t_typeInfo },
	{ "idBFGProjectile", "idProjectile", sizeof(idBFGProjectile), idBFGProjectile_typeInfo },
	{ "idDebris", "idEntity", sizeof(idDebris), idDebris_typeInfo },
	{ "idWeapon", "idAnimatedEntity", sizeof(idWeapon), idWeapon_typeInfo },
	{ "idLight", "idEntity", sizeof(idLight), idLight_typeInfo },
	{ "idWorldspawn", "idEntity", sizeof(idWorldspawn), idWorldspawn_typeInfo },
	{ "idItem", "idEntity", sizeof(idItem), idItem_typeInfo },
	{ "idItemPowerup", "idItem", sizeof(idItemPowerup), idItemPowerup_typeInfo },
	{ "idObjective", "idItem", sizeof(idObjective), idObjective_typeInfo },
	{ "idVideoCDItem", "idItem", sizeof(idVideoCDItem), idVideoCDItem_typeInfo },
	{ "idPDAItem", "idItem", sizeof(idPDAItem), idPDAItem_typeInfo },
	{ "idMoveableItem", "idItem", sizeof(idMoveableItem), idMoveableItem_typeInfo },
	{ "idMoveablePDAItem", "idMoveableItem", sizeof(idMoveablePDAItem), idMoveablePDAItem_typeInfo },
	{ "idItemRemover", "idEntity", sizeof(idItemRemover), idItemRemover_typeInfo },
	{ "idObjectiveComplete", "idItemRemover", sizeof(idObjectiveComplete), idObjectiveComplete_typeInfo },
	{ "screenBlob_t", "", sizeof(screenBlob_t), screenBlob_t_typeInfo },
	{ "idPlayerView", "", sizeof(idPlayerView), idPlayerView_typeInfo },
	{ "idPlayerIcon", "", sizeof(idPlayerIcon), idPlayerIcon_typeInfo },
	{ "idItemInfo", "", sizeof(idItemInfo), idItemInfo_typeInfo },
	{ "idObjectiveInfo", "", sizeof(idObjectiveInfo), idObjectiveInfo_typeInfo },
	{ "idLevelTriggerInfo", "", sizeof(idLevelTriggerInfo), idLevelTriggerInfo_typeInfo },
	{ "idInventory", "", sizeof(idInventory), idInventory_typeInfo },
	{ "loggedAccel_t", "", sizeof(loggedAccel_t), loggedAccel_t_typeInfo },
	{ "aasLocation_t", "", sizeof(aasLocation_t), aasLocation_t_typeInfo },
	{ "idPlayer", "idActor", sizeof(idPlayer), idPlayer_typeInfo },
	{ "idMover::moveState_t", "", sizeof(idMover::moveState_t), idMover_moveState_t_typeInfo },
	{ "idMover::rotationState_t", "", sizeof(idMover::rotationState_t), idMover_rotationState_t_typeInfo },
	{ "idMover", "idEntity", sizeof(idMover), idMover_typeInfo },
	{ "idSplinePath", "idEntity", sizeof(idSplinePath), idSplinePath_typeInfo },
	{ "floorInfo_s", "", sizeof(floorInfo_s), floorInfo_s_typeInfo },
	{ "idElevator", "idMover", sizeof(idElevator), idElevator_typeInfo },
	{ "idMover_Binary", "idEntity", sizeof(idMover_Binary), idMover_Binary_typeInfo },
	{ "idDoor", "idMover_Binary", sizeof(idDoor), idDoor_typeInfo },
	{ "idPlat", "idMover_Binary", sizeof(idPlat), idPlat_typeInfo },
	{ "idMover_Periodic", "idEntity", sizeof(idMover_Periodic), idMover_Periodic_typeInfo },
	{ "idRotater", "idMover_Periodic", sizeof(idRotater), idRotater_typeInfo },
	{ "idBobber", "idMover_Periodic", sizeof(idBobber), idBobber_typeInfo },
	{ "idPendulum", "idMover_Periodic", sizeof(idPendulum), idPendulum_typeInfo },
	{ "idRiser", "idMover_Periodic", sizeof(idRiser), idRiser_typeInfo },
	{ "idCamera", "idEntity", sizeof(idCamera), idCamera_typeInfo },
	{ "idCameraView", "idCamera", sizeof(idCameraView), idCameraView_typeInfo },
	{ "cameraFrame_t", "", sizeof(cameraFrame_t), cameraFrame_t_typeInfo },
	{ "idCameraAnim", "idCamera", sizeof(idCameraAnim), idCameraAnim_typeInfo },
	{ "idMoveable", "idEntity", sizeof(idMoveable), idMoveable_typeInfo },
	{ "idBarrel", "idMoveable", sizeof(idBarrel), idBarrel_typeInfo },
	{ "idExplodingBarrel", "idBarrel", sizeof(idExplodingBarrel), idExplodingBarrel_typeInfo },
	{ "idTarget", "idEntity", sizeof(idTarget), idTarget_typeInfo },
	{ "idTarget_Remove", "idTarget", sizeof(idTarget_Remove), idTarget_Remove_typeInfo },
	{ "idTarget_Show", "idTarget", sizeof(idTarget_Show), idTarget_Show_typeInfo },
	{ "idTarget_Damage", "idTarget", sizeof(idTarget_Damage), idTarget_Damage_typeInfo },
	{ "idTarget_SessionCommand", "idTarget", sizeof(idTarget_SessionCommand), idTarget_SessionCommand_typeInfo },
	{ "idTarget_EndLevel", "idTarget", sizeof(idTarget_EndLevel), idTarget_EndLevel_typeInfo },
	{ "idTarget_WaitForButton", "idTarget", sizeof(idTarget_WaitForButton), idTarget_WaitForButton_typeInfo },
	{ "idTarget_SetGlobalShaderTime", "idTarget", sizeof(idTarget_SetGlobalShaderTime), idTarget_SetGlobalShaderTime_typeInfo },
	{ "idTarget_SetShaderParm", "idTarget", sizeof(idTarget_SetShaderParm), idTarget_SetShaderParm_typeInfo },
	{ "idTarget_SetShaderTime", "idTarget", sizeof(idTarget_SetShaderTime), idTarget_SetShaderTime_typeInfo },
	{ "idTarget_FadeEntity", "idTarget", sizeof(idTarget_FadeEntity), idTarget_FadeEntity_typeInfo },
	{ "idTarget_LightFadeIn", "idTarget", sizeof(idTarget_LightFadeIn), idTarget_LightFadeIn_typeInfo },
	{ "idTarget_LightFadeOut", "idTarget", sizeof(idTarget_LightFadeOut), idTarget_LightFadeOut_typeInfo },
	{ "idTarget_Give", "idTarget", sizeof(idTarget_Give), idTarget_Give_typeInfo },
	{ "idTarget_GiveEmail", "idTarget", sizeof(idTarget_GiveEmail), idTarget_GiveEmail_typeInfo },
	{ "idTarget_SetModel", "idTarget", sizeof(idTarget_SetModel), idTarget_SetModel_typeInfo },
	{ "idTarget_SetInfluence", "idTarget", sizeof(idTarget_SetInfluence), idTarget_SetInfluence_typeInfo },
	{ "idTarget_SetKeyVal", "idTarget", sizeof(idTarget_SetKeyVal), idTarget_SetKeyVal_typeInfo },
	{ "idTarget_SetFov", "idTarget", sizeof(idTarget_SetFov), idTarget_SetFov_typeInfo },
	{ "idTarget_SetPrimaryObjective", "idTarget", sizeof(idTarget_SetPrimaryObjective), idTarget_SetPrimaryObjective_typeInfo },
	{ "idTarget_LockDoor", "idTarget", sizeof(idTarget_LockDoor), idTarget_LockDoor_typeInfo },
	{ "idTarget_CallObjectFunction", "idTarget", sizeof(idTarget_CallObjectFunction), idTarget_CallObjectFunction_typeInfo },
	{ "idTarget_EnableLevelWeapons", "idTarget", sizeof(idTarget_EnableLevelWeapons), idTarget_EnableLevelWeapons_typeInfo },
	{ "idTarget_Tip", "idTarget", sizeof(idTarget_Tip), idTarget_Tip_typeInfo },
	{ "idTarget_GiveSecurity", "idTarget", sizeof(idTarget_GiveSecurity), idTarget_GiveSecurity_typeInfo },
	{ "idTarget_RemoveWeapons", "idTarget", sizeof(idTarget_RemoveWeapons), idTarget_RemoveWeapons_typeInfo },
	{ "idTarget_LevelTrigger", "idTarget", sizeof(idTarget_LevelTrigger), idTarget_LevelTrigger_typeInfo },
	{ "idTarget_EnableStamina", "idTarget", sizeof(idTarget_EnableStamina), idTarget_EnableStamina_typeInfo },
	{ "idTarget_FadeSoundClass", "idTarget", sizeof(idTarget_FadeSoundClass), idTarget_FadeSoundClass_typeInfo },
	{ "idTrigger", "idEntity", sizeof(idTrigger), idTrigger_typeInfo },
	{ "idTrigger_Multi", "idTrigger", sizeof(idTrigger_Multi), idTrigger_Multi_typeInfo },
	{ "idTrigger_EntityName", "idTrigger", sizeof(idTrigger_EntityName), idTrigger_EntityName_typeInfo },
	{ "idTrigger_Timer", "idTrigger", sizeof(idTrigger_Timer), idTrigger_Timer_typeInfo },
	{ "idTrigger_Count", "idTrigger", sizeof(idTrigger_Count), idTrigger_Count_typeInfo },
	{ "idTrigger_Hurt", "idTrigger", sizeof(idTrigger_Hurt), idTrigger_Hurt_typeInfo },
	{ "idTrigger_Fade", "idTrigger", sizeof(idTrigger_Fade), idTrigger_Fade_typeInfo },
	{ "idTrigger_Touch", "idTrigger", sizeof(idTrigger_Touch), idTrigger_Touch_typeInfo },
	{ "idSound", "idEntity", sizeof(idSound), idSound_typeInfo },
	{ "idFXLocalAction", "", sizeof(idFXLocalAction), idFXLocalAction_typeInfo },
	{ "idEntityFx", "idEntity", sizeof(idEntityFx), idEntityFx_typeInfo },
	{ "idTeleporter", "idEntityFx", sizeof(idTeleporter), idTeleporter_typeInfo },
	{ "idSecurityCamera", "idEntity", sizeof(idSecurityCamera), idSecurityCamera_typeInfo },
	{ "shard_t", "", sizeof(shard_t), shard_t_typeInfo },
	{ "idBrittleFracture", "idEntity", sizeof(idBrittleFracture), idBrittleFracture_typeInfo },
	{ "obstaclePath_t", "", sizeof(obstaclePath_t), obstaclePath_t_typeInfo },
	{ "predictedPath_t", "", sizeof(predictedPath_t), predictedPath_t_typeInfo },
	{ "particleEmitter_t", "", sizeof(particleEmitter_t), particleEmitter_t_typeInfo },
	{ "idMoveState", "", sizeof(idMoveState), idMoveState_typeInfo },
	{ "idAASFindCover", "idAASCallback", sizeof(idAASFindCover), idAASFindCover_typeInfo },
	{ "idAASFindAreaOutOfRange", "idAASCallback", sizeof(idAASFindAreaOutOfRange), idAASFindAreaOutOfRange_typeInfo },
	{ "idAASFindAttackPosition", "idAASCallback", sizeof(idAASFindAttackPosition), idAASFindAttackPosition_typeInfo },
	{ "idAI", "idActor", sizeof(idAI), idAI_typeInfo },
	{ "idCombatNode", "idEntity", sizeof(idCombatNode), idCombatNode_typeInfo },
	{ "idTestModel", "idAnimatedEntity", sizeof(idTestModel), idTestModel_typeInfo },
	{ "opcode_t", "", sizeof(opcode_t), opcode_t_typeInfo },
	{ "idCompiler", "", sizeof(idCompiler), idCompiler_typeInfo },
	{ "prstack_t", "", sizeof(prstack_t), prstack_t_typeInfo },
	{ "idInterpreter", "", sizeof(idInterpreter), idInterpreter_typeInfo },
	{ "idThread", "idClass", sizeof(idThread), idThread_typeInfo },
	{ NULL, NULL, 0, NULL }
};

#endif /* !__GAMETYPEINFO_H__ */
