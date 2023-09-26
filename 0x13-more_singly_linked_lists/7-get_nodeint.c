#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = -1;

	if (!head)
		return (0);

	while (head)
	{
		if (++i == index)
			return (head);
		head = head->next;
	}

	return (0);
}
