/**
 * _strspn - Gets the length of a prefix substring.
 * Calculates the length (number of bytes) of the initial segment of s
 * which consists entirely of characters from accept.
 * @s: The pointer to the string to be searched.
 * @accept: The pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s that match
 * any character in accept (unsigned int).
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int sum = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				sum++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			return (sum);
		}
		j = 0;
		i++;
	}
	return (sum);
}
