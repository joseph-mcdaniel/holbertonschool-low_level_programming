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
	int length;

	length = _strlen(str);

	if (str == '\0')
	{
		return;
	}

	if (length % 2 != 0)
	{
		for (c = ((length - 1) / 2) + 1; c < length; c++)
		{
			_putchar(str[c]);
		}
	}
	else
	{
		for (c = length / 2; c < length; c++)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}

/**
 * _strlen - return length of
 * string
 * @s: input value
 *
 * Return: void
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
