/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string (char array).
 *
 * Description: Iterates through the string until it finds the 
 * null-terminator ('\0') and counts the characters.
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
