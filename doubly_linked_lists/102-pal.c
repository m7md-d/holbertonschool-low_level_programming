#include <stdio.h>

int main(void)
{
	int i, j, x = 999, y = 999, max_pal = 0, a, b;

	for (i = x; i >= 100; i--)
    {
        for (j = y; j >= 100; j--)
        {
            int n = i * j;
            int rev = 0, tmp = n;

            while (tmp > 0)
            {
                rev = rev * 10 + (tmp % 10);
                tmp /= 10;
            }

            if (n == rev && n > max_pal)
            {
                max_pal = n;
                a = i;
                b = j;
            }
        }
    }

    printf("Largest palindrome: %d (from %d × %d)\n", max_pal, a, b);

    return 0;
}
