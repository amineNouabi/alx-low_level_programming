#include "lists.h"
#include <stdio.h>

#define TAB_SIZE 100

/**
 * print_listint_safe - prints all the elements of a listint_t list safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned long int add;
	unsigned int count = 0, i;
	listint_t *cursor = 0;
	listint_t **visited = (listint_t **) malloc(TAB_SIZE * sizeof(listint_t *));

	if (!visited)
		return (0);

	if (!head)
		return (0);
	add = (unsigned long int) head & 536870911;
	printf("[%p] %d\n", (void *) add, head->n);
	cursor = head->next;
	visited[count++] = (listint_t *) head;

	while (cursor)
	{
		for (i = 0; i < count; i++)
			if (visited[i] == cursor)
			{
				add = (unsigned long int) cursor & 536870911;
				printf("-> [%p] %d\n", (void *) add, cursor->n);
				free(visited);
				exit(98);
			}
		add = (unsigned long int) cursor & 536870911;
		printf("[%p] %d\n", (void *) add, cursor->n);
		visited[count++] = cursor;
		cursor = cursor->next;
	}
	free(visited);
	return (count);
}
