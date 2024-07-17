#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - searches for a value
 *        in a singly linked list of integers using jump search
 * @list: pointer to the head of the list to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first address where value is located,
 *     or NULL if value is not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, jump, j;
	listint_t *cursor;

	if (!list || !size)
		return (0);

	jump = sqrt(size);
	i = jump;
	cursor = list;
	jump_to_index(&cursor, i);

	while (1)
	{
		if (cursor)
			printf("Value checked at index [%ld] = [%d]\n", cursor->index, cursor->n);
		else
			printf("Value checked at index [%ld] = [%p]\n", i, 0);

		if (!cursor || cursor->n >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
			break;
		}

		i += jump;
		jump_to_index(&cursor, i);
	}

	j = i - jump;
	cursor = list;
	jump_to_index(&cursor, j);

	while (cursor && cursor->index <= i)
	{
		printf("Value checked at index [%ld] = [%d]\n", cursor->index, cursor->n);
		if (cursor->n == value)
			return (cursor);
		cursor = cursor->next;
	}
	return (0);
}

/**
 * jump_to_index - jumps to the node that has @index as index
 * @cursor: address of pointer to shift.
 * @index: target node's index
 * Return: void.
 */
void jump_to_index(listint_t **cursor, size_t index)
{
	while (*cursor && (*cursor)->index < index)
		(*cursor) = (*cursor)->next;
}
