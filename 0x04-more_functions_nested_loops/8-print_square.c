#include "main.h"

/**
 * print_square - a function that prints a squarie
 * @size: character
 * Return: size value
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
	_putchar('\n');
	}
}
