/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * The terminating null byte (\0) will be appended to dest.
 * @dest: The destination string (the buffer where the content is appended).
 * @src: The source string from which characters will be taken.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}
	dest[i] = '\0';

	return (dest);
}
