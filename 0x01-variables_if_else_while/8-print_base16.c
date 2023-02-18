#include <stdio.h>
/**
 * main - a program that prints all the numbers
 * of base 16 in lowercase
 * Return: 0 value
 */

int main(void)
{
	int m;
	char let;

	for (m = '0'; m <= '9'; m++)
	{
	putchar(m);
	}
	for (let = 'a'; let <= 'f'; let++)
	{
	putchar(let);
	}
	putchar('\n');

	return (0);
}
