#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: stringpointer
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	int m = 0;
	char reverce;

	while (s[m++])
		length++;

	for (m = length - 1; m >= length / 2; m--)
	{
		reverce = s[m];
		s[m] = s[length - m - 1];
		s[length - m - 1] = reverce;
	}
}
