#include <stdio.h>
/**
 * main - for multiples of 3 print fizz
 * for multiples of 5 print buzz
 * for multiples of both print fizzbuzz
 * else print number
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", i);
				}
	printf("\n");
	return (0);
}
