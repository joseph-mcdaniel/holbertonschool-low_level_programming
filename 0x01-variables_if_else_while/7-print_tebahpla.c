#include <stdio.h>

/**
 * main - putchar rev alphabet
 *
 * Description: Putchar to print z-a
 * Return: returns 0
 */
int main(void)
{
	int z;

	for (z = 'z'; z >= 'a'; z--)
		putchar(z);
	putchar('\n');
	return (0);
}
