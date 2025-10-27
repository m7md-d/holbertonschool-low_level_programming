/**
 * _strstr - Locates a substring.
 * Finds the first occurrence of the entire substring needle in the string haystack.
 * @haystack: The pointer to the string to be searched.
 * @needle: The pointer to the substring to be located.
 *
 * Return: A pointer to the beginning of the located substring,
 * or 0 (NULL) if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			j++;
			if (needle[j] == '\0')
			{
				return (haystack + 1 + i - j);
			}
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (0);
}
