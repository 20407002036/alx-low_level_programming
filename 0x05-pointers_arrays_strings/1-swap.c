#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the value of two ints
 *
 * @a: it's the pointer to int a
 * @b: is the pointer to int b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
