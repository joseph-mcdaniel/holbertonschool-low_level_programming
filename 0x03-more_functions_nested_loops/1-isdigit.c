#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: input value
 *
 * Return: Always 1 if digit, else 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
