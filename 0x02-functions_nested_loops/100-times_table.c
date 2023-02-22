#include "main.h"

/**
 * print_times_table - a function that prints
 * the n times table, starting with 0.
 * @m: integer input
 */

void print_times_table(int m)
{
	int n, o, p;

	if (m >= 0 && m <= 15)
	{
	for (n = 0; n <= m; n++)
	{
	_putchar('0');
	for (o = 1; o <= m; o++)
	{
	_putchar(',');
	_putchar(' ');
	p = n * o;
	if (p <= 99)
	_putchar(' ');
	if (p <= 9)
	_putchar(' ');
	if (p >= 100)
	{
	_putchar((p / 100) + '0');
	_putchar((p / 10) % 10 + '0');
	}
	else if (p <= 99 && p >= 10)
	{
	_putchar((p / 10) + '0');
	}
	_putchar((p % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
