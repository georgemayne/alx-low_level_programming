#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of node
 * Return: print
 */
size_t print_listint(const listint_t *h)
{
	size_t print = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		print++;
	}
	return (print);
}
