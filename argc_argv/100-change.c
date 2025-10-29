#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins required to make change.
 * The coin values used are 25, 10, 5, 2, and 1 cents.
 * @argc: The count of command-line arguments. Must be 2.
 * @argv: An array containing the arguments, where argv[1] is the amount
 * (in cents) for which to calculate the change.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect.
 */
int main(int argc, char **argv)
{
	int i = 0, x;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		puts("0");
		return (0);
	}
	while (x - 25 >= 0)
	{
		i++;
		x -= 25;
	}
	while (x - 10 >= 0)
	{
		i++;
		x -= 10;
	}
	while (x - 5 >= 0)
	{
		i++;
		x -= 5;
	}
	while (x - 2 >= 0)
	{
		i++;
		x -= 2;
	}
	while (x - 1 >= 0)
	{
		i++;
		x--;
	}
	printf("%d\n", i);
	return (0);
}
