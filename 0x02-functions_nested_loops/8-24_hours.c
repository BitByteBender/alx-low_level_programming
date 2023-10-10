#include "triplets.c"
#include "main.h"
/**
 * jack_bauer - takes no param
 *
 * _triplets prints 2 integers & 1 char
 *
 *
 * First loop(i): will iterate from 0 to 2
 * Second loop(j): will iterate from 0 to 3
 * Third loop(k): will iterate from 0 to 5
 * Fourth loop(l): will iterate from 0 to 9
 * _triplets: to print values
 */
void jack_bauer(void)
{
unsigned short i, j, k, l;
for (i = 48; i <= 50; i++)
{
	for (j = 48; j <= 57; j++)
	{
	if (i != 50)
	{
	for (k = 48; k <= 53; k++)
	{
	for (l = 48; l <= 57; l++)
	{
		_triplets(i, k, ':');
		_triplets(k, l, '\n');
	}
	}
	}
	else
	{
		for (j = i - 2; j <= i + 1; j++)
		{
		for (k = 48; k <= 53; k++)
		{
		for (l = 48; l <= 57; l++)
		{
		_triplets(i, j, ':');
		_triplets(k, l, '\n');
		}
		}
		}
		break;
	}
	}

}
}
