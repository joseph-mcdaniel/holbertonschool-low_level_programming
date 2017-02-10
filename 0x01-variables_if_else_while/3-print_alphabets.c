#include <stdio.h>

/**
 * main - prints a-z, A-Z
 *
 * Description: Use putchar and for loops
 * Return: returns 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
