#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes lowercase letters to upper case
 *
 * @str :pointer to the string
 *
 * Return: Char
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr  = *ptr - 'a' + 'A';
		}
		ptr++;

	}

	return (str);
}
