#include <stdio.h>
/**
* main -Entry point
*
* Description: the function print abcd using putchar
* I used the for loop to acheive this
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 97;
char c = (char)n;
for (c = 97 ; c <= 122 ; c++)
{putchar(c);
}
putchar('\n');
return (0);
}
