#include "main.h"

/**
 * _puts - Prints a string to the standard output.
 * @str: A pointer to the string to be printed.
 *
 * Description: Iterates through the string and prints each character
 * using the _putchar function until the null terminator is reached.
 * Return: void
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
