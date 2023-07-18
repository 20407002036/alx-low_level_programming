#include "main.h"
/**
* _islower-will be called by the main
*
* @c:character check if it is lowercase.
*
*
* Return:0-if lowercase,1-if not.
*
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{ return (0);
}
}
