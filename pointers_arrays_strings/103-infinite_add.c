#include <stdio.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, size_n1 = 0, size_n2 = 0, carry = 0, n1_, n2_;

	for (i = 0; n1[i] != '\0'; i++)
	{
		size_n1++;
	}
	for (i = 0; n2[i] != '\0'; i++)
	{
		size_n2++;
	}
	n1_ = size_n1 - 1;
	n2_ = size_n2 - 1;
	for (i = 0; i <= size_n1 && i <= size_n2; i++)
	{
		j = ((n1[n1_] - '0') + (n2[n2_] - '0')) + carry;
		carry = 0;
		if (j > 9)
		{
			carry = 1;
			j -= 10;
		}
		r[size_r - i - 1] = j + '0';
		n1_--;
		n2_--;
	}
	r[i] = carry + '0';
	if (size_n1 > size_n2)
	{
		for (; i <= size_n1; i++)
		{
			r[i] = n1[n1_] - '0';
		}
	}
	else if (size_n2 > size_n1)
	{
		for (; i <= size_n2; i++)
		{
			r[i] = n2[n2_] - '0';
		}
	}
	for (i = 0; r[i] != 0; i++)
	
	if (i >= size_r)
	{
		return (0);
	}
	printf("the i val:%d\n", i);
	return (r);
}
