int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * This function serves as the entry point and initial call to the helper.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n.
 * Returns -1 if n does not have a natural square root or if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Helper function to find the natural square root of a number.
 * This function recursively checks possible roots.
 * @n: The number for which to find the square root.
 * @guess: The current number being tested as the root.
 *
 * Return: The natural square root of n.
 * Returns -1 if no natural square root is found (when guess*guess > n).
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (sqrt_helper(n, guess + 1));
}
