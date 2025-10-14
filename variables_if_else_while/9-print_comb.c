#include <stdio.h>

/**
 * main - print all single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;
while (i != 10)
{
putchar(i + '0');
i++;
if (i != 10)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
