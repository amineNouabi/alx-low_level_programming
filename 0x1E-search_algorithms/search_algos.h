#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);


/** Utility Functions */
void print_array(int *array, size_t left, size_t right);

void print_list(const listint_t *list);
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);
void jump_to_index(listint_t **cursor, size_t index);

#endif /* SEARCH_ALGOS_H */
