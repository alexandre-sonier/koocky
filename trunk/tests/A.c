#ifndef A_H_
#define A_H_
#include "A.h"
#endif
signed int M_1A_function_signed_int_1f_param_signed_int (A 	* self, signed int i)
{
	return i;
}

struct _vtable_A_ vtA  = {&vtObject, M_1A_function_signed_int_1f_param_signed_int};
struct _vtable_B_ vtB  = {&vtA};
