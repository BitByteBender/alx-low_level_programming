#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Allocates memory if string @s1 & @s2 not NULL
 * @s1: string to be copied
 * @s2: string to be concatenated
 * @n: length/truncater for @s1 & @s2
 * s1_s2: newly allocated string
 * checks if @s1 and @s2 are not NULL
 * Return:
 * if not NULL, a pointer to the newly allocated string(full string)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1_s2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned short i = 0, s1_s2Length = ((n * 2) + 1);
		/**
		 * for testing purposes
		 * printf("s1_s2Length: %d\n", s1_s2Length);
		 */
		s1_s2 = (char *)malloc(s1_s2Length);

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
		}
	s1_s2[s1_s2Length] = '\0';
	}

	return (s1_s2);
}
