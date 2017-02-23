#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: input value
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int i;
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	for (i = 0; i < c; c--, i++)
	{
		temp = s[i];
		s[i] = s[c];
		s[c] = temp;
	}
}

