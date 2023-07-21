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
int x;
int y;
for (x = 1; x <= 10; x++)
{
for (y = 0; y < 15; y++)
{
int tensOfy = y / 10;
int onesOfy = y % 10;
putchar(tensOfy + '0');
putchar(onesOfy + '0');
}
putchar('\n');
}
}
