#include <stdio.h>
/**
 * main - a program that prints the lowercase
 * alphabet in revers
 * Return: 0 value
 */

int main(void)
{
	int m;

	for (m = 'z'; m >= 'a'; m--)
	{
	putchar(m);
	}
	putchar('\n');

	return (0);
}
