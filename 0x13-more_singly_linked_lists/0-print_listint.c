#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_listint - singly linked list
* @h: pointer ti the heaf of the list
*
* Description: singly linked list node structure
*
* Return: Always 0 (Success)
*/

size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;

}
return (count);
}

