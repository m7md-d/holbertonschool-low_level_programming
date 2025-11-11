#ifndef MAIN_H
#define MAIN_H

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

#endif /* MAIN_H */
