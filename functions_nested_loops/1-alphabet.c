#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
