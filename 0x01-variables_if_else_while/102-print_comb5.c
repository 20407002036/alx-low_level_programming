#include <stdio.h>
/**
* main -Entry point of the program
*
* Description: the function prints all possile combos
* of two two-digit numbers
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
int a;
int b;
for (a = 0; a < 100; a++)
{
for (b = a + 1; b < 100; b++)
{

/*
* when you print a and b... you will find that
* some numbers like 65 hold character value hence printing
* this will result in printing charcters. to resolve this.
* use the place value idea to split the number.
*/
int a_tenspv = a / 10;
int a_onespv = a % 10;
int b_tenspv = b / 10;
int b_onespv = b % 10;

putchar(a_tenspv + '0');
putchar(a_onespv + '0');
putchar(' ');
putchar(b_tenspv + '0');
putchar(b_onespv + '0');

if (a != 99 || b != 99)
{putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
