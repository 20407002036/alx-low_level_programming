#include <stdio.h>
/**
* main - Entry point for the program
*
* Description: the function prints all numbers of the base 16
* in lower case..they are 0123456789abcdef
*
* Return: Always 0 (Success)
*/
int main(void)
{int x = 0;
char y = (char)x;
for (x = 0; x < 10; x++)
{putchar(x + '0');
}
for (y = 97; y <= 102; y++)
{putchar(y);
}
putchar('\n');
return (0);
}
