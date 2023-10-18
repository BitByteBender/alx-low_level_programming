#include "main.h"
#include <string.h>
#include <stdbool.h>
/**
 * check_sepr - checks the pattern(sepr:symbol then letter)
 * @a: a char param
 * @sepr: a pointer to the 1st array
 * Return: true if any or false if none
 */
bool check_sepr(char a, char *sepr)
{
	unsigned short k;

	for (k = 0; k <= (strlen(sepr) - 1) && *sepr != '\0'; k++)
	{
		if (a == sepr[k])
		{
		return (1);
		}
	}

	return (0);
}
/**
 * cap_string - Checks for all letters that has symbols behind them.
 * @a: a pointer to the firs string(array of chars)
 * loop-1: goes from index 0 to last index
 * loop-2: Checks the ASCII Alphabets [A-Z]
 * Condition:
 * Does explicit casting to compare the array index and j
 * Checks for matching pattern(sepr then letter)
 * Since j using ASCII table, I used casting
 * to turn it into a char then switch/feed it into that index
 * strlen(): Calculates the length of a string
 * Return: a(full string) in uppercase instead of lowercase
 */
char *cap_string(char *a)
{
	unsigned short i, j;
	char sepr[] = {' ', '.', ';', '\t', '\n', ',',
			'"', '(', ')', '!', '?', '{', '}'};
	/*char sepr[] = ",. \n\t\"?!(){};";*/

	for (i = 0; i <= (strlen(a) - 1) && *a != '\0'; i++)
	{
		for (j = 65; j <= 122; j++)
		{
			if ((int)a[i] == (j + 32) && check_sepr(a[i - 1], sepr))
			{
				a[i] = (char)j;
				break;
			}
		}
	}


	return (a);
}
