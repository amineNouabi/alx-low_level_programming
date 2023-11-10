#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: Head of list
 * @index: index of node to remove
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor = *head, *prev = 0;
	unsigned int i = 0;

	if (!head || !cursor)
		return (-1);

	while (cursor)
	{
		if (i == index)
			break;
		prev = cursor;
		cursor = cursor->next;
		i++;
	}

	if (i < index || !cursor)
		return (-1);
	if (cursor->next)
		cursor->next->prev = prev;
	if (prev)
		prev->next = cursor->next;
	else
		*head = cursor->next;
	free(cursor);
	return (1);
}
