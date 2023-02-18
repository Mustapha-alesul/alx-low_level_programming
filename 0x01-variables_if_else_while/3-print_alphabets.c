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
	char alp;

for (alp = 'a'; alp = 'z'; alp++)
{
putchar(alp);
}
for (alp = 'A'; alp = 'Z'; alp++)
{
putchar(alp);
}
putchar('\n');
return (0);
}
