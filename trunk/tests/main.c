#include "Object.ko"
#include "a.h"
#include "b.h"
void bla (test 	* tutu)
{
	tutu->M_4test_variable_signed_int_1a = 3;
}

signed int main ()
{
	signed int a  = 1;
	test 	* tutu;
	_4bobo_function_void_1f_param_signed_int_signed_int(_4bobo_variable_signed_int_1a, a);
	printf("%d + %d = %d\n", _4bobo_variable_signed_int_1a, a, a + _4bobo_variable_signed_int_1a);
	if (_4test_variable_signed_int_1b > a)
		while (_4test_variable_signed_int_1b > a + 80)
		if (_4test_variable_signed_int_1b < 100)
		_4test_variable_signed_int_1b += 1;
	tutu->M_4test_variable_signed_int_1a = 2;
	printf("%d\n", tutu->M_4test_variable_signed_int_1a);
	return 0;
}
