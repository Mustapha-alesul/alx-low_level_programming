#include <stdio.h>
/**
 * main - program a program that finds
 * and prints the sum of the even-valued terms
 * Return: returns to 0
 */

int main(void)
{

	int m = 0;
	long n = 1, o = 2, p = o;

	while (o + n < 50)
	{
	o +=  n;
	if (o % 2 == 0)
	p += o;
	n = o - n;
	++m;
	}
	printf("%ld\n", p);
	return (0);
}

