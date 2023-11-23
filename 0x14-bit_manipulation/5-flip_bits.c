#include "main.h"
/**
 * flip_bits - counts the number of bits to flip
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip to get from 1 number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned short Counter = 0;
	unsigned long int Condition = (n ^ m);

	if (n == 0 || m == 0)
		return (0);

	while (Condition)
	{
	Counter += (Condition & 1);
	Condition = Condition >> 1;
	}

	return (Counter);
}
