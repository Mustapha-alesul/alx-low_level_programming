#include  "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * @m: character
 */

void print_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		_putchar(m + '0');
	}
	_putchar('\n');
}
