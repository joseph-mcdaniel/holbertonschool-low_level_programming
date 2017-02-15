#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print natural
 * numbers to 98
 * @n: input
 *
 * Description: use two separate
 * while loops
 * Return: void
 */
void print_to_98(int n)
{
	while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}

			else if (n == 98)
			{
				printf("%d\n", n);
			}

			n++;
		}

}
