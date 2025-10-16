#include "main.h"

/**
 * print_sign - Checks and computes the sign of an integer.
 * @n: The integer whose sign is to be checked.
 *
 * Return:
 * 1 if n is positive (greater than 0).
 * 0 if n is zero.
 * -1 if n is negative (less than 0).
 */
int print_sign(int n)
{
	return ((n > 0) - (n < 0));
}
