#include "holberton.h"

/**
 * jack_bauer - print minutes of day
 *
 * Description: Use modulus
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	while (h <= 23)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 % 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 % 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
