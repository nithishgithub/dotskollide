#ifndef OOLUA_VERSION_H_
#	define OOLUA_VERSION_H_

#define OOLUA_DO_STRINGISE(a)   #a
#define OOLUA_STRINGISE(a)   OOLUA_DO_STRINGISE(a)

#ifndef OOLUA_VERSION
#       define OOLUA_VERSION_MAJ 1
#       define OOLUA_VERSION_MIN 4
#       define OOLUA_VERSION_PATCH 0
#       define OOLUA_VERSION \
					OOLUA_STRINGISE(OOLUA_VERSION_MAJ) "." \
					OOLUA_STRINGISE(OOLUA_VERSION_MIN) "." \
					OOLUA_STRINGISE(OOLUA_VERSION_PATCH)
#endif

namespace OOLUA
{
	static const char version_str[] = OOLUA_VERSION;
	static const int version_number = OOLUA_VERSION_MAJ*10000+OOLUA_VERSION_MIN*1000+OOLUA_VERSION_PATCH;
}

#undef OOLUA_DO_STRINGISE
#undef OOLUA_STRINGISE
#undef OOLUA_VERSION_MAJ
#undef OOLUA_VERSION_MIN
#undef OOLUA_VERSION_PATCH
#undef OOLUA_VERSION

#endif
