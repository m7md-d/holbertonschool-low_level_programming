#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of adding a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of subtracting b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of multiplying a by b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of dividing two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of dividing a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
