#include "main.h"

/**
 * _atoi - function that converts string to an integer
 * @s:character  pointer
 * Return: integer
 */

int _atoi(char *s)
{
	int p = 0;
	unsigned int n = 0;
	int m = 1;
	int o = 0;

	while  (s[p])
	{
		if (s[p] == 45)
		{
			m *= -1;
		}
		while (s[p] >= 48 && s[p] <= 57)
		{
			o = 1;
			n = (n * 10) + (s[p] - '0');
			p++;
		}
		if (o == 1)
		{
			break;
		}
		p++;
	}
	n *= m;
	return (n);
}
