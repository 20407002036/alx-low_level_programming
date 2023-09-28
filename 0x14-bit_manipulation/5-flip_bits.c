#include "main.h"

/**
* flip_bits - returns number of bits needed to flip from one number to another.
* @m: unsigned long int
* @n: unsigned long int
* Return: count
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result = n ^ m;
unsigned int c = 0;

while (result > 0)
{
c += result & 1;
result >>= 1;
}

return (c);
}
