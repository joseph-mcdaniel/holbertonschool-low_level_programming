#include "holberton.h"
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

	if (y < 0)
	{
		return (-1);
	}
	while (y)
	{
		result = result * x;
		y--;
	}
	return (result);
}
