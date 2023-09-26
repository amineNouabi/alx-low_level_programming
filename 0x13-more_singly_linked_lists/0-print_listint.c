#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	listint_t *cursor = 0;

	if (!h)
		return (0);

	printf("%d\n", h->n);
	cursor = h->next;
	count++;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
		count++;
	}
	return (count);
}
