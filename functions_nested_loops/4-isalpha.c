#include "main.h"

/**
 * _isalpha - Checks for alphabet character.
 * @c: The character to be checked (ASCII value).
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
