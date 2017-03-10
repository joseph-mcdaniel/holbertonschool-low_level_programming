#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - malloc for an array of int
 * @min: min val
 * @max: max val
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, *p;

	p = malloc((min * sizeof(int)) + (max * sizeof(int)) + 1);

	if (min > max)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		p[i] = p[max] + 1;

	}
	return (p);
}
