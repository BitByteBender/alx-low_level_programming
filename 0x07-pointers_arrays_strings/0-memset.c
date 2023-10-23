#include "main.h"

/**
 * _memset - Fills a block of memory with value of b
 * @s: Char pointer to memory block(buffer)
 * @b: The value to be set
 * @n: Number of bytes to be set to char b
 *
 * Return: A pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned short i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
