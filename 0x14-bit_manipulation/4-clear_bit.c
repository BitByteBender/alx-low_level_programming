#include "main.h"
#include <stddef.h>
/**
 * clear_bit - clears the value of a bit at a given index to 0
 * @n: pointer to ul number
 * @index: the index of the bit to clear, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	const unsigned long ulBits = sizeof(*n) * 8;
	unsigned long int Condition = (1 << index);

	if (n == NULL || index >= ulBits)
	{
		return (-1);
	}
	else if (Condition <= *n)
	{
		*n &= ~Condition;
		return (1);
	}

	return (0);
}
