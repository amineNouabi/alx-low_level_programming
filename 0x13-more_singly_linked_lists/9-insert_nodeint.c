#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer to be added to the list
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (!head)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->next = 0;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	current_node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (!current_node)
		{
			free(new_node);
			return (0);
		}
		current_node = current_node->next;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
