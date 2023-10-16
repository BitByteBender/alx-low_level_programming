#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - Takes a integer pointer and an integer array length as a param
 * @a: a pointer to the 1st index of an integer array
 * @n: is the length
 * loop: starts from 1st index of the array to last index - 1
 * Condition to remove symbols at the end
 * printf for printing
 */
void print_array(int *a, int n)
{
	unsigned short i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
