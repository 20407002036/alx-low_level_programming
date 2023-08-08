#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns a pointer to a newly allocated space which
 *  contains copy of the string given asinput
 *
 * @str: pointer to input string
 *
 * Return: char
 */
char *_strdup(char *str)
{

	size_t size;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);

	ptr = (char *)malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, str);

	return (ptr);

}


