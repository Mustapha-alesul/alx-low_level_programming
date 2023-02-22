#include <stdio.h>

/**
 * main - The sum of these multiples is 23. Write a program that computes
 * and prints the sum of all the multiples of 3 or 5 below 1024
 * Return:  0 value
 */

int main(void)
{
	int m, n = 0;

	for (; m < 1024; m++)
	{
		if ((m % 3 == 0) || (m % 5 == 0))
		{
			n += m;
		}
	}
	printf("%d\n", n);
	return (0);
}
