#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substing
 *
 * @s: String to check the prefic
 * @accept: reference of the prefixes
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}

		i++;
		s++;
	}

	return (i);
}
