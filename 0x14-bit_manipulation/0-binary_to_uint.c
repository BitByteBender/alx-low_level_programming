#include "main.h"
#include <string.h>
/**
 * _pow - performs power calculation
 * @base: base num to be powered
 * @expo: exponent value
 * Return: overall result
 */
unsigned int _pow(unsigned int base, unsigned int expo)
{
	unsigned short i, exponent = 1;

	for (i = 0; i < expo; i++)
		exponent *= base;

	return (exponent);
}
/**
 * binary_to_uint - converts binary(string) to base 10(integer)
 * @b: binary string
 * Return: converted binary(string) to uint decimal(base 10)
 */
unsigned int binary_to_uint(const char *b)
{
	short i = 0;
	unsigned short powCounter = 0, Sum = 0;

	for (i = (strlen(b) - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			Sum += _pow(2, powCounter);

	powCounter++;
	}

	return (Sum);
}
