#include <stdio.h>

/**
 * main - print numbers in base 16
 *
 * Description: Uses two loops for 0-8
 * and a-f
 * Return: returns 0
 */
int main(void)
{
	int n;
	char a;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (a = 'a'; a < 'g'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
