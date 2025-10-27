#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * The function recursively calls itself until it reaches the null terminator,
 * then prints the characters on the way back up the call stack.
 * @s: The string to be printed in reverse.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*(s - 1));
	}
}
