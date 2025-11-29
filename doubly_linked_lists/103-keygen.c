#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates a valid key for the crackme5 executable.
 * @argc: The number of arguments passed.
 * @argv: The arguments vector.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	char *d = "A-CHRDw871NS0E9B2TibgpnMVys5Xzvt0GJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char *u;
	int len, i, tmp, sum = 0, prod = 1, sq = 0;
	char max;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}
	u = argv[1];
	len = strlen(u);
	max = u[0];

	tmp = (len ^ 0x3b) & 0x3f;
	printf("%c", d[tmp]);
	for (i = 0; i < len; i++)
	{
		sum += u[i];
		prod *= u[i];
		sq += u[i] * u[i];
		if (u[i] > max)
			max = u[i];
	}
	printf("%c", d[(sum ^ 0x4f) & 0x3f]);
	printf("%c", d[(prod ^ 0x55) & 0x3f]);
	srand(max ^ 0xe);
	tmp = rand();
	printf("%c", d[tmp & 0x3f]);
	printf("%c", d[(sq ^ 0xef) & 0x3f]);
	for (i = 0; i < u[0]; i++)
		tmp = rand();
	printf("%c", d[(tmp ^ 0xe5) & 0x3f]);

	printf("\n");
	return (0);
}
