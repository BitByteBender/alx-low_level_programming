#include <stdio.h>
/**
 * binary_search - performs a binary search on a sorted array
 * @array: ptr to sorted array of ints
 * @size: size of array to be searched
 * @value: value to search for
 * Return:
 * value index in the array or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	short lValue = 0, rValue = (size - 1);

	if (array != NULL)
	{
	while (lValue <= rValue)
	{
	short val = lValue + ((rValue - lValue) / 2), i = lValue;

	printf("Searching in array: ");
	for (; i <= rValue; i++)
	{
		if (i > lValue)
			printf(", ");

		if (i == val)
		{
		printf("%d", array[i]);
		}
		else
		{
		printf("%d", array[i]);
		}
	}
	putchar('\n');

	if (array[val] == value)
		return (val);
	else if (array[val] < value)
		lValue = val + 1;
	else
		rValue = val - 1;
	}
	}

	return (-1);
}
