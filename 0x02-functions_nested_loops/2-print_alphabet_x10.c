#include "holberton.h"
/**
 *
 * main - print lowercase alphabet
 * ten times
 * Description: nested for loop
 * Return: return 0
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
	return;
}
