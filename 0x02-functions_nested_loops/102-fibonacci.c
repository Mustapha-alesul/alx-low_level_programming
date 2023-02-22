#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * Return: 0 value
 */

int main(void)
{
	int m = 0;
	long n = 1, o = 2;

	while (m < 50)
	{
	if (m == 0)
	printf("%ld", n);
	else if (m == 1)
	printf(", %ld", o);
	else
	{
	o +=  n;
	n = o - n;
	printf(", %ld", o);
	}
	++m;
	}
	printf("\n");
	return (0);
}

