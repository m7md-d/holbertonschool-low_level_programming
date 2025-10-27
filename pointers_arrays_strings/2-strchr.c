/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * The terminating null byte (\0) is considered part of the string.
 * @s: The pointer to the string to be searched.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0, found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = i;
			break;
		}
		i++;
	}
	if (found)
	{
		return (&s[found]);
	}
	return (NULL);
}
