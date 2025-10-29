/**
 * pal_helper - checks recursively if string is palindrome
 * @sss: pointer to string
 * @j: starting index
 * @e: ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int pal_helper(char *sss, int j, int e);

/**
 * pal_end - returns the last index of string
 * @ss: pointer to string
 * @i: current index
 *
 * Return: index of last character (not '\0')
 */
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

int pal_end(char *ss, int i)
{
	if (ss[i] != '\0')
	{
		return(pal_end(ss, ++i));
	}
	return (--i);
}

int pal_helper(char *sss, int j, int e)
{
	if (sss[j] == sss[e] && j < e)
	{
		return(pal_helper(sss, ++j, --e));
	}
	else if (j >= e)
	{
		return (1);
	}
	return (0);
}
