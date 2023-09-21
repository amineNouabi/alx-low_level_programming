#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list to find the length of
 *
 * Return: the number of elements in the list_t list
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	return (1 + list_len(h->next));
}
