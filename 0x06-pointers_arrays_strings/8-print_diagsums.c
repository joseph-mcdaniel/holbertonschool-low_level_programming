#include "holberton.h"
/**
 * print_diagsums - print sum of two diagonals of a square matrix of integers
 * @a: array
 * @size: input
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	for (i = 0; i < size * size; i += (size + 1))
	{
		sum1 += a[i];
	}
	for (i = size - 1; i < (size * size) - (size - 1); i += (size - 1))
	{
		sum 2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
