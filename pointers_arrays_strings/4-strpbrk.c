/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * Locates the first occurrence in the string s of any of the bytes
 * in the string accept.
 * @s: The pointer to the string to be searched.
 * @accept: The pointer to the string containing the characters to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or 0 (NULL) if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
