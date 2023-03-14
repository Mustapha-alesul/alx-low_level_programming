#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of an array
 * @c: character for initialization
 * Return: NULL id soze is equal to 0 or fails,
 * and to the pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int s;
	char *arry;

	if (size == 0)
	{
		return (NULL);
	}
	arry = malloc(size * sizeof(char));
	if (arry == 0)
	{
		return (NULL);
	}
	for (s = 0; s < size; s++)
	{
		arry[s] = c;
	}
	return (arry);
}
