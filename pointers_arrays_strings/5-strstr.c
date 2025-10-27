/**
 * _strstr - Locates a substring.
 * Finds the first occurrence of the entire string needle
 * (excluding the terminating null byte) within the string haystack.
 * @haystack: The pointer to the string to be searched.
 * @needle: The pointer to the substring to be located.
 *
 * Return: A pointer to the beginning of the located substring,
 * or 0 (NULL) if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	if (needle[j] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			j++;
		}
		else
		{
			i -= j;
			j = 0;
		}
		if (needle[j] == '\0')
		{
			return (haystack + 1 + i - j);
		}
		i++;
	}
	return (0);
}
