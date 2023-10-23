#include "main.h"
#include "2-strchr.c"
#include <string.h>
/**
 * _strspn - takes two char pointer as params
 * @s: string to be compared
 * @accept: string contains the chars to match @s
 *
 * Return: the number of chars(length) in the initial segment
 * that contains only the chars from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned short length = 0;

	while (*s != '\0')
	{
		if (_strchr(accept, *s) == NULL)
		{
		return (length);
		}
		length++;
		s++;
	}

	return (length);
}
