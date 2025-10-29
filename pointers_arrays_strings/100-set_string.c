/**
 * set_string - Sets the value of a pointer to a char to another char.
 * Essentially, it changes where the pointer 's' is pointing to,
 * making it point to the same location as 'to'.
 * @s: The double pointer (address of a char pointer) to be modified.
 * @to: The char pointer (string) whose address will be assigned to *s.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
