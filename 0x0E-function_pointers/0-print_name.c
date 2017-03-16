#include "function_pointers.h"
/**
 * print_name - Print name with function pointer
 * @name: input name
 * @f: function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
