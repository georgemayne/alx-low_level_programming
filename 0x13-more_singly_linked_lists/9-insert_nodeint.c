#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: pointer
 * @idx: index
 * @n: new
 * Return: new node, NULL if it fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (pos = 0; pos < idx - 1 && temp != NULL; pos++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
