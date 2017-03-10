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
	int i, j, *p;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		p[j] = i;

	}
	return (p);
}
