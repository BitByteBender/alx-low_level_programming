#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - calculates the sum1 & sum 2 of a 2D array
 * @a: pointer to a 2D array
 * @size: number of rows and columns
 * printf for printing result of sum1 & sum2
 */
void print_diagsums(int *a, int size)
{
	unsigned short i;
	int sum1 = 0, sum2 = 0, *temp = NULL;

	for (i = 0; i <= (size - 1); i++)
	{
		temp = a + i * size;
		sum1 += *(temp + i);
		sum2 += *(temp + size - i - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
