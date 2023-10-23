#include "main.h"
#include "2-strchr.c"
#include <string.h>
/**
 * _strpbrk - takes two char pointer as params
 * @s: string to be compared
 * @accept: string contains the chars to search for in @s
 *
 * Return: pointer to the matched char/byte in @s
 * that matches in @accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
