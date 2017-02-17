#include "holberton.h"

/**
 * print_diagonal - print '_' n times
 * @n: input value
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int j;
	int k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
