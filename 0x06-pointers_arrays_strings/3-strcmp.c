#include "main.h"
#include <string.h>
/**
 * _strcmp - compares each char of 2 strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * loop: compare each char of s1 & s2
 * 0 if strings r equal
 * positive or negative value if s1 & s2 is less or greater
 *
 * Return: an integer value from the comparison
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((int)(*s1 - *s2));
		}
		s1++;
		s2++;
	}

	return ((int)(*s1 - *s2));
}
