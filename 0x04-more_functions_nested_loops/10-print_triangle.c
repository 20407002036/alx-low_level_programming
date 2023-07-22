#include "main.h"
#include <stdio.h>
/**
* print_triangle - prints a triangle to the output
*
* Description: The function uses # to draw a triangle
*
* @size: is the size of the triangle
*
* Return: void
*/
void print_triangle(int size)
{
int i;
int j;
int k;
if (size <= 0)
{
putchar('\n');
}

for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
putchar(' ');
}

for (k = 1; k <= i; k++)
{
putchar('#');
}
putchar('\n');
}
}
