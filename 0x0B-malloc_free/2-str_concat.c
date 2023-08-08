#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatinates two strings
 *
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *ptr;

	i = strlen(s1);
	j = strlen(s2);

	ptr = (char *)malloc((i + j + 1) * sizeof(char));

	strcpy(ptr, s1);
	strcat(ptr, s2);


	return (ptr);
}
