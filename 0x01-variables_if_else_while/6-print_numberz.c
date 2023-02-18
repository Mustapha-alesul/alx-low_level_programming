#include <stdio.h>
/**
 * main - a program that prints all single
 * digit numbers of base 10 starting from 0
 * Return: 0 value
 */

int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
	putchar(m);
	}
	putchar('\n');

	return (0);
}
