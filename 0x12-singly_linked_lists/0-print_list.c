#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	unsigned long int count = 0;
	list_t *cursor = 0;

	if (!h)
		return (0);

	if (!h->str)
		printf("[0] (nil)");
	else
		printf("[%d] %s", h->len, h->str);
	count++;
	cursor = h->next;

	while (cursor)
	{
		printf("\n");
		if (!cursor->str)
			printf("[0] (nil)");
		else
			printf("[%d] %s", cursor->len, cursor->str);
		cursor = cursor->next;
		count++;
	}
	printf("\n");
	return (count);
}
