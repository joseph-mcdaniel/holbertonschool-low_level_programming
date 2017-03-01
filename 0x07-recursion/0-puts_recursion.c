#include "holberton.h"
/**
 * _puts_recursion - use recursion to print a string
 * @s: input value
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
			return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
