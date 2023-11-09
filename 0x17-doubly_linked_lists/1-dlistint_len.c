#include "lists.h"

/**
 * dlistint_len - Counts nodes  in a linked list
 * @h: Head of linked list
 * 
 * Return: size_t linked list length
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *cursor;
	size_t len = 0;

	cursor = (dlistint_t *)h;
	while (cursor)
	{
		cursor = cursor->next;
		len++;
	}
	return (len);
}
