#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a listint_t list.
  * @head: head
  * @n: list
  * Return: NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	add_new = malloc(sizeof(listint_t));
	if (add_new == NULL)
		return (NULL);
	add_new->n = n;
	add_new->next = NULL;
	if (*head == NULL)
	{
	*head = add_new;
		return (add_new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = add_new;
	return (add_new);
}
