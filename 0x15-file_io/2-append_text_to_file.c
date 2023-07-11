#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - function that finds the length of a string
 * @str: length of string
 * Return: Always length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int g;

	for (g = 0; str[g]; g++)
		;
	return (g);
}

/**
 * add_node_end - function that adds a new node to the end of linked list
 * @head: pointer to a linked list
 * @str: string to the new node
 * Return: Always pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}

