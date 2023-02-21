#include"main.h"

/**
 * print_alphabet_x10 - print 10 times lower case
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alph = 'a';

		while (alph <= 'z')
		{
		_putchar(alph);
		alph++;
		}
	i++;
	_putchar('\n');
	}
}
