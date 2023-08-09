#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function concatinates args from the pragram
 *
 * @ac: Number of args
 * @av: pointer to array of the args
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int length = 0;
	int i;
	char *result;
	int index = 0;


	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(length + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}

	result[length] = '\0';

	return (result);
}
