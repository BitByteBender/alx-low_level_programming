#include "main.h"
#include <string.h>
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
