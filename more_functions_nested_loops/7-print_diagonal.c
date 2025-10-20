#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: If n is 0 or less, the function should only print a '\n'.
 * The diagonal is created by placing spaces before the '\' character.
 * Return: void
 */
void print_diagonal(int n)
{
	int s = 0;
	int i;

	while (n > 0)
	{
		for (i = 0; i < s; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		s++;
	}
	_putchar('\n');
}
