#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as command-line arguments.
 * It prints the result, followed by a new line.
 * @argc: The count of command-line arguments.
 * @argv: An array containing the arguments (program name, number 1, number 2).
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect.
 */
int main(int argc, char **argv)
{
	int n1, n2;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\n", n1 * n2);

	return (0);
}
