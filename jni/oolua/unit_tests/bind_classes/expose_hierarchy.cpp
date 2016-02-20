#include "expose_hierarchy.h"


#if OOLUA_TEST_VA_ARGS == 1
	EXPORT_OOLUA_FUNCTIONS_NON_CONST(Abstract1,func1,virtualVoidParam3Int)
	EXPORT_OOLUA_FUNCTIONS_CONST(Abstract1)
#else
	EXPORT_OOLUA_FUNCTIONS_2_NON_CONST(Abstract1,func1,virtualVoidParam3Int)
	EXPORT_OOLUA_FUNCTIONS_0_CONST(Abstract1)
#endif



#if OOLUA_TEST_VA_ARGS == 1
	EXPORT_OOLUA_FUNCTIONS_NON_CONST(Abstract2,func2_1)
	EXPORT_OOLUA_FUNCTIONS_CONST(Abstract2,constVirtualFunction)
#else
	EXPORT_OOLUA_FUNCTIONS_1_NON_CONST(Abstract2,func2_1)
	EXPORT_OOLUA_FUNCTIONS_1_CONST(Abstract2,constVirtualFunction)

#endif


#if OOLUA_TEST_VA_ARGS == 1
	EXPORT_OOLUA_FUNCTIONS_NON_CONST(Abstract3,func3_1)
	EXPORT_OOLUA_FUNCTIONS_CONST(Abstract3)
#else
	EXPORT_OOLUA_FUNCTIONS_1_NON_CONST(Abstract3,func3_1)
	EXPORT_OOLUA_FUNCTIONS_0_CONST(Abstract3)
#endif



#if OOLUA_TEST_VA_ARGS == 1
	EXPORT_OOLUA_FUNCTIONS_NON_CONST(Derived1Abstract1)
	EXPORT_OOLUA_FUNCTIONS_CONST(Derived1Abstract1)
#else
	EXPORT_OOLUA_NO_FUNCTIONS(Derived1Abstract1)
#endif


EXPORT_OOLUA_NO_FUNCTIONS(TwoAbstractBases)

EXPORT_OOLUA_NO_FUNCTIONS(DerivedFromTwoAbstractBasesAndAbstract3)
