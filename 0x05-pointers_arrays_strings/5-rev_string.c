#include "main.h"
#include <stdio.h>
/**
 * rev_string - the function reverses a string
 *
 *@s: pointer to the string
 *
 *Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	char *end = s;
	int i;
	char temp;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}

