#include <stdio.h>

/**
 * main - prints all combinations of 0-9
 *
 * Description: If loop to print single digits
 * Return: returns 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
