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
	int k, e;

	for (k = 0; k <= 98; k++)
	{
		for (e = k + 1; e <= 99; e++)
		{
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			putchar(' ');
			putchar((e / 10) + '0');
			putchar((e % 10) + '0');
			if (k == 98 && e == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
