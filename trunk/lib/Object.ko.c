#ifndef OBJECT_KO_H_
#define OBJECT_KO_H_
#include "Object.ko.h"
#endif
#ifndef _USR_INCLUDE_STRING_H_
#define _USR_INCLUDE_STRING_H_
#include "/usr/include/string.h"
#endif
void V_6Object_function_void_5clean_param_void (Object 	* self)
{
	free(self->vtable);
}

signed int V_6Object_function_signed_int_8isKindOf_param_signed_char_point (Object 	* self, const char 	* cname)
{
	if (!strcmp(((struct  _vtable_Object_	*)self->vtable)->M_6Object_function_signed_char_point_17name_of_interface_param_void(self), cname))
		return (1);
	return (0);
}

signed int V_6Object_function_signed_int_8isKindOf_param_Object_point (Object 	* self, Object 	* Obj)
{
	if (!strcmp(((struct  _vtable_Object_	*)self->vtable)->M_6Object_function_signed_char_point_17name_of_interface_param_void(self), ((struct  _vtable_Object_	*)Obj->vtable)->M_6Object_function_signed_char_point_17name_of_interface_param_void(Obj)))
		return (1);
	return (0);
}

signed int V_6Object_function_signed_int_12isInstanceOf_param_signed_char_point (Object 	* self, const char 	* cname)
{
	if (!strcmp(((struct  _vtable_Object_	*)self->vtable)->M_6Object_function_signed_char_point_17name_of_interface_param_void(self), cname))
		return (1);
	return (0);
}

signed int V_6Object_function_signed_int_12isInstanceOf_param_Object_point (Object 	* self, Object 	* Obj)
{
	if (!strcmp(((struct  _vtable_Object_	*)self->vtable)->M_6Object_function_signed_char_point_17name_of_interface_param_void(self), ((struct  _vtable_Object_	*)Obj->vtable)->M_6Object_function_signed_char_point_17name_of_interface_param_void(Obj)))
		return (1);
	return (0);
}

const char 	* M_6Object_function_signed_char_point_17name_of_interface_param_void (Object 	* self)
{
	return ("Object");
}

void M_6Object_function_void_4init_param_void (Object 	* self)
{
	self->vtable = (  void	*)&vtObject;
}

void M_6Object_function_void_6delete_param_void (Object 	* self)
{
	((struct  _vtable_Object_	*)self->vtable)->V_6Object_function_void_5clean_param_void(self);
	free(self);
}

Object 	* _6Object_function_Object_point_5alloc_param_void ()
{
	return (malloc(sizeof (  Object)));
}

Object 	* _6Object_function_Object_point_3new_param_void ()
{
	Object 	* Obj  = _6Object_function_Object_point_5alloc_param_void();
	Obj->vtable = (  void	*)&vtObject;
	((struct  _vtable_Object_	*)Obj->vtable)->M_6Object_function_void_4init_param_void(Obj);
}

struct _vtable_Object_ vtObject  = {M_6Object_function_signed_char_point_17name_of_interface_param_void, M_6Object_function_void_4init_param_void, M_6Object_function_void_6delete_param_void, V_6Object_function_void_5clean_param_void, V_6Object_function_signed_int_8isKindOf_param_signed_char_point, V_6Object_function_signed_int_8isKindOf_param_Object_point, V_6Object_function_signed_int_12isInstanceOf_param_signed_char_point, V_6Object_function_signed_int_12isInstanceOf_param_Object_point};
