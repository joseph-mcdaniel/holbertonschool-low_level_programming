#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print elements of an array
 * @a: input value
 * @n: input value
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < 4)
			printf("%d, ", a[i]);
		else
			printf("%d ", a[i]);
	}
	printf("\n");
}
