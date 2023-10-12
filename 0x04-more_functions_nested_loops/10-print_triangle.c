#include "main.h"
/**
 * print_triangle - takes an integer parameter
 * @size: is going to be fed from 8-main.c
 *
 * Used if statements to check the value of @size
 * Var i, j, k: are a loop iterators
 * 1st loops: from 1 till @size & jumps a new line
 * 2nd loops: adds spacing only
 * 3rd loops: prints symbol only
 * _putchar used for printing
 */
void print_triangle(int size)
{
	unsigned short i, j, k;

	if (size == 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
		for (j = i + 1; j <= size; j++)
		{
		_putchar(' ');
		}

		for (k = 0; k < i; k++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
	}
}
