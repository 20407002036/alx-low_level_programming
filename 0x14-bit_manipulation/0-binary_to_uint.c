#include <stddef.h>
#include "main.h"
/**
* binary_to_uint - converts binary no. to int
*
* @b: pointer to the string of binary No.
*
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{

unsigned int result = 0;
size_t i;

if (b == NULL)
return (0);


for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0' || b[i] == '1')
{
result = result * 2 + (b[i] - '0');
}
else
{
return (0);
}
}

return (result);
}



