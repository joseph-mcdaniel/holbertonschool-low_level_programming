#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: input value
 * @index: index starting from 0 of the bit
 *
 * Return: the value of the bit at index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	n >>= index;
	if (n & 1)
		return (1);
	else
		return (0);
}
