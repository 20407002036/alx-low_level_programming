#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half a string
 *
 * @str: is the pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int n = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	n = (length + 1) / 2;

	while (str[n] != '\0')
	{
		putchar(str[n]);
		n++;
	}

	putchar('\n');
}
