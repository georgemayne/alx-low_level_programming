#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - append new node at end of a doubly linked list.
 * @head: Pointer to a pointer to  head of linked list.
 * @n: Value to be stored in the new node.
 * Return: address of a new element, or NULL if it failed.
 */



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *tmp = *head;

if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
}
else
{

while (!(tmp->next == NULL))
tmp = tmp->next;
tmp->next = new_node;
new_node->prev = tmp;
}
return (new_node);
}
