#include <stdio.h>

/**
 * main - prints base 10 with putchar
 *
 * Description: Use while putchar
 * Return: returns 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
