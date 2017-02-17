#include "holberton.h"

/**
 * print_most_numbers - print numbers
 * except for 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
