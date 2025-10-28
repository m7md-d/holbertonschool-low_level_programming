/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * This function serves as the entry point and initial call to the helper.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n.
 * Returns -1 if n does not have a natural square root or if n is negative.
 */
int sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}

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
