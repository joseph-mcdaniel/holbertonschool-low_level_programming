#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: string between strings
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL && i == n - 1)
			printf("%s", "(nil)");
		else if (s == NULL)
			printf("%s%s", "(nil)", separator);
		else if (separator == NULL || i == n - 1)
			printf("%s", s);
		else
			printf("%s%s", s, separator);

	}
	printf("\n");
	va_end(args);
}
