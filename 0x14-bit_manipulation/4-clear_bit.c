#include "main.h"
#include <stddef.h>

/**
* clear_bit - sets the value of a bit to 0
*
* @n: unsigned long int
* @index: index starting from 0 of the bit you want to set
*
* Returns: 1 on Success, -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int m;

if (index >= sizeof(unsigned long int) * 8 || n == NULL)
return (-1);

m = 1 << index;

m = ~m;

return (1);
}
