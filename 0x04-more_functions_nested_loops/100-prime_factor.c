#include <stdio.h>
#include <math.h>

/**
 * main - a program that finds and prints
 * the largest prime factor of the number
 * Return: will return 0 value
 */

int main(void)
{
	long m, n;
	long num = 612852475143;
	double square = sqrt(num);

	for (m = 1; m <= square; m++)
	{
		if (num % m == 0)
		{
			n = num / m;
		}
	}
	printf("%ld\n", n);
	return (0);
}
