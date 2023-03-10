#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str:  stringpointer
 * Return: void
 */

void puts2(char *str)
{
	int n;
	int m = 0;

	while (str[m] !=  '\0')
	{
		m++;
	}

	for (n = 0; n < m; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
