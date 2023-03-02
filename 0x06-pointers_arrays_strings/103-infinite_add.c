#include "main.h"
#include <string.h>

/**
 * infinite_add - function that adds two numbers
 * @n1: number
 * @n2: number
 * @r: buffer
 * @size_r: buffer size
 * Return: 0 and r value
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_1 = strlen(n1);
	int len_2 = strlen(n2);
	int carry = 0;
	int sum = 0;
	int m = len_1 - 1;
	int n = len_2 - 1;
	int o = 0;

	while (m >= 0 || n >= 0 || carry)
	{
		int digit_1 = m >= 0 ? n1[m] - '0' : 0;
		int digit_2 = n >= 0 ? n2[n] - '0' : 0;

		sum = digit_1 + digit_2 + carry;
		carry = sum / 10;
		sum %= 10;
		if (o >= size_r - 1)
		{
			return (0);
		}
		r[o++] = sum + '0';
		m--;
		n--;
	}
	r[o] = '\0';
	for (m = 0, n = o - 1; m < n; m++, n--)
	{
		char temp = r[m];

		r[m] = r[n];
		r[n] = temp;
	}
	return (r);
}
