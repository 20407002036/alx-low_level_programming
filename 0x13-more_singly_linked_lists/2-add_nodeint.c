#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the begining of the list
 *
 * @head: pointer to the pointer of the memory adress of the head
 * @n: value at that memory address
 *
 * Return: linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t *newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = *head;
*head = newnode;

return (newnode);
}
