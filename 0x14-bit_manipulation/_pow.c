#include "main.h"
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
