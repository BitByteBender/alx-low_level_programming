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

	for (k = 0; sepr[k] != '\0'; k++)
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
 * loop: goes from index 0 to last index (loop through the string)
 * Checks for tabs and replace with space
 * checks if the current chars is a lowercase letter and if prev char is a sepr
 * strlen(): Calculates the length of a string
 * Convert letter to uppercase
 * Return: modified string
 */
char *cap_string(char *a)
{
	unsigned short i;
	char sepr[] = {' ', '.', ';', '\t', '\n', ',',
			'"', '(', ')', '!', '?', '{', '}'};
	/*char sepr[] = ",. \n\t\"?!(){};";*/

	for (i = 0; i <= (strlen(a) - 1) && a[i] != '\0'; i++)
	{
		if (a[i] == '\t')
		{
			a[i] = sepr[0];
		}
		if (a[i] >= 'a' && a[i] <= 'z' && check_sepr(a[i - 1], sepr))
		{
			a[i] = a[i] - 32;
		}
	}


	return (a);
}
