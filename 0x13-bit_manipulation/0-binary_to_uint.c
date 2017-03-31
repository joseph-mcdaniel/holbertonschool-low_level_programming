#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or return zero if there is one or more chars
 * in string b that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unum;

	if (b == NULL)
		return (0);

	if (*b != '1' && *b != '0')
		return (0);

	unum = 0;
	while (*b)
	{
		if (*b == '1')
			unum = unum << 1 | 1;
		else if (*b == '0')
			unum <<= 1;
		else
			return (0);
		b++;
	}
	return (unum);
}
