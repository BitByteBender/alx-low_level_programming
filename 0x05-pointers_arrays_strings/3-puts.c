#include <string.h>
#include "main.h"
/**
 * _puts - Takes a char pointer as a param
 * @str: a pointer to the 1st char of a string
 * strlen(): Calculates the length of a string
 * loop: goes from 0 to array of chars - 1
 * [i]: i is an array's index
 * string is an array of chars
 * _putchar for printing
 */
void _puts(char *str)
{
	unsigned short i;
	
	if (str == NULL)
	{
		_putchar(48);	
	}
	
	for (i = 0; i <= (strlen(str) - 1); i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
