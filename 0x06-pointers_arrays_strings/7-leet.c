#include "main.h"
#include <stdio.h>
/**
 * leet - function that encodes a string
 *
 * @str: string to be encoded
 *
 *Return: char
 */
char *leet(char *str)
{
	char *leet_chars = "AaEeOoTtLl";
	char *leet_replacements = "443071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (str);
}
