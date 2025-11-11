#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function pointer.
 * @name: The name (string) to be printed.
 * @f: A function pointer that takes a char * argument (the name)
 * and returns void.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
