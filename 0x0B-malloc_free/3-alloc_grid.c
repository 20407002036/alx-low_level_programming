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
	int i = width;
	int j = height;
	int x;
	int y;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr[j][i] = (int **)malloc((j * i) * sizeof(int));

			for (x = 0; x < j; x++)
			{
			for (y = 0; y < i; y++)
			{
			ptr[x][y] = 0;
			}
			}

			return (ptr);
			}



