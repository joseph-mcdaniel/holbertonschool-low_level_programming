#include "holberton.h"
/**
 * print_triangle - print triangle
 * based on size
 * @size: input value
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int i;
	int j;
	int ch;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j > i; j--)
			{
				_putchar(' ');
			}
			for (ch = 0; ch <= i; ch++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
			}
}
