#include "main.h"
/**
 * times_table - takes no param
 *
 *
 * First loop(i): will iterate from 0 to 9
 * Second loop(j): will iterate from 0 to 9
 * result: calculates i and j
 * _putchar: to print values
 */
void times_table(void)
{
unsigned short i, j;
for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
	unsigned short result = i * j;
		if (j != 0 && j <= 9)
		{
		_putchar(',');
		_putchar(' ');
		}

		if (result < 10)
		{
		_putchar(' ');
		}
		else
		{
		_putchar((result / 10) + '0');
		}
	_putchar((result % 10) + '0');
	}
	_putchar('\n');
}
}
