#include "main.h"
/**
* print_alphabet_x10 -will w called by main
* Description: print_alphabet - prints the alphabet in lowercase,
* ten times, followed by a new line.
*
* Return: void
*/
void print_alphabet_x10(void)
{
char x;
int y;
for (y = 0; y <= 9; y++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}

_putchar('\n');
}
}
