#include "search_algos.h"
/**
 * binary_search - searches for val in sorted array
 * @array: pointer to the first element of array
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or
 * if value is not present or array is NULL return -1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int start, mid, end, i;

	if (!array)
		return (-1);
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		for (i = start; i <= end; i++)
		{
			if (i == start)
				printf("Searching in array: ");
			if (i == end)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid;
		else
			start = mid + 1;
	}
	return (-1);
}
