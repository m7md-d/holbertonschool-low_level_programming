/**
 * _strcat - Concatenates (appends) the string pointed to by src
 * to the end of the string pointed to by dest.
 * @dest: The destination string (the buffer where the content is appended).
 * @src: The source string to be appended.
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
