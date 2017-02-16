#include "holberton.h"
/**
 * _isdigit - checks for a digit
 * @c: input value of _isdigit
 *
 *
 * Description: conditional to specify range of digits
 * Return - return 1 if digit, else 0
 * @1: value of digit
 * @0: value of anything else
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
