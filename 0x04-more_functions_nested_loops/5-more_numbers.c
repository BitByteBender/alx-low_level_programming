#include "main.h"
/**
 * more_numbers - takes no params
 *
 * Var i is a loop iterator
 * loop from 0 till 9 using ASCII
 * Used ternary operator to check if j < 10
 * Using _putchar to print the numbers
 * Second _putchar prints a new line
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
	for (j = 0; j <= 14; j++)
	{

	_putchar((j < 10)	? ('0'	+	j)	: ('0'	+ (j / 10)));

	if (j > 9)
	{
	_putchar('0'	+ (j % 10));
	}
	}
	_putchar('\n');
	}
}
