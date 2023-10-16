#include <string.h>
#include "main.h"
/**
 * _puts2 - Takes a char pointer as a param
 * @str: a pointer to the 1st char of a string
 * strlen(): Calculates the length of a string
 * loop: goes from 0 to array of chars - 1
 * [i]: i is an array's index
 * string is an array of chars
 * _putchar for printing
 */
void puts2(char *str)
{
	unsigned short i;

	for (i = 0; i < strlen(str); i += 2)
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
