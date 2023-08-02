#include "main.h"
#include <stdio.h>
/**
 * find_sqrt - returns natural sqrt of a number
 *
 * @n: number to find sqrt
 * @start: range start
 * @end: range end
 *
 * Return: int
 */
int find_sqrt(int n, int start, int end)
{

	int mid = start + (end - start) / 2;
	int square = mid * mid;

	if (start > end)
	{
		return (-1);
	}


	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (find_sqrt(n, mid + 1, end));
	}
	else
	{
		return (find_sqrt(n, start, mid - 1));
	}
}
/**
 * _sqrt_recursion - prints the sqrt of a number
 *
 * @n: number to get sqrt
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (find_sqrt(n, 0, n));
}

