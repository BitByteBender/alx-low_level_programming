#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates a defined ranged array using @min and @max values
 * @min: minimum value(starting point for the array)
 * @max: maximum value(end point for the array)
 * Return:
 * pointer to newly created array
 * NULL if min > max
 * or
 * memory allocation failed
 */
int *array_range(int min, int max)
{
	unsigned short i = 0;
	int *arr = NULL;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(sizeof(int) * (max - min + 1) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
	arr[i] = i;
	}
	arr[max + 1] = '\0';
	return (arr);
}
