#include <stdio.h>
/**
 * main - a program that prints all possible
 * combinations of single-digit numbers
 * Return: 0 value
 */

int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
	putchar(m);
	if (m != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
