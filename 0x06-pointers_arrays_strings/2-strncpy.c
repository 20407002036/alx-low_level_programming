#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 *
 * @dest: pointer to a string
 * @src: pointer toa string
 * @n: number of bytes
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_ptr);
}
