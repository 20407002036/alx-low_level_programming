#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatinates two stings
 *
 * @src: string to be added to the dest
 * @dest: stding to be added
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_ptr);
}
