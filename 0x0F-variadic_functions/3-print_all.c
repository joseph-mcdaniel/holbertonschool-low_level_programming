#include "variadic_functions.h"
/**
 * print_all - print any data type
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args; char *test; int i, prints;

	va_start(args, format); i = 0;
	while (format[i] == '\0')
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		prints = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			test = va_arg(args, char *);
			if (test == NULL)
			{
				printf("(nil)");
				break;
			}
				printf("%s", test);
				break;
		default:
			prints = 0;
			break;
		}
		if (prints && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
}
