#include <stdio.h>

/**
 * main - putchar alphabet
 *
 * Description: Putchar inside for loop to print a-z followed by a new line
 * Return: returns 0
 */
int main(void)
{
	int a;
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
