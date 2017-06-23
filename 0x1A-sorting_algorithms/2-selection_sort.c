#include "sort.h"

/**
 * selection_sort - sorts array of ints using select sort
 * @array: array
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		unsigned int Min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[Min])
			{
				Min = j;
			}
		}
		if (Min != i)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
}
