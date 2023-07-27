#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the contents of an array
 *
 * @a; pointer to the array
 * @n: size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
  int start = 0;
  int end = n - 1;
  int temp;

  while (start < end)
    {
      temp = a[start];
      a[start] = a[end];
      a[end] = temp;

      start++;
      end--;
    }
}
