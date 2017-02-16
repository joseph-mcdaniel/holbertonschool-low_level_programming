#include "holberton.h"
/**
 * print_times_table - print table of n
 * @a: input value cols
 * @b: input value j
 * @c: input value n
 *
 * Description: times table starting with 0
 * Return: void
 */
void print_table_a(int a, int b, int c)
{
	int k;
	int cols, j, n;

	cols = a;
	j = b;
	n = c;
	if (cols == 0)
		_putchar(j + '0');
	if (cols == n)
	{
		_putchar('\n');
	}
	else if (j <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(j + '0');
	}
	else if (j > 9 && j <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		k = j / 10;
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
		_putchar(j % 10 + '0');
	}
}
/**
 * print_times_table - print table of n
 * @n: input value
 *
 * Description: times table starting with 0
 * Return: void
 */
void print_times_table(int n)
{
	int row, cols, j;

	row = 0;
	if (n > 15 || n < 0)
	{
		return;
	}
	while (row <= n)
	{
		cols = 0;
		while (cols <= n)
		{
			j = row * cols;
			print_table_a(cols, j, n);
			cols++;
		}
		row++;
	}
}
