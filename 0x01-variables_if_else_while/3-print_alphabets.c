#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main -a program that prints the alphabet in lowercase
 * and then in uppercase
 * Return: 0 value
 */
int main(void)
{
	char m;

for (m= 'a';m <= 'z';m++)
{
putchar(m);
}
for (m = 'A';m <= 'Z';m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
