#include "variadic_functions.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - a function that sums @n argument
 * @n: first integer param (const)
 * used macros and type defs to handle variadic func
 * va_list: type def
 * va_start: macro to init va_list object
 * va_arg: macro to retrieve variadic args
 * va_end: macro to clean va_list object
 * Return:
 * if @n is 0 then return 0
 * if not
 * loop to @n and sum every single input number
 * and return the overall sum at the end
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned short i = 0;
	int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
