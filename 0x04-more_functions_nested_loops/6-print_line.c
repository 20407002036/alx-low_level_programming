#include "main.h"
#include <stdio.h>
/**
* print_line - prints aline using '_'
*
* @n: this is the number of times _ is printed
*
* Return Always 0 (Success)
*/
void print_line(int n)
{
int x;
if (n <= 0)
{
}
for (x = 1; x <= n; x++)
{
putchar('_');
}
putchar('\n');
}
