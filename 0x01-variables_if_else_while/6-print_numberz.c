#include <stdio.h>

/**
 * main - print all numbers of base 10 the newline
 * using putchar
 *
 * Description: For loop, putchar to print base 10
 * Return: returns 0
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n++);
	}
	putchar('\n');
	return (0);
}
