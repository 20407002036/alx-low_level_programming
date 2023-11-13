#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 *
 * @s: Pointer to a memory location
 * @b: Constant byte
 * @n: number of bytes of the memory area
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
