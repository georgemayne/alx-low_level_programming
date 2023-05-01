#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: pointer
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *str;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	str = *head;
	*head = str->next;
	data = str->n;
	free(str);
	return (data);
}
