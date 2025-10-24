/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: The encoded string.
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char abc[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	while (s[i] != '\0')
	{
		while (abc[j] != '\0')
		{
			if (s[i] == abc[j])
			{
				s[i] = num[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
