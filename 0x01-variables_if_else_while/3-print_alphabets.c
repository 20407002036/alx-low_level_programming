#include<stdio.h>
/**
 *main -Entry point
 *
 *Description: The function will print abcd... followed by ABCD...
 *
 *Return: Always 0 (Success)
 */
int main(void)
{int x = 97;
int y = 65;
char a = (char)x;
char A = (char)y;

for (a = 97; a <= 122; a++)
{putchar(a);
}
for (A = 65; A <= 90; A++)
{putchar(A);
}
putchar('\n');

return (0);
}
