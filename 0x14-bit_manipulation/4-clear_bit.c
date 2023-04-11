#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: integer number
 * @index:  is the index starting from 0.
 * Return: will return 1 if it worked, and -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	const unsigned long int BITS_PER_LONG = sizeof(unsigned long int) * 8;

	if (index >= BITS_PER_LONG)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
