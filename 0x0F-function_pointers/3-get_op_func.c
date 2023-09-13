#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: character representing the operation.
 * Return: pointer to specified function for the operation.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{0, 0}
	};
	int i = -1;

	while (++i < 5)
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);

	return (0);
}
