#include "main.h"
/**
 * print_most_numbers - takes no params
 *
 * Var i is a loop iterator
 * loop from 0 till 9 using ASCII
 * Using _putchar to print the numbers
 * Using if to prevent 2 & 4 from getting printed
 * Second _putchar prints a new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
		_putchar(i);
		}
	}
	_putchar('\n');
}
