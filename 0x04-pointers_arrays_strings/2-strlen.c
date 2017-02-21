#include "holberton.h"
/**
 * _strlen - return length of
 * string
 * @s: input value
 *
 * Return: void
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
