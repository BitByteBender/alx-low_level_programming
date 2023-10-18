#include "main.h"
#include <string.h>
/**
 * *string_toupper - takes a char pointer param
 * @a: a pointer to the firs string(array of chars)
 * loop-1: goes from index 0 to last index
 * loop-2: Checks the ASCII Alphabets [A-Z]
 * Does explicit casting to compare the array index and j
 * Since j using ASCII table i used casting
 * to turn it into a char then switch/feed it into that index
 * Return: a(full string) in uppercase instead of lowercase
 */
char *string_toupper(char *a)
{
	unsigned short i, j;

	for (i = 0; i <= (strlen(a) - 1); i++)
	{
		for (j = 65; j <= 90; j++)
		{
			if ((int)a[i] == (j + 32))
			{
				a[i] = (char)j;
				break;
			}
		}
	}


	return (a);
}
