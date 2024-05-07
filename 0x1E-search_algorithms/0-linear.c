#include <stdio.h>
/**
 * linear_search - Performs a linear search for the value in an arr
 * @array: ptr to the first array element to search in
 * @size: num of arr element
 * @value: value to search for
 * Return:
 * idx of the first occurence of value in arr
 * or -1 if not found otherwise NULL
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned short i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
	}
	return (-1);
}
