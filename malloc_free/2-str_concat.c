#include <stdlib.h>
/**
 * str_concat - Concatenates two strings by allocating new memory.
 * The returned pointer should be freed by the caller.
 * @s1: The first string (will be placed first in the new buffer).
 * @s2: The second string (will be appended to the first).
 *
 * Return: A pointer to the newly allocated concatenated string,
 * or 0 (NULL) on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, sum = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	sum += i;
	for (i = 0; s2[i] != '\0'; i++)
	{
	}
	sum += i + 1;
	i = 0;
	j = 0;
	p = malloc(sizeof(char) * sum);
	if (p == NULL)
	{
		return (0);
	}
	while (s1[i] != '\0')
	{
		p[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		p[j] = s2[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
