#include "holberton.h"
/**
 * print_chessboard - print chessboard
 * @a: input value
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 1;

	while (a[0][i - 1] != 0)
	{
		_putchar(a[0][i - 1]);
		if (i > 1 && i % 8 == 0)
			_putchar('\n');
		i++;
	}

}
