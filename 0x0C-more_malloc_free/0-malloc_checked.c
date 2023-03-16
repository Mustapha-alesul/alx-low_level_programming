#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: specify the number of bytes to be allocated
 * Return: to pointer and 98 if fails
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	c = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
