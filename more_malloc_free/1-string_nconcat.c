#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings by allocating new memory.
 * It appends up to n bytes of the string s2 to the string s1.
 * @s1: The first string (will be placed first in the new buffer).
 * @s2: The second string (from which up to n bytes will be appended).
 * @n: The maximum number of bytes from s2 to use.
 *
 * Return: A pointer to the newly allocated concatenated string,
 * or 0 (NULL) on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, n2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

	for (n2 = 0; s2[n2] != '\0'; n2++)

	if (n > n2)
		n = n2;

	p = malloc(sizeof(char) * (i + n + 1));

	if (p == NULL)
		exit(98);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	j = 0;
	while (j < n && s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';

	return (p);
}
