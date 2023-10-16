#include <string.h>
#include "main.h"
/**
 * puts_half - Takes a char pointer as a param
 * @str: a pointer to the 1st char of a string
 * strlen(): Calculates the length of a string
 * loop: starts from half of the array to (array of chars - 1)
 * [i]: i is an array's index
 * string is an array of chars
 * _putchar for printing
 */
void puts_half(char *str)
{
	unsigned short i;

	for (i = (strlen(str) / 2); i < strlen(str); i += 1)
	{
		if (str == NULL)
		{
			_putchar(' ');
			break;
		}
		else
		{

		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
