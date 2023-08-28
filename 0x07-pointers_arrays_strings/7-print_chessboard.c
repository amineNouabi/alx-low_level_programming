#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: the board.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j;

	if (!a)
		return;

	while (i < 8)
	{
		if (!a[i] && ++i)
			continue;

		j = 0;
		while (j < 8)
			_putchar(a[i][j++]);
		_putchar('\n');
		i++;
	}
}

