#include <stdio.h>
/**
* main -Entry point of the program
*
* Description: the program prints all possiblbe combos of
* single-digit numbers
*
*Return: Always 0 (Success)
*/
int main(void)
{int x = 0;
for (x = 0; x < 10; x++)
{putchar(x + '0');

if (x < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
