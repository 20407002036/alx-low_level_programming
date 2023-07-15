#include <stdio.h>
/**
* main -entry point of the program
*
* Description: The function prints all different possible combos of two digits
*
* Return: Always 0 (Success)
*/

int main(void)
{
int x = 0;
int y = 0;

for (x = 0; x < 10; x++)
{
for (y = x + 1; y < 10; y++)
{
putchar(x + '0');
putchar(y + '0');

if (x != 8 || y != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
