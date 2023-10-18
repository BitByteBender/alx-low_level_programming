#include "main.h"
#include <string.h>
/**
 * leet - Converts a string to leet 1337
 * @a: a pointer to the first string(array of chars)
 * arrNum: an array that contains replacement values in integer
 * arrChar: an array that contains chars to be replaced
 * loop-1: goes from index 0 to last index
 * loop-2: lops 10 times
 * Checks for 5 lowercase & 5 uppercase letters convert and replace
 * strlen(): Calculates the length of a string
 * Return: a(full string) in uppercase instead of lowercase
 */
char *leet(char *a)
{
	unsigned short i, j;
	int arrNum[] = {4, 3, 0, 7, 1};
	char arrChar[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; i < strlen(a); i++)
	{
		for (j = 0; j < 10; j++)
		{

			if (a[i] == arrChar[j] || a[i] == arrChar[j] - 'a' + 'A')
			{
				a[i] = (char)(arrNum[j] + '0');
				break;
			}
		}
	}


	return (a);
}
