#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: pointer to the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		putchar('\0');

		return;
	}
	else
	{
		putchar(*s);

		_puts_recursion(s + 1);
	}

	putchar('\0');
}
