#include "main.h"

/**
 * get_bit - a functions that returns the value of a bit at a given index
 * @n:integer number
 * @index: the index, starting from 0
 * Return: will return index value or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int MASK = 1UL << index;

	const unsigned long int BITS_PER_LONG = sizeof(unsigned long int) * 8;
	if (index >= BITS_PER_LONG) {
	{
		return (-1);
	}
	return ((n & MASK) ? 1 : 0);
}
