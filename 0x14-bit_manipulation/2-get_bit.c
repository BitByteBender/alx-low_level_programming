#include "main.h"
#include <stddef.h>
/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to get bit from
 * @index: index of the bit to get, starting from 0
 * Return: the value of the bit at index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	const unsigned short uliBits = (sizeof(n) * 8);

	if (n == 0 && index == 0)
		return (0);
	else if (index >= uliBits)
		return (-1);
	else
		return ((n >> index) & 1);
}
