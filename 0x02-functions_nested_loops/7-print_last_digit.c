#include <stdio.h>
/**
* print_last_digit- function prints the last digit of a int
*
* @a:Number to check last didgit
*
* Return:the last digit
*/
int print_last_digit(int a)
{int x;
x = a % 10;
if (x < 0)
{
x = x * -1;
}
putchar(x + '0');
return (x);
}
