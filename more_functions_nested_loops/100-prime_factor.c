#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of a number
 *
 * Description: This program finds the largest prime factor of
 * the number 612852475143 by repeatedly dividing it by the
 * smallest possible factors until the number becomes 1.
 * Return: Always 0
 */

int main (void)
{
	long number = 612852475143;
	long fac = 2;

	while (number > 1)
	{
		if (number % fac == 0)
		{
			number /= fac;
		}

		if (number % fac != 0)
		{
			fac++;
		}
	}
	printf("%ld\n", fac - 1);

	return (0);
}
