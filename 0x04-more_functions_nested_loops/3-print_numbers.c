#include "main.h"
#include <stdio.h>
/**
* print_numbers - prints numbers 0 - 9
* followed by a new line
*
*
*
* Return Always 0 (Success)
*/
void print_numbers(void)
{int x;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
}
putchar('\n');
}
