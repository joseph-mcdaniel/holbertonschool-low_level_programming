#include "holberton.h"
/**
 * print_number - print int using putchar
 * @n: input value
 *
 * Return: 0
 */


void print_unumber(unsigned int n)
{
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_unumber((unsigned int) n);
}
