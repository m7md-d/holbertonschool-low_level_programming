char *_strchr(char *s, char c)
{
	int i = 0, found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = i - 1;
		}
		i++;
	}
	if (found)
	{
		return (&s[found]);
	}
	return ("");
}
