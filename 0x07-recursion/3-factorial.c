#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: input value
 *
 * Return: factorial, if n is less than zero return -1, if n is equal to zero
 * return 1, else return factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
