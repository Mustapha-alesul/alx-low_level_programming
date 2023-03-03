#include "main.h"

/**
 * cap_string -  function that capitalizes all words of a string
 * @h: pointer
 * Return: h value
 */

char *cap_string(char *h)
{
	int m = 0;

	while (h[m])
	{
		while (!(h[m] >= 'a' && h[m] <= 'z'))
			m++;
		if (h[m - 1] == ' ' ||
			h[m - 1] == '\t' ||
			h[m - 1] == '\n' ||
			h[m - 1] == ',' ||
			h[m - 1] == ';' ||
			h[m - 1] == '.' ||
			h[m - 1] == '!' ||
			h[m - 1] == '?' ||
			h[m - 1] == '"' ||
			h[m - 1] == '(' ||
			h[m - 1] == ')' ||
			h[m - 1] == '{' ||
			h[m - 1] == '}' ||
			m == 0)
		h[m] -= 32;
		m++;
	}
return (h);
}
