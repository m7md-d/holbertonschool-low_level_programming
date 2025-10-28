#include <stdio.h>

/**
 * main - Prints the name of the program, followed by a new line.
 * It also checks if the number of arguments is 1 (program name only).
 * @argc: The count of command line arguments.
 * @argv: An array containing the command line arguments, where argv[0]
 * is the program name.
 *
 * Return: 0 on success (only one argument), 1 otherwise (error).
 */
int main(int argc, char **argv)
{
	if (argc != 1)
	{
		return (1);
	}
	printf("%s\n", argv[0]);

	return (0);
}
