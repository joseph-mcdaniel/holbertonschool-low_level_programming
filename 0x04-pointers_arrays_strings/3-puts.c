#include "holberton.h"
/**
 * _puts - print string
 * @str: input value
 *
 * Return: void
 */
void _puts(char *str)
{

	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
