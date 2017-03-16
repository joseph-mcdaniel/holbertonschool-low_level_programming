#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an int
 * @array: array
 * @size: size of array
 * @cmp: compare values
 *
 * Return: if no element matches return -1, if size is less than
 * or equal to zero return -1, else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (size <= 0 || array == NULL || cmp == NULL)
			return (-1);
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
