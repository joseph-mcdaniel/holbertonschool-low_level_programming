#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: input
 *
 * Return: pointer, if malloc fails return 98
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);

}
