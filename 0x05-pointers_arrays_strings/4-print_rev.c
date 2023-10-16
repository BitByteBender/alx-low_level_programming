#include <string.h>
#include "main.h"
/**
 * print_rev - Takes a char pointer as a param
 * @s: a pointer to the 1st char of a string
 * strlen(): Calculates the length of a string
 * loop backwards: goes from last array index to index 0
 * string is an array of chars
 * _putchar for printing
 */
void print_rev(char *s)
{
	short i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		if (s == NULL)
		{
			_putchar(' ');
			break;
		}
		else
		{

		_putchar(s[i]);
		}
	}
	_putchar('\n');
}
