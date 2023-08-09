#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - function that frees a 2d
 *
 * @grid: pointer to the 2d array
 * @height: One of the parameters given in creating the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
