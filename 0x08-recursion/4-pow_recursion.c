#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns value of x raised to power of y
 *
 * @x: Base value
 * @y: Power of
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
