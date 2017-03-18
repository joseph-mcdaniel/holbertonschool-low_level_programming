#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: string to printed between numbers
 * @n: number of ints passed to function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int num = 0, i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(arguments, unsigned int);

		if (i == n - 1 || separator == NULL)
			printf("%i", num);
		else
			printf("%i%s", num, separator);
	}
	printf("\n");
	va_end(arguments);
}
