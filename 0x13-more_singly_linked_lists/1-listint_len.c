#include "lists.h"

/**
 * listint_len - count elements of linked list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *cursor;

	if (!h)
		return (count);

	count++;
	cursor = h->next;

	while (cursor)
	{
		cursor = cursor->next;
		count++;
	}
	return (count);
}
