#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
* Prints the alphabet in lower case to the standard output
*
*/


void print_alphabet(void)
{int x;
for ( x = 95; x < 122; x++)
{putchar(x + '0');
}
putchar('\n');
}
#endif
