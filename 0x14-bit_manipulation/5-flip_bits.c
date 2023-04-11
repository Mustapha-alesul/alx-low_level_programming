#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 *that would need to flip to get from one number to another
 * @n: first integer number 
 * @m: second integer number
 * Return: will return to the flipped bit value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m;
	unsigned long int k = 0;

	while (j > 0)
	{
		if (j & 1)
		{
		k++;
		}
		j >>= 1;
	}
	return (k);
}
