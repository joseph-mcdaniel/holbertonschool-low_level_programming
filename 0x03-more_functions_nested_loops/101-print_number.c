#include "holberton.h"
/**
 * print_unum - print unsigned integer
 * @n: input value
 *
 * Return: void
 */


void print_unum(unsigned int n)
{
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_number - print negative
 * call unsigned
 * @n: input value
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_unum((unsigned int) n);
}
