#include "holberton.h"
/**
 * print_alphabet_x10 - print
 * 10 times
 *
 * Description: Use while loops
 * Return: return none
 */
void print_alphabet_x10(void)
{
	int c;
	int n;

	n = 0;

	while (n < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
