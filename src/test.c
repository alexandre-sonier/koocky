signed int _4bobo_function_signed_int_1f_param_signed_int_signed_int (signed int, signed int);
signed int _4bobo_variable_signed_int_1b  = 2;
signed int _4bobo_function_signed_int_1f_param_signed_int_signed_int (signed int a, signed int b)
{
	printf("%d\n", a + b);
	return (0);
}

signed int main (void)
{
	signed int a  = 1;
	_4bobo_function_signed_int_1f_param_signed_int_signed_int(a, _4bobo_variable_signed_int_1b);
	return (0);
}

