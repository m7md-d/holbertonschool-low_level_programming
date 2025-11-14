#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * p_char - Prints a single character from the va_list argument.
 * @a: The va_list containing the argument to print (expected to be an int,
 * cast to char).
 *
 * Return: void.
 */
void p_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * p_int - Prints an integer from the va_list argument.
 * @a: The va_list containing the integer argument to print.
 *
 * Return: void.
 */
void p_int(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * p_float - Prints a floating-point number (double) from the va_list argument.
 * @a: The va_list containing the double argument to print.
 *
 * Return: void.
 */
void p_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * p_string - Prints a string (char *) from the va_list argument.
 * Handles the case where the string pointer is NULL by printing "(nil)".
 * @a: The va_list containing the string argument to print.
 *
 * Return: void.
 */
void p_string(va_list a)
{
	char *s = va_arg(a, char *);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments passed
 *
 * Description: Supported format characters:
 * 'c' - char
 * 'i' - int
 * 'f' - float/double
 * 's' - char * (string)
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list args;
	char fomat[] = {'c', 'i', 'f', 's', '\0'};
	void (*funcs[4])(va_list) = {p_char, p_int, p_float, p_string};
	char *s = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (fomat[j] != '\0')
		{
			if (format[i] == fomat[j])
			{
				printf("%s", s);
				funcs[j](args);
				s = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
