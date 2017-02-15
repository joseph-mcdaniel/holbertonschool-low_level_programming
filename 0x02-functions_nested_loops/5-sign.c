#include "holberton.h"
/**
 * print_sign - prints signs according to
 * value of number
 * @n: number being checked
 * Description: Use conditional statement
 * Return: 1 if greater, -1 if lower
 * 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
		if (n < 0)
		{
			_putchar(45);
			return (-1);
		}
		else
		{
			_putchar(48);
			return (0);
		}
}
