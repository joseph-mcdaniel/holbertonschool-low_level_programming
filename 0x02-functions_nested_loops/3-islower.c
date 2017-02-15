#include "holberton.h"
/**
 * _islower - checks for
 * lowercase character
 * @c: parameter set
 * Description: Use conditional to
 * check if 'c' is lowercase
 * Return: returns 1 if c, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
