#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -a program that prints all possible
 * combinations of two two-digit numbers.
 * Return: 0 value
 */
int main(void)
{
	int m, n;

	for (m = 0; m <= 98; m++)
	{
	for (n = m + 1; n <= 99; n++)
	{
	putchar((m / 10) + '0');
	putchar((m % 10) + '0');
	putchar(' ');
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
	if (n == 99 && m == 98)
	{
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
