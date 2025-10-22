#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: A pointer to the string (char array) to be reversed.
 *
 * Description: First calculates the length of the string, then iterates
 * backward from the end of the string, printing each character.
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	while (i >= 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
