#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * If the number of characters is odd, the function
 * should print the last (length + 1) / 2 characters.
 * @str: The string to be processed.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	str += ((len + 1) / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
