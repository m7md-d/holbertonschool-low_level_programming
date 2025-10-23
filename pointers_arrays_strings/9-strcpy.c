/**
 * _strcpy - Copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
