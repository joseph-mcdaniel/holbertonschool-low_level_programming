#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: input value
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int copy;
	int place, comp;

	place = (sizeof(unsigned long int) * 8) - 1;

	if (n == 0)
		_putchar ('0');
	while (place >= 0)
	{
		copy = n >> place;
		if (copy & 1)
		{
			_putchar ('1');
			comp = 1;
		}
		else
		{
			if (comp == 1)
				_putchar ('0');
		}
		place--;
	}
}
