#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			if (x > 9)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(x + '0');
				}
				else
				{
					_putchar(x + '0');
				}
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
