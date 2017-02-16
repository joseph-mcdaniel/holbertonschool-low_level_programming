#include "holberton.h"
/**
 * _isupper - check for uppercase
 * @c: input value
 *
 * Return: 1 if upper, else 0
 */
int _isupper(int c)
{
	if (c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'z')
	{
		return (0);
	}
	else
		return (0);
}
