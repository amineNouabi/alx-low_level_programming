#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next = 0;

	if (!head)
		return;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
