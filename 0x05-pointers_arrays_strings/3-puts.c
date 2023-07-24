#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string followed by a new line
 *
 * @str: is the pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
