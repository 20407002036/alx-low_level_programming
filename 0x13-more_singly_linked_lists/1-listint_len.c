#include "lists.h"
#include <stdio.h>
/**
 * listint_len - return the number of elements ina list
 *
 * @h: pointer to the current node
 *
 * Return: Number of Elements
 */
size_t listint_len(const listint_t *h)
{
  size_t num = 0;

  while (h != NULL)
    {
      h = h->next;
      num++;

    }
  return (num);
}
