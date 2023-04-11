#include "main.h"

/**
 * print_binary - a funtion that prints the binary
 * representation of a number
 * @n: integer number
 * Return: will return void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar ((n & 1) ? '1' : '0');
}
