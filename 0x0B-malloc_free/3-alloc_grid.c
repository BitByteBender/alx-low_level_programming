#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Allocates a two dimensional grid
 * of integers and init them to 0
 * @width: number of grid columns
 * @height: number of grid rows
 * Checks if width or height is 0 or negative
 * first malloc:
 * allocate memory to rows
 * second malloc:
 * allocate memory to columns
 * Loop: loops through each row and allocate memory
 * if inside the loop checks if allocation for rows fails
 * if rows allocation fails then free previous
 * memory allocated and return NULL
 * Return:
 * if allocation(success) return a ptr to 2D grid
 * if allocation(fails or height/width is 0 or negative)
 * then return NULL
 */
int **alloc_grid(int width, int height)
{
	unsigned short i = 0, j = 0;
	int **grid;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
	grid = malloc(sizeof(*grid) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (height - 1); i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
		}
		for (j = 0; j <= (width - 1); j++)
		{
		grid[i][j] = 0;
		}
	}
	}

	return (grid);
}
