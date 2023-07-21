#include "main.h"
#include <stdio.h>
/**
* more_numbers - prints the numbers 0- 14 ten times
*
*
*
* Return Always 0 (success)
*/
void more_numbers(void)
{
int j;
int i;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
putchar((j / 10) + '0');
}
putchar((j % 10) + '0');
}
putchar('\n');
}
}
