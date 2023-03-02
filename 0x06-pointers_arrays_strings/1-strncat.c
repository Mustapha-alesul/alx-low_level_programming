#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int k;

	m = 0;
	k = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (k < n && src[k] != '\0')
	{
		dest[m] = src[k];
		m++;
		k++;
	}
	dest[m] = '\0';
	return (dest);
}
