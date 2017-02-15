#include "holberton.h"
/**
 * _abs - compute abs value
 * @int: Input value
 *
 * Description: Prints abs value
 * Return: 0
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

