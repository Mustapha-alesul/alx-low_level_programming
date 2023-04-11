#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int.
 * @b: pointer to string of 0 and 1 characters
 * Return: function will return converted number or 0 if is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int Converted_number = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		Converted_number = (*b - '0') | (Converted_number << 1);
		b++;
	}
		return (Converted_number);
}
