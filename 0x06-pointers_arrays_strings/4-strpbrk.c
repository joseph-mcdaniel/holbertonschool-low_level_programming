#include "holberton.h"
/**
 * _strpbrk - locates the first occurence
 *
 * @s: string
 * @accept: string
 *
 * Return: s + i or null
 */
char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
