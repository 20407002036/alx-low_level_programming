#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elemets of an array
 *
 * @a: the pointer to the array
 * @n : Number of elements in the array
 *
 * Returns: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
		else
		{
		}
	}
	printf("\n");
}
