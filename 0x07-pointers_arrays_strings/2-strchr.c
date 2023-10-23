#include "main.h"
#include <string.h>
/**
 * _strchr - search for the 1st identical char in a string
 * @s: string to be fetched
 * @c: char used to locate a char in a @s string
 *
 * Return:
 * if @c is found return the string part from char @c
 * else return NULL
 */
char *_strchr(char *s, char c)
{

		for (; *s != '\0'; s++)
		{
			if (*s == c)
			{
			return (s);
			}
		}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
