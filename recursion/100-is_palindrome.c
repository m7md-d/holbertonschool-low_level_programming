int pal_helper(char *sss, int j, int e);

int pal_end(char *ss, int i);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: pointer to string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i;

	i = pal_end(s, 0);

	return (pal_helper(s, 0, i));
}

/**
 * pal_end - finds the last valid character index
 * @ss: pointer to string
 * @i: index counter
 *
 * Return: last valid index before '\0'
 */
int pal_end(char *ss, int i)
{
	if (ss[i] != '\0')
	{
		return (pal_end(ss, ++i));
	}
	return (--i);
}

/**
 * pal_helper - recursive function to check palindrome
 * @sss: pointer to string
 * @j: starting index
 * @e: ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int pal_helper(char *sss, int j, int e)
{
	if (sss[j] == sss[e] && j < e)
	{
		return (pal_helper(sss, ++j, --e));
	}
	else if (j >= e)
	{
		return (1);
	}
	return (0);
}
