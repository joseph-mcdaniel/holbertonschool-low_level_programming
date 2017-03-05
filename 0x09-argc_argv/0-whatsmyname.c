#include <stdio.h>
/**
 * main - print name of program
 * @argc: arg
 * @argv: arg
 *
 * Return: 0
 */
char main(int argv __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
