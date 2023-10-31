#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees allocated memory in a 2D grid
 * @grid: pointer to 2D grid to be freed
 * @height: number of rows in the 2D grid
 *
 * Checks if grid is null or not
 * Loops through each row of the 2D grid and checks
 * if it's not null and frees the allocated memory
 * in that row
 * at last it frees the used memory for the array pointers
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}
	else
	{
		unsigned short i = 0;

		for (i = 0; i <= (height - 1); i++)
		{
			if (grid[i] != NULL)
			{
			free(grid[i]);
			}
		}
	}

	free(grid);
}
