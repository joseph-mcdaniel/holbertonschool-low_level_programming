#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *catstring;
	int i, j, string1, string2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
		string1 = _strlen(s1);

	if (s2 == NULL)
	{
		s2 = "";
	}
	else
		string2 = _strlen(s2);

	catstring =  malloc((string1 * sizeof(char)) +
			    (string2 * sizeof(char)) + 1);

	for (i = 0; s1[i] != '\0'; i++)
	{
		catstring[i] = s1[i];
	}
	for (j = s1[i]; s2[j] != '\0'; j++)
	{
		catstring[j] = s2[j];
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
