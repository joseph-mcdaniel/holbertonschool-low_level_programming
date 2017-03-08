#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - duplicate string using malloc
 * @str: string
 *
 * Return: ptr to duplicate
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr  = (char *) malloc((_strlen(str) * sizeof(char)) + 1);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}

	return (ptr);
}

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
