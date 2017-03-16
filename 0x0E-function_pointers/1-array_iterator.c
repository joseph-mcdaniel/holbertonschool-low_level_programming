#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array
 * @size: size of array
 * @action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (array == NULL || action == NULL)
			return;
		(*action)(array[i]);
	}

}
