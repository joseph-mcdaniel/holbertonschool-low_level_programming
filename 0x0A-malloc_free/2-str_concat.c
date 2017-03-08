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
	int i, j, string1 = 0, string2 = 0;

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
	catstring =  malloc((string1 * sizeof(char)) +
			    (string2 * sizeof(char)));

	for (i = 0; s1[i] != '\0'; i++)
	{
		catstring[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; i++, j++)
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
