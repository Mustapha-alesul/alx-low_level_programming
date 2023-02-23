#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100
 * Return: 0 value
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0)
	{
	printf("Fizz ");
	}
	if (i % 5 == 0)
	{
	printf("Buzz ");
	}
	if ((i % 3 == 0) && (i % 5 == 0))
	{
	printf("FizzBuzz ");
	}
	printf("%d ", i);
	}
	printf("\n");
	return (0);
}
