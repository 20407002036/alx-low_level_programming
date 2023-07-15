#include <stdio.h>
/**
* main -Entry point
*
* Description: This function prints single digits of base 10
* starting from 0.
* I can Only use the putchar function
*
* Return: Always 0 (success)
*/

int main(void)
{int x = 0;
for (x = 0; x < 10; x++)
{putchar(x + '0');
}
putchar('\n');
return (0);
}
