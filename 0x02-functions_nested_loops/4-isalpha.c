#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: character
 * Return: 1 if c is upper or lower 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
			return (0);
}
