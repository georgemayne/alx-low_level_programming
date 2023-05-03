#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: old list
 * @size: size
 * @new: new
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **new_list;
	size_t curr;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (curr = 0; curr < size - 1; curr++)
		new_list[curr] = list[curr];
	new_list[curr] = new;
	free(list);
	return (new_list);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: head
 * Return: num
 */
size_t free_listint_safe(listint_t **head)
{
	size_t curr, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (curr = 0; curr < num; curr++)
		{
			if (*head == list[curr])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
