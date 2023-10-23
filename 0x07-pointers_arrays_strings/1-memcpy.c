#include "main.h"
#include <string.h>
/**
 * _memcpy - takes 2 char pointers & 1 unsigned int as params
 * copies memory area from src to dest
 * @dest: a pointer to the destination of a memory area
 * @src: a pointer to the source of a memory area
 * @n: max number of bytes to be copied
 *
 * Return: a pointer to the destination memory (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned short i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			break;
		}
		else
		{
			dest[i] = src[i];
		}
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
