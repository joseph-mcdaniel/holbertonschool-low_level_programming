#include "holberton.h"
/**
 * main - print lowercase alphabet
 *
 * Description: uses loop
 * Return: return 0
 */

void print_alphabet(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		
		c++;
	}
	_putchar('\n');
	return;
}
