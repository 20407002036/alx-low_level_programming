#include "main.h"
#include <stdio.h>
/**
 * _strchr - function locates a characterin a string
 *
 * @s: pointer to the sting
 * @c: character to be located
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
