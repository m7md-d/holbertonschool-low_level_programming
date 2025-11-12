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

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);


#endif /* MAIN_H */
