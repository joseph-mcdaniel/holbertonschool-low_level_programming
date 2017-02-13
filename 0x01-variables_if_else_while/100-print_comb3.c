#include <stdio.h>
/**
 * main - while with nested loop
 *
 * Description: Print combination only once
 * Return: returns 0
 */

int main(void)
{
	int i;
	int j;

	i = 0;

	while (i < 9)
	{
		for (j = i; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar('0' + i);
				putchar('0' + j);

				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar ('\n');
	return (0);
}
