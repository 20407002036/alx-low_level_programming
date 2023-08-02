#include "main.h"
#include <stdio.h>
/**
 * set_string - states the value of a pointer
 *
 * @s: pointer to a pointer
 * @to: value pointed to
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
