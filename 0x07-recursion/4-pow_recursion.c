#include "holberton.h"
#include <math.h>
/**
 * _pow_recursion - return the value of x raised to the power y
 * @x: base value
 * @y: power value
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	int result = 1;
	int count;

	if (y < 0)
	{
		return (-1);
	}
	for (count = 0; count < y; ++count)
	{
		result *= x;
	}
	return (result);
}
