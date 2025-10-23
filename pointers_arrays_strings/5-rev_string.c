/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed (pointer to the first character).
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;
	

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (i > j)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;

		i--;
		j++;
	}
}
