#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to string to be copied
 * Return: NULL if str is 0 and new allocation if successful
 */

char *_strdup(char *str)
{
	int leng;
	char *cp;

	if (str == 0)
	{
		return (NULL);
	}

	leng = strlen(str);
	cp = malloc((leng + 1) * sizeof(char));

	if (cp == 0)
	{
		return (NULL);
	}
	strcpy(cp, str);
	return (cp);
}
