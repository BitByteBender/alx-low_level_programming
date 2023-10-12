#include "main.h"
/**
 * print_line - takes an integer parameter
 * @n: is going to be fed from 6-main.c
 *
 * Var i is a loop iterator
 * loop from 1 till n
 * _putchar used for printing
 */
void print_line(int n)
{
	unsigned short i;

	for (i = 1; i <= n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
