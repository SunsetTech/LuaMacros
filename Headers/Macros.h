#include <lua.h>
#define M_SetField(P_ValueExpression,P_Key)\
	P_ValueExpression;\
	lua_setfield(L,-2,P_Key);

#define M_GetField(P_Key)\
	lua_getfield(L,-1,Key);

#define M_SetTable(P_KeyExpression,P_ValueExpression) \
	P_KeyExpression; \
	P_ValueExpression;\
	lua_settable(L,-3);

#define M_GetTable(P_KeyExpression) \
	P_KeyExpression; \
	lua_gettable(L,-2);

#define M_Def_Lua(P_Name) int Lua_##P_Name(lua_State* L)
#define M_Push_Function(P_Name) lua_pushcfunction(L,Lua_##P_Name)
