#include "main.h"
#include <stdio.h>
/**
* print_diagonal - prints a diagonal line in output
*
* @n: is the no. of times \ should be printed
*
* Return: null
*/
void print_diagonal(int n)
{
int row;
int spaces;
if (n <= 0)
{
putchar('\n');

}

for (row = 1; row <= n; row++)
{
for (spaces = 1; spaces < row; spaces++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
