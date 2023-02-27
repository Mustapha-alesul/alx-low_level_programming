#include "main.h"
#include <stdio.h>

/**
 * print_array -  a function that prints n elements of an array of integers
 * @a: integer pointer
 * @n: integer
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
