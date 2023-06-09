#include "3-calc.h"

/**
 * op_add - addition for two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a  and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference for two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - a division function
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - finds the product
 * @a: integer
 * @b: integer
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - finds remainder
 * @a: integer
 * @b: integer
 *
 * Return: the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
