#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
print_alphabet();
return (0);

}
/**
 * The function prints alphabets to the standrd output
 *
 */
void print_alphabet(void)
{int x;
for (x = 95; x < 122; x++)
{putchar(x + '0');
}
putchar('\n');
}
