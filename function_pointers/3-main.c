#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or 98/99/100 on error
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		puts("Error");
		exit(99);
	}
	printf("%d\n", func(num1, num2));


	return (0);
}
