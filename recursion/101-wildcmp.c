/**
 * wildcmp - Compares two strings, allowing the wildcard character '*'.
 * The '*' character matches any sequence of characters (including an
 * empty sequence).
 * @s1: The first string to compare (can contain the wildcard).
 * @s2: The second string to compare (can contain the wildcard).
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	return (0);
}
