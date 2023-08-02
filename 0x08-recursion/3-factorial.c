#include "main.h"
#include <stdio.h>
/**
 * factorial - function returns fuctorial of a given Number
 *
 * @n: input number
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
