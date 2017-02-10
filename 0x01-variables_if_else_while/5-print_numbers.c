#include <stdio.h>

/**
 * main - prints all numbers in base 10
 *
 * Description: For loop with putchar to print 0-9
 * Return: returns 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%", n);
	putchar('\n');
	return (0);
}
