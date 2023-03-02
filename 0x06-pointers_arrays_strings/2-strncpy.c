#include "main.h"

/**
 * _strncpy -  function that copies a string
 * @dest : string
 * @src: string
 * @n: number
 * Return: dest value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
