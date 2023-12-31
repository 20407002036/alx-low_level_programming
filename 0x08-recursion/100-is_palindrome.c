#include "main.h"
#include <stdbool.h>
#include <string.h>
/**
 * is_palindrome_helper - helps check the palindrome
 *
 * @start: pointer to string start
 * @end: pointer to string end
 *
 * Return: int
 */
bool is_palindrome_helper(char *start, char *end)
{
	if (*start >= *end)
	{
		return (true);
	}
	if (*start != *end)
	{
		return (false);
	}
	return (is_palindrome_helper(start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if string is palindrome and 0 etherwise
 *
 * @s: pointer to string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
  int length = strlen(s);

	
	if (length <= 1)

	{
		return (1);
	}
	return (is_palindrome_helper(s, s + length - 1));
}

