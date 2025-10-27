#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
