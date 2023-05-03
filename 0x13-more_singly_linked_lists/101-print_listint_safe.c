#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: old list
 * @size: size
 * @new: new node
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_list;
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
 * print_listint_safe - prints a listint_t linked list.
 * @head: head
 * Return: num
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t curr, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (curr = 0; curr < num; curr++)
		{
			if (head == list[curr])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
