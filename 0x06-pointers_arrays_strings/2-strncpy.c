#include "main.h"
#include <string.h>
/**
 * _strncpy - copies n chars from src to dest
 * @dest: a pointer to the destination of a string array
 * @src: a pointer to the src array(string) of chars
 * @n: the max_num of chars to copy
 * loop: starts from the index 0 to n(max_num)
 *
 * Return: pointer to dest(full string)
 */
char *_strncpy(char *dest, char *src, int n)
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

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
