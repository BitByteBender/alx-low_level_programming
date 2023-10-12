#include "main.h"
/**
 * print_numbers - takes no params
 *
 * Var i is a loop iterator
 * loop from 0 till 9 using ASCII
 * Using	_putchar to print the numbers
 * Second _putchar prints a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
