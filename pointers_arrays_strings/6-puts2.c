#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: The string to be processed.
 *
 * Return: void
 */
void puts2(char *str)
{
	int odd = 1;

	while (*str != '\0')
	{
		if (odd > 0)
		{
			_putchar(*str);
		}
		str++;
		odd = -odd;
	}
	_putchar('\n');
}
