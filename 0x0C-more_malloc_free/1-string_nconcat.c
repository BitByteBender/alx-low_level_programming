#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Allocates memory if string @s1 & @s2 not NULL
 * @s1: string to be copied
 * @s2: string to be concatenated
 * @n: max number/length/truncater for @s1 & @s2
 * s1_s2: newly allocated string
 * checks if @s1 and @s2 are not NULL
 * Return:
 * if not NULL, a pointer to the newly allocated string(full string)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1_s2;
	unsigned short i = 0, s1Length = strlen(s1), s2Length = strlen(s2);
	unsigned short s1_s2Length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= s2Length)
		s1_s2Length = (s1Length + s2Length);
	else
		s1_s2Length = (s1Length + n);

	s1_s2 = (char *)malloc(s1_s2Length + 1);

	if (s1_s2 != NULL)
	{
		for (i = 0; i <= (n - 1); i++)
		{
			s1_s2[i] = s1[i];
		}

		for (i = 0; i <= (n - 1); i++)
		{
			s1_s2[i + (n - 1)] = s2[i];
		}
	s1_s2[s1_s2Length] = '\0';
	}

	return (s1_s2);
}
