/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * The modification is done in place.
 * @s: The string to be modified (pointer to the first character).
 *
 * Return: A pointer to the modified string (s).
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
