#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int idx_n1 = 0;
	int idx_n2 = 0;
	int idx_r = size_r - 1;

	r[idx_r] = '\0';

	while (idx_n1 >= 0 || idx_n2 >= 0 || carry)
	{
		int sum = carry;

		if (idx_n1 >= 0)
		{
			sum += n1[idx_n1] - '0';
			idx_n1--;
		}

		if (idx_n2 >= 0)
		{
			sum += n2[idx_n2] - '0';
			idx_n2--;
		}

		carry = sum / 10;
		r[idx_r] = (sum % 10) + '0';
		idx_r--;
	}

	if (idx_r < 0)
	{
		return (0);
	}

	return (&r[idx_r + 1]);
}
