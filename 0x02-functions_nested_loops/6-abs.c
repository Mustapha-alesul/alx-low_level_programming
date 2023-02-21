#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @m: character
 * Return: interger
 */

int _abs(int m)
{
	int abs = m * -1;

	if (m < 0)
	{
	_putchar(abs);
	return (abs);
	}
	else
	{
	_putchar(m);
	return (m);
	}
}
