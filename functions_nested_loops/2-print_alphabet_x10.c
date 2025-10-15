#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline 10x.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		alpha = 'a';
	}
}
