#include "main.h"
#include <stdlib.h>



/**
* alloc_grid - a pointer to a 2 dimensional array of integers
* @width: widht of array
* @height: height of array
* Return: pointer to a 2 dimensional array of integers
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i--]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
	
}
