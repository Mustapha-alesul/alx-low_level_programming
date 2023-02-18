#include <stdio.h>
/**
 * main - a program that prints all possible
 * different combinations of two digits
 * Return: 0 value
 */

int main(void)
{
	int m, n;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			if (m != n)
			{
				putchar(m);
				putchar(n);
				if (m == '8' && n == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
