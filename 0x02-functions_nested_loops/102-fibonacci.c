#include <stdio.h>
/**
 * main - print fib sequence
 *
 * Description: Use while loop to
 * increment to first 50
 * Return: 0
 */
int main(void)
{
	long int fib1 = 0, fib2 = 1, fib3, num = 50, count = 0;

	while (count < num)
	{
		fib3 = fib1 + fib2;
		count++;
		fib1 = fib2;
		fib2 = fib3;
		if (count == num)
		{
			printf("%ld", fib3);
		}
		else
			printf("%ld, ", fib3);
	}
	printf("\n");
	return (0);
}
