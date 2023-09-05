#include "main.h"
#include <stdio.h>
/**
* get_bit - gets the value at the index of a bit numbre
*
* @n: Number to be converted to binary
* @index: position that will store the bit value
*
* Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1UL << index;

if ((n & mask) != 0)
return (1);

else
{
return (0);
}
}


