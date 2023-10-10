#include "main.h"
/**
 * jack_bauer - takes no param
 *
 * First loop(i): will iterate from 0 to 2
 * Second loop(j): will iterate from 0 to 3
 * Third loop(k): will iterate from 0 to 5
 * Fourth loop(l): will iterate from 0 to 9
 * _putchar: to print values
 */
void jack_bauer(void)
{
unsigned short i, j, k, l;
for(i = 48; i <= 50; i++)
{
	for(j = 48; j <= 51; j++)
	{
	for(k = 48; k <= 53; k++) 
	{
	for(l = 48; l <= 57; l++)
	{
		_putchar(i);
		_putchar(j);
		_putchar(':');
		_putchar(k);
		_putchar(l);
		_putchar('\n');
	}
	}
	}
}
}
