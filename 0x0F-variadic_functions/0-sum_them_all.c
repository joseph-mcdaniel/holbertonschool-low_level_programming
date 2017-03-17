#include "variadic_functions.h"
/**
 * sum_them_all - return the sum of all parameters
 * @n: num
 *
 * Return: if n is less than zero, return zero -- else return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int sum = 0, i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(arguments, unsigned int);
	}
	va_end(arguments);

	return (sum);
}
