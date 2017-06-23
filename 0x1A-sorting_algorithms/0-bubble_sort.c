#include "sort.h"
/**
 * bubble_sort - sorts an array of ints in ascending order
 * using bubble sort
 * @array: array
 * @size: size of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, n, temp;

	n = size;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
