#include "3-calc.h"
/**
 * main - atoi to convert arguments to ints
 * @argc: arg count
 * @argv: arg index
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	printf("%d\n", a);
	return (0);
}
