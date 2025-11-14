#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of all its parameters (integers).
 * @n: The number of parameters passed to the function (the count
 * of integers to be summed).
 *
 * Return: The sum of all parameters, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);

	return (total);
}
