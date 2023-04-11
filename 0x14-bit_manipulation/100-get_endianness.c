#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: will return 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int m = 0x12345678;
	char *n = (char *) &m;

	if (*n == 0x78)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
