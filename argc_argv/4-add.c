#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as command-line arguments.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: This program checks each command-line argument to ensure
 * it consists only of digits. If any argument contains non-digit
 * characters, it prints "Error" and returns 1. Otherwise, it converts
 * the arguments to integers, adds them up, and prints the result.
 *
 * Return: 0 if successful, 1 if an error occurs.
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
