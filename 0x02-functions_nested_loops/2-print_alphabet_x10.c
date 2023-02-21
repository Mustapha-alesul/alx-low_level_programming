#include"main.h"

/**
 * print_alphabet_x10 - print 10 times lower case
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char alph = 'a';
	int i = 0;

	while (i <= 10)
	{
		while (alph <= 'z')
		{
		_putchar(alph);
		alph++;
		}
	_putchar('\n');
	i++;
	}
}
