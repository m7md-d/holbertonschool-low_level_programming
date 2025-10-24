/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to modify.
 *
 * Return: The modified string.
 */
char *cap_string(char *s)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i = 0, tmp = 0, cap = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (cap)
			{
				s[i] -= 32;
				cap = 0;
			}
		}
		else
		{
			while (sep[tmp] != '\0')
			{
				if (s[i] == sep[tmp])
				{
					cap = 1;
				}
				tmp++;
			}
			tmp = 0;

			if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
			{
				cap = 0;
			}
		}
		i++;
	}
	return (s);
}
