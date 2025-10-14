#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alpha = 'a';
int i = 0;

while (i != 52)
{
putchar(alpha);
alpha++;
i++;
if (i == 26)
{
alpha = alpha - 58;
}
}
putchar('\n');
return (0);
}
