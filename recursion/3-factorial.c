/**
 * factorial - Calculates the factorial of a given number using recursion.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n.
 * Returns -1 if n is negative (error case).
 * Returns 1 if n is 0.
 */
int factorial(int n)
{
	int i = n - 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n < 2)
	{
		return (1);
	}
	return (n * factorial(i));
}
