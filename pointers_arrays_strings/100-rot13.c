/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * ROT13 is a simple letter substitution cipher that replaces a letter
 * with the 13th letter after it in the alphabet.
 * @s: The string to be encoded (modified in place).
 *
 * Return: A pointer to the encoded string (s).
 */
char *rot13(char *s)
{
int i = 0, p = 13;

while (s[i] != '\0')
{
while (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && p > 0)
{
s[i]++;
p--;
if ((s[i] > 'Z' && s[i] < 'a') || (s[i] > 'z'))
{
s[i] -= 26;
}
}
p = 13;
i++;
}
return (s);
}
