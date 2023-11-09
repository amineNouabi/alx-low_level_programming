#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints doubly linked list
 * @h: list's head.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *cursor;
	size_t len = 0;

	cursor = (dlistint_t *) h;
	while (cursor)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
		len++;
	}
	return (len);
}
