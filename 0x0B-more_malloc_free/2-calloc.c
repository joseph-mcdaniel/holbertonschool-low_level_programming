#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: elements
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = size;
	}
	return (p);
}
