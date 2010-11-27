#ifndef OBJECT_KO_H_
#define OBJECT_KO_H_
#include "Object.ko.h"
#endif
typedef struct _class_A_ 
{
	void 	* vtable;
} A;
struct _vtable_A_ 
{
	struct _vtable_Object_ 	* vtableLegacy;
	signed int (*M_1A_function_signed_int_1f_param_signed_int) (A 	*, signed int);
} vtA;
typedef struct _class_B_ 
{
	A super;
	void 	* vtable;
} B;
struct _vtable_B_ 
{
	struct _vtable_A_ 	* vtableLegacy;
} vtB;
