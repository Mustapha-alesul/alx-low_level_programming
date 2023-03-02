#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @h: pointer
 * Return: h value
 */

char *rot13(char *h)
{
	int m;
	int n;
	char tp_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYAabcdefghijklmnopqrstuvwxyz";
	char tp_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; h[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (h[m] == tp_1[n])
			{
			h[m] = tp_2[n];
				break;
			}
		}

	}
	return (h);
}
