#include "holberton.h"
/**
 * puts_half - print half of string
 * @str: input value
 *
 * Return: void
 */
void puts_half(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c >= 5)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
