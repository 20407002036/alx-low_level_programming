#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string to capitalize words
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{

			if (capitalize_next)
			{
				str[i] = str[i] - ('a' - 'A');
				capitalize_next = 0;
			}
		}
		else
		{

			if (str[i] == ' ' || str[i] == '\t' ||
					str[i] == '\n' || str[i] == ',' ||
					str[i] == ';' || str[i] == '.' ||
					str[i] == '!' || str[i] == '?' ||
					str[i] == '"' || str[i] == '(' ||
					str[i] == ')' || str[i] == '{' ||
					str[i] == '}') {
				capitalize_next = 1;
			}
		}
	}

	return (str);
}
