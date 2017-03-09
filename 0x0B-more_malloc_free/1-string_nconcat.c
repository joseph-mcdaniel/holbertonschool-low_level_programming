#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concat two strings, point to newly allocated space
 * containing s1 followed by the first n bytes of s2
 * @s1: string1
 * @s2: string2
 * @n: number of bytes
 *
 * Return: catstring, if it fails return null, if null return empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catstring;
	unsigned int i, j, string1 = 0, string2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	string1 = _strlen(s1);
	if (s2 == NULL)
	{
		s2 = "";
	}
	string2 = _strlen(s2);
	string2++;
	catstring = malloc((string1 * sizeof(char)) + (string2 * sizeof(char)));

	for (i = 0; s1[i] != '\0'; i++)
	{
		catstring[i] = s1[i];
	}
	for (j = 0; j <= n; i++, j++)
	{
		catstring[i] = s2[j];
	}
	return (catstring);
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
