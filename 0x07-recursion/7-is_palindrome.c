#include "holberton.h"
/**
 * is_palindrome - checks for palindrome
 * @s: string
 *
 * Return: return 1 if palindrome, and 0 if not
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	if (l <= 1)
	{
		return (1);
	}

	return (_check(s, l));
}
/**
 * _strlen_recursion - finds string length
 * @s: string
 *
 * Return: l.
 */
int _strlen_recursion(char *s)
{
	int l;

	if (*s == '\0')
	{
		return (0);
	}

	l =  (_strlen_recursion(s + 1) + 1);
	return (l);
}
/**
 * _check - helper functions
 * @s: string
 * @l: length
 *
 * Return: 1 if palindrome, 0 if not
 */
int _check(char *s, int l)
{
	if (l <= 1)
	{
		return (1);
	}

	if (*s != s[l - 1])
	{
		return (0);
	}
	else
	{
		return (_check(s + 1, l - 2));
	}
}
