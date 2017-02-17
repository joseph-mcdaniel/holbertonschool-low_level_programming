#include "holberton.h"
/**
 * more_numbers - print 1-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int count;
	int k;

	count = 0;

	while (count < 10)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
		count++;
	}
}
