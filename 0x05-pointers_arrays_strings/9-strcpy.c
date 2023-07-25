#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies string pointed to by the src
 *  including the terminating null Byte (\0)
 * to the buffer pointed toby dest
 *
 * @dest: pointer to string
 * @src: pointer to pointer of string
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_start);

}
