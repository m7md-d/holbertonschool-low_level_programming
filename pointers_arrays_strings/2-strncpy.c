/**
 * _strncpy - Copies at most n bytes from a source string to a
 * destination buffer. If the length of src is less than n, the remainder
 * of dest is padded with null bytes.
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n != 0)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			while (n != 0)
			{
				dest[i++] = '\0';
				n--;
			}
			return (dest);
		}
		i++;
		n--;
	}
	return (dest);
}
