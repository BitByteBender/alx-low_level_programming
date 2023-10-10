#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - takes 1 integer  param
 *
 * @n: integer param
 *
 * Loops from n to 98 if n < 98
 * Loops backwards if n > 98
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
	if (i != 98)
	{
		printf("%d, ", i);
	}
	else
	{
		printf("%d\n", i);
	}
}
}
else
{
for (i = n; i >= 98; i--)
{
	if (i != 98)
	{
		printf("%d, ", i);
	}
	else
	{
		printf("%d\n", i);
	}
}
}
}
