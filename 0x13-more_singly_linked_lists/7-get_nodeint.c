#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer
 * @index: index
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int curr;

	if (head == NULL)
		return (NULL);
	for (curr = 0; curr < index; curr++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
