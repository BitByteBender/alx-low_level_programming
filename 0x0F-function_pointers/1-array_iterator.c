#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - Uses a func to each element of an int array
 * @array: pointer to an int array
 * @size: number of array elements
 * @action: function pointer to use each element
 * iterates over the integer array and uses/applies an action
 * to each element in the integer array
 * Return:
 * if @array Or @action NULL the exit
 * else applies an action to each element in the integer array
 * frees the memory from Counter at the end.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		exit(6);
	}
	else
	{
		size_t *Counter = (size_t *)malloc(sizeof(size_t));

		if (Counter == NULL)
			exit(6);

		for ((*Counter) = 0; (*Counter) <= (size - 1); (*Counter)++)
		{
			action(array[*Counter]);
		}
		free(Counter);
	}
}
