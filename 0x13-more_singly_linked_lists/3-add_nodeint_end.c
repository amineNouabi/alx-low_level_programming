#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to add to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = 0;
	listint_t *cursor = 0;

	if (!head)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->next = 0;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	cursor = *head;
	while (cursor->next)
		cursor = cursor->next;

	cursor->next = new_node;

	return (new_node);
}
