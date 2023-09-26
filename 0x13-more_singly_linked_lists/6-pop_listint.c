#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *next = 0;
	int n = 0;

	if (!head || !*head)
		return (0);

	next = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next;

	return (n);
}
