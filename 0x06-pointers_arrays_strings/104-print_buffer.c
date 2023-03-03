#include "main.h"
#include <stdio.h>

/**
 * print_buffer -  function that prints a buffer
 * @b: buffer pointer
 * @size: size integer
 * Return: void
 */


void print_buffer(char *b, int size)
{
	int m;
	int n;
	int o;
	int p;

	p = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		m = size - p < 10 ? size - p : 10;
		printf("%08x: ", p);
		for (o = 0; o < 10; o++)
		{
			if (o < m)
				printf("%02x", *(b + p + o));
			else
				printf("  ");
			if (o % 2)
			{
				printf(" ");
			}
		}
		for (o = 0; o < m; o++)
		{
			n = *(b + p + o);

			if (n < 32 || n > 132)
			{
				n = '.';
			}
			printf("%c", n);
		}
		printf("\n");
		p += 10;
	}
}
