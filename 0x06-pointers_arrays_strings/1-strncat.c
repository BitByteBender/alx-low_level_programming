#include "main.h"
#include <string.h>
/**
 * _strncat - appends/concatenate n chars from src to dest
 * @dest: a pointer to the destination of a string array
 * @src: a pointer to the src array(string) of chars
 * @n: the max_num of chars to concatenate
 * loop: starts from the index 0 to n(max_num)
 * strlen(): Calculates the length of a string
 *
 * Return: pointer to dest(full string)
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned short i, dest_length = strlen(dest);

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			break;
		}
		else
		{
		dest[dest_length + i] = src[i];
		}
	}

	dest[dest_length + i] = '\0';
	return (dest);
}
