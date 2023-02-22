#include <stdio.h>

/**
 * main -  a program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: returns to 0
 */

int main(void)
{int m, n;
	unsigned long o = 1;
	unsigned long p = 1;
	unsigned long q = 0;
	long o_head, o_tail, q_head, q_tail, p_head, p_tail;

	printf("1");

	for (m = 2; m < 93; m++)
	{
		q = o + p;
		o = p;
		p = q;
		printf(", %lu", q);
	}

	o_head = o / 1000000000;
	o_tail = o % 1000000000;
	p_head = p / 1000000000;
	p_tail = p % 1000000000;

	for (; m < 99; m++)
	{
		n = (o_tail + p_tail) / 1000000000;
		q_tail = (o_tail + p_tail) - (1000000000 * n);
		q_head = (o_head + p_head) + n;

		printf(", %lu%lu", q_head, q_tail);

		o_head = p_head;
		o_tail = p_tail;
		p_head = q_head;
		p_tail = q_tail;
	}


	printf("\n");

	return (0);
}

