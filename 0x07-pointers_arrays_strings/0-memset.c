#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to a memory
 * @n: integer
 * @b: constant byte
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{

		s[m] = b;
	}
	return (s);
}
