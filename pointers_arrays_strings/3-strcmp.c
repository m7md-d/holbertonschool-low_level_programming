/**
 * _strcmp - Compares two strings character by character.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Description: Compares strings s1 and s2 until an unmatching character
 * is found or the null terminator ('\0') is reached in both.
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * found, respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((s1[i] - s2[i]) != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
