#include "main.h"
#include <stdio.h>
/**
* _isupper - Checks for upper case letters
*
* @c: charecter to be checked
*
* Return: 1 if @c is upper case, 0 Otherwise
*/
int _isupper(int c)
{
return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}

