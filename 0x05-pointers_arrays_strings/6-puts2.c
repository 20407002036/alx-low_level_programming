#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string,
 * starting with thw first character
 *
 * @str: is the pointer to the stirng
 *
 * Return: void
 */
void puts2(char *str)
{int i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
