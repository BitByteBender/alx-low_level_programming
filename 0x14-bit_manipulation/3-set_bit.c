#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to ul number
 * @index: the index of the bit to set, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	const unsigned long ulBits = sizeof(*n) * 8;

	if (n == NULL && index == 0)
	{
		return (0);
	}
	else
	{
		if (index >= ulBits)
			return (-1);
		else if ((*n & (1 << index)) == 0)
		{
		*n = *n | 1 << index;
		return (1);
		}
	}

	return (0);
}
