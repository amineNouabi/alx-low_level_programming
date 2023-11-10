#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts node at index.
 * @h: pointer on head of list
 * @idx: position to insert to.
 * @n: value of node to add.
 *
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *cursor, *prev = 0, *new_node;

	if (!h || (!*h && idx))
		return (0);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);
	new_node->n = n;
	new_node->next = 0;
	new_node->prev = 0;
	if (!*h)
		return (*h = new_node);
	cursor = *h;
	while (cursor)
	{
		if (i == idx)
			break;
		prev = cursor;
		cursor = cursor->next;
		i++;
	}
	if (i < idx)
	{
		free(new_node);
		return (0);
	}
	new_node->prev = prev;
	new_node->next = cursor;

	if (prev)
		prev->next = new_node;
	else
		*h = new_node;
	if (cursor)
		cursor->prev = new_node;
	return (new_node);
}
