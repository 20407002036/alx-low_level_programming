#include "main.h"
/**
 * _memcpy - copies contents of one memory area and pastes to anothr
 *
 * @dest: location to paste the copied contents
 * @src: The sorce of the copied contents
 * @n: Number of bytes to be copied
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	  dest[i] = src[i];
	  i++;
	}
	return (dest);
}
