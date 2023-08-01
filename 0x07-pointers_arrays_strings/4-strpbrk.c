#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function searches a string for any set of bythes
 *
 * @s: String to search bytes in
 * @accept: pointer to stirng that is our reference
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return (NULL);
}
