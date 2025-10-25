#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAR 2772
#define MAX 126
#define MIN 33

#define MAX_LEN 100

/**
 * main - Entry point for the keygen program.
 *
 * This program generates a random, valid password for the "101-crackme"
 * challenge. The generated password consists of printable ASCII characters
 * (from 33 to 126) whose ASCII values sum up to 2772.
 * The subtractive method is used to ensure the sum is always correct.
 *
 * Return: Always 0 (Success).
 */
int main (void)
{
	srand(time(NULL));

	int rem = TAR;
	char pass[MAX_LEN];
	int i = 0;

	while (rem > MAX)
	{
		pass[i] = rand() % (MAX - MIN + 1) + MIN;

		if ((rem - pass[i]) > 32)
		{
			rem -= pass[i];
			i++;
		}
	}
	pass[i] = rem;
	pass[i + 1] = '\0';

	printf("%s", pass);

	return (0);
}
