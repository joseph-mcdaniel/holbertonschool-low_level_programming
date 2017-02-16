#include <stdio.h>
/**
 * main - print fib sequence
 *
 * Description: Use while loop to
 * increment to first 50
 * Return: 0
 */
void main(void)
{
	int fib1 = 0, fib2 = 1, fib3, num = 50, count = 0;

	while (count < num)
	{
		fib3 = fib1 + fib2;
		count++;
		printf("%d\n", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	return (0);
}
