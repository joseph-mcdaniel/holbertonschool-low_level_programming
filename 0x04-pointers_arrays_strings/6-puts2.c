#include "holberton.h"
/**
 * puts2 - print 1 char out of 2 a string
 * @str: input value
 *
 * Return: void
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
