#include "holberton.h"
/**
 * is_prime_number - determines if number is prime
 * @n: input value
 *
 * Return: if n is prime return 1, else return 0
 */
int is_prime_number(int n)
{
	return (help_prime(n, 2));
}
/**
 * help_prime - helper function to provide prime number
 * @n: input value
 * @x: divisor
 *
 * Return: prime number
 */
int help_prime(int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	if (n == 1 || n < 0)
	{
		return (0);
	}
	if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (help_prime(n, x = x + 1));
	}
}
