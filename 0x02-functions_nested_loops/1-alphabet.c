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

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}
