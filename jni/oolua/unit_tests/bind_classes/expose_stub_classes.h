#ifndef EXPOSE_STUB_CLASSES_H_
#	define EXPOSE_STUB_CLASSES_H_

#include "oolua.h"
#include "cpp_stub_classes.h"


OOLUA_CLASS_NO_BASES(Stub1)
	OOLUA_NO_TYPEDEFS
	OOLUA_ONLY_DEFAULT_CONSTRUCTOR
OOLUA_CLASS_END


OOLUA_CLASS_NO_BASES(Stub2)
	OOLUA_NO_TYPEDEFS
	OOLUA_ONLY_DEFAULT_CONSTRUCTOR
OOLUA_CLASS_END

OOLUA_CLASS_NO_BASES(Stub3)
	OOLUA_NO_TYPEDEFS
	OOLUA_ONLY_DEFAULT_CONSTRUCTOR
OOLUA_CLASS_END


OOLUA_CLASS_NO_BASES(InvalidStub)
	OOLUA_NO_TYPEDEFS
	OOLUA_ONLY_DEFAULT_CONSTRUCTOR
OOLUA_CLASS_END



OOLUA_CLASS_NO_BASES(Return_double)
	OOLUA_NO_TYPEDEFS
	OOLUA_ONLY_DEFAULT_CONSTRUCTOR
OOLUA_CLASS_END


#endif