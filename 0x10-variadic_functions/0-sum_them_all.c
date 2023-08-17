#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - this function gives the sum of the args
 *
 * @n: number of args to the function
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
  int sum = 0;
  unsigned int i;
  va_list args;
  if (n == 0)
    {
      return (0);
    }

  va_start(args, n);

  for(i = 0; i < n; i++)
    {
      sum = sum + va_arg(args, int);
    }

  va_end(args);

  return (sum);
}
