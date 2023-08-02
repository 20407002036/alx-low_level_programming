#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to a
 * @[8]: size of the array
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
  int row;
  int col;
  
	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			putchar(a[row][col]);
			putchar(' ');
		}
		putchar('\n');
	}
}
