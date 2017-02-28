#include "holberton.h"
/**
 * _strchr - returns a pointer to the first
 * occurence of the character c in the string
 * @s: string
 * @c: character
 *
 * Return: s + i
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (0);
	}
}
