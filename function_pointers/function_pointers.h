#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * _putchar - writes a character to stdout
 * @c: character to print
 *
 * Return: On success 1, or -1 on error.
 */
int _putchar(char c);


/**
 * print_name - prints a name using a function pointer
 * @name: string to be printed
 * @f: pointer to a function that takes a string as argument
 *
 * Description: Calls the function pointed to by @f, passing @name to it.
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to the function to be used
 *
 * Description: Calls @action for each element of @array.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* MAIN_H */
