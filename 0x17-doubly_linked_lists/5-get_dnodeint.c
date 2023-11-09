#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head of list.
 * @index: position of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cursor = head;
	unsigned int i = 0;

	while (cursor)
	{
		if (i == index)
			return (cursor);
		cursor = cursor->next;
		i++;
	}
	return (0);
}
