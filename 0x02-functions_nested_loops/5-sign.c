#include "main.h"

/**
 * print_sign - print signs
 * @n: characterer
 * Return:1 for positive 0 for zero -1 for negatives
 */

int print_sign(int n)
{
	if (n >= 49 && n <= 57)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 48)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
