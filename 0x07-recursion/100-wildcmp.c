#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - compare two strings, with the possibility of the second string
 * having a wild card that can replace any string
 * @s1: string
 * @s2: string with a possible wild card
 * Return: description of the returned value
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (wildcmp(s1 + 1, s2))
			return (1);
		if (*(s1 + 1) != '\0' && *s2 == '\0')
			return (0);
	}
	return (0);
}
