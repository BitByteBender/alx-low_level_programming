#include "main.h"
#include <stdlib.h>
char *_memset(char *, char, unsigned short);
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of each elements in n bytes
 * used _memset to fill a block of memory with a byte value 0
 * Return:
 * pointer to the newly allocated memory
 * or
 * NULL if nmemb or size equals 0
 * or
 * malloc fails to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr_nmemb;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr_nmemb = (void *)malloc(nmemb * size);

	if (ptr_nmemb == NULL)
		exit(6);

	_memset(ptr_nmemb, 0, (nmemb * size));

	return (ptr_nmemb);
}
/**
 * _memset - fills a block of memory with value of b
 * @s: char pointer to memory block
 * @b: value to be set
 * @n: number of bytes to be set
 * Return: a pointer to the memory block
 */
char *_memset(char *s, char b, unsigned short n)
{
	unsigned short i;

	for (i = 0; i <= (n - 1); i++)
	{
	s[i] = b;
	}

	return (s);
}
