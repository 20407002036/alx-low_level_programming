#include "main.h"
#include <stdio.h>
/**
* _isdigit -checks if the input is a digit
*
* @c: the input to be checked
*
*Return: 1 if @c is digit , 0 otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
