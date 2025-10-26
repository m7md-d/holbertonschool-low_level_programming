/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * ROT13 is a simple letter substitution cipher that replaces a letter
 * with the 13th letter after it in the alphabet.
 * @s: The string to be encoded (modified in place).
 *
 * Return: A pointer to the encoded string (s).
 */
char *rot13(char *s)
{
	int i = 0, plus = 13;

	while (s[i] != '\0')
	{
		while (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && plus > 0)
		{
			s[i]++;
			plus--;
			if ((s[i] > 'Z' && s[i] < 'a') || (s[i] > 'z'))
			{
				s[i] -= 26;
			}
		}
		plus = 13;
		i++;
	}
	return (s);
}
