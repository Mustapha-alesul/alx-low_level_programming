#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL when fail and concate when succeded
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int n, m;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	n = m = 0;

	while (s1[n] != '\0')
	n++;
	while (s2[m] != '\0')
	m++;
	conc = malloc(sizeof(char) * (n + m + 1));

	if (conc == NULL)
	return (NULL);

	n = m = 0;

	while (s1[n] != '\0')
	{
	conc[n] = s1[n];
	n++;
	}
	while (s2[m] != '\0')
	{
	conc[n] = s2[m];
	n++;
	m++;
	}
	conc[n] = '\0';
	return (conc);
}
