#include "main.h"
#include <stdio.h>
/**
* print_square - prints a square using #
*
* @size: is the size of the square
*
* Return: Always 0 (Success)
*/
void print_square(int size)
{
int i;
int j;
if (size <= 0)
{
putchar('\n');
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
putchar('#');
}
putchar('\n');
}
}
