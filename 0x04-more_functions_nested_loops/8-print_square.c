#include "main.h"
/**
 * print_square - takes an integer parameter
 * @size: is going to be fed from 8-main.c
 *
 * Used if statements to check the value of @size
 * Var i & j are a loop iterators
 * for loop from 1 till @size
 * _putchar used for printing
 */
void print_square(int size)
{
	unsigned short i, j;

	if (size == 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
