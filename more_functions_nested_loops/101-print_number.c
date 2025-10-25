#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer to print
 *
 * Description: This function prints any integer, positive
 * or negative, character by character, using only _putchar.
 */
void print_number(int n)
{
	int num;
	int i = 1;
	int tmp = 0;
	int j = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	num = n;

	while (num / 10 != 0)
	{
		i++;
		num /= 10;
	}

	while (i > 0)
	{
		tmp = i;
		while (tmp > 1)
		{
			j *= 10;
			tmp--;
		}
		_putchar((n / j) + '0');
		n %= j;
		i--;
		j = 1;
	}
}
