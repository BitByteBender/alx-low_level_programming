#include "main.h"
/**
 * print_chessboard - prints a 2D array
 * @a: a pointer to the 2D array of chars
 * loops(from 0 to 8)
 * _putchar: use to print chars & new line
 */
void print_chessboard(char (*a)[8])
{
	unsigned short i, j, length = 8;

	for (i = 0; i <= (length - 1); i++)
	{
		for (j = 0; j <= (length - 1); j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
