#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints the numbers given as args
 *
 * @separator: pointer to the string infront of the int
 * @n: No of int given as args
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
