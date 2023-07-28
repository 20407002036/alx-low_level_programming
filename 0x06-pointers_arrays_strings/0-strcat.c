#include "main.h"
#include <stdio.h>
/**
 * _strcat - contacinates two strings
 *
 * @dest: string to be incresed
 * @src: string to be cut
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
