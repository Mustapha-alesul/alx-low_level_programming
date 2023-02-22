#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers
 * from n to 98, followed by a new line.
 * @m: character to be executed
 * Return: m value
 */

void print_to_98(int m)
{
	if (m <= 98)
	{
	for (; m <= 98; m++)
	{
	if (m == 98)
	{
	printf("%d", m);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", m);
	}
	}
	}
	else
	{
	for (; m >= 98; m--)
	{
	if (m == 98)
	{
	printf("%d", m);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", m);
	}
	}
	}
}

