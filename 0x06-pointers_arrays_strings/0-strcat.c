#include "main.h"
#include <string.h>
/**
 * _strcat - takes 2 char pointers as params (Concatenates two strings)
 * @dest: a pointer to the destination of a string array
 * @src: a pointer to the src array(string) of chars
 * loop: starts from the index 0 to full length of dest
 * strlen(): Calculates the length of a string
 * Condition to check if 0 byte or not
 * Return: pointer to dest(full string)
 */
char *_strcat(char *dest, char *src)
{
	unsigned short i, dest_length = strlen(dest);

	for (i = 0; i <= dest_length; i++)
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
