#include "holberton.h"
/**
 * print_line - repeat char
 * @n: input value to tell how
 * many times char repeats
 *
 * Return - 0
 */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
