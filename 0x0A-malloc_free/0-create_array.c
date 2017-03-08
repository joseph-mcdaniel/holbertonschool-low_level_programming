#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: array size
 * @c: char
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
