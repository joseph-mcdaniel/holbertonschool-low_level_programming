#include "holberton.h"
/**
 * _strcpy - copy string pointed by src
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length;

	length = _strlen(src);

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
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
