#include "main.h"
/**
 * print_diagonal - takes an integer parameter
 * @n: is going to be fed from 7-main.c
 *
 * Used if statements to check the value of @n
 * Var i is a loop iterator
 * for loop from 1 till n
 * while loop used to add more spacing
 * _putchar used for printing
 */
void print_diagonal(int n)
{
	unsigned short i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{

	for (i = 0; i < n; i++)
	{
	if (i == 0)
	{
	_putchar('\\');
	}
	else
	{
	j = 0;
	while (j < i)
	{
		_putchar(' ');
		j++;
	}
	_putchar('\\');
	}
	_putchar('\n');
	}
	}
}
