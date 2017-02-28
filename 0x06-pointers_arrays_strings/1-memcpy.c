#include "holberton.h"
/**
 * _memcpy - copy n bytes from src to dest
 * @dest: memory area
 * @src: memory area
 * @n: input
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *asrc = (char *)src;
	char *adest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		adest[i] = asrc[i];
	}
	return (adest);
}
