#include "holberton.h"
/**
 * swap_int - swap the value
 * of two integers
 * @a: input value
 * @b: input value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*b = c;
	*a = d;
}
