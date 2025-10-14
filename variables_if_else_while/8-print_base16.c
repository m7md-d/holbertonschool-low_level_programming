#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char hex = '0';
int i = 0;

while (i != 16)
{
putchar(hex);
hex++;
i++;
if (i == 10)
{
hex = 'a';
}
}
putchar('\n');
return (0);
}
