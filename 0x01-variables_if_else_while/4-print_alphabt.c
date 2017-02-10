#include <stdio.h>

/**
 * main - prints alphabet with two exceptions (q,e)
 *
 * Descriptions: Uses putchar inside for loop to print
 * followed by a newline
 * Return: returns 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
