#include "main.h"
#include <stdio.h>
/**
* print_most_numbers - prints numbers 0-9
* don't print 2 and 4
*
*
*
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{int x;
for (x = 0; x <= 9; x++)
{
if (x == 2 || x == 4)
{
}
else
{
putchar(x + '0');
}
}
putchar('\n');
}
