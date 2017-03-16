#include "3-calc.h"
/**
 * op_add - add a and b
 * @a: input value
 * @b: input value
 *
 * Return: return the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: input value
 * @b: input value
 *
 * Return: return difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: input value
 * @b: input value
 *
 * Return: return product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: input value
 * @b: input value
 *
 * Return: return division of a and b
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	return (100);
}

/**
 * op_mod - remainder
 * @a: input value
 * @b: input value
 *
 * Return: return remainder of a and b
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	return (100);
}
