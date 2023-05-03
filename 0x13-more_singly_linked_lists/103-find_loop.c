#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head
 * Return: Always
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *geo, *rit;

	geo = rit = head;
	while (geo && rit && rit->next)
	{
		geo = geo->next;
		rit = rit->next->next;
		if (geo == rit)
		{
			geo = head;
			break;
		}
	}
	if (!geo || !rit || !rit->next)
		return (NULL);
	while (geo != rit)
	{
		geo = geo->next;
		rit = rit->next;
	}
	return (rit);
}
