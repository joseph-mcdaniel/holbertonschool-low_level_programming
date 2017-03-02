#include "holberton.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: input value
 *
 * Return: natural square root, if n does not have one return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (help_root(0, n));
	}
}
/**
 * help_root - calculates natural root
 * @root: root
 * @n: input to find root
 *
 * Return: sqrt
 */
int help_root(int root, int n)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	else
	{
		root = root + 1;
		return (help_root(root, n));
	}
}
