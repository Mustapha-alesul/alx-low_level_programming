#include "main.h"
/**
 * _abs - program to execute absolute value of a intiger
 * @m: character to be executed
 * Return: return any absolute value of number or m
 */

int _abs(int m)
{


	if (m < 0)
	{
		int absolute;

		absolute = m * -1;
		return (absolute);
	}
	return (m);
}
