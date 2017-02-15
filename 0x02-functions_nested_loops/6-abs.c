#include "holberton.h"
/**
 * _abs - Print abs value
 * @n: Input value
 *
 * Description: Use conditional
 * Return: n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
			return (n);
	}
}

