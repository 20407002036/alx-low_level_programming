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
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}
