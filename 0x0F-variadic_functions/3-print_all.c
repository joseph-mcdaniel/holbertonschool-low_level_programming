#include "variadic_functions.h"
/**
 * print_all - print any data type
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;


	va_start(args, format);

	while (format == NULL)
	{
		printf("\n");
	}

	i = 0;
	while (format[i])
	{
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
			printf("%s", va_arg(args, char *));
			break;

			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");

		i++;
	}
	va_end(args);
	printf("\n");
}
