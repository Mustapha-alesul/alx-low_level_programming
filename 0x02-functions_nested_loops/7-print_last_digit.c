#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @m: character
 * Return: will return last_digit value
 */

int print_last_digit(int m)
{
	int last_dig;

	last_dig = m % 10;
	if (last_dig < 0)
	{
		last_dig = last_dig * -1;
	}
	_putchar(last_dig + '0');
	return (last_dig);
}
