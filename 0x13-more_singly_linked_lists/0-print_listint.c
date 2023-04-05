#include <stdio.h>
#include "lists.h"

/**
 * print_listint -a function that prints all the elements of a listint_t lis
 * @h: list to print
 * Return: return nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t e = 0;

	while (h)
	{
		printf("%d\n", h->n);
		e++;
		h = h->next;
	}
	return (e);
}
