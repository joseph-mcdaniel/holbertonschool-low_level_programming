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

	p = malloc((max - min + 1) * sizeof(int));
	if (min > max)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		p[j] = min + i;

	}
	return (p);
}
