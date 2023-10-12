#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * While loop divide Number by 2 until becomes odd
 * Nested loop checks odd factors
 * If remaining Number is a prime greater than 2
 * print result
 * putchar used for printing
 * Return: Always 0(Success)
 */
int main(void)
{
	unsigned int i, greatestNumber;
	unsigned long Number;

	greatestNumber = 0;
	Number = 612852475143;

	while ((Number % 2) == 0)
	{
	Number	= (Number / 2);
	}

	for (i = 3;	(i * i) <= Number ; i += 2)
	{

	while (Number % i == 0)
	{
	Number	=	(Number / i);
	greatestNumber = i;
	}

	}

	if (Number > 2)
	{
	greatestNumber = Number;
	}

	printf("%u\n", greatestNumber);

	putchar('\n');

	return (0);
}
