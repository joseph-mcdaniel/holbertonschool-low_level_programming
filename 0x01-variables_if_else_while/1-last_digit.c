#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints random number and then prints last digit
 *
 * Description: Divide absolute value for last digit
 * Return: returns 0
 */

int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n;
	n %= 10;
	printf("Last digit of %i is %i ", k, n);
	if (n > 5)
		printf("and is greater than 5\n");
	else if (n < 6 && n != 0)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");
	return (0);
}
