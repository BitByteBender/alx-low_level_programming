#include "triplets.c"
#include "main.h"
/**
 * jack_bauer - takes no param
 *
 * _triplets prints 2 integers & 1 char
 *
 *
 * First loop(i): will iterate from 0 to 23
 * Second loop(j): will iterate from 0 to 59
 * _triplets: to print values
 */
void jack_bauer(void)
{
unsigned short i, j;
for (i = 0; i <= 23; i++)
{
	for (j = 0; j <= 59; j++)
	{
		_triplets(i / 10, i % 10, ':');
		_triplets(j / 10, j % 10, '\n');
	}
}
}
