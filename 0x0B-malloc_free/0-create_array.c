#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function creates an array of char
 *
 * @size: size of array to be created
 * @c: char to initialize the array
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i <= size)
	{
		ptr[i] = c;

		i++;
	}

	return (ptr);
}
