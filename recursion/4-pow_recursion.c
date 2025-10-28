/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * The function uses recursion.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x^y.
 * Returns -1 if y is negative (error case).
 * Returns 1 if y is 0.
 */
int _pow_recursion(int x, int y)
{
	int rem;

	if (y > 0)
	{
		rem = y - 1;
		return (x * _pow_recursion(x, rem));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
