#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @o: input
 * Return: o value
 */

char *leet(char *o)
{
	int m;
	int n;

	char st_1[] = "aAeEoOtTlL";
	char st_2[] = "4433007711";

	for (m = 0; o[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (o[m] == st_1[n])
			{
				o[m] = st_2[n];
			}
		}
	}
	return (o);
}
