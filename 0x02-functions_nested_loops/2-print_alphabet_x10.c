#include"main.h"

/**
 * print_alphabet_x10(void) - print 10 times lower case
 * Return: will return void
 */

void print_alphabet_x10(void)
{
	char alph = 'a';
	int i = 0;

	while (i < 10)
	{
		while (alph <= 'z')
		{
		_putchar(alph);
		alph++;
		}
	_putchar('\n');
	}
}
