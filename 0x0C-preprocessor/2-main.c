#include <stdio.h>
/**
 * main - print the name of the file it was compiled from
 *
 * Return: zero
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
