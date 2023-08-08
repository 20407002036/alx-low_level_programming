#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array of int
 *
 * @width: Number of columns for the array
 * @height: Number of rows for the array
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
  int i;
  int j;
  int **grid;

  
  if (width <= 0 || height <= 0)
    {
      return (NULL);
  }

  grid = (int **)malloc(height * sizeof(int *));
  if (grid == NULL)
    {
      return (NULL);
    }

  for (i = 0; i < height; i++)
    {
    grid[i] = (int *)malloc(width * sizeof(int));
    if (grid[i] == NULL)
      {
      for (j = 0; j < i; j++)
	{
	free(grid[j]);
      }
      free(grid);
      return (NULL);
    }

    for (j = 0; j < width; j++)
      {
      grid[i][j] = 0;
    }
  }

  return (grid);
}
