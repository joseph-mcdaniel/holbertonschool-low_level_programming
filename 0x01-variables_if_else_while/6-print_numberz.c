#include <stdio.h>

/**
 * main - prints base 10 with putchar
 *
 * Description: Use for loop and
 * putchar all numbers from 0-9
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
