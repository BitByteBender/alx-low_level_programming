#include "main.h"
#include <stdio.h>
/**
 * reverse_array - store indexes into a temp var then switch
 * @a: a pointer to the first array of integers
 * @n: length of array
 * loop: from index 0 till length - 1
 */
void reverse_array(int *a, int n)
{
	unsigned short i;
	int temp;

	for (i = 0; i <= (n - 1); i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}

}
