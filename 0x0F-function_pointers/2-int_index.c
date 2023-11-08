#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - search/finds an index for a matching array element
 * @array: pointer to an int array to be searched
 * @size: number of array elements
 * @cmp: function pointer for comparison
 * Return:
 * if @array Or @cmp NULL, returns - 1
 * else returns matching index of the 1st matching element found
 * otherwise - 1 if no found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	short i = 0;

	if (array == NULL || cmp == NULL)
	{
		exit(6);
	}

	if (size <= 0)
	{
	return (-1);
	}

	for (i = 0; i <= (size - 1); i++)
	{
		if (cmp(array[i]) != 0)
		{
		return (i);
		}
	}

	return (-1);
}
