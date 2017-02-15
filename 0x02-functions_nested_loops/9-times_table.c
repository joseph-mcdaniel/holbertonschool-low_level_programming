#include "holberton.h"

/**
 * times_table - 9 times table
 *
 * Description: Use loops and conditional
 * Return: void
 */
void times_table(void)
{
	int row, cols, j;

	row = 0;

	while (row <= 9)
	{
		cols = 1;
		_putchar('0');
		while (cols < 10)
		{
			j = row * cols;
			if (j <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(j + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			cols++;
		}
		_putchar('\n');
		row++;
	}
}
