#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees already allocated memory for a list.
 * @head: head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor, *prev;

	if (!head)
		return;

	prev = 0;
	cursor = head;
	while (cursor)
	{
		prev = cursor;
		cursor = cursor->next;
		free(prev);
	}
}
