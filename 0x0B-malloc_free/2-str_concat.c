#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Allocate a memory & return
 * a pointer to a copied string var s1_s2
 * @s1: first string to be duplicated
 * @s2: second string to be copied and concatenated
 * var s1_s2: string container used for copying and concatenation
 * used malloc() for memory allocation
 * Checks:
 * if string @s1 and @s2 is NULL
 * if var s1_s2 got memory allocation
 *
 * for loop for copying @s1 to var s1_s2 by index
 * after a successful memory allocation
 * condition within loop does a check to copy and concatenate succesfully
 * Return: Pointer to the newly allocated memory
 * var s1_s2(full string)
 */
char *str_concat(char *s1, char *s2)
{
	char *s1_s2;

	if (s1 == NULL && s1 == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned short i, Length = (strlen(s1) + strlen(s2));

		s1_s2 = malloc(Length + 1);

		if (s1_s2 == NULL)
		{
			return (NULL);
		}

	for (i = 0; i <= Length; i++)
	{
		if (i >= strlen(s1) && *s2 != '\0')
		{
			s1_s2[i] = s2[i - strlen(s1)];
			if (s1_s2[i] == '\0')
			{
			break;
			}
		}
		else
		{
			s1_s2[i] = s1[i];
		}
	}
	s1_s2[Length] = '\0';
	}

	return (s1_s2);
}
