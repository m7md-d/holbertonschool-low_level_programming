/**
 * _atoi - Converts a string to an integer.
 * The function takes the first set of digits in the string,
 * accounting for preceding '+' and '-' signs.
 * @s: The string to be converted.
 *
 * Return: The integer value of the first valid number found in the string.
 * Returns 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int i = 0, neg = 0;
	long num = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (s[i] - '0');
			i++;

			while (s[i] >= '0' && s[i] <= '9')
			{
				num *= 10;
				num += (s[i] - '0');
				i++;
			}

			if (neg % 2 != 0)
			{
				num = -num;
			}
			return ((int)num);
		}
		else if (s[i] == '-')
		{
			neg++;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (0);
}
