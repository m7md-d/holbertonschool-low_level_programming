int prime_helper(int n, int guess);

/**
 * is_prime_number - Checks if an integer is a prime number using recursion.
 * This function serves as the entry point and handles edge cases.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_helper(n, n - 1));
}

/**
 * prime_helper - Helper function to check for primality recursively.
 * It checks if n is divisible by guess, starting from n - 1 down to 2.
 * @n: The original number to check.
 * @guess: The current divisor being tested.
 *
 * Return: 1 if n is only divisible by 1 and itself (prime), 0 otherwise.
 */
int prime_helper(int n, int guess)
{
	if (guess < 2)
	{
		return (1);
	}
	if (n % guess == 0)
	{
		return (0);
	}
	return (prime_helper(n, guess - 1));
}
