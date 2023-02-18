#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -a program that prints the alphabet in lowercase
 * expect letter q and e
 * Return: 0 value
 */
int main(void)
{
	char m, q, e;

	q = 'q';
	e = 'e';

	for (m = 'a'; m <= 'z'; m++)
	{
	if (m != q && m != e)
	{
	putchar(m);
	}
	}
	putchar('\n');
	return (0);
}
