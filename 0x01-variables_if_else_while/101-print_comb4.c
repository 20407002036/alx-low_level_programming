#include <stdio.h>
/**
* main -Entry point of the program
*
* Description: the function prints all possible different combos
* of 3 letter diits
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
int b;
int c;

for (a = 0; a < 10; a++)
{
for (b = a + 1; b < 10; b++)
{
for (c = b + 1; c < 10; c++)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');

if (a != 7 || b != 8 || c != 9)
{putchar(',');
putchar(' ');
}

}

}
}
putchar('\n');

return(0);
}
