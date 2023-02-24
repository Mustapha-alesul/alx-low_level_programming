#include main.h
/**
 * positive_or_negative - checks positive,negative
 * @i: character to be checked
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("positive");
	}
	else if ( i < 0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}
}
